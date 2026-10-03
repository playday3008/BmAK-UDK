// In-game checks for the SDK, one per issue fixed in the generator. Load the ASI into the
// game, reach the main menu or a save, then read BmAK-UDK.Test.log next to the executable.
// A crash leaves the log ending at the "RUN" line of the check that crashed.
//
// The checks call script functions from this thread rather than the game thread. They only
// use pure Core.Object natives and read reflection data, so nothing they touch is mutated
// concurrently as long as no level is loading while they run.
#include <cstdint>
#include <cstring>

#include <SdkHeaders.hpp>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <string>
#include <thread>

#include <Windows.h>

namespace
{
	struct Image
	{
		const uint8_t* Base = nullptr;
		size_t Size = 0;
	};

	Image MainImage()
	{
		const auto* base = reinterpret_cast<const uint8_t*>(GetModuleHandleW(nullptr));
		const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(base);
		const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS*>(base + dos->e_lfanew);
		return { base, nt->OptionalHeader.SizeOfImage };
	}

	// The only match of the pattern in the image's executable sections, or nullptr when there
	// is none or more than one.
	const uint8_t* FindUnique(const Image& image, const uint8_t* pattern, const char* mask)
	{
		const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(image.Base);
		const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS*>(image.Base + dos->e_lfanew);
		const IMAGE_SECTION_HEADER* section = IMAGE_FIRST_SECTION(nt);
		const size_t length = std::strlen(mask);
		const uint8_t* found = nullptr;

		for (WORD s = 0; s < nt->FileHeader.NumberOfSections; s++, section++)
		{
			if (!(section->Characteristics & IMAGE_SCN_MEM_EXECUTE))
			{
				continue;
			}

			const uint8_t* begin = image.Base + section->VirtualAddress;
			const size_t size = section->Misc.VirtualSize;

			for (size_t i = 0; i + length <= size; i++)
			{
				size_t j = 0;

				while (j < length && (mask[j] == '?' || begin[i + j] == pattern[j]))
				{
					j++;
				}

				if (j == length)
				{
					if (found)
					{
						return nullptr;
					}

					found = begin + i;
				}
			}
		}

		return found;
	}

	// Target of the RIP-relative operand of the instruction at match + instructionOffset.
	uintptr_t ResolveRelative(const uint8_t* match, size_t instructionOffset, size_t operandOffset, size_t instructionSize)
	{
		const uint8_t* instruction = match + instructionOffset;
		int32_t displacement = 0;
		std::memcpy(&displacement, instruction + operandOffset, sizeof(displacement));
		return reinterpret_cast<uintptr_t>(instruction + instructionSize) + displacement;
	}

	class Log
	{
	public:
		explicit Log(const std::filesystem::path& path) : m_file(path, std::ios::trunc) {}

		void Line(const std::string& text)
		{
			m_file << text << '\n';
			m_file.flush();
		}

		void Run(const char* name)
		{
			Line(std::string("RUN  ") + name);
		}

		void Report(const char* name, bool passed, const std::string& detail)
		{
			m_total++;
			m_passed += passed ? 1 : 0;
			Line(std::string(passed ? "PASS " : "FAIL ") + name + ": " + detail);
		}

		void Finish()
		{
			Line("RESULT: " + std::to_string(m_passed) + "/" + std::to_string(m_total));
		}

	private:
		std::ofstream m_file;
		int m_total = 0;
		int m_passed = 0;
	};

	std::filesystem::path LogPath()
	{
		wchar_t exe[MAX_PATH]{};
		GetModuleFileNameW(nullptr, exe, MAX_PATH);
		return std::filesystem::path(exe).parent_path() / "BmAK-UDK.Test.log";
	}

	bool ResolveGlobals(Log& log)
	{
		const Image image = MainImage();
		const uint8_t* objects = FindUnique(image, GObjects_Pattern, GObjects_Mask);
		const uint8_t* names = FindUnique(image, GNames_Pattern, GNames_Mask);

		if (!objects || !names)
		{
			log.Line(std::string("GObjects pattern ") + (objects ? "found" : "missing or not unique") + ", GNames pattern " + (names ? "found" : "missing or not unique"));
			return false;
		}

		// Operand positions from GOBJECTS_RIP_RELATIVE and GNAMES_RIP_RELATIVE in the generator's
		// Engine/BatmanAK/GameDefines.hpp: "lea rbp, GObjects" and "mov rcx, GNames".
		GObjects = reinterpret_cast<GObjectsArray*>(ResolveRelative(objects, 18, 3, 7));
		GNames = reinterpret_cast<TArray<FNameEntry*>*>(ResolveRelative(names, 9, 3, 7));
		return true;
	}

	bool WaitForWorld()
	{
		const auto deadline = std::chrono::steady_clock::now() + std::chrono::minutes(10);

		while (std::chrono::steady_clock::now() < deadline)
		{
			if (GObjects->size() > 0 && GNames->size() > 0)
			{
				UClass* worldInfoClass = AWorldInfo::StaticClass();

				for (int32_t i = 0; worldInfoClass && i < GObjects->size(); i++)
				{
					UObject* object = GObjects->at(i);

					if (object && object->Class == worldInfoClass && !(object->ObjectFlags & RF_ClassDefaultObject))
					{
						return true;
					}
				}
			}

			std::this_thread::sleep_for(std::chrono::seconds(1));
		}

		return false;
	}

	UFunction* ShouldShowTutorial()
	{
		return UObject::FindObject<UFunction>("Function BmGame.RPlayerController.ShouldShowTutorial");
	}

	// Issue 1: every name read goes through GetDisplayNameEntry, which used to copy 0x40C bytes
	// from an entry allocated only as long as its text. Passing means not crashing.
	void CheckNames(Log& log)
	{
		log.Run("1 name entries by reference");
		size_t named = 0;

		for (int32_t i = 0; i < GObjects->size(); i++)
		{
			UObject* object = GObjects->at(i);

			if (object && !object->GetFullName().empty())
			{
				named++;
			}
		}

		const bool found = UObject::FindClass("Class Engine.WorldInfo") && ShouldShowTutorial();
		log.Report("1 name entries by reference", named > 0 && found, std::to_string(named) + " full names read, lookups " + (found ? "found" : "missing"));
	}

	// Issue 2: bool parameters used to be packed bitfields, so B and ReturnValue were read and
	// written at the wrong offsets. AndAnd/OrOr are skipped: their B is a skip parameter whose
	// native reads a skip offset from the bytecode stream, which ProcessEvent does not provide.
	void CheckBoolParameters(Log& log)
	{
		log.Run("2 bool parameters");
		int wrong = 0;

		for (bool a : { false, true })
		{
			for (bool b : { false, true })
			{
				wrong += (UObject::XorXor_BoolBool(a, b) != (a != b)) ? 1 : 0;
				wrong += (UObject::NotEqual_BoolBool(a, b) != (a != b)) ? 1 : 0;
				wrong += (UObject::EqualEqual_BoolBool(a, b) != (a == b)) ? 1 : 0;
			}
		}

		log.Report("2 bool parameters", wrong == 0, std::to_string(wrong) + " of 12 operator results wrong");

		// Struct parameters, an out struct, then a bool return at 0x38. UE3 returns whether
		// Direction faces along AxisX (inferred from UE3 source, not verified in this game).
		log.Run("2 bool return after structs");
		FVector2D distance{};
		const FVector axisX{ 1.0f, 0.0f, 0.0f };
		const FVector axisY{ 0.0f, 1.0f, 0.0f };
		const FVector axisZ{ 0.0f, 0.0f, 1.0f };
		const bool facing = UObject::GetAngularDistance(FVector{ 1.0f, 0.0f, 0.0f }, axisX, axisY, axisZ, distance);
		const bool behind = UObject::GetAngularDistance(FVector{ -1.0f, 0.0f, 0.0f }, axisX, axisY, axisZ, distance);
		log.Report("2 bool return after structs", facing && !behind, std::string("facing=") + (facing ? "true" : "false") + " behind=" + (behind ? "true" : "false"));
	}

	// Issue 3: FName(const char*) compared raw Name bytes, so pointer-flagged entries never matched.
	void CheckNameLookup(Log& log)
	{
		log.Run("3 name lookup");
		TArray<FNameEntry*>* names = FName::Names();

		const FName getLines("GetLines");
		const bool knownPointerName = getLines.GetDisplayIndex() >= 0 && getLines.ToString() == "GetLines";

		const FName missing("BmAK_UDK_Test_NoSuchName");
		const bool missingName = missing.GetDisplayIndex() == -1 && missing.ToString() == "UnknownName";

		const FName pastEnd(names->size());
		const bool pastEndInvalid = !pastEnd.IsValid() && pastEnd.ToString() == "UnknownName";

		// Every pointer-flagged entry, plus every 64th plain one: each lookup is a linear scan
		// of the whole table, so checking all of them would take hours.
		size_t checked = 0;
		size_t misses = 0;

		for (int32_t i = 0; i < names->size(); i++)
		{
			FNameEntry* entry = names->at(i);

			if (!entry || entry->IsWide())
			{
				continue;
			}

			const bool pointer = (entry->GetFlags() & FNameEntry::NAME_Pointer) != 0;

			if (!pointer && (i % 64) != 0)
			{
				continue;
			}

			const char* text = entry->GetAnsiName();
			const FName found(text);
			checked++;

			// First occurrence wins, so compare the text found rather than the id.
			if (found.GetDisplayIndex() < 0 || std::strcmp(names->at(found.GetDisplayIndex())->GetAnsiName(), text) != 0)
			{
				misses++;
			}
		}

		log.Report("3 name lookup", knownPointerName && missingName && pastEndInvalid && checked > 0 && misses == 0,
		           std::string("GetLines ") + (knownPointerName ? "found" : "NOT found") + ", missing name " + (missingName ? "-1" : "WRONG") + ", id == size " + (pastEndInvalid ? "invalid" : "VALID") + ", " + std::to_string(misses) + " misses of " + std::to_string(checked));
	}

	// Issue 4: the script buffer at UStruct+0x6C is a pointer then two u16 counts.
	void CheckScript(Log& log)
	{
		log.Run("4 script buffer");
		UFunction* tutorial = ShouldShowTutorial();
		const bool exact = tutorial && tutorial->ScriptSize == 298 && tutorial->ScriptCapacity == 298 && tutorial->ScriptData;

		UClass* functionClass = UFunction::StaticClass();
		size_t checked = 0;
		size_t bad = 0;

		for (int32_t i = 0; i < GObjects->size(); i++)
		{
			UObject* object = GObjects->at(i);

			if (!object || object->Class != functionClass)
			{
				continue;
			}

			auto* function = reinterpret_cast<UFunction*>(object);

			if (function->FunctionFlags & FUNC_Native)
			{
				continue;
			}

			checked++;
			bad += (function->ScriptSize > function->ScriptCapacity || (function->ScriptSize > 0 && !function->ScriptData)) ? 1 : 0;
		}

		log.Report("4 script buffer", exact && checked > 0 && bad == 0,
		           std::string("ShouldShowTutorial ") + (tutorial ? std::to_string(tutorial->ScriptSize) + "/" + std::to_string(tutorial->ScriptCapacity) : "missing") + ", " + std::to_string(bad) + " bad of " + std::to_string(checked) + " script functions");
	}

	// Issue 5: UFunction::Func at 0xBC is the native thunk, so it must point into the executable.
	void CheckFunc(Log& log)
	{
		log.Run("5 native Func");
		const Image image = MainImage();
		const auto begin = reinterpret_cast<uintptr_t>(image.Base);
		const uintptr_t end = begin + image.Size;

		UClass* functionClass = UFunction::StaticClass();
		size_t checked = 0;
		size_t bad = 0;

		for (int32_t i = 0; i < GObjects->size(); i++)
		{
			UObject* object = GObjects->at(i);

			if (!object || object->Class != functionClass)
			{
				continue;
			}

			auto* function = reinterpret_cast<UFunction*>(object);

			if (!(function->FunctionFlags & FUNC_Native))
			{
				continue;
			}

			const auto func = reinterpret_cast<uintptr_t>(function->Func);
			checked++;
			bad += (func < begin || func >= end) ? 1 : 0;
		}

		log.Report("5 native Func", checked > 0 && bad == 0, std::to_string(bad) + " outside the image of " + std::to_string(checked) + " native functions");
	}

	DWORD WINAPI Run(LPVOID)
	{
		Log log(LogPath());

		if (!ResolveGlobals(log))
		{
			log.Finish();
			return 0;
		}

		log.Line("Waiting for a WorldInfo");

		if (!WaitForWorld())
		{
			log.Line("No WorldInfo after 10 minutes");
			log.Finish();
			return 0;
		}

		std::this_thread::sleep_for(std::chrono::seconds(10));

		CheckNames(log);
		CheckBoolParameters(log);
		CheckNameLookup(log);
		CheckScript(log);
		CheckFunc(log);
		log.Finish();
		return 0;
	}
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(module);

		if (HANDLE thread = CreateThread(nullptr, 0, Run, nullptr, 0, nullptr))
		{
			CloseHandle(thread);
		}
	}

	return TRUE;
}
