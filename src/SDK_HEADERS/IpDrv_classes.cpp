/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: IpDrv_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#include "IpDrv_classes.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AInternetLink::eventResolveFailed()
{
	static UFunction* uFnResolveFailed = nullptr;

	if (!uFnResolveFailed)
	{
		uFnResolveFailed = UFunction::FindFunction("Function IpDrv.InternetLink.ResolveFailed");
	}

	AInternetLink_eventResolveFailed_Params ResolveFailed_Params;
	memset(&ResolveFailed_Params, 0, sizeof(ResolveFailed_Params));
	if (!uFnResolveFailed)
	{
		return;
	}


	this->ProcessEvent(uFnResolveFailed, &ResolveFailed_Params, nullptr);
}

// Function IpDrv.InternetLink.Resolved
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FIpAddr                 Addr                           (CPF_Parm)

void AInternetLink::eventResolved(const struct FIpAddr& Addr)
{
	static UFunction* uFnResolved = nullptr;

	if (!uFnResolved)
	{
		uFnResolved = UFunction::FindFunction("Function IpDrv.InternetLink.Resolved");
	}

	AInternetLink_eventResolved_Params Resolved_Params;
	memset(&Resolved_Params, 0, sizeof(Resolved_Params));
	if (!uFnResolved)
	{
		return;
	}

	memcpy_s(&Resolved_Params.Addr, sizeof(Resolved_Params.Addr), &Addr, sizeof(Addr));

	this->ProcessEvent(uFnResolved, &Resolved_Params, nullptr);
}

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FIpAddr                 Arg                            (CPF_Parm | CPF_OutParm)

void AInternetLink::GetLocalIP(struct FIpAddr& outArg)
{
	static UFunction* uFnGetLocalIP = nullptr;

	if (!uFnGetLocalIP)
	{
		uFnGetLocalIP = UFunction::FindFunction("Function IpDrv.InternetLink.GetLocalIP");
	}

	AInternetLink_execGetLocalIP_Params GetLocalIP_Params;
	memset(&GetLocalIP_Params, 0, sizeof(GetLocalIP_Params));
	if (!uFnGetLocalIP)
	{
		return;
	}

	memcpy_s(&GetLocalIP_Params.Arg, sizeof(GetLocalIP_Params.Arg), &outArg, sizeof(outArg));

	auto native_GetLocalIP = uFnGetLocalIP->iNative;
	uFnGetLocalIP->iNative = 0;
	this->ProcessEvent(uFnGetLocalIP, &GetLocalIP_Params, nullptr);
	uFnGetLocalIP->iNative = native_GetLocalIP;

	memcpy_s(&outArg, sizeof(outArg), &GetLocalIP_Params.Arg, sizeof(GetLocalIP_Params.Arg));
}

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Str                            (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 Addr                           (CPF_Parm | CPF_OutParm)

bool AInternetLink::StringToIpAddr(const class FString& Str, struct FIpAddr& outAddr)
{
	static UFunction* uFnStringToIpAddr = nullptr;

	if (!uFnStringToIpAddr)
	{
		uFnStringToIpAddr = UFunction::FindFunction("Function IpDrv.InternetLink.StringToIpAddr");
	}

	AInternetLink_execStringToIpAddr_Params StringToIpAddr_Params;
	memset(&StringToIpAddr_Params, 0, sizeof(StringToIpAddr_Params));
	if (!uFnStringToIpAddr)
	{
		return {};
	}

	memcpy_s(&StringToIpAddr_Params.Str, sizeof(StringToIpAddr_Params.Str), &Str, sizeof(Str));
	memcpy_s(&StringToIpAddr_Params.Addr, sizeof(StringToIpAddr_Params.Addr), &outAddr, sizeof(outAddr));

	auto native_StringToIpAddr = uFnStringToIpAddr->iNative;
	uFnStringToIpAddr->iNative = 0;
	this->ProcessEvent(uFnStringToIpAddr, &StringToIpAddr_Params, nullptr);
	uFnStringToIpAddr->iNative = native_StringToIpAddr;

	memcpy_s(&outAddr, sizeof(outAddr), &StringToIpAddr_Params.Addr, sizeof(StringToIpAddr_Params.Addr));

	return StringToIpAddr_Params.ReturnValue;
}

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FIpAddr                 Arg                            (CPF_Parm)

class FString AInternetLink::IpAddrToString(const struct FIpAddr& Arg)
{
	static UFunction* uFnIpAddrToString = nullptr;

	if (!uFnIpAddrToString)
	{
		uFnIpAddrToString = UFunction::FindFunction("Function IpDrv.InternetLink.IpAddrToString");
	}

	AInternetLink_execIpAddrToString_Params IpAddrToString_Params;
	memset(&IpAddrToString_Params, 0, sizeof(IpAddrToString_Params));
	if (!uFnIpAddrToString)
	{
		return {};
	}

	memcpy_s(&IpAddrToString_Params.Arg, sizeof(IpAddrToString_Params.Arg), &Arg, sizeof(Arg));

	auto native_IpAddrToString = uFnIpAddrToString->iNative;
	uFnIpAddrToString->iNative = 0;
	this->ProcessEvent(uFnIpAddrToString, &IpAddrToString_Params, nullptr);
	uFnIpAddrToString->iNative = native_IpAddrToString;

	return IpAddrToString_Params.ReturnValue;
}

// Function IpDrv.InternetLink.GetLastError
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t AInternetLink::GetLastError()
{
	static UFunction* uFnGetLastError = nullptr;

	if (!uFnGetLastError)
	{
		uFnGetLastError = UFunction::FindFunction("Function IpDrv.InternetLink.GetLastError");
	}

	AInternetLink_execGetLastError_Params GetLastError_Params;
	memset(&GetLastError_Params, 0, sizeof(GetLastError_Params));
	if (!uFnGetLastError)
	{
		return {};
	}


	auto native_GetLastError = uFnGetLastError->iNative;
	uFnGetLastError->iNative = 0;
	this->ProcessEvent(uFnGetLastError, &GetLastError_Params, nullptr);
	uFnGetLastError->iNative = native_GetLastError;

	return GetLastError_Params.ReturnValue;
}

// Function IpDrv.InternetLink.Resolve
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Domain                         (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void AInternetLink::Resolve(const class FString& Domain)
{
	static UFunction* uFnResolve = nullptr;

	if (!uFnResolve)
	{
		uFnResolve = UFunction::FindFunction("Function IpDrv.InternetLink.Resolve");
	}

	AInternetLink_execResolve_Params Resolve_Params;
	memset(&Resolve_Params, 0, sizeof(Resolve_Params));
	if (!uFnResolve)
	{
		return;
	}

	memcpy_s(&Resolve_Params.Domain, sizeof(Resolve_Params.Domain), &Domain, sizeof(Domain));

	auto native_Resolve = uFnResolve->iNative;
	uFnResolve->iNative = 0;
	this->ProcessEvent(uFnResolve, &Resolve_Params, nullptr);
	uFnResolve->iNative = native_Resolve;
}

// Function IpDrv.InternetLink.ParseURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  Addr                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// int32_t                        PortNum                        (CPF_Parm | CPF_OutParm)
// class FString                  LevelName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  EntryName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AInternetLink::ParseURL(const class FString& URL, class FString& outAddr, int32_t& outPortNum, class FString& outLevelName, class FString& outEntryName)
{
	static UFunction* uFnParseURL = nullptr;

	if (!uFnParseURL)
	{
		uFnParseURL = UFunction::FindFunction("Function IpDrv.InternetLink.ParseURL");
	}

	AInternetLink_execParseURL_Params ParseURL_Params;
	memset(&ParseURL_Params, 0, sizeof(ParseURL_Params));
	if (!uFnParseURL)
	{
		return {};
	}

	memcpy_s(&ParseURL_Params.URL, sizeof(ParseURL_Params.URL), &URL, sizeof(URL));
	memcpy_s(&ParseURL_Params.Addr, sizeof(ParseURL_Params.Addr), &outAddr, sizeof(outAddr));
	ParseURL_Params.PortNum = outPortNum;
	memcpy_s(&ParseURL_Params.LevelName, sizeof(ParseURL_Params.LevelName), &outLevelName, sizeof(outLevelName));
	memcpy_s(&ParseURL_Params.EntryName, sizeof(ParseURL_Params.EntryName), &outEntryName, sizeof(outEntryName));

	auto native_ParseURL = uFnParseURL->iNative;
	uFnParseURL->iNative = 0;
	this->ProcessEvent(uFnParseURL, &ParseURL_Params, nullptr);
	uFnParseURL->iNative = native_ParseURL;

	memcpy_s(&outAddr, sizeof(outAddr), &ParseURL_Params.Addr, sizeof(ParseURL_Params.Addr));
	outPortNum = ParseURL_Params.PortNum;
	memcpy_s(&outLevelName, sizeof(outLevelName), &ParseURL_Params.LevelName, sizeof(ParseURL_Params.LevelName));
	memcpy_s(&outEntryName, sizeof(outEntryName), &ParseURL_Params.EntryName, sizeof(ParseURL_Params.EntryName));

	return ParseURL_Params.ReturnValue;
}

// Function IpDrv.InternetLink.IsDataPending
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AInternetLink::IsDataPending()
{
	static UFunction* uFnIsDataPending = nullptr;

	if (!uFnIsDataPending)
	{
		uFnIsDataPending = UFunction::FindFunction("Function IpDrv.InternetLink.IsDataPending");
	}

	AInternetLink_execIsDataPending_Params IsDataPending_Params;
	memset(&IsDataPending_Params, 0, sizeof(IsDataPending_Params));
	if (!uFnIsDataPending)
	{
		return {};
	}


	auto native_IsDataPending = uFnIsDataPending->iNative;
	uFnIsDataPending->iNative = 0;
	this->ProcessEvent(uFnIsDataPending, &IsDataPending_Params, nullptr);
	uFnIsDataPending->iNative = native_IsDataPending;

	return IsDataPending_Params.ReturnValue;
}

// Function IpDrv.McpServiceBase.GetAppAccessURL
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UMcpServiceBase::GetAppAccessURL()
{
	static UFunction* uFnGetAppAccessURL = nullptr;

	if (!uFnGetAppAccessURL)
	{
		uFnGetAppAccessURL = UFunction::FindFunction("Function IpDrv.McpServiceBase.GetAppAccessURL");
	}

	UMcpServiceBase_execGetAppAccessURL_Params GetAppAccessURL_Params;
	memset(&GetAppAccessURL_Params, 0, sizeof(GetAppAccessURL_Params));
	if (!uFnGetAppAccessURL)
	{
		return {};
	}


	this->ProcessEvent(uFnGetAppAccessURL, &GetAppAccessURL_Params, nullptr);

	return GetAppAccessURL_Params.ReturnValue;
}

// Function IpDrv.McpServiceBase.GetBaseURL
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UMcpServiceBase::GetBaseURL()
{
	static UFunction* uFnGetBaseURL = nullptr;

	if (!uFnGetBaseURL)
	{
		uFnGetBaseURL = UFunction::FindFunction("Function IpDrv.McpServiceBase.GetBaseURL");
	}

	UMcpServiceBase_execGetBaseURL_Params GetBaseURL_Params;
	memset(&GetBaseURL_Params, 0, sizeof(GetBaseURL_Params));
	if (!uFnGetBaseURL)
	{
		return {};
	}


	this->ProcessEvent(uFnGetBaseURL, &GetBaseURL_Params, nullptr);

	return GetBaseURL_Params.ReturnValue;
}

// Function IpDrv.McpServiceBase.Init
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMcpServiceBase::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.McpServiceBase.Init");
	}

	UMcpServiceBase_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));
	if (!uFnInit)
	{
		return;
	}


	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
}

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm)
// class UOnlineMatchmakingStats* MMStats                        (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats)
{
	static UFunction* uFnUploadMatchmakingStats = nullptr;

	if (!uFnUploadMatchmakingStats)
	{
		uFnUploadMatchmakingStats = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats");
	}

	UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Params UploadMatchmakingStats_Params;
	memset(&UploadMatchmakingStats_Params, 0, sizeof(UploadMatchmakingStats_Params));
	if (!uFnUploadMatchmakingStats)
	{
		return {};
	}

	memcpy_s(&UploadMatchmakingStats_Params.UniqueId, sizeof(UploadMatchmakingStats_Params.UniqueId), &UniqueId, sizeof(UniqueId));
	UploadMatchmakingStats_Params.MMStats = MMStats;

	auto native_UploadMatchmakingStats = uFnUploadMatchmakingStats->iNative;
	uFnUploadMatchmakingStats->iNative = 0;
	this->ProcessEvent(uFnUploadMatchmakingStats, &UploadMatchmakingStats_Params, nullptr);
	uFnUploadMatchmakingStats->iNative = native_UploadMatchmakingStats;

	return UploadMatchmakingStats_Params.ReturnValue;
}

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PlaylistId                     (CPF_Parm)
// int32_t                        NumPlayers                     (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation(int32_t PlaylistId, int32_t NumPlayers)
{
	static UFunction* uFnUpdatePlaylistPopulation = nullptr;

	if (!uFnUpdatePlaylistPopulation)
	{
		uFnUpdatePlaylistPopulation = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation");
	}

	UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Params UpdatePlaylistPopulation_Params;
	memset(&UpdatePlaylistPopulation_Params, 0, sizeof(UpdatePlaylistPopulation_Params));
	if (!uFnUpdatePlaylistPopulation)
	{
		return {};
	}

	UpdatePlaylistPopulation_Params.PlaylistId = PlaylistId;
	UpdatePlaylistPopulation_Params.NumPlayers = NumPlayers;

	auto native_UpdatePlaylistPopulation = uFnUpdatePlaylistPopulation->iNative;
	uFnUpdatePlaylistPopulation->iNative = 0;
	this->ProcessEvent(uFnUpdatePlaylistPopulation, &UpdatePlaylistPopulation_Params, nullptr);
	uFnUpdatePlaylistPopulation->iNative = native_UpdatePlaylistPopulation;

	return UpdatePlaylistPopulation_Params.ReturnValue;
}

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm)
// class TArray<uint8_t>          Payload                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, class TArray<uint8_t>& outPayload)
{
	static UFunction* uFnUploadGameplayEventsData = nullptr;

	if (!uFnUploadGameplayEventsData)
	{
		uFnUploadGameplayEventsData = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData");
	}

	UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Params UploadGameplayEventsData_Params;
	memset(&UploadGameplayEventsData_Params, 0, sizeof(UploadGameplayEventsData_Params));
	if (!uFnUploadGameplayEventsData)
	{
		return {};
	}

	memcpy_s(&UploadGameplayEventsData_Params.UniqueId, sizeof(UploadGameplayEventsData_Params.UniqueId), &UniqueId, sizeof(UniqueId));
	memcpy_s(&UploadGameplayEventsData_Params.Payload, sizeof(UploadGameplayEventsData_Params.Payload), &outPayload, sizeof(outPayload));

	auto native_UploadGameplayEventsData = uFnUploadGameplayEventsData->iNative;
	uFnUploadGameplayEventsData->iNative = 0;
	this->ProcessEvent(uFnUploadGameplayEventsData, &UploadGameplayEventsData_Params, nullptr);
	uFnUploadGameplayEventsData->iNative = native_UploadGameplayEventsData;

	memcpy_s(&outPayload, sizeof(outPayload), &UploadGameplayEventsData_Params.Payload, sizeof(UploadGameplayEventsData_Params.Payload));

	return UploadGameplayEventsData_Params.ReturnValue;
}

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            UniqueId                       (CPF_Parm)
// class FString                  PlayerNick                     (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlineEventsInterfaceMcp::UploadPlayerData(const struct FUniqueNetId& UniqueId, const class FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* uFnUploadPlayerData = nullptr;

	if (!uFnUploadPlayerData)
	{
		uFnUploadPlayerData = UFunction::FindFunction("Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData");
	}

	UOnlineEventsInterfaceMcp_execUploadPlayerData_Params UploadPlayerData_Params;
	memset(&UploadPlayerData_Params, 0, sizeof(UploadPlayerData_Params));
	if (!uFnUploadPlayerData)
	{
		return {};
	}

	memcpy_s(&UploadPlayerData_Params.UniqueId, sizeof(UploadPlayerData_Params.UniqueId), &UniqueId, sizeof(UniqueId));
	memcpy_s(&UploadPlayerData_Params.PlayerNick, sizeof(UploadPlayerData_Params.PlayerNick), &PlayerNick, sizeof(PlayerNick));
	UploadPlayerData_Params.ProfileSettings = ProfileSettings;
	UploadPlayerData_Params.PlayerStorage = PlayerStorage;

	auto native_UploadPlayerData = uFnUploadPlayerData->iNative;
	uFnUploadPlayerData->iNative = 0;
	this->ProcessEvent(uFnUploadPlayerData, &UploadPlayerData_Params, nullptr);
	uFnUploadPlayerData->iNative = native_UploadPlayerData;

	return UploadPlayerData_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.CancelIO
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UTitleFileDownloadCache::eventCancelIO()
{
	static UFunction* uFnCancelIO = nullptr;

	if (!uFnCancelIO)
	{
		uFnCancelIO = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.CancelIO");
	}

	UTitleFileDownloadCache_eventCancelIO_Params CancelIO_Params;
	memset(&CancelIO_Params, 0, sizeof(CancelIO_Params));
	if (!uFnCancelIO)
	{
		return;
	}


	this->ProcessEvent(uFnCancelIO, &CancelIO_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.AttemptDeleteDownloadFile
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::eventAttemptDeleteDownloadFile(const class FString& Filename)
{
	static UFunction* uFnAttemptDeleteDownloadFile = nullptr;

	if (!uFnAttemptDeleteDownloadFile)
	{
		uFnAttemptDeleteDownloadFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AttemptDeleteDownloadFile");
	}

	UTitleFileDownloadCache_eventAttemptDeleteDownloadFile_Params AttemptDeleteDownloadFile_Params;
	memset(&AttemptDeleteDownloadFile_Params, 0, sizeof(AttemptDeleteDownloadFile_Params));
	if (!uFnAttemptDeleteDownloadFile)
	{
		return {};
	}

	memcpy_s(&AttemptDeleteDownloadFile_Params.Filename, sizeof(AttemptDeleteDownloadFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnAttemptDeleteDownloadFile, &AttemptDeleteDownloadFile_Params, nullptr);

	return AttemptDeleteDownloadFile_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.OnDeleteDownloadFileCompleteInternal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::OnDeleteDownloadFileCompleteInternal(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnDeleteDownloadFileCompleteInternal = nullptr;

	if (!uFnOnDeleteDownloadFileCompleteInternal)
	{
		uFnOnDeleteDownloadFileCompleteInternal = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnDeleteDownloadFileCompleteInternal");
	}

	UTitleFileDownloadCache_execOnDeleteDownloadFileCompleteInternal_Params OnDeleteDownloadFileCompleteInternal_Params;
	memset(&OnDeleteDownloadFileCompleteInternal_Params, 0, sizeof(OnDeleteDownloadFileCompleteInternal_Params));
	if (!uFnOnDeleteDownloadFileCompleteInternal)
	{
		return {};
	}

	OnDeleteDownloadFileCompleteInternal_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteDownloadFileCompleteInternal_Params.Filename, sizeof(OnDeleteDownloadFileCompleteInternal_Params.Filename), &Filename, sizeof(Filename));

	auto native_OnDeleteDownloadFileCompleteInternal = uFnOnDeleteDownloadFileCompleteInternal->iNative;
	uFnOnDeleteDownloadFileCompleteInternal->iNative = 0;
	this->ProcessEvent(uFnOnDeleteDownloadFileCompleteInternal, &OnDeleteDownloadFileCompleteInternal_Params, nullptr);
	uFnOnDeleteDownloadFileCompleteInternal->iNative = native_OnDeleteDownloadFileCompleteInternal;

	return OnDeleteDownloadFileCompleteInternal_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.OnDeleteDownloadFileComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::OnDeleteDownloadFileComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnDeleteDownloadFileComplete = nullptr;

	if (!uFnOnDeleteDownloadFileComplete)
	{
		uFnOnDeleteDownloadFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnDeleteDownloadFileComplete");
	}

	UTitleFileDownloadCache_execOnDeleteDownloadFileComplete_Params OnDeleteDownloadFileComplete_Params;
	memset(&OnDeleteDownloadFileComplete_Params, 0, sizeof(OnDeleteDownloadFileComplete_Params));
	if (!uFnOnDeleteDownloadFileComplete)
	{
		return;
	}

	OnDeleteDownloadFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteDownloadFileComplete_Params.Filename, sizeof(OnDeleteDownloadFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnDeleteDownloadFileComplete, &OnDeleteDownloadFileComplete_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.AttemptReadDownloadFile
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::eventAttemptReadDownloadFile(const class FString& Filename)
{
	static UFunction* uFnAttemptReadDownloadFile = nullptr;

	if (!uFnAttemptReadDownloadFile)
	{
		uFnAttemptReadDownloadFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AttemptReadDownloadFile");
	}

	UTitleFileDownloadCache_eventAttemptReadDownloadFile_Params AttemptReadDownloadFile_Params;
	memset(&AttemptReadDownloadFile_Params, 0, sizeof(AttemptReadDownloadFile_Params));
	if (!uFnAttemptReadDownloadFile)
	{
		return {};
	}

	memcpy_s(&AttemptReadDownloadFile_Params.Filename, sizeof(AttemptReadDownloadFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnAttemptReadDownloadFile, &AttemptReadDownloadFile_Params, nullptr);

	return AttemptReadDownloadFile_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.OnReadDownloadFileCompleteInternal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytesProcessed                 (CPF_Parm)

bool UTitleFileDownloadCache::OnReadDownloadFileCompleteInternal(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed)
{
	static UFunction* uFnOnReadDownloadFileCompleteInternal = nullptr;

	if (!uFnOnReadDownloadFileCompleteInternal)
	{
		uFnOnReadDownloadFileCompleteInternal = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnReadDownloadFileCompleteInternal");
	}

	UTitleFileDownloadCache_execOnReadDownloadFileCompleteInternal_Params OnReadDownloadFileCompleteInternal_Params;
	memset(&OnReadDownloadFileCompleteInternal_Params, 0, sizeof(OnReadDownloadFileCompleteInternal_Params));
	if (!uFnOnReadDownloadFileCompleteInternal)
	{
		return {};
	}

	OnReadDownloadFileCompleteInternal_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadDownloadFileCompleteInternal_Params.Filename, sizeof(OnReadDownloadFileCompleteInternal_Params.Filename), &Filename, sizeof(Filename));
	OnReadDownloadFileCompleteInternal_Params.bytesProcessed = bytesProcessed;

	auto native_OnReadDownloadFileCompleteInternal = uFnOnReadDownloadFileCompleteInternal->iNative;
	uFnOnReadDownloadFileCompleteInternal->iNative = 0;
	this->ProcessEvent(uFnOnReadDownloadFileCompleteInternal, &OnReadDownloadFileCompleteInternal_Params, nullptr);
	uFnOnReadDownloadFileCompleteInternal->iNative = native_OnReadDownloadFileCompleteInternal;

	return OnReadDownloadFileCompleteInternal_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.OnReadDownloadFileComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytesProcessed                 (CPF_Parm)

void UTitleFileDownloadCache::OnReadDownloadFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed)
{
	static UFunction* uFnOnReadDownloadFileComplete = nullptr;

	if (!uFnOnReadDownloadFileComplete)
	{
		uFnOnReadDownloadFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnReadDownloadFileComplete");
	}

	UTitleFileDownloadCache_execOnReadDownloadFileComplete_Params OnReadDownloadFileComplete_Params;
	memset(&OnReadDownloadFileComplete_Params, 0, sizeof(OnReadDownloadFileComplete_Params));
	if (!uFnOnReadDownloadFileComplete)
	{
		return;
	}

	OnReadDownloadFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadDownloadFileComplete_Params.Filename, sizeof(OnReadDownloadFileComplete_Params.Filename), &Filename, sizeof(Filename));
	OnReadDownloadFileComplete_Params.bytesProcessed = bytesProcessed;

	this->ProcessEvent(uFnOnReadDownloadFileComplete, &OnReadDownloadFileComplete_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.AttemptWriteDownloadFile
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  FileCRC                        (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::eventAttemptWriteDownloadFile(const class FString& Filename, const class TArray<uint8_t>& FileContents, const class FString& FileCRC)
{
	static UFunction* uFnAttemptWriteDownloadFile = nullptr;

	if (!uFnAttemptWriteDownloadFile)
	{
		uFnAttemptWriteDownloadFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AttemptWriteDownloadFile");
	}

	UTitleFileDownloadCache_eventAttemptWriteDownloadFile_Params AttemptWriteDownloadFile_Params;
	memset(&AttemptWriteDownloadFile_Params, 0, sizeof(AttemptWriteDownloadFile_Params));
	if (!uFnAttemptWriteDownloadFile)
	{
		return {};
	}

	memcpy_s(&AttemptWriteDownloadFile_Params.Filename, sizeof(AttemptWriteDownloadFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&AttemptWriteDownloadFile_Params.FileContents, sizeof(AttemptWriteDownloadFile_Params.FileContents), &FileContents, sizeof(FileContents));
	memcpy_s(&AttemptWriteDownloadFile_Params.FileCRC, sizeof(AttemptWriteDownloadFile_Params.FileCRC), &FileCRC, sizeof(FileCRC));

	this->ProcessEvent(uFnAttemptWriteDownloadFile, &AttemptWriteDownloadFile_Params, nullptr);

	return AttemptWriteDownloadFile_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.OnWriteDownloadFileCompleteInternal
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytesProcessed                 (CPF_Parm)

bool UTitleFileDownloadCache::OnWriteDownloadFileCompleteInternal(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed)
{
	static UFunction* uFnOnWriteDownloadFileCompleteInternal = nullptr;

	if (!uFnOnWriteDownloadFileCompleteInternal)
	{
		uFnOnWriteDownloadFileCompleteInternal = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnWriteDownloadFileCompleteInternal");
	}

	UTitleFileDownloadCache_execOnWriteDownloadFileCompleteInternal_Params OnWriteDownloadFileCompleteInternal_Params;
	memset(&OnWriteDownloadFileCompleteInternal_Params, 0, sizeof(OnWriteDownloadFileCompleteInternal_Params));
	if (!uFnOnWriteDownloadFileCompleteInternal)
	{
		return {};
	}

	OnWriteDownloadFileCompleteInternal_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteDownloadFileCompleteInternal_Params.Filename, sizeof(OnWriteDownloadFileCompleteInternal_Params.Filename), &Filename, sizeof(Filename));
	OnWriteDownloadFileCompleteInternal_Params.bytesProcessed = bytesProcessed;

	auto native_OnWriteDownloadFileCompleteInternal = uFnOnWriteDownloadFileCompleteInternal->iNative;
	uFnOnWriteDownloadFileCompleteInternal->iNative = 0;
	this->ProcessEvent(uFnOnWriteDownloadFileCompleteInternal, &OnWriteDownloadFileCompleteInternal_Params, nullptr);
	uFnOnWriteDownloadFileCompleteInternal->iNative = native_OnWriteDownloadFileCompleteInternal;

	return OnWriteDownloadFileCompleteInternal_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.OnWriteDownloadFileComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytesProcessed                 (CPF_Parm)

void UTitleFileDownloadCache::OnWriteDownloadFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed)
{
	static UFunction* uFnOnWriteDownloadFileComplete = nullptr;

	if (!uFnOnWriteDownloadFileComplete)
	{
		uFnOnWriteDownloadFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnWriteDownloadFileComplete");
	}

	UTitleFileDownloadCache_execOnWriteDownloadFileComplete_Params OnWriteDownloadFileComplete_Params;
	memset(&OnWriteDownloadFileComplete_Params, 0, sizeof(OnWriteDownloadFileComplete_Params));
	if (!uFnOnWriteDownloadFileComplete)
	{
		return;
	}

	OnWriteDownloadFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteDownloadFileComplete_Params.Filename, sizeof(OnWriteDownloadFileComplete_Params.Filename), &Filename, sizeof(Filename));
	OnWriteDownloadFileComplete_Params.bytesProcessed = bytesProcessed;

	this->ProcessEvent(uFnOnWriteDownloadFileComplete, &OnWriteDownloadFileComplete_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.AttemptGetDownloadFileSize
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       KeepHandle                     (CPF_OptionalParm | CPF_Parm)

int32_t UTitleFileDownloadCache::eventAttemptGetDownloadFileSize(const class FString& Filename, bool optionalKeepHandle)
{
	static UFunction* uFnAttemptGetDownloadFileSize = nullptr;

	if (!uFnAttemptGetDownloadFileSize)
	{
		uFnAttemptGetDownloadFileSize = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AttemptGetDownloadFileSize");
	}

	UTitleFileDownloadCache_eventAttemptGetDownloadFileSize_Params AttemptGetDownloadFileSize_Params;
	memset(&AttemptGetDownloadFileSize_Params, 0, sizeof(AttemptGetDownloadFileSize_Params));
	if (!uFnAttemptGetDownloadFileSize)
	{
		return {};
	}

	memcpy_s(&AttemptGetDownloadFileSize_Params.Filename, sizeof(AttemptGetDownloadFileSize_Params.Filename), &Filename, sizeof(Filename));
	AttemptGetDownloadFileSize_Params.KeepHandle = optionalKeepHandle;

	this->ProcessEvent(uFnAttemptGetDownloadFileSize, &AttemptGetDownloadFileSize_Params, nullptr);

	return AttemptGetDownloadFileSize_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.FindFolders
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    Results                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::FindFolders(class TArray<class FString>& outResults)
{
	static UFunction* uFnFindFolders = nullptr;

	if (!uFnFindFolders)
	{
		uFnFindFolders = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.FindFolders");
	}

	UTitleFileDownloadCache_execFindFolders_Params FindFolders_Params;
	memset(&FindFolders_Params, 0, sizeof(FindFolders_Params));
	if (!uFnFindFolders)
	{
		return;
	}

	memcpy_s(&FindFolders_Params.Results, sizeof(FindFolders_Params.Results), &outResults, sizeof(outResults));

	this->ProcessEvent(uFnFindFolders, &FindFolders_Params, nullptr);

	memcpy_s(&outResults, sizeof(outResults), &FindFolders_Params.Results, sizeof(FindFolders_Params.Results));
}

// Function IpDrv.TitleFileDownloadCache.FindFiles
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  Subfolder                      (CPF_Parm | CPF_NeedCtorLink)
// class TArray<class FString>    Results                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::FindFiles(const class FString& Subfolder, class TArray<class FString>& outResults)
{
	static UFunction* uFnFindFiles = nullptr;

	if (!uFnFindFiles)
	{
		uFnFindFiles = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.FindFiles");
	}

	UTitleFileDownloadCache_execFindFiles_Params FindFiles_Params;
	memset(&FindFiles_Params, 0, sizeof(FindFiles_Params));
	if (!uFnFindFiles)
	{
		return;
	}

	memcpy_s(&FindFiles_Params.Subfolder, sizeof(FindFiles_Params.Subfolder), &Subfolder, sizeof(Subfolder));
	memcpy_s(&FindFiles_Params.Results, sizeof(FindFiles_Params.Results), &outResults, sizeof(outResults));

	this->ProcessEvent(uFnFindFiles, &FindFiles_Params, nullptr);

	memcpy_s(&outResults, sizeof(outResults), &FindFiles_Params.Results, sizeof(FindFiles_Params.Results));
}

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::DeleteTitleFile(const class FString& Filename)
{
	static UFunction* uFnDeleteTitleFile = nullptr;

	if (!uFnDeleteTitleFile)
	{
		uFnDeleteTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.DeleteTitleFile");
	}

	UTitleFileDownloadCache_execDeleteTitleFile_Params DeleteTitleFile_Params;
	memset(&DeleteTitleFile_Params, 0, sizeof(DeleteTitleFile_Params));
	if (!uFnDeleteTitleFile)
	{
		return {};
	}

	memcpy_s(&DeleteTitleFile_Params.Filename, sizeof(DeleteTitleFile_Params.Filename), &Filename, sizeof(Filename));

	auto native_DeleteTitleFile = uFnDeleteTitleFile->iNative;
	uFnDeleteTitleFile->iNative = 0;
	this->ProcessEvent(uFnDeleteTitleFile, &DeleteTitleFile_Params, nullptr);
	uFnDeleteTitleFile->iNative = native_DeleteTitleFile;

	return DeleteTitleFile_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          MaxAgeSeconds                  (CPF_Parm)

bool UTitleFileDownloadCache::DeleteTitleFiles(float MaxAgeSeconds)
{
	static UFunction* uFnDeleteTitleFiles = nullptr;

	if (!uFnDeleteTitleFiles)
	{
		uFnDeleteTitleFiles = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles");
	}

	UTitleFileDownloadCache_execDeleteTitleFiles_Params DeleteTitleFiles_Params;
	memset(&DeleteTitleFiles_Params, 0, sizeof(DeleteTitleFiles_Params));
	if (!uFnDeleteTitleFiles)
	{
		return {};
	}

	DeleteTitleFiles_Params.MaxAgeSeconds = MaxAgeSeconds;

	auto native_DeleteTitleFiles = uFnDeleteTitleFiles->iNative;
	uFnDeleteTitleFiles->iNative = 0;
	this->ProcessEvent(uFnDeleteTitleFiles, &DeleteTitleFiles_Params, nullptr);
	uFnDeleteTitleFiles->iNative = native_DeleteTitleFiles;

	return DeleteTitleFiles_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::ClearCachedFile(const class FString& Filename)
{
	static UFunction* uFnClearCachedFile = nullptr;

	if (!uFnClearCachedFile)
	{
		uFnClearCachedFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearCachedFile");
	}

	UTitleFileDownloadCache_execClearCachedFile_Params ClearCachedFile_Params;
	memset(&ClearCachedFile_Params, 0, sizeof(ClearCachedFile_Params));
	if (!uFnClearCachedFile)
	{
		return {};
	}

	memcpy_s(&ClearCachedFile_Params.Filename, sizeof(ClearCachedFile_Params.Filename), &Filename, sizeof(Filename));

	auto native_ClearCachedFile = uFnClearCachedFile->iNative;
	uFnClearCachedFile->iNative = 0;
	this->ProcessEvent(uFnClearCachedFile, &ClearCachedFile_Params, nullptr);
	uFnClearCachedFile->iNative = native_ClearCachedFile;

	return ClearCachedFile_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UTitleFileDownloadCache::ClearCachedFiles()
{
	static UFunction* uFnClearCachedFiles = nullptr;

	if (!uFnClearCachedFiles)
	{
		uFnClearCachedFiles = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearCachedFiles");
	}

	UTitleFileDownloadCache_execClearCachedFiles_Params ClearCachedFiles_Params;
	memset(&ClearCachedFiles_Params, 0, sizeof(ClearCachedFiles_Params));
	if (!uFnClearCachedFiles)
	{
		return {};
	}


	auto native_ClearCachedFiles = uFnClearCachedFiles->iNative;
	uFnClearCachedFiles->iNative = 0;
	this->ProcessEvent(uFnClearCachedFiles, &ClearCachedFiles_Params, nullptr);
	uFnClearCachedFiles->iNative = native_ClearCachedFiles;

	return ClearCachedFiles_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UTitleFileDownloadCache::GetTitleFileLogicalName(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileLogicalName = nullptr;

	if (!uFnGetTitleFileLogicalName)
	{
		uFnGetTitleFileLogicalName = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName");
	}

	UTitleFileDownloadCache_execGetTitleFileLogicalName_Params GetTitleFileLogicalName_Params;
	memset(&GetTitleFileLogicalName_Params, 0, sizeof(GetTitleFileLogicalName_Params));
	if (!uFnGetTitleFileLogicalName)
	{
		return {};
	}

	memcpy_s(&GetTitleFileLogicalName_Params.Filename, sizeof(GetTitleFileLogicalName_Params.Filename), &Filename, sizeof(Filename));

	auto native_GetTitleFileLogicalName = uFnGetTitleFileLogicalName->iNative;
	uFnGetTitleFileLogicalName->iNative = 0;
	this->ProcessEvent(uFnGetTitleFileLogicalName, &GetTitleFileLogicalName_Params, nullptr);
	uFnGetTitleFileLogicalName->iNative = native_GetTitleFileLogicalName;

	return GetTitleFileLogicalName_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UTitleFileDownloadCache::GetTitleFileHash(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileHash = nullptr;

	if (!uFnGetTitleFileHash)
	{
		uFnGetTitleFileHash = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileHash");
	}

	UTitleFileDownloadCache_execGetTitleFileHash_Params GetTitleFileHash_Params;
	memset(&GetTitleFileHash_Params, 0, sizeof(GetTitleFileHash_Params));
	if (!uFnGetTitleFileHash)
	{
		return {};
	}

	memcpy_s(&GetTitleFileHash_Params.Filename, sizeof(GetTitleFileHash_Params.Filename), &Filename, sizeof(Filename));

	auto native_GetTitleFileHash = uFnGetTitleFileHash->iNative;
	uFnGetTitleFileHash->iNative = 0;
	this->ProcessEvent(uFnGetTitleFileHash, &GetTitleFileHash_Params, nullptr);
	uFnGetTitleFileHash->iNative = native_GetTitleFileHash;

	return GetTitleFileHash_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UTitleFileDownloadCache::GetTitleFileState(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileState");
	}

	UTitleFileDownloadCache_execGetTitleFileState_Params GetTitleFileState_Params;
	memset(&GetTitleFileState_Params, 0, sizeof(GetTitleFileState_Params));
	if (!uFnGetTitleFileState)
	{
		return {};
	}

	memcpy_s(&GetTitleFileState_Params.Filename, sizeof(GetTitleFileState_Params.Filename), &Filename, sizeof(Filename));

	auto native_GetTitleFileState = uFnGetTitleFileState->iNative;
	uFnGetTitleFileState->iNative = 0;
	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);
	uFnGetTitleFileState->iNative = native_GetTitleFileState;

	return static_cast<EOnlineEnumerationReadState>(GetTitleFileState_Params.ReturnValue);
}

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.GetTitleFileContents");
	}

	UTitleFileDownloadCache_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memset(&GetTitleFileContents_Params, 0, sizeof(GetTitleFileContents_Params));
	if (!uFnGetTitleFileContents)
	{
		return {};
	}

	memcpy_s(&GetTitleFileContents_Params.Filename, sizeof(GetTitleFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents), &outFileContents, sizeof(outFileContents));

	auto native_GetTitleFileContents = uFnGetTitleFileContents->iNative;
	uFnGetTitleFileContents->iNative = 0;
	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);
	uFnGetTitleFileContents->iNative = native_GetTitleFileContents;

	memcpy_s(&outFileContents, sizeof(outFileContents), &GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents));

	return GetTitleFileContents_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.ClearDeleteTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteCompleteDelegate         (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearDeleteTitleFileCompleteDelegate(const struct FScriptDelegate& DeleteCompleteDelegate)
{
	static UFunction* uFnClearDeleteTitleFileCompleteDelegate = nullptr;

	if (!uFnClearDeleteTitleFileCompleteDelegate)
	{
		uFnClearDeleteTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearDeleteTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execClearDeleteTitleFileCompleteDelegate_Params ClearDeleteTitleFileCompleteDelegate_Params;
	memset(&ClearDeleteTitleFileCompleteDelegate_Params, 0, sizeof(ClearDeleteTitleFileCompleteDelegate_Params));
	if (!uFnClearDeleteTitleFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearDeleteTitleFileCompleteDelegate_Params.DeleteCompleteDelegate, sizeof(ClearDeleteTitleFileCompleteDelegate_Params.DeleteCompleteDelegate), &DeleteCompleteDelegate, sizeof(DeleteCompleteDelegate));

	this->ProcessEvent(uFnClearDeleteTitleFileCompleteDelegate, &ClearDeleteTitleFileCompleteDelegate_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.AddDeleteTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteCompleteDelegate         (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddDeleteTitleFileCompleteDelegate(const struct FScriptDelegate& DeleteCompleteDelegate)
{
	static UFunction* uFnAddDeleteTitleFileCompleteDelegate = nullptr;

	if (!uFnAddDeleteTitleFileCompleteDelegate)
	{
		uFnAddDeleteTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AddDeleteTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execAddDeleteTitleFileCompleteDelegate_Params AddDeleteTitleFileCompleteDelegate_Params;
	memset(&AddDeleteTitleFileCompleteDelegate_Params, 0, sizeof(AddDeleteTitleFileCompleteDelegate_Params));
	if (!uFnAddDeleteTitleFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddDeleteTitleFileCompleteDelegate_Params.DeleteCompleteDelegate, sizeof(AddDeleteTitleFileCompleteDelegate_Params.DeleteCompleteDelegate), &DeleteCompleteDelegate, sizeof(DeleteCompleteDelegate));

	this->ProcessEvent(uFnAddDeleteTitleFileCompleteDelegate, &AddDeleteTitleFileCompleteDelegate_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.OnDeleteTitleFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// float                          timeTaken                      (CPF_Parm)

void UTitleFileDownloadCache::OnDeleteTitleFileComplete(bool bWasSuccessful, const class FString& Filename, float timeTaken)
{
	static UFunction* uFnOnDeleteTitleFileComplete = nullptr;

	if (!uFnOnDeleteTitleFileComplete)
	{
		uFnOnDeleteTitleFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnDeleteTitleFileComplete");
	}

	UTitleFileDownloadCache_execOnDeleteTitleFileComplete_Params OnDeleteTitleFileComplete_Params;
	memset(&OnDeleteTitleFileComplete_Params, 0, sizeof(OnDeleteTitleFileComplete_Params));
	if (!uFnOnDeleteTitleFileComplete)
	{
		return;
	}

	OnDeleteTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteTitleFileComplete_Params.Filename, sizeof(OnDeleteTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));
	OnDeleteTitleFileComplete_Params.timeTaken = timeTaken;

	this->ProcessEvent(uFnOnDeleteTitleFileComplete, &OnDeleteTitleFileComplete_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         SaveCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate)
{
	static UFunction* uFnClearSaveTitleFileCompleteDelegate = nullptr;

	if (!uFnClearSaveTitleFileCompleteDelegate)
	{
		uFnClearSaveTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execClearSaveTitleFileCompleteDelegate_Params ClearSaveTitleFileCompleteDelegate_Params;
	memset(&ClearSaveTitleFileCompleteDelegate_Params, 0, sizeof(ClearSaveTitleFileCompleteDelegate_Params));
	if (!uFnClearSaveTitleFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearSaveTitleFileCompleteDelegate_Params.SaveCompleteDelegate, sizeof(ClearSaveTitleFileCompleteDelegate_Params.SaveCompleteDelegate), &SaveCompleteDelegate, sizeof(SaveCompleteDelegate));

	this->ProcessEvent(uFnClearSaveTitleFileCompleteDelegate, &ClearSaveTitleFileCompleteDelegate_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         SaveCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate)
{
	static UFunction* uFnAddSaveTitleFileCompleteDelegate = nullptr;

	if (!uFnAddSaveTitleFileCompleteDelegate)
	{
		uFnAddSaveTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execAddSaveTitleFileCompleteDelegate_Params AddSaveTitleFileCompleteDelegate_Params;
	memset(&AddSaveTitleFileCompleteDelegate_Params, 0, sizeof(AddSaveTitleFileCompleteDelegate_Params));
	if (!uFnAddSaveTitleFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddSaveTitleFileCompleteDelegate_Params.SaveCompleteDelegate, sizeof(AddSaveTitleFileCompleteDelegate_Params.SaveCompleteDelegate), &SaveCompleteDelegate, sizeof(SaveCompleteDelegate));

	this->ProcessEvent(uFnAddSaveTitleFileCompleteDelegate, &AddSaveTitleFileCompleteDelegate_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytesTransferred               (CPF_Parm)
// float                          timeTaken                      (CPF_Parm)

void UTitleFileDownloadCache::OnSaveTitleFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesTransferred, float timeTaken)
{
	static UFunction* uFnOnSaveTitleFileComplete = nullptr;

	if (!uFnOnSaveTitleFileComplete)
	{
		uFnOnSaveTitleFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete");
	}

	UTitleFileDownloadCache_execOnSaveTitleFileComplete_Params OnSaveTitleFileComplete_Params;
	memset(&OnSaveTitleFileComplete_Params, 0, sizeof(OnSaveTitleFileComplete_Params));
	if (!uFnOnSaveTitleFileComplete)
	{
		return;
	}

	OnSaveTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnSaveTitleFileComplete_Params.Filename, sizeof(OnSaveTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));
	OnSaveTitleFileComplete_Params.bytesTransferred = bytesTransferred;
	OnSaveTitleFileComplete_Params.timeTaken = timeTaken;

	this->ProcessEvent(uFnOnSaveTitleFileComplete, &OnSaveTitleFileComplete_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  LogicalName                    (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::SaveTitleFile(const class FString& Filename, const class FString& LogicalName, const class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnSaveTitleFile = nullptr;

	if (!uFnSaveTitleFile)
	{
		uFnSaveTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.SaveTitleFile");
	}

	UTitleFileDownloadCache_execSaveTitleFile_Params SaveTitleFile_Params;
	memset(&SaveTitleFile_Params, 0, sizeof(SaveTitleFile_Params));
	if (!uFnSaveTitleFile)
	{
		return {};
	}

	memcpy_s(&SaveTitleFile_Params.Filename, sizeof(SaveTitleFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&SaveTitleFile_Params.LogicalName, sizeof(SaveTitleFile_Params.LogicalName), &LogicalName, sizeof(LogicalName));
	memcpy_s(&SaveTitleFile_Params.FileContents, sizeof(SaveTitleFile_Params.FileContents), &FileContents, sizeof(FileContents));

	auto native_SaveTitleFile = uFnSaveTitleFile->iNative;
	uFnSaveTitleFile->iNative = 0;
	this->ProcessEvent(uFnSaveTitleFile, &SaveTitleFile_Params, nullptr);
	uFnSaveTitleFile->iNative = native_SaveTitleFile;

	return SaveTitleFile_Params.ReturnValue;
}

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoadCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::ClearLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate)
{
	static UFunction* uFnClearLoadTitleFileCompleteDelegate = nullptr;

	if (!uFnClearLoadTitleFileCompleteDelegate)
	{
		uFnClearLoadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execClearLoadTitleFileCompleteDelegate_Params ClearLoadTitleFileCompleteDelegate_Params;
	memset(&ClearLoadTitleFileCompleteDelegate_Params, 0, sizeof(ClearLoadTitleFileCompleteDelegate_Params));
	if (!uFnClearLoadTitleFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearLoadTitleFileCompleteDelegate_Params.LoadCompleteDelegate, sizeof(ClearLoadTitleFileCompleteDelegate_Params.LoadCompleteDelegate), &LoadCompleteDelegate, sizeof(LoadCompleteDelegate));

	this->ProcessEvent(uFnClearLoadTitleFileCompleteDelegate, &ClearLoadTitleFileCompleteDelegate_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoadCompleteDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UTitleFileDownloadCache::AddLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate)
{
	static UFunction* uFnAddLoadTitleFileCompleteDelegate = nullptr;

	if (!uFnAddLoadTitleFileCompleteDelegate)
	{
		uFnAddLoadTitleFileCompleteDelegate = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate");
	}

	UTitleFileDownloadCache_execAddLoadTitleFileCompleteDelegate_Params AddLoadTitleFileCompleteDelegate_Params;
	memset(&AddLoadTitleFileCompleteDelegate_Params, 0, sizeof(AddLoadTitleFileCompleteDelegate_Params));
	if (!uFnAddLoadTitleFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddLoadTitleFileCompleteDelegate_Params.LoadCompleteDelegate, sizeof(AddLoadTitleFileCompleteDelegate_Params.LoadCompleteDelegate), &LoadCompleteDelegate, sizeof(LoadCompleteDelegate));

	this->ProcessEvent(uFnAddLoadTitleFileCompleteDelegate, &AddLoadTitleFileCompleteDelegate_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytesTransferred               (CPF_Parm)
// float                          timeTaken                      (CPF_Parm)

void UTitleFileDownloadCache::OnLoadTitleFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesTransferred, float timeTaken)
{
	static UFunction* uFnOnLoadTitleFileComplete = nullptr;

	if (!uFnOnLoadTitleFileComplete)
	{
		uFnOnLoadTitleFileComplete = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete");
	}

	UTitleFileDownloadCache_execOnLoadTitleFileComplete_Params OnLoadTitleFileComplete_Params;
	memset(&OnLoadTitleFileComplete_Params, 0, sizeof(OnLoadTitleFileComplete_Params));
	if (!uFnOnLoadTitleFileComplete)
	{
		return;
	}

	OnLoadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnLoadTitleFileComplete_Params.Filename, sizeof(OnLoadTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));
	OnLoadTitleFileComplete_Params.bytesTransferred = bytesTransferred;
	OnLoadTitleFileComplete_Params.timeTaken = timeTaken;

	this->ProcessEvent(uFnOnLoadTitleFileComplete, &OnLoadTitleFileComplete_Params, nullptr);
}

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UTitleFileDownloadCache::LoadTitleFile(const class FString& Filename)
{
	static UFunction* uFnLoadTitleFile = nullptr;

	if (!uFnLoadTitleFile)
	{
		uFnLoadTitleFile = UFunction::FindFunction("Function IpDrv.TitleFileDownloadCache.LoadTitleFile");
	}

	UTitleFileDownloadCache_execLoadTitleFile_Params LoadTitleFile_Params;
	memset(&LoadTitleFile_Params, 0, sizeof(LoadTitleFile_Params));
	if (!uFnLoadTitleFile)
	{
		return {};
	}

	memcpy_s(&LoadTitleFile_Params.Filename, sizeof(LoadTitleFile_Params.Filename), &Filename, sizeof(Filename));

	auto native_LoadTitleFile = uFnLoadTitleFile->iNative;
	uFnLoadTitleFile->iNative = 0;
	this->ProcessEvent(uFnLoadTitleFile, &LoadTitleFile_Params, nullptr);
	uFnLoadTitleFile->iNative = native_LoadTitleFile;

	return LoadTitleFile_Params.ReturnValue;
}

// Function IpDrv.OnlineSubsystemCommonImpl.Tick
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UOnlineSubsystemCommonImpl::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.Tick");
	}

	UOnlineSubsystemCommonImpl_execTick_Params Tick_Params;
	memset(&Tick_Params, 0, sizeof(Tick_Params));
	if (!uFnTick)
	{
		return;
	}

	Tick_Params.DeltaTime = DeltaTime;

	auto native_Tick = uFnTick->iNative;
	uFnTick->iNative = 0;
	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
	uFnTick->iNative = native_Tick;
}

// Function IpDrv.OnlineSubsystemCommonImpl.CancelCustomContentRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  sCustomId                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::CancelCustomContentRequest(const class FString& sCustomId)
{
	static UFunction* uFnCancelCustomContentRequest = nullptr;

	if (!uFnCancelCustomContentRequest)
	{
		uFnCancelCustomContentRequest = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.CancelCustomContentRequest");
	}

	UOnlineSubsystemCommonImpl_execCancelCustomContentRequest_Params CancelCustomContentRequest_Params;
	memset(&CancelCustomContentRequest_Params, 0, sizeof(CancelCustomContentRequest_Params));
	if (!uFnCancelCustomContentRequest)
	{
		return;
	}

	memcpy_s(&CancelCustomContentRequest_Params.sCustomId, sizeof(CancelCustomContentRequest_Params.sCustomId), &sCustomId, sizeof(sCustomId));

	auto native_CancelCustomContentRequest = uFnCancelCustomContentRequest->iNative;
	uFnCancelCustomContentRequest->iNative = 0;
	this->ProcessEvent(uFnCancelCustomContentRequest, &CancelCustomContentRequest_Params, nullptr);
	uFnCancelCustomContentRequest->iNative = native_CancelCustomContentRequest;
}

// Function IpDrv.OnlineSubsystemCommonImpl.GetCustomContentAsString
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  sCustomId                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ContentData                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetCustomContentAsString(const class FString& sCustomId, class FString& outContentData)
{
	static UFunction* uFnGetCustomContentAsString = nullptr;

	if (!uFnGetCustomContentAsString)
	{
		uFnGetCustomContentAsString = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetCustomContentAsString");
	}

	UOnlineSubsystemCommonImpl_execGetCustomContentAsString_Params GetCustomContentAsString_Params;
	memset(&GetCustomContentAsString_Params, 0, sizeof(GetCustomContentAsString_Params));
	if (!uFnGetCustomContentAsString)
	{
		return;
	}

	memcpy_s(&GetCustomContentAsString_Params.sCustomId, sizeof(GetCustomContentAsString_Params.sCustomId), &sCustomId, sizeof(sCustomId));
	memcpy_s(&GetCustomContentAsString_Params.ContentData, sizeof(GetCustomContentAsString_Params.ContentData), &outContentData, sizeof(outContentData));

	auto native_GetCustomContentAsString = uFnGetCustomContentAsString->iNative;
	uFnGetCustomContentAsString->iNative = 0;
	this->ProcessEvent(uFnGetCustomContentAsString, &GetCustomContentAsString_Params, nullptr);
	uFnGetCustomContentAsString->iNative = native_GetCustomContentAsString;

	memcpy_s(&outContentData, sizeof(outContentData), &GetCustomContentAsString_Params.ContentData, sizeof(GetCustomContentAsString_Params.ContentData));
}

// Function IpDrv.OnlineSubsystemCommonImpl.GetCustomContent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  sCustomId                      (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          ContentData                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetCustomContent(const class FString& sCustomId, class TArray<uint8_t>& outContentData)
{
	static UFunction* uFnGetCustomContent = nullptr;

	if (!uFnGetCustomContent)
	{
		uFnGetCustomContent = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetCustomContent");
	}

	UOnlineSubsystemCommonImpl_execGetCustomContent_Params GetCustomContent_Params;
	memset(&GetCustomContent_Params, 0, sizeof(GetCustomContent_Params));
	if (!uFnGetCustomContent)
	{
		return;
	}

	memcpy_s(&GetCustomContent_Params.sCustomId, sizeof(GetCustomContent_Params.sCustomId), &sCustomId, sizeof(sCustomId));
	memcpy_s(&GetCustomContent_Params.ContentData, sizeof(GetCustomContent_Params.ContentData), &outContentData, sizeof(outContentData));

	auto native_GetCustomContent = uFnGetCustomContent->iNative;
	uFnGetCustomContent->iNative = 0;
	this->ProcessEvent(uFnGetCustomContent, &GetCustomContent_Params, nullptr);
	uFnGetCustomContent->iNative = native_GetCustomContent;

	memcpy_s(&outContentData, sizeof(outContentData), &GetCustomContent_Params.ContentData, sizeof(GetCustomContent_Params.ContentData));
}

// Function IpDrv.OnlineSubsystemCommonImpl.StartCustomContentRequest
// [0x00024400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  sContentName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  sCustomId                      (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         dReadCustomContentComplete     (CPF_Parm | CPF_NeedCtorLink)
// ECustomContentAccessMode       eCCAM                          (CPF_OptionalParm | CPF_Parm)
// class FString                  Category                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::StartCustomContentRequest(const class FString& sContentName, const class FString& sCustomId, const struct FScriptDelegate& dReadCustomContentComplete, ECustomContentAccessMode optionalECCAM, const class FString& optionalCategory)
{
	static UFunction* uFnStartCustomContentRequest = nullptr;

	if (!uFnStartCustomContentRequest)
	{
		uFnStartCustomContentRequest = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.StartCustomContentRequest");
	}

	UOnlineSubsystemCommonImpl_execStartCustomContentRequest_Params StartCustomContentRequest_Params;
	memset(&StartCustomContentRequest_Params, 0, sizeof(StartCustomContentRequest_Params));
	if (!uFnStartCustomContentRequest)
	{
		return;
	}

	memcpy_s(&StartCustomContentRequest_Params.sContentName, sizeof(StartCustomContentRequest_Params.sContentName), &sContentName, sizeof(sContentName));
	memcpy_s(&StartCustomContentRequest_Params.sCustomId, sizeof(StartCustomContentRequest_Params.sCustomId), &sCustomId, sizeof(sCustomId));
	memcpy_s(&StartCustomContentRequest_Params.dReadCustomContentComplete, sizeof(StartCustomContentRequest_Params.dReadCustomContentComplete), &dReadCustomContentComplete, sizeof(dReadCustomContentComplete));
	StartCustomContentRequest_Params.eCCAM = static_cast<uint8_t>(optionalECCAM);
	memcpy_s(&StartCustomContentRequest_Params.Category, sizeof(StartCustomContentRequest_Params.Category), &optionalCategory, sizeof(optionalCategory));

	auto native_StartCustomContentRequest = uFnStartCustomContentRequest->iNative;
	uFnStartCustomContentRequest->iNative = 0;
	this->ProcessEvent(uFnStartCustomContentRequest, &StartCustomContentRequest_Params, nullptr);
	uFnStartCustomContentRequest->iNative = native_StartCustomContentRequest;
}

// Function IpDrv.OnlineSubsystemCommonImpl.IsCustomContentAccessModeAvailable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ECustomContentAccessMode       eCCAM                          (CPF_Parm)

bool UOnlineSubsystemCommonImpl::IsCustomContentAccessModeAvailable(ECustomContentAccessMode eCCAM)
{
	static UFunction* uFnIsCustomContentAccessModeAvailable = nullptr;

	if (!uFnIsCustomContentAccessModeAvailable)
	{
		uFnIsCustomContentAccessModeAvailable = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.IsCustomContentAccessModeAvailable");
	}

	UOnlineSubsystemCommonImpl_execIsCustomContentAccessModeAvailable_Params IsCustomContentAccessModeAvailable_Params;
	memset(&IsCustomContentAccessModeAvailable_Params, 0, sizeof(IsCustomContentAccessModeAvailable_Params));
	if (!uFnIsCustomContentAccessModeAvailable)
	{
		return {};
	}

	IsCustomContentAccessModeAvailable_Params.eCCAM = static_cast<uint8_t>(eCCAM);

	auto native_IsCustomContentAccessModeAvailable = uFnIsCustomContentAccessModeAvailable->iNative;
	uFnIsCustomContentAccessModeAvailable->iNative = 0;
	this->ProcessEvent(uFnIsCustomContentAccessModeAvailable, &IsCustomContentAccessModeAvailable_Params, nullptr);
	uFnIsCustomContentAccessModeAvailable->iNative = native_IsCustomContentAccessModeAvailable;

	return IsCustomContentAccessModeAvailable_Params.ReturnValue;
}

// Function IpDrv.OnlineSubsystemCommonImpl.IsCustomContentTypeAvailable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ECustomContentType             CustomContentType              (CPF_Parm)

bool UOnlineSubsystemCommonImpl::IsCustomContentTypeAvailable(ECustomContentType CustomContentType)
{
	static UFunction* uFnIsCustomContentTypeAvailable = nullptr;

	if (!uFnIsCustomContentTypeAvailable)
	{
		uFnIsCustomContentTypeAvailable = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.IsCustomContentTypeAvailable");
	}

	UOnlineSubsystemCommonImpl_execIsCustomContentTypeAvailable_Params IsCustomContentTypeAvailable_Params;
	memset(&IsCustomContentTypeAvailable_Params, 0, sizeof(IsCustomContentTypeAvailable_Params));
	if (!uFnIsCustomContentTypeAvailable)
	{
		return {};
	}

	IsCustomContentTypeAvailable_Params.CustomContentType = static_cast<uint8_t>(CustomContentType);

	auto native_IsCustomContentTypeAvailable = uFnIsCustomContentTypeAvailable->iNative;
	uFnIsCustomContentTypeAvailable->iNative = 0;
	this->ProcessEvent(uFnIsCustomContentTypeAvailable, &IsCustomContentTypeAvailable_Params, nullptr);
	uFnIsCustomContentTypeAvailable->iNative = native_IsCustomContentTypeAvailable;

	return IsCustomContentTypeAvailable_Params.ReturnValue;
}

// Function IpDrv.OnlineSubsystemCommonImpl.IsCustomContentAvailable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemCommonImpl::IsCustomContentAvailable()
{
	static UFunction* uFnIsCustomContentAvailable = nullptr;

	if (!uFnIsCustomContentAvailable)
	{
		uFnIsCustomContentAvailable = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.IsCustomContentAvailable");
	}

	UOnlineSubsystemCommonImpl_execIsCustomContentAvailable_Params IsCustomContentAvailable_Params;
	memset(&IsCustomContentAvailable_Params, 0, sizeof(IsCustomContentAvailable_Params));
	if (!uFnIsCustomContentAvailable)
	{
		return {};
	}


	auto native_IsCustomContentAvailable = uFnIsCustomContentAvailable->iNative;
	uFnIsCustomContentAvailable->iNative = 0;
	this->ProcessEvent(uFnIsCustomContentAvailable, &IsCustomContentAvailable_Params, nullptr);
	uFnIsCustomContentAvailable->iNative = native_IsCustomContentAvailable;

	return IsCustomContentAvailable_Params.ReturnValue;
}

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// class TArray<struct FUniqueNetId> OutRegisteredPlayers           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outOutRegisteredPlayers)
{
	static UFunction* uFnGetRegisteredPlayers = nullptr;

	if (!uFnGetRegisteredPlayers)
	{
		uFnGetRegisteredPlayers = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers");
	}

	UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Params GetRegisteredPlayers_Params;
	memset(&GetRegisteredPlayers_Params, 0, sizeof(GetRegisteredPlayers_Params));
	if (!uFnGetRegisteredPlayers)
	{
		return;
	}

	memcpy_s(&GetRegisteredPlayers_Params.SessionName, sizeof(GetRegisteredPlayers_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&GetRegisteredPlayers_Params.OutRegisteredPlayers, sizeof(GetRegisteredPlayers_Params.OutRegisteredPlayers), &outOutRegisteredPlayers, sizeof(outOutRegisteredPlayers));

	this->ProcessEvent(uFnGetRegisteredPlayers, &GetRegisteredPlayers_Params, nullptr);

	memcpy_s(&outOutRegisteredPlayers, sizeof(outOutRegisteredPlayers), &GetRegisteredPlayers_Params.OutRegisteredPlayers, sizeof(GetRegisteredPlayers_Params.OutRegisteredPlayers));
}

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemCommonImpl::IsPlayerInSession(const class FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsPlayerInSession = nullptr;

	if (!uFnIsPlayerInSession)
	{
		uFnIsPlayerInSession = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession");
	}

	UOnlineSubsystemCommonImpl_execIsPlayerInSession_Params IsPlayerInSession_Params;
	memset(&IsPlayerInSession_Params, 0, sizeof(IsPlayerInSession_Params));
	if (!uFnIsPlayerInSession)
	{
		return {};
	}

	memcpy_s(&IsPlayerInSession_Params.SessionName, sizeof(IsPlayerInSession_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&IsPlayerInSession_Params.PlayerID, sizeof(IsPlayerInSession_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	auto native_IsPlayerInSession = uFnIsPlayerInSession->iNative;
	uFnIsPlayerInSession->iNative = 0;
	this->ProcessEvent(uFnIsPlayerInSession, &IsPlayerInSession_Params, nullptr);
	uFnIsPlayerInSession->iNative = native_IsPlayerInSession;

	return IsPlayerInSession_Params.ReturnValue;
}

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

class FString UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex");
	}

	UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memset(&GetPlayerNicknameFromIndex_Params, 0, sizeof(GetPlayerNicknameFromIndex_Params));
	if (!uFnGetPlayerNicknameFromIndex)
	{
		return {};
	}

	GetPlayerNicknameFromIndex_Params.UserIndex = UserIndex;

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        OutServerIP                    (CPF_Parm | CPF_OutParm)
// int32_t                        OutServerPort                  (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::GetServerAddr(int32_t& outOutServerIP, int32_t& outOutServerPort)
{
	static UFunction* uFnGetServerAddr = nullptr;

	if (!uFnGetServerAddr)
	{
		uFnGetServerAddr = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr");
	}

	UOnlineAuthInterfaceImpl_execGetServerAddr_Params GetServerAddr_Params;
	memset(&GetServerAddr_Params, 0, sizeof(GetServerAddr_Params));
	if (!uFnGetServerAddr)
	{
		return {};
	}

	GetServerAddr_Params.OutServerIP = outOutServerIP;
	GetServerAddr_Params.OutServerPort = outOutServerPort;

	this->ProcessEvent(uFnGetServerAddr, &GetServerAddr_Params, nullptr);

	outOutServerIP = GetServerAddr_Params.OutServerIP;
	outOutServerPort = GetServerAddr_Params.OutServerPort;

	return GetServerAddr_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            OutServerUID                   (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::GetServerUniqueId(struct FUniqueNetId& outOutServerUID)
{
	static UFunction* uFnGetServerUniqueId = nullptr;

	if (!uFnGetServerUniqueId)
	{
		uFnGetServerUniqueId = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId");
	}

	UOnlineAuthInterfaceImpl_execGetServerUniqueId_Params GetServerUniqueId_Params;
	memset(&GetServerUniqueId_Params, 0, sizeof(GetServerUniqueId_Params));
	if (!uFnGetServerUniqueId)
	{
		return {};
	}

	memcpy_s(&GetServerUniqueId_Params.OutServerUID, sizeof(GetServerUniqueId_Params.OutServerUID), &outOutServerUID, sizeof(outOutServerUID));

	this->ProcessEvent(uFnGetServerUniqueId, &GetServerUniqueId_Params, nullptr);

	memcpy_s(&outOutServerUID, sizeof(outOutServerUID), &GetServerUniqueId_Params.OutServerUID, sizeof(GetServerUniqueId_Params.OutServerUID));

	return GetServerUniqueId_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession& outOutSessionInfo)
{
	static UFunction* uFnFindLocalServerAuthSession = nullptr;

	if (!uFnFindLocalServerAuthSession)
	{
		uFnFindLocalServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Params FindLocalServerAuthSession_Params;
	memset(&FindLocalServerAuthSession_Params, 0, sizeof(FindLocalServerAuthSession_Params));
	if (!uFnFindLocalServerAuthSession)
	{
		return {};
	}

	FindLocalServerAuthSession_Params.ClientConnection = ClientConnection;
	memcpy_s(&FindLocalServerAuthSession_Params.OutSessionInfo, sizeof(FindLocalServerAuthSession_Params.OutSessionInfo), &outOutSessionInfo, sizeof(outOutSessionInfo));

	auto native_FindLocalServerAuthSession = uFnFindLocalServerAuthSession->iNative;
	uFnFindLocalServerAuthSession->iNative = 0;
	this->ProcessEvent(uFnFindLocalServerAuthSession, &FindLocalServerAuthSession_Params, nullptr);
	uFnFindLocalServerAuthSession->iNative = native_FindLocalServerAuthSession;

	memcpy_s(&outOutSessionInfo, sizeof(outOutSessionInfo), &FindLocalServerAuthSession_Params.OutSessionInfo, sizeof(FindLocalServerAuthSession_Params.OutSessionInfo));

	return FindLocalServerAuthSession_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession& outOutSessionInfo)
{
	static UFunction* uFnFindServerAuthSession = nullptr;

	if (!uFnFindServerAuthSession)
	{
		uFnFindServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindServerAuthSession_Params FindServerAuthSession_Params;
	memset(&FindServerAuthSession_Params, 0, sizeof(FindServerAuthSession_Params));
	if (!uFnFindServerAuthSession)
	{
		return {};
	}

	FindServerAuthSession_Params.ServerConnection = ServerConnection;
	memcpy_s(&FindServerAuthSession_Params.OutSessionInfo, sizeof(FindServerAuthSession_Params.OutSessionInfo), &outOutSessionInfo, sizeof(outOutSessionInfo));

	auto native_FindServerAuthSession = uFnFindServerAuthSession->iNative;
	uFnFindServerAuthSession->iNative = 0;
	this->ProcessEvent(uFnFindServerAuthSession, &FindServerAuthSession_Params, nullptr);
	uFnFindServerAuthSession->iNative = native_FindServerAuthSession;

	memcpy_s(&outOutSessionInfo, sizeof(outOutSessionInfo), &FindServerAuthSession_Params.OutSessionInfo, sizeof(FindServerAuthSession_Params.OutSessionInfo));

	return FindServerAuthSession_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession& outOutSessionInfo)
{
	static UFunction* uFnFindLocalClientAuthSession = nullptr;

	if (!uFnFindLocalClientAuthSession)
	{
		uFnFindLocalClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Params FindLocalClientAuthSession_Params;
	memset(&FindLocalClientAuthSession_Params, 0, sizeof(FindLocalClientAuthSession_Params));
	if (!uFnFindLocalClientAuthSession)
	{
		return {};
	}

	FindLocalClientAuthSession_Params.ServerConnection = ServerConnection;
	memcpy_s(&FindLocalClientAuthSession_Params.OutSessionInfo, sizeof(FindLocalClientAuthSession_Params.OutSessionInfo), &outOutSessionInfo, sizeof(outOutSessionInfo));

	auto native_FindLocalClientAuthSession = uFnFindLocalClientAuthSession->iNative;
	uFnFindLocalClientAuthSession->iNative = 0;
	this->ProcessEvent(uFnFindLocalClientAuthSession, &FindLocalClientAuthSession_Params, nullptr);
	uFnFindLocalClientAuthSession->iNative = native_FindLocalClientAuthSession;

	memcpy_s(&outOutSessionInfo, sizeof(outOutSessionInfo), &FindLocalClientAuthSession_Params.OutSessionInfo, sizeof(FindLocalClientAuthSession_Params.OutSessionInfo));

	return FindLocalClientAuthSession_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession& outOutSessionInfo)
{
	static UFunction* uFnFindClientAuthSession = nullptr;

	if (!uFnFindClientAuthSession)
	{
		uFnFindClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execFindClientAuthSession_Params FindClientAuthSession_Params;
	memset(&FindClientAuthSession_Params, 0, sizeof(FindClientAuthSession_Params));
	if (!uFnFindClientAuthSession)
	{
		return {};
	}

	FindClientAuthSession_Params.ClientConnection = ClientConnection;
	memcpy_s(&FindClientAuthSession_Params.OutSessionInfo, sizeof(FindClientAuthSession_Params.OutSessionInfo), &outOutSessionInfo, sizeof(outOutSessionInfo));

	auto native_FindClientAuthSession = uFnFindClientAuthSession->iNative;
	uFnFindClientAuthSession->iNative = 0;
	this->ProcessEvent(uFnFindClientAuthSession, &FindClientAuthSession_Params, nullptr);
	uFnFindClientAuthSession->iNative = native_FindClientAuthSession;

	memcpy_s(&outOutSessionInfo, sizeof(outOutSessionInfo), &FindClientAuthSession_Params.OutSessionInfo, sizeof(FindClientAuthSession_Params.OutSessionInfo));

	return FindClientAuthSession_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// [0x00420405] (FUNC_Final | FUNC_Iterator | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllLocalServerAuthSessions(struct FLocalAuthSession& outOutSessionInfo)
{
	static UFunction* uFnAllLocalServerAuthSessions = nullptr;

	if (!uFnAllLocalServerAuthSessions)
	{
		uFnAllLocalServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllLocalServerAuthSessions_Params AllLocalServerAuthSessions_Params;
	memset(&AllLocalServerAuthSessions_Params, 0, sizeof(AllLocalServerAuthSessions_Params));
	if (!uFnAllLocalServerAuthSessions)
	{
		return;
	}

	memcpy_s(&AllLocalServerAuthSessions_Params.OutSessionInfo, sizeof(AllLocalServerAuthSessions_Params.OutSessionInfo), &outOutSessionInfo, sizeof(outOutSessionInfo));

	auto native_AllLocalServerAuthSessions = uFnAllLocalServerAuthSessions->iNative;
	uFnAllLocalServerAuthSessions->iNative = 0;
	this->ProcessEvent(uFnAllLocalServerAuthSessions, &AllLocalServerAuthSessions_Params, nullptr);
	uFnAllLocalServerAuthSessions->iNative = native_AllLocalServerAuthSessions;

	memcpy_s(&outOutSessionInfo, sizeof(outOutSessionInfo), &AllLocalServerAuthSessions_Params.OutSessionInfo, sizeof(AllLocalServerAuthSessions_Params.OutSessionInfo));
}

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// [0x00420405] (FUNC_Final | FUNC_Iterator | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllServerAuthSessions(struct FAuthSession& outOutSessionInfo)
{
	static UFunction* uFnAllServerAuthSessions = nullptr;

	if (!uFnAllServerAuthSessions)
	{
		uFnAllServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllServerAuthSessions_Params AllServerAuthSessions_Params;
	memset(&AllServerAuthSessions_Params, 0, sizeof(AllServerAuthSessions_Params));
	if (!uFnAllServerAuthSessions)
	{
		return;
	}

	memcpy_s(&AllServerAuthSessions_Params.OutSessionInfo, sizeof(AllServerAuthSessions_Params.OutSessionInfo), &outOutSessionInfo, sizeof(outOutSessionInfo));

	auto native_AllServerAuthSessions = uFnAllServerAuthSessions->iNative;
	uFnAllServerAuthSessions->iNative = 0;
	this->ProcessEvent(uFnAllServerAuthSessions, &AllServerAuthSessions_Params, nullptr);
	uFnAllServerAuthSessions->iNative = native_AllServerAuthSessions;

	memcpy_s(&outOutSessionInfo, sizeof(outOutSessionInfo), &AllServerAuthSessions_Params.OutSessionInfo, sizeof(AllServerAuthSessions_Params.OutSessionInfo));
}

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// [0x00420405] (FUNC_Final | FUNC_Iterator | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FLocalAuthSession       OutSessionInfo                 (CPF_Parm | CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllLocalClientAuthSessions(struct FLocalAuthSession& outOutSessionInfo)
{
	static UFunction* uFnAllLocalClientAuthSessions = nullptr;

	if (!uFnAllLocalClientAuthSessions)
	{
		uFnAllLocalClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllLocalClientAuthSessions_Params AllLocalClientAuthSessions_Params;
	memset(&AllLocalClientAuthSessions_Params, 0, sizeof(AllLocalClientAuthSessions_Params));
	if (!uFnAllLocalClientAuthSessions)
	{
		return;
	}

	memcpy_s(&AllLocalClientAuthSessions_Params.OutSessionInfo, sizeof(AllLocalClientAuthSessions_Params.OutSessionInfo), &outOutSessionInfo, sizeof(outOutSessionInfo));

	auto native_AllLocalClientAuthSessions = uFnAllLocalClientAuthSessions->iNative;
	uFnAllLocalClientAuthSessions->iNative = 0;
	this->ProcessEvent(uFnAllLocalClientAuthSessions, &AllLocalClientAuthSessions_Params, nullptr);
	uFnAllLocalClientAuthSessions->iNative = native_AllLocalClientAuthSessions;

	memcpy_s(&outOutSessionInfo, sizeof(outOutSessionInfo), &AllLocalClientAuthSessions_Params.OutSessionInfo, sizeof(AllLocalClientAuthSessions_Params.OutSessionInfo));
}

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// [0x00420405] (FUNC_Final | FUNC_Iterator | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FAuthSession            OutSessionInfo                 (CPF_Parm | CPF_OutParm)

void UOnlineAuthInterfaceImpl::AllClientAuthSessions(struct FAuthSession& outOutSessionInfo)
{
	static UFunction* uFnAllClientAuthSessions = nullptr;

	if (!uFnAllClientAuthSessions)
	{
		uFnAllClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execAllClientAuthSessions_Params AllClientAuthSessions_Params;
	memset(&AllClientAuthSessions_Params, 0, sizeof(AllClientAuthSessions_Params));
	if (!uFnAllClientAuthSessions)
	{
		return;
	}

	memcpy_s(&AllClientAuthSessions_Params.OutSessionInfo, sizeof(AllClientAuthSessions_Params.OutSessionInfo), &outOutSessionInfo, sizeof(outOutSessionInfo));

	auto native_AllClientAuthSessions = uFnAllClientAuthSessions->iNative;
	uFnAllClientAuthSessions->iNative = 0;
	this->ProcessEvent(uFnAllClientAuthSessions, &AllClientAuthSessions_Params, nullptr);
	uFnAllClientAuthSessions->iNative = native_AllClientAuthSessions;

	memcpy_s(&outOutSessionInfo, sizeof(outOutSessionInfo), &AllClientAuthSessions_Params.OutSessionInfo, sizeof(AllClientAuthSessions_Params.OutSessionInfo));
}

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineAuthInterfaceImpl::EndAllRemoteServerAuthSessions()
{
	static UFunction* uFnEndAllRemoteServerAuthSessions = nullptr;

	if (!uFnEndAllRemoteServerAuthSessions)
	{
		uFnEndAllRemoteServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllRemoteServerAuthSessions_Params EndAllRemoteServerAuthSessions_Params;
	memset(&EndAllRemoteServerAuthSessions_Params, 0, sizeof(EndAllRemoteServerAuthSessions_Params));
	if (!uFnEndAllRemoteServerAuthSessions)
	{
		return;
	}


	auto native_EndAllRemoteServerAuthSessions = uFnEndAllRemoteServerAuthSessions->iNative;
	uFnEndAllRemoteServerAuthSessions->iNative = 0;
	this->ProcessEvent(uFnEndAllRemoteServerAuthSessions, &EndAllRemoteServerAuthSessions_Params, nullptr);
	uFnEndAllRemoteServerAuthSessions->iNative = native_EndAllRemoteServerAuthSessions;
}

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineAuthInterfaceImpl::EndAllLocalServerAuthSessions()
{
	static UFunction* uFnEndAllLocalServerAuthSessions = nullptr;

	if (!uFnEndAllLocalServerAuthSessions)
	{
		uFnEndAllLocalServerAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllLocalServerAuthSessions_Params EndAllLocalServerAuthSessions_Params;
	memset(&EndAllLocalServerAuthSessions_Params, 0, sizeof(EndAllLocalServerAuthSessions_Params));
	if (!uFnEndAllLocalServerAuthSessions)
	{
		return;
	}


	auto native_EndAllLocalServerAuthSessions = uFnEndAllLocalServerAuthSessions->iNative;
	uFnEndAllLocalServerAuthSessions->iNative = 0;
	this->ProcessEvent(uFnEndAllLocalServerAuthSessions, &EndAllLocalServerAuthSessions_Params, nullptr);
	uFnEndAllLocalServerAuthSessions->iNative = native_EndAllLocalServerAuthSessions;
}

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP)
{
	static UFunction* uFnEndRemoteServerAuthSession = nullptr;

	if (!uFnEndRemoteServerAuthSession)
	{
		uFnEndRemoteServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndRemoteServerAuthSession_Params EndRemoteServerAuthSession_Params;
	memset(&EndRemoteServerAuthSession_Params, 0, sizeof(EndRemoteServerAuthSession_Params));
	if (!uFnEndRemoteServerAuthSession)
	{
		return;
	}

	memcpy_s(&EndRemoteServerAuthSession_Params.ServerUID, sizeof(EndRemoteServerAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	EndRemoteServerAuthSession_Params.ServerIP = ServerIP;

	auto native_EndRemoteServerAuthSession = uFnEndRemoteServerAuthSession->iNative;
	uFnEndRemoteServerAuthSession->iNative = 0;
	this->ProcessEvent(uFnEndRemoteServerAuthSession, &EndRemoteServerAuthSession_Params, nullptr);
	uFnEndRemoteServerAuthSession->iNative = native_EndRemoteServerAuthSession;
}

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP)
{
	static UFunction* uFnEndLocalServerAuthSession = nullptr;

	if (!uFnEndLocalServerAuthSession)
	{
		uFnEndLocalServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndLocalServerAuthSession_Params EndLocalServerAuthSession_Params;
	memset(&EndLocalServerAuthSession_Params, 0, sizeof(EndLocalServerAuthSession_Params));
	if (!uFnEndLocalServerAuthSession)
	{
		return;
	}

	memcpy_s(&EndLocalServerAuthSession_Params.ClientUID, sizeof(EndLocalServerAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	EndLocalServerAuthSession_Params.ClientIP = ClientIP;

	auto native_EndLocalServerAuthSession = uFnEndLocalServerAuthSession->iNative;
	uFnEndLocalServerAuthSession->iNative = 0;
	this->ProcessEvent(uFnEndLocalServerAuthSession, &EndLocalServerAuthSession_Params, nullptr);
	uFnEndLocalServerAuthSession->iNative = native_EndLocalServerAuthSession;
}

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyServerAuthSession = nullptr;

	if (!uFnVerifyServerAuthSession)
	{
		uFnVerifyServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execVerifyServerAuthSession_Params VerifyServerAuthSession_Params;
	memset(&VerifyServerAuthSession_Params, 0, sizeof(VerifyServerAuthSession_Params));
	if (!uFnVerifyServerAuthSession)
	{
		return {};
	}

	memcpy_s(&VerifyServerAuthSession_Params.ServerUID, sizeof(VerifyServerAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	VerifyServerAuthSession_Params.ServerIP = ServerIP;
	VerifyServerAuthSession_Params.AuthTicketUID = AuthTicketUID;

	this->ProcessEvent(uFnVerifyServerAuthSession, &VerifyServerAuthSession_Params, nullptr);

	return VerifyServerAuthSession_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::CreateServerAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t& outOutAuthTicketUID)
{
	static UFunction* uFnCreateServerAuthSession = nullptr;

	if (!uFnCreateServerAuthSession)
	{
		uFnCreateServerAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession");
	}

	UOnlineAuthInterfaceImpl_execCreateServerAuthSession_Params CreateServerAuthSession_Params;
	memset(&CreateServerAuthSession_Params, 0, sizeof(CreateServerAuthSession_Params));
	if (!uFnCreateServerAuthSession)
	{
		return {};
	}

	memcpy_s(&CreateServerAuthSession_Params.ClientUID, sizeof(CreateServerAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	CreateServerAuthSession_Params.ClientIP = ClientIP;
	CreateServerAuthSession_Params.ClientPort = ClientPort;
	CreateServerAuthSession_Params.OutAuthTicketUID = outOutAuthTicketUID;

	this->ProcessEvent(uFnCreateServerAuthSession, &CreateServerAuthSession_Params, nullptr);

	outOutAuthTicketUID = CreateServerAuthSession_Params.OutAuthTicketUID;

	return CreateServerAuthSession_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineAuthInterfaceImpl::EndAllRemoteClientAuthSessions()
{
	static UFunction* uFnEndAllRemoteClientAuthSessions = nullptr;

	if (!uFnEndAllRemoteClientAuthSessions)
	{
		uFnEndAllRemoteClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllRemoteClientAuthSessions_Params EndAllRemoteClientAuthSessions_Params;
	memset(&EndAllRemoteClientAuthSessions_Params, 0, sizeof(EndAllRemoteClientAuthSessions_Params));
	if (!uFnEndAllRemoteClientAuthSessions)
	{
		return;
	}


	auto native_EndAllRemoteClientAuthSessions = uFnEndAllRemoteClientAuthSessions->iNative;
	uFnEndAllRemoteClientAuthSessions->iNative = 0;
	this->ProcessEvent(uFnEndAllRemoteClientAuthSessions, &EndAllRemoteClientAuthSessions_Params, nullptr);
	uFnEndAllRemoteClientAuthSessions->iNative = native_EndAllRemoteClientAuthSessions;
}

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineAuthInterfaceImpl::EndAllLocalClientAuthSessions()
{
	static UFunction* uFnEndAllLocalClientAuthSessions = nullptr;

	if (!uFnEndAllLocalClientAuthSessions)
	{
		uFnEndAllLocalClientAuthSessions = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions");
	}

	UOnlineAuthInterfaceImpl_execEndAllLocalClientAuthSessions_Params EndAllLocalClientAuthSessions_Params;
	memset(&EndAllLocalClientAuthSessions_Params, 0, sizeof(EndAllLocalClientAuthSessions_Params));
	if (!uFnEndAllLocalClientAuthSessions)
	{
		return;
	}


	auto native_EndAllLocalClientAuthSessions = uFnEndAllLocalClientAuthSessions->iNative;
	uFnEndAllLocalClientAuthSessions->iNative = 0;
	this->ProcessEvent(uFnEndAllLocalClientAuthSessions, &EndAllLocalClientAuthSessions_Params, nullptr);
	uFnEndAllLocalClientAuthSessions->iNative = native_EndAllLocalClientAuthSessions;
}

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP)
{
	static UFunction* uFnEndRemoteClientAuthSession = nullptr;

	if (!uFnEndRemoteClientAuthSession)
	{
		uFnEndRemoteClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndRemoteClientAuthSession_Params EndRemoteClientAuthSession_Params;
	memset(&EndRemoteClientAuthSession_Params, 0, sizeof(EndRemoteClientAuthSession_Params));
	if (!uFnEndRemoteClientAuthSession)
	{
		return;
	}

	memcpy_s(&EndRemoteClientAuthSession_Params.ClientUID, sizeof(EndRemoteClientAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	EndRemoteClientAuthSession_Params.ClientIP = ClientIP;

	auto native_EndRemoteClientAuthSession = uFnEndRemoteClientAuthSession->iNative;
	uFnEndRemoteClientAuthSession->iNative = 0;
	this->ProcessEvent(uFnEndRemoteClientAuthSession, &EndRemoteClientAuthSession_Params, nullptr);
	uFnEndRemoteClientAuthSession->iNative = native_EndRemoteClientAuthSession;
}

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)

void UOnlineAuthInterfaceImpl::EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort)
{
	static UFunction* uFnEndLocalClientAuthSession = nullptr;

	if (!uFnEndLocalClientAuthSession)
	{
		uFnEndLocalClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execEndLocalClientAuthSession_Params EndLocalClientAuthSession_Params;
	memset(&EndLocalClientAuthSession_Params, 0, sizeof(EndLocalClientAuthSession_Params));
	if (!uFnEndLocalClientAuthSession)
	{
		return;
	}

	memcpy_s(&EndLocalClientAuthSession_Params.ServerUID, sizeof(EndLocalClientAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	EndLocalClientAuthSession_Params.ServerIP = ServerIP;
	EndLocalClientAuthSession_Params.ServerPort = ServerPort;

	auto native_EndLocalClientAuthSession = uFnEndLocalClientAuthSession->iNative;
	uFnEndLocalClientAuthSession->iNative = 0;
	this->ProcessEvent(uFnEndLocalClientAuthSession, &EndLocalClientAuthSession_Params, nullptr);
	uFnEndLocalClientAuthSession->iNative = native_EndLocalClientAuthSession;
}

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyClientAuthSession = nullptr;

	if (!uFnVerifyClientAuthSession)
	{
		uFnVerifyClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execVerifyClientAuthSession_Params VerifyClientAuthSession_Params;
	memset(&VerifyClientAuthSession_Params, 0, sizeof(VerifyClientAuthSession_Params));
	if (!uFnVerifyClientAuthSession)
	{
		return {};
	}

	memcpy_s(&VerifyClientAuthSession_Params.ClientUID, sizeof(VerifyClientAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	VerifyClientAuthSession_Params.ClientIP = ClientIP;
	VerifyClientAuthSession_Params.ClientPort = ClientPort;
	VerifyClientAuthSession_Params.AuthTicketUID = AuthTicketUID;

	this->ProcessEvent(uFnVerifyClientAuthSession, &VerifyClientAuthSession_Params, nullptr);

	return VerifyClientAuthSession_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)
// uint32_t                       bSecure                        (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceImpl::CreateClientAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort, bool bSecure, int32_t& outOutAuthTicketUID)
{
	static UFunction* uFnCreateClientAuthSession = nullptr;

	if (!uFnCreateClientAuthSession)
	{
		uFnCreateClientAuthSession = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession");
	}

	UOnlineAuthInterfaceImpl_execCreateClientAuthSession_Params CreateClientAuthSession_Params;
	memset(&CreateClientAuthSession_Params, 0, sizeof(CreateClientAuthSession_Params));
	if (!uFnCreateClientAuthSession)
	{
		return {};
	}

	memcpy_s(&CreateClientAuthSession_Params.ServerUID, sizeof(CreateClientAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	CreateClientAuthSession_Params.ServerIP = ServerIP;
	CreateClientAuthSession_Params.ServerPort = ServerPort;
	CreateClientAuthSession_Params.bSecure = bSecure;
	CreateClientAuthSession_Params.OutAuthTicketUID = outOutAuthTicketUID;

	this->ProcessEvent(uFnCreateClientAuthSession, &CreateClientAuthSession_Params, nullptr);

	outOutAuthTicketUID = CreateClientAuthSession_Params.OutAuthTicketUID;

	return CreateClientAuthSession_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::SendServerAuthRetryRequest()
{
	static UFunction* uFnSendServerAuthRetryRequest = nullptr;

	if (!uFnSendServerAuthRetryRequest)
	{
		uFnSendServerAuthRetryRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest");
	}

	UOnlineAuthInterfaceImpl_execSendServerAuthRetryRequest_Params SendServerAuthRetryRequest_Params;
	memset(&SendServerAuthRetryRequest_Params, 0, sizeof(SendServerAuthRetryRequest_Params));
	if (!uFnSendServerAuthRetryRequest)
	{
		return {};
	}


	auto native_SendServerAuthRetryRequest = uFnSendServerAuthRetryRequest->iNative;
	uFnSendServerAuthRetryRequest->iNative = 0;
	this->ProcessEvent(uFnSendServerAuthRetryRequest, &SendServerAuthRetryRequest_Params, nullptr);
	uFnSendServerAuthRetryRequest->iNative = native_SendServerAuthRetryRequest;

	return SendServerAuthRetryRequest_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendClientAuthEndSessionRequest(class UPlayer* ClientConnection)
{
	static UFunction* uFnSendClientAuthEndSessionRequest = nullptr;

	if (!uFnSendClientAuthEndSessionRequest)
	{
		uFnSendClientAuthEndSessionRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest");
	}

	UOnlineAuthInterfaceImpl_execSendClientAuthEndSessionRequest_Params SendClientAuthEndSessionRequest_Params;
	memset(&SendClientAuthEndSessionRequest_Params, 0, sizeof(SendClientAuthEndSessionRequest_Params));
	if (!uFnSendClientAuthEndSessionRequest)
	{
		return {};
	}

	SendClientAuthEndSessionRequest_Params.ClientConnection = ClientConnection;

	auto native_SendClientAuthEndSessionRequest = uFnSendClientAuthEndSessionRequest->iNative;
	uFnSendClientAuthEndSessionRequest->iNative = 0;
	this->ProcessEvent(uFnSendClientAuthEndSessionRequest, &SendClientAuthEndSessionRequest_Params, nullptr);
	uFnSendClientAuthEndSessionRequest->iNative = native_SendClientAuthEndSessionRequest;

	return SendClientAuthEndSessionRequest_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendServerAuthResponse(class UPlayer* ClientConnection, int32_t AuthTicketUID)
{
	static UFunction* uFnSendServerAuthResponse = nullptr;

	if (!uFnSendServerAuthResponse)
	{
		uFnSendServerAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execSendServerAuthResponse_Params SendServerAuthResponse_Params;
	memset(&SendServerAuthResponse_Params, 0, sizeof(SendServerAuthResponse_Params));
	if (!uFnSendServerAuthResponse)
	{
		return {};
	}

	SendServerAuthResponse_Params.ClientConnection = ClientConnection;
	SendServerAuthResponse_Params.AuthTicketUID = AuthTicketUID;

	auto native_SendServerAuthResponse = uFnSendServerAuthResponse->iNative;
	uFnSendServerAuthResponse->iNative = 0;
	this->ProcessEvent(uFnSendServerAuthResponse, &SendServerAuthResponse_Params, nullptr);
	uFnSendServerAuthResponse->iNative = native_SendServerAuthResponse;

	return SendServerAuthResponse_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendClientAuthResponse(int32_t AuthTicketUID)
{
	static UFunction* uFnSendClientAuthResponse = nullptr;

	if (!uFnSendClientAuthResponse)
	{
		uFnSendClientAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execSendClientAuthResponse_Params SendClientAuthResponse_Params;
	memset(&SendClientAuthResponse_Params, 0, sizeof(SendClientAuthResponse_Params));
	if (!uFnSendClientAuthResponse)
	{
		return {};
	}

	SendClientAuthResponse_Params.AuthTicketUID = AuthTicketUID;

	auto native_SendClientAuthResponse = uFnSendClientAuthResponse->iNative;
	uFnSendClientAuthResponse->iNative = 0;
	this->ProcessEvent(uFnSendClientAuthResponse, &SendClientAuthResponse_Params, nullptr);
	uFnSendClientAuthResponse->iNative = native_SendClientAuthResponse;

	return SendClientAuthResponse_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendServerAuthRequest(const struct FUniqueNetId& ServerUID)
{
	static UFunction* uFnSendServerAuthRequest = nullptr;

	if (!uFnSendServerAuthRequest)
	{
		uFnSendServerAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execSendServerAuthRequest_Params SendServerAuthRequest_Params;
	memset(&SendServerAuthRequest_Params, 0, sizeof(SendServerAuthRequest_Params));
	if (!uFnSendServerAuthRequest)
	{
		return {};
	}

	memcpy_s(&SendServerAuthRequest_Params.ServerUID, sizeof(SendServerAuthRequest_Params.ServerUID), &ServerUID, sizeof(ServerUID));

	this->ProcessEvent(uFnSendServerAuthRequest, &SendServerAuthRequest_Params, nullptr);

	return SendServerAuthRequest_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)

bool UOnlineAuthInterfaceImpl::SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID)
{
	static UFunction* uFnSendClientAuthRequest = nullptr;

	if (!uFnSendClientAuthRequest)
	{
		uFnSendClientAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execSendClientAuthRequest_Params SendClientAuthRequest_Params;
	memset(&SendClientAuthRequest_Params, 0, sizeof(SendClientAuthRequest_Params));
	if (!uFnSendClientAuthRequest)
	{
		return {};
	}

	SendClientAuthRequest_Params.ClientConnection = ClientConnection;
	memcpy_s(&SendClientAuthRequest_Params.ClientUID, sizeof(SendClientAuthRequest_Params.ClientUID), &ClientUID, sizeof(ClientUID));

	this->ProcessEvent(uFnSendClientAuthRequest, &SendClientAuthRequest_Params, nullptr);

	return SendClientAuthRequest_Params.ReturnValue;
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate)
{
	static UFunction* uFnClearServerConnectionCloseDelegate = nullptr;

	if (!uFnClearServerConnectionCloseDelegate)
	{
		uFnClearServerConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Params ClearServerConnectionCloseDelegate_Params;
	memset(&ClearServerConnectionCloseDelegate_Params, 0, sizeof(ClearServerConnectionCloseDelegate_Params));
	if (!uFnClearServerConnectionCloseDelegate)
	{
		return;
	}

	memcpy_s(&ClearServerConnectionCloseDelegate_Params.ServerConnectionCloseDelegate, sizeof(ClearServerConnectionCloseDelegate_Params.ServerConnectionCloseDelegate), &ServerConnectionCloseDelegate, sizeof(ServerConnectionCloseDelegate));

	this->ProcessEvent(uFnClearServerConnectionCloseDelegate, &ClearServerConnectionCloseDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate)
{
	static UFunction* uFnAddServerConnectionCloseDelegate = nullptr;

	if (!uFnAddServerConnectionCloseDelegate)
	{
		uFnAddServerConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Params AddServerConnectionCloseDelegate_Params;
	memset(&AddServerConnectionCloseDelegate_Params, 0, sizeof(AddServerConnectionCloseDelegate_Params));
	if (!uFnAddServerConnectionCloseDelegate)
	{
		return;
	}

	memcpy_s(&AddServerConnectionCloseDelegate_Params.ServerConnectionCloseDelegate, sizeof(AddServerConnectionCloseDelegate_Params.ServerConnectionCloseDelegate), &ServerConnectionCloseDelegate, sizeof(ServerConnectionCloseDelegate));

	this->ProcessEvent(uFnAddServerConnectionCloseDelegate, &AddServerConnectionCloseDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UPlayer*                 ServerConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerConnectionClose(class UPlayer* ServerConnection)
{
	static UFunction* uFnOnServerConnectionClose = nullptr;

	if (!uFnOnServerConnectionClose)
	{
		uFnOnServerConnectionClose = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose");
	}

	UOnlineAuthInterfaceImpl_execOnServerConnectionClose_Params OnServerConnectionClose_Params;
	memset(&OnServerConnectionClose_Params, 0, sizeof(OnServerConnectionClose_Params));
	if (!uFnOnServerConnectionClose)
	{
		return;
	}

	OnServerConnectionClose_Params.ServerConnection = ServerConnection;

	this->ProcessEvent(uFnOnServerConnectionClose, &OnServerConnectionClose_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate)
{
	static UFunction* uFnClearClientConnectionCloseDelegate = nullptr;

	if (!uFnClearClientConnectionCloseDelegate)
	{
		uFnClearClientConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Params ClearClientConnectionCloseDelegate_Params;
	memset(&ClearClientConnectionCloseDelegate_Params, 0, sizeof(ClearClientConnectionCloseDelegate_Params));
	if (!uFnClearClientConnectionCloseDelegate)
	{
		return;
	}

	memcpy_s(&ClearClientConnectionCloseDelegate_Params.ClientConnectionCloseDelegate, sizeof(ClearClientConnectionCloseDelegate_Params.ClientConnectionCloseDelegate), &ClientConnectionCloseDelegate, sizeof(ClientConnectionCloseDelegate));

	this->ProcessEvent(uFnClearClientConnectionCloseDelegate, &ClearClientConnectionCloseDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate)
{
	static UFunction* uFnAddClientConnectionCloseDelegate = nullptr;

	if (!uFnAddClientConnectionCloseDelegate)
	{
		uFnAddClientConnectionCloseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Params AddClientConnectionCloseDelegate_Params;
	memset(&AddClientConnectionCloseDelegate_Params, 0, sizeof(AddClientConnectionCloseDelegate_Params));
	if (!uFnAddClientConnectionCloseDelegate)
	{
		return;
	}

	memcpy_s(&AddClientConnectionCloseDelegate_Params.ClientConnectionCloseDelegate, sizeof(AddClientConnectionCloseDelegate_Params.ClientConnectionCloseDelegate), &ClientConnectionCloseDelegate, sizeof(ClientConnectionCloseDelegate));

	this->ProcessEvent(uFnAddClientConnectionCloseDelegate, &AddClientConnectionCloseDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UPlayer*                 ClientConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientConnectionClose(class UPlayer* ClientConnection)
{
	static UFunction* uFnOnClientConnectionClose = nullptr;

	if (!uFnOnClientConnectionClose)
	{
		uFnOnClientConnectionClose = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose");
	}

	UOnlineAuthInterfaceImpl_execOnClientConnectionClose_Params OnClientConnectionClose_Params;
	memset(&OnClientConnectionClose_Params, 0, sizeof(OnClientConnectionClose_Params));
	if (!uFnOnClientConnectionClose)
	{
		return;
	}

	OnClientConnectionClose_Params.ClientConnection = ClientConnection;

	this->ProcessEvent(uFnOnClientConnectionClose, &OnClientConnectionClose_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate)
{
	static UFunction* uFnClearServerAuthRetryRequestDelegate = nullptr;

	if (!uFnClearServerAuthRetryRequestDelegate)
	{
		uFnClearServerAuthRetryRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthRetryRequestDelegate_Params ClearServerAuthRetryRequestDelegate_Params;
	memset(&ClearServerAuthRetryRequestDelegate_Params, 0, sizeof(ClearServerAuthRetryRequestDelegate_Params));
	if (!uFnClearServerAuthRetryRequestDelegate)
	{
		return;
	}

	memcpy_s(&ClearServerAuthRetryRequestDelegate_Params.ServerAuthRetryRequestDelegate, sizeof(ClearServerAuthRetryRequestDelegate_Params.ServerAuthRetryRequestDelegate), &ServerAuthRetryRequestDelegate, sizeof(ServerAuthRetryRequestDelegate));

	this->ProcessEvent(uFnClearServerAuthRetryRequestDelegate, &ClearServerAuthRetryRequestDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate)
{
	static UFunction* uFnAddServerAuthRetryRequestDelegate = nullptr;

	if (!uFnAddServerAuthRetryRequestDelegate)
	{
		uFnAddServerAuthRetryRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthRetryRequestDelegate_Params AddServerAuthRetryRequestDelegate_Params;
	memset(&AddServerAuthRetryRequestDelegate_Params, 0, sizeof(AddServerAuthRetryRequestDelegate_Params));
	if (!uFnAddServerAuthRetryRequestDelegate)
	{
		return;
	}

	memcpy_s(&AddServerAuthRetryRequestDelegate_Params.ServerAuthRetryRequestDelegate, sizeof(AddServerAuthRetryRequestDelegate_Params.ServerAuthRetryRequestDelegate), &ServerAuthRetryRequestDelegate, sizeof(ServerAuthRetryRequestDelegate));

	this->ProcessEvent(uFnAddServerAuthRetryRequestDelegate, &AddServerAuthRetryRequestDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UPlayer*                 ClientConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRetryRequest(class UPlayer* ClientConnection)
{
	static UFunction* uFnOnServerAuthRetryRequest = nullptr;

	if (!uFnOnServerAuthRetryRequest)
	{
		uFnOnServerAuthRetryRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthRetryRequest_Params OnServerAuthRetryRequest_Params;
	memset(&OnServerAuthRetryRequest_Params, 0, sizeof(OnServerAuthRetryRequest_Params));
	if (!uFnOnServerAuthRetryRequest)
	{
		return;
	}

	OnServerAuthRetryRequest_Params.ClientConnection = ClientConnection;

	this->ProcessEvent(uFnOnServerAuthRetryRequest, &OnServerAuthRetryRequest_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate)
{
	static UFunction* uFnClearClientAuthEndSessionRequestDelegate = nullptr;

	if (!uFnClearClientAuthEndSessionRequestDelegate)
	{
		uFnClearClientAuthEndSessionRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthEndSessionRequestDelegate_Params ClearClientAuthEndSessionRequestDelegate_Params;
	memset(&ClearClientAuthEndSessionRequestDelegate_Params, 0, sizeof(ClearClientAuthEndSessionRequestDelegate_Params));
	if (!uFnClearClientAuthEndSessionRequestDelegate)
	{
		return;
	}

	memcpy_s(&ClearClientAuthEndSessionRequestDelegate_Params.ClientAuthEndSessionRequestDelegate, sizeof(ClearClientAuthEndSessionRequestDelegate_Params.ClientAuthEndSessionRequestDelegate), &ClientAuthEndSessionRequestDelegate, sizeof(ClientAuthEndSessionRequestDelegate));

	this->ProcessEvent(uFnClearClientAuthEndSessionRequestDelegate, &ClearClientAuthEndSessionRequestDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate)
{
	static UFunction* uFnAddClientAuthEndSessionRequestDelegate = nullptr;

	if (!uFnAddClientAuthEndSessionRequestDelegate)
	{
		uFnAddClientAuthEndSessionRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthEndSessionRequestDelegate_Params AddClientAuthEndSessionRequestDelegate_Params;
	memset(&AddClientAuthEndSessionRequestDelegate_Params, 0, sizeof(AddClientAuthEndSessionRequestDelegate_Params));
	if (!uFnAddClientAuthEndSessionRequestDelegate)
	{
		return;
	}

	memcpy_s(&AddClientAuthEndSessionRequestDelegate_Params.ClientAuthEndSessionRequestDelegate, sizeof(AddClientAuthEndSessionRequestDelegate_Params.ClientAuthEndSessionRequestDelegate), &ClientAuthEndSessionRequestDelegate, sizeof(ClientAuthEndSessionRequestDelegate));

	this->ProcessEvent(uFnAddClientAuthEndSessionRequestDelegate, &AddClientAuthEndSessionRequestDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UPlayer*                 ServerConnection               (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthEndSessionRequest(class UPlayer* ServerConnection)
{
	static UFunction* uFnOnClientAuthEndSessionRequest = nullptr;

	if (!uFnOnClientAuthEndSessionRequest)
	{
		uFnOnClientAuthEndSessionRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthEndSessionRequest_Params OnClientAuthEndSessionRequest_Params;
	memset(&OnClientAuthEndSessionRequest_Params, 0, sizeof(OnClientAuthEndSessionRequest_Params));
	if (!uFnOnClientAuthEndSessionRequest)
	{
		return;
	}

	OnClientAuthEndSessionRequest_Params.ServerConnection = ServerConnection;

	this->ProcessEvent(uFnOnClientAuthEndSessionRequest, &OnClientAuthEndSessionRequest_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate)
{
	static UFunction* uFnClearServerAuthCompleteDelegate = nullptr;

	if (!uFnClearServerAuthCompleteDelegate)
	{
		uFnClearServerAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthCompleteDelegate_Params ClearServerAuthCompleteDelegate_Params;
	memset(&ClearServerAuthCompleteDelegate_Params, 0, sizeof(ClearServerAuthCompleteDelegate_Params));
	if (!uFnClearServerAuthCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearServerAuthCompleteDelegate_Params.ServerAuthCompleteDelegate, sizeof(ClearServerAuthCompleteDelegate_Params.ServerAuthCompleteDelegate), &ServerAuthCompleteDelegate, sizeof(ServerAuthCompleteDelegate));

	this->ProcessEvent(uFnClearServerAuthCompleteDelegate, &ClearServerAuthCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate)
{
	static UFunction* uFnAddServerAuthCompleteDelegate = nullptr;

	if (!uFnAddServerAuthCompleteDelegate)
	{
		uFnAddServerAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthCompleteDelegate_Params AddServerAuthCompleteDelegate_Params;
	memset(&AddServerAuthCompleteDelegate_Params, 0, sizeof(AddServerAuthCompleteDelegate_Params));
	if (!uFnAddServerAuthCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddServerAuthCompleteDelegate_Params.ServerAuthCompleteDelegate, sizeof(AddServerAuthCompleteDelegate_Params.ServerAuthCompleteDelegate), &ServerAuthCompleteDelegate, sizeof(ServerAuthCompleteDelegate));

	this->ProcessEvent(uFnAddServerAuthCompleteDelegate, &AddServerAuthCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bSuccess                       (CPF_Parm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// class UPlayer*                 ServerConnection               (CPF_Parm)
// class FString                  ExtraInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnServerAuthComplete(bool bSuccess, const struct FUniqueNetId& ServerUID, class UPlayer* ServerConnection, const class FString& ExtraInfo)
{
	static UFunction* uFnOnServerAuthComplete = nullptr;

	if (!uFnOnServerAuthComplete)
	{
		uFnOnServerAuthComplete = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthComplete_Params OnServerAuthComplete_Params;
	memset(&OnServerAuthComplete_Params, 0, sizeof(OnServerAuthComplete_Params));
	if (!uFnOnServerAuthComplete)
	{
		return;
	}

	OnServerAuthComplete_Params.bSuccess = bSuccess;
	memcpy_s(&OnServerAuthComplete_Params.ServerUID, sizeof(OnServerAuthComplete_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	OnServerAuthComplete_Params.ServerConnection = ServerConnection;
	memcpy_s(&OnServerAuthComplete_Params.ExtraInfo, sizeof(OnServerAuthComplete_Params.ExtraInfo), &ExtraInfo, sizeof(ExtraInfo));

	this->ProcessEvent(uFnOnServerAuthComplete, &OnServerAuthComplete_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate)
{
	static UFunction* uFnClearClientAuthCompleteDelegate = nullptr;

	if (!uFnClearClientAuthCompleteDelegate)
	{
		uFnClearClientAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthCompleteDelegate_Params ClearClientAuthCompleteDelegate_Params;
	memset(&ClearClientAuthCompleteDelegate_Params, 0, sizeof(ClearClientAuthCompleteDelegate_Params));
	if (!uFnClearClientAuthCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearClientAuthCompleteDelegate_Params.ClientAuthCompleteDelegate, sizeof(ClearClientAuthCompleteDelegate_Params.ClientAuthCompleteDelegate), &ClientAuthCompleteDelegate, sizeof(ClientAuthCompleteDelegate));

	this->ProcessEvent(uFnClearClientAuthCompleteDelegate, &ClearClientAuthCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate)
{
	static UFunction* uFnAddClientAuthCompleteDelegate = nullptr;

	if (!uFnAddClientAuthCompleteDelegate)
	{
		uFnAddClientAuthCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthCompleteDelegate_Params AddClientAuthCompleteDelegate_Params;
	memset(&AddClientAuthCompleteDelegate_Params, 0, sizeof(AddClientAuthCompleteDelegate_Params));
	if (!uFnAddClientAuthCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddClientAuthCompleteDelegate_Params.ClientAuthCompleteDelegate, sizeof(AddClientAuthCompleteDelegate_Params.ClientAuthCompleteDelegate), &ClientAuthCompleteDelegate, sizeof(ClientAuthCompleteDelegate));

	this->ProcessEvent(uFnAddClientAuthCompleteDelegate, &AddClientAuthCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bSuccess                       (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// class FString                  ExtraInfo                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnClientAuthComplete(bool bSuccess, const struct FUniqueNetId& ClientUID, class UPlayer* ClientConnection, const class FString& ExtraInfo)
{
	static UFunction* uFnOnClientAuthComplete = nullptr;

	if (!uFnOnClientAuthComplete)
	{
		uFnOnClientAuthComplete = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthComplete_Params OnClientAuthComplete_Params;
	memset(&OnClientAuthComplete_Params, 0, sizeof(OnClientAuthComplete_Params));
	if (!uFnOnClientAuthComplete)
	{
		return;
	}

	OnClientAuthComplete_Params.bSuccess = bSuccess;
	memcpy_s(&OnClientAuthComplete_Params.ClientUID, sizeof(OnClientAuthComplete_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	OnClientAuthComplete_Params.ClientConnection = ClientConnection;
	memcpy_s(&OnClientAuthComplete_Params.ExtraInfo, sizeof(OnClientAuthComplete_Params.ExtraInfo), &ExtraInfo, sizeof(ExtraInfo));

	this->ProcessEvent(uFnOnClientAuthComplete, &OnClientAuthComplete_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate)
{
	static UFunction* uFnClearServerAuthResponseDelegate = nullptr;

	if (!uFnClearServerAuthResponseDelegate)
	{
		uFnClearServerAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthResponseDelegate_Params ClearServerAuthResponseDelegate_Params;
	memset(&ClearServerAuthResponseDelegate_Params, 0, sizeof(ClearServerAuthResponseDelegate_Params));
	if (!uFnClearServerAuthResponseDelegate)
	{
		return;
	}

	memcpy_s(&ClearServerAuthResponseDelegate_Params.ServerAuthResponseDelegate, sizeof(ClearServerAuthResponseDelegate_Params.ServerAuthResponseDelegate), &ServerAuthResponseDelegate, sizeof(ServerAuthResponseDelegate));

	this->ProcessEvent(uFnClearServerAuthResponseDelegate, &ClearServerAuthResponseDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate)
{
	static UFunction* uFnAddServerAuthResponseDelegate = nullptr;

	if (!uFnAddServerAuthResponseDelegate)
	{
		uFnAddServerAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthResponseDelegate_Params AddServerAuthResponseDelegate_Params;
	memset(&AddServerAuthResponseDelegate_Params, 0, sizeof(AddServerAuthResponseDelegate_Params));
	if (!uFnAddServerAuthResponseDelegate)
	{
		return;
	}

	memcpy_s(&AddServerAuthResponseDelegate_Params.ServerAuthResponseDelegate, sizeof(AddServerAuthResponseDelegate_Params.ServerAuthResponseDelegate), &ServerAuthResponseDelegate, sizeof(ServerAuthResponseDelegate));

	this->ProcessEvent(uFnAddServerAuthResponseDelegate, &AddServerAuthResponseDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthResponse(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t AuthTicketUID)
{
	static UFunction* uFnOnServerAuthResponse = nullptr;

	if (!uFnOnServerAuthResponse)
	{
		uFnOnServerAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthResponse_Params OnServerAuthResponse_Params;
	memset(&OnServerAuthResponse_Params, 0, sizeof(OnServerAuthResponse_Params));
	if (!uFnOnServerAuthResponse)
	{
		return;
	}

	memcpy_s(&OnServerAuthResponse_Params.ServerUID, sizeof(OnServerAuthResponse_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	OnServerAuthResponse_Params.ServerIP = ServerIP;
	OnServerAuthResponse_Params.AuthTicketUID = AuthTicketUID;

	this->ProcessEvent(uFnOnServerAuthResponse, &OnServerAuthResponse_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate)
{
	static UFunction* uFnClearClientAuthResponseDelegate = nullptr;

	if (!uFnClearClientAuthResponseDelegate)
	{
		uFnClearClientAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthResponseDelegate_Params ClearClientAuthResponseDelegate_Params;
	memset(&ClearClientAuthResponseDelegate_Params, 0, sizeof(ClearClientAuthResponseDelegate_Params));
	if (!uFnClearClientAuthResponseDelegate)
	{
		return;
	}

	memcpy_s(&ClearClientAuthResponseDelegate_Params.ClientAuthResponseDelegate, sizeof(ClearClientAuthResponseDelegate_Params.ClientAuthResponseDelegate), &ClientAuthResponseDelegate, sizeof(ClientAuthResponseDelegate));

	this->ProcessEvent(uFnClearClientAuthResponseDelegate, &ClearClientAuthResponseDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthResponseDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate)
{
	static UFunction* uFnAddClientAuthResponseDelegate = nullptr;

	if (!uFnAddClientAuthResponseDelegate)
	{
		uFnAddClientAuthResponseDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthResponseDelegate_Params AddClientAuthResponseDelegate_Params;
	memset(&AddClientAuthResponseDelegate_Params, 0, sizeof(AddClientAuthResponseDelegate_Params));
	if (!uFnAddClientAuthResponseDelegate)
	{
		return;
	}

	memcpy_s(&AddClientAuthResponseDelegate_Params.ClientAuthResponseDelegate, sizeof(AddClientAuthResponseDelegate_Params.ClientAuthResponseDelegate), &ClientAuthResponseDelegate, sizeof(ClientAuthResponseDelegate));

	this->ProcessEvent(uFnAddClientAuthResponseDelegate, &AddClientAuthResponseDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthResponse(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t AuthTicketUID)
{
	static UFunction* uFnOnClientAuthResponse = nullptr;

	if (!uFnOnClientAuthResponse)
	{
		uFnOnClientAuthResponse = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthResponse_Params OnClientAuthResponse_Params;
	memset(&OnClientAuthResponse_Params, 0, sizeof(OnClientAuthResponse_Params));
	if (!uFnOnClientAuthResponse)
	{
		return;
	}

	memcpy_s(&OnClientAuthResponse_Params.ClientUID, sizeof(OnClientAuthResponse_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	OnClientAuthResponse_Params.ClientIP = ClientIP;
	OnClientAuthResponse_Params.AuthTicketUID = AuthTicketUID;

	this->ProcessEvent(uFnOnClientAuthResponse, &OnClientAuthResponse_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate)
{
	static UFunction* uFnClearServerAuthRequestDelegate = nullptr;

	if (!uFnClearServerAuthRequestDelegate)
	{
		uFnClearServerAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearServerAuthRequestDelegate_Params ClearServerAuthRequestDelegate_Params;
	memset(&ClearServerAuthRequestDelegate_Params, 0, sizeof(ClearServerAuthRequestDelegate_Params));
	if (!uFnClearServerAuthRequestDelegate)
	{
		return;
	}

	memcpy_s(&ClearServerAuthRequestDelegate_Params.ServerAuthRequestDelegate, sizeof(ClearServerAuthRequestDelegate_Params.ServerAuthRequestDelegate), &ServerAuthRequestDelegate, sizeof(ServerAuthRequestDelegate));

	this->ProcessEvent(uFnClearServerAuthRequestDelegate, &ClearServerAuthRequestDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ServerAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate)
{
	static UFunction* uFnAddServerAuthRequestDelegate = nullptr;

	if (!uFnAddServerAuthRequestDelegate)
	{
		uFnAddServerAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddServerAuthRequestDelegate_Params AddServerAuthRequestDelegate_Params;
	memset(&AddServerAuthRequestDelegate_Params, 0, sizeof(AddServerAuthRequestDelegate_Params));
	if (!uFnAddServerAuthRequestDelegate)
	{
		return;
	}

	memcpy_s(&AddServerAuthRequestDelegate_Params.ServerAuthRequestDelegate, sizeof(AddServerAuthRequestDelegate_Params.ServerAuthRequestDelegate), &ServerAuthRequestDelegate, sizeof(ServerAuthRequestDelegate));

	this->ProcessEvent(uFnAddServerAuthRequestDelegate, &AddServerAuthRequestDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort)
{
	static UFunction* uFnOnServerAuthRequest = nullptr;

	if (!uFnOnServerAuthRequest)
	{
		uFnOnServerAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execOnServerAuthRequest_Params OnServerAuthRequest_Params;
	memset(&OnServerAuthRequest_Params, 0, sizeof(OnServerAuthRequest_Params));
	if (!uFnOnServerAuthRequest)
	{
		return;
	}

	OnServerAuthRequest_Params.ClientConnection = ClientConnection;
	memcpy_s(&OnServerAuthRequest_Params.ClientUID, sizeof(OnServerAuthRequest_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	OnServerAuthRequest_Params.ClientIP = ClientIP;
	OnServerAuthRequest_Params.ClientPort = ClientPort;

	this->ProcessEvent(uFnOnServerAuthRequest, &OnServerAuthRequest_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate)
{
	static UFunction* uFnClearClientAuthRequestDelegate = nullptr;

	if (!uFnClearClientAuthRequestDelegate)
	{
		uFnClearClientAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearClientAuthRequestDelegate_Params ClearClientAuthRequestDelegate_Params;
	memset(&ClearClientAuthRequestDelegate_Params, 0, sizeof(ClearClientAuthRequestDelegate_Params));
	if (!uFnClearClientAuthRequestDelegate)
	{
		return;
	}

	memcpy_s(&ClearClientAuthRequestDelegate_Params.ClientAuthRequestDelegate, sizeof(ClearClientAuthRequestDelegate_Params.ClientAuthRequestDelegate), &ClientAuthRequestDelegate, sizeof(ClientAuthRequestDelegate));

	this->ProcessEvent(uFnClearClientAuthRequestDelegate, &ClearClientAuthRequestDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ClientAuthRequestDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate)
{
	static UFunction* uFnAddClientAuthRequestDelegate = nullptr;

	if (!uFnAddClientAuthRequestDelegate)
	{
		uFnAddClientAuthRequestDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddClientAuthRequestDelegate_Params AddClientAuthRequestDelegate_Params;
	memset(&AddClientAuthRequestDelegate_Params, 0, sizeof(AddClientAuthRequestDelegate_Params));
	if (!uFnAddClientAuthRequestDelegate)
	{
		return;
	}

	memcpy_s(&AddClientAuthRequestDelegate_Params.ClientAuthRequestDelegate, sizeof(AddClientAuthRequestDelegate_Params.ClientAuthRequestDelegate), &ClientAuthRequestDelegate, sizeof(ClientAuthRequestDelegate));

	this->ProcessEvent(uFnAddClientAuthRequestDelegate, &AddClientAuthRequestDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)
// uint32_t                       bSecure                        (CPF_Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthRequest(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort, bool bSecure)
{
	static UFunction* uFnOnClientAuthRequest = nullptr;

	if (!uFnOnClientAuthRequest)
	{
		uFnOnClientAuthRequest = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest");
	}

	UOnlineAuthInterfaceImpl_execOnClientAuthRequest_Params OnClientAuthRequest_Params;
	memset(&OnClientAuthRequest_Params, 0, sizeof(OnClientAuthRequest_Params));
	if (!uFnOnClientAuthRequest)
	{
		return;
	}

	memcpy_s(&OnClientAuthRequest_Params.ServerUID, sizeof(OnClientAuthRequest_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	OnClientAuthRequest_Params.ServerIP = ServerIP;
	OnClientAuthRequest_Params.ServerPort = ServerPort;
	OnClientAuthRequest_Params.bSecure = bSecure;

	this->ProcessEvent(uFnOnClientAuthRequest, &OnClientAuthRequest_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AuthReadyDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate)
{
	static UFunction* uFnClearAuthReadyDelegate = nullptr;

	if (!uFnClearAuthReadyDelegate)
	{
		uFnClearAuthReadyDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate");
	}

	UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Params ClearAuthReadyDelegate_Params;
	memset(&ClearAuthReadyDelegate_Params, 0, sizeof(ClearAuthReadyDelegate_Params));
	if (!uFnClearAuthReadyDelegate)
	{
		return;
	}

	memcpy_s(&ClearAuthReadyDelegate_Params.AuthReadyDelegate, sizeof(ClearAuthReadyDelegate_Params.AuthReadyDelegate), &AuthReadyDelegate, sizeof(AuthReadyDelegate));

	this->ProcessEvent(uFnClearAuthReadyDelegate, &ClearAuthReadyDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AuthReadyDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate)
{
	static UFunction* uFnAddAuthReadyDelegate = nullptr;

	if (!uFnAddAuthReadyDelegate)
	{
		uFnAddAuthReadyDelegate = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate");
	}

	UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Params AddAuthReadyDelegate_Params;
	memset(&AddAuthReadyDelegate_Params, 0, sizeof(AddAuthReadyDelegate_Params));
	if (!uFnAddAuthReadyDelegate)
	{
		return;
	}

	memcpy_s(&AddAuthReadyDelegate_Params.AuthReadyDelegate, sizeof(AddAuthReadyDelegate_Params.AuthReadyDelegate), &AuthReadyDelegate, sizeof(AuthReadyDelegate));

	this->ProcessEvent(uFnAddAuthReadyDelegate, &AddAuthReadyDelegate_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineAuthInterfaceImpl::OnAuthReady()
{
	static UFunction* uFnOnAuthReady = nullptr;

	if (!uFnOnAuthReady)
	{
		uFnOnAuthReady = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady");
	}

	UOnlineAuthInterfaceImpl_execOnAuthReady_Params OnAuthReady_Params;
	memset(&OnAuthReady_Params, 0, sizeof(OnAuthReady_Params));
	if (!uFnOnAuthReady)
	{
		return;
	}


	this->ProcessEvent(uFnOnAuthReady, &OnAuthReady_Params, nullptr);
}

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceImpl::IsReady()
{
	static UFunction* uFnIsReady = nullptr;

	if (!uFnIsReady)
	{
		uFnIsReady = UFunction::FindFunction("Function IpDrv.OnlineAuthInterfaceImpl.IsReady");
	}

	UOnlineAuthInterfaceImpl_execIsReady_Params IsReady_Params;
	memset(&IsReady_Params, 0, sizeof(IsReady_Params));
	if (!uFnIsReady)
	{
		return {};
	}


	this->ProcessEvent(uFnIsReady, &IsReady_Params, nullptr);

	return IsReady_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         QosStatusChangedDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate)
{
	static UFunction* uFnClearQosStatusChangedDelegate = nullptr;

	if (!uFnClearQosStatusChangedDelegate)
	{
		uFnClearQosStatusChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate");
	}

	UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Params ClearQosStatusChangedDelegate_Params;
	memset(&ClearQosStatusChangedDelegate_Params, 0, sizeof(ClearQosStatusChangedDelegate_Params));
	if (!uFnClearQosStatusChangedDelegate)
	{
		return;
	}

	memcpy_s(&ClearQosStatusChangedDelegate_Params.QosStatusChangedDelegate, sizeof(ClearQosStatusChangedDelegate_Params.QosStatusChangedDelegate), &QosStatusChangedDelegate, sizeof(QosStatusChangedDelegate));

	this->ProcessEvent(uFnClearQosStatusChangedDelegate, &ClearQosStatusChangedDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         QosStatusChangedDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate)
{
	static UFunction* uFnAddQosStatusChangedDelegate = nullptr;

	if (!uFnAddQosStatusChangedDelegate)
	{
		uFnAddQosStatusChangedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate");
	}

	UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Params AddQosStatusChangedDelegate_Params;
	memset(&AddQosStatusChangedDelegate_Params, 0, sizeof(AddQosStatusChangedDelegate_Params));
	if (!uFnAddQosStatusChangedDelegate)
	{
		return;
	}

	memcpy_s(&AddQosStatusChangedDelegate_Params.QosStatusChangedDelegate, sizeof(AddQosStatusChangedDelegate_Params.QosStatusChangedDelegate), &QosStatusChangedDelegate, sizeof(QosStatusChangedDelegate));

	this->ProcessEvent(uFnAddQosStatusChangedDelegate, &AddQosStatusChangedDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        NumComplete                    (CPF_Parm)
// int32_t                        NumTotal                       (CPF_Parm)

void UOnlineGameInterfaceImpl::OnQosStatusChanged(int32_t NumComplete, int32_t NumTotal)
{
	static UFunction* uFnOnQosStatusChanged = nullptr;

	if (!uFnOnQosStatusChanged)
	{
		uFnOnQosStatusChanged = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged");
	}

	UOnlineGameInterfaceImpl_execOnQosStatusChanged_Params OnQosStatusChanged_Params;
	memset(&OnQosStatusChanged_Params, 0, sizeof(OnQosStatusChanged_Params));
	if (!uFnOnQosStatusChanged)
	{
		return;
	}

	OnQosStatusChanged_Params.NumComplete = NumComplete;
	OnQosStatusChanged_Params.NumTotal = NumTotal;

	this->ProcessEvent(uFnOnQosStatusChanged, &OnQosStatusChanged_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        SearchingPlayerNum             (CPF_Parm)
// class UOnlineGameSearch*       SearchSettings                 (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm)

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, uint8_t PlatformSpecificInfo[80])
{
	static UFunction* uFnBindPlatformSpecificSessionToSearch = nullptr;

	if (!uFnBindPlatformSpecificSessionToSearch)
	{
		uFnBindPlatformSpecificSessionToSearch = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch");
	}

	UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Params BindPlatformSpecificSessionToSearch_Params;
	memset(&BindPlatformSpecificSessionToSearch_Params, 0, sizeof(BindPlatformSpecificSessionToSearch_Params));
	if (!uFnBindPlatformSpecificSessionToSearch)
	{
		return {};
	}

	BindPlatformSpecificSessionToSearch_Params.SearchingPlayerNum = static_cast<uint8_t>(SearchingPlayerNum);
	BindPlatformSpecificSessionToSearch_Params.SearchSettings = SearchSettings;
	memcpy_s(&BindPlatformSpecificSessionToSearch_Params.PlatformSpecificInfo, sizeof(BindPlatformSpecificSessionToSearch_Params.PlatformSpecificInfo), PlatformSpecificInfo, sizeof(BindPlatformSpecificSessionToSearch_Params.PlatformSpecificInfo));

	auto native_BindPlatformSpecificSessionToSearch = uFnBindPlatformSpecificSessionToSearch->iNative;
	uFnBindPlatformSpecificSessionToSearch->iNative = 0;
	this->ProcessEvent(uFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Params, nullptr);
	uFnBindPlatformSpecificSessionToSearch->iNative = native_BindPlatformSpecificSessionToSearch;

	return BindPlatformSpecificSessionToSearch_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName(const class FName& SessionName, uint8_t* outPlatformSpecificInfo_80)
{
	static UFunction* uFnReadPlatformSpecificSessionInfoBySessionName = nullptr;

	if (!uFnReadPlatformSpecificSessionInfoBySessionName)
	{
		uFnReadPlatformSpecificSessionInfoBySessionName = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName");
	}

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Params ReadPlatformSpecificSessionInfoBySessionName_Params;
	memset(&ReadPlatformSpecificSessionInfoBySessionName_Params, 0, sizeof(ReadPlatformSpecificSessionInfoBySessionName_Params));
	if (!uFnReadPlatformSpecificSessionInfoBySessionName)
	{
		return {};
	}

	memcpy_s(&ReadPlatformSpecificSessionInfoBySessionName_Params.SessionName, sizeof(ReadPlatformSpecificSessionInfoBySessionName_Params.SessionName), &SessionName, sizeof(SessionName));

	if (outPlatformSpecificInfo_80)
	{
		memcpy_s(&ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo, sizeof(ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo), outPlatformSpecificInfo_80, sizeof(ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo));
	}

	this->ProcessEvent(uFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Params, nullptr);

	if (outPlatformSpecificInfo_80)
	{
		memcpy_s(outPlatformSpecificInfo_80, sizeof(ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo), &ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo, sizeof(ReadPlatformSpecificSessionInfoBySessionName_Params.PlatformSpecificInfo));
	}

	return ReadPlatformSpecificSessionInfoBySessionName_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)
// uint8_t                        PlatformSpecificInfo           (CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult& outDesiredGame, uint8_t* outPlatformSpecificInfo_80)
{
	static UFunction* uFnReadPlatformSpecificSessionInfo = nullptr;

	if (!uFnReadPlatformSpecificSessionInfo)
	{
		uFnReadPlatformSpecificSessionInfo = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo");
	}

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Params ReadPlatformSpecificSessionInfo_Params;
	memset(&ReadPlatformSpecificSessionInfo_Params, 0, sizeof(ReadPlatformSpecificSessionInfo_Params));
	if (!uFnReadPlatformSpecificSessionInfo)
	{
		return {};
	}

	memcpy_s(&ReadPlatformSpecificSessionInfo_Params.DesiredGame, sizeof(ReadPlatformSpecificSessionInfo_Params.DesiredGame), &outDesiredGame, sizeof(outDesiredGame));

	if (outPlatformSpecificInfo_80)
	{
		memcpy_s(&ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo, sizeof(ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo), outPlatformSpecificInfo_80, sizeof(ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo));
	}

	auto native_ReadPlatformSpecificSessionInfo = uFnReadPlatformSpecificSessionInfo->iNative;
	uFnReadPlatformSpecificSessionInfo->iNative = 0;
	this->ProcessEvent(uFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Params, nullptr);
	uFnReadPlatformSpecificSessionInfo->iNative = native_ReadPlatformSpecificSessionInfo;

	memcpy_s(&outDesiredGame, sizeof(outDesiredGame), &ReadPlatformSpecificSessionInfo_Params.DesiredGame, sizeof(ReadPlatformSpecificSessionInfo_Params.DesiredGame));
	if (outPlatformSpecificInfo_80)
	{
		memcpy_s(outPlatformSpecificInfo_80, sizeof(ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo), &ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo, sizeof(ReadPlatformSpecificSessionInfo_Params.PlatformSpecificInfo));
	}

	return ReadPlatformSpecificSessionInfo_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        StartAt                        (CPF_Parm)
// int32_t                        NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery)
{
	static UFunction* uFnQueryNonAdvertisedData = nullptr;

	if (!uFnQueryNonAdvertisedData)
	{
		uFnQueryNonAdvertisedData = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData");
	}

	UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Params QueryNonAdvertisedData_Params;
	memset(&QueryNonAdvertisedData_Params, 0, sizeof(QueryNonAdvertisedData_Params));
	if (!uFnQueryNonAdvertisedData)
	{
		return {};
	}

	QueryNonAdvertisedData_Params.StartAt = StartAt;
	QueryNonAdvertisedData_Params.NumberToQuery = NumberToQuery;

	this->ProcessEvent(uFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Params, nullptr);

	return QueryNonAdvertisedData_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearJoinMigratedOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearJoinMigratedOnlineGameCompleteDelegate)
	{
		uFnClearJoinMigratedOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Params ClearJoinMigratedOnlineGameCompleteDelegate_Params;
	memset(&ClearJoinMigratedOnlineGameCompleteDelegate_Params, 0, sizeof(ClearJoinMigratedOnlineGameCompleteDelegate_Params));
	if (!uFnClearJoinMigratedOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearJoinMigratedOnlineGameCompleteDelegate_Params.JoinMigratedOnlineGameCompleteDelegate, sizeof(ClearJoinMigratedOnlineGameCompleteDelegate_Params.JoinMigratedOnlineGameCompleteDelegate), &JoinMigratedOnlineGameCompleteDelegate, sizeof(JoinMigratedOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearJoinMigratedOnlineGameCompleteDelegate, &ClearJoinMigratedOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddJoinMigratedOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddJoinMigratedOnlineGameCompleteDelegate)
	{
		uFnAddJoinMigratedOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Params AddJoinMigratedOnlineGameCompleteDelegate_Params;
	memset(&AddJoinMigratedOnlineGameCompleteDelegate_Params, 0, sizeof(AddJoinMigratedOnlineGameCompleteDelegate_Params));
	if (!uFnAddJoinMigratedOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddJoinMigratedOnlineGameCompleteDelegate_Params.JoinMigratedOnlineGameCompleteDelegate, sizeof(AddJoinMigratedOnlineGameCompleteDelegate_Params.JoinMigratedOnlineGameCompleteDelegate), &JoinMigratedOnlineGameCompleteDelegate, sizeof(JoinMigratedOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddJoinMigratedOnlineGameCompleteDelegate, &AddJoinMigratedOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinMigratedOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnJoinMigratedOnlineGameComplete = nullptr;

	if (!uFnOnJoinMigratedOnlineGameComplete)
	{
		uFnOnJoinMigratedOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Params OnJoinMigratedOnlineGameComplete_Params;
	memset(&OnJoinMigratedOnlineGameComplete_Params, 0, sizeof(OnJoinMigratedOnlineGameComplete_Params));
	if (!uFnOnJoinMigratedOnlineGameComplete)
	{
		return;
	}

	memcpy_s(&OnJoinMigratedOnlineGameComplete_Params.SessionName, sizeof(OnJoinMigratedOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnJoinMigratedOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinMigratedOnlineGameComplete, &OnJoinMigratedOnlineGameComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::JoinMigratedOnlineGame(uint8_t PlayerNum, const class FName& SessionName, struct FOnlineGameSearchResult& outDesiredGame)
{
	static UFunction* uFnJoinMigratedOnlineGame = nullptr;

	if (!uFnJoinMigratedOnlineGame)
	{
		uFnJoinMigratedOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame");
	}

	UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Params JoinMigratedOnlineGame_Params;
	memset(&JoinMigratedOnlineGame_Params, 0, sizeof(JoinMigratedOnlineGame_Params));
	if (!uFnJoinMigratedOnlineGame)
	{
		return {};
	}

	JoinMigratedOnlineGame_Params.PlayerNum = static_cast<uint8_t>(PlayerNum);
	memcpy_s(&JoinMigratedOnlineGame_Params.SessionName, sizeof(JoinMigratedOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&JoinMigratedOnlineGame_Params.DesiredGame, sizeof(JoinMigratedOnlineGame_Params.DesiredGame), &outDesiredGame, sizeof(outDesiredGame));

	this->ProcessEvent(uFnJoinMigratedOnlineGame, &JoinMigratedOnlineGame_Params, nullptr);

	memcpy_s(&outDesiredGame, sizeof(outDesiredGame), &JoinMigratedOnlineGame_Params.DesiredGame, sizeof(JoinMigratedOnlineGame_Params.DesiredGame));

	return JoinMigratedOnlineGame_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearMigrateOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearMigrateOnlineGameCompleteDelegate)
	{
		uFnClearMigrateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Params ClearMigrateOnlineGameCompleteDelegate_Params;
	memset(&ClearMigrateOnlineGameCompleteDelegate_Params, 0, sizeof(ClearMigrateOnlineGameCompleteDelegate_Params));
	if (!uFnClearMigrateOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearMigrateOnlineGameCompleteDelegate_Params.MigrateOnlineGameCompleteDelegate, sizeof(ClearMigrateOnlineGameCompleteDelegate_Params.MigrateOnlineGameCompleteDelegate), &MigrateOnlineGameCompleteDelegate, sizeof(MigrateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearMigrateOnlineGameCompleteDelegate, &ClearMigrateOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddMigrateOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddMigrateOnlineGameCompleteDelegate)
	{
		uFnAddMigrateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Params AddMigrateOnlineGameCompleteDelegate_Params;
	memset(&AddMigrateOnlineGameCompleteDelegate_Params, 0, sizeof(AddMigrateOnlineGameCompleteDelegate_Params));
	if (!uFnAddMigrateOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddMigrateOnlineGameCompleteDelegate_Params.MigrateOnlineGameCompleteDelegate, sizeof(AddMigrateOnlineGameCompleteDelegate_Params.MigrateOnlineGameCompleteDelegate), &MigrateOnlineGameCompleteDelegate, sizeof(MigrateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddMigrateOnlineGameCompleteDelegate, &AddMigrateOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnMigrateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnMigrateOnlineGameComplete = nullptr;

	if (!uFnOnMigrateOnlineGameComplete)
	{
		uFnOnMigrateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Params OnMigrateOnlineGameComplete_Params;
	memset(&OnMigrateOnlineGameComplete_Params, 0, sizeof(OnMigrateOnlineGameComplete_Params));
	if (!uFnOnMigrateOnlineGameComplete)
	{
		return;
	}

	memcpy_s(&OnMigrateOnlineGameComplete_Params.SessionName, sizeof(OnMigrateOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnMigrateOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnMigrateOnlineGameComplete, &OnMigrateOnlineGameComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        HostingPlayerNum               (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::MigrateOnlineGame(uint8_t HostingPlayerNum, const class FName& SessionName)
{
	static UFunction* uFnMigrateOnlineGame = nullptr;

	if (!uFnMigrateOnlineGame)
	{
		uFnMigrateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame");
	}

	UOnlineGameInterfaceImpl_execMigrateOnlineGame_Params MigrateOnlineGame_Params;
	memset(&MigrateOnlineGame_Params, 0, sizeof(MigrateOnlineGame_Params));
	if (!uFnMigrateOnlineGame)
	{
		return {};
	}

	MigrateOnlineGame_Params.HostingPlayerNum = static_cast<uint8_t>(HostingPlayerNum);
	memcpy_s(&MigrateOnlineGame_Params.SessionName, sizeof(MigrateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnMigrateOnlineGame, &MigrateOnlineGame_Params, nullptr);

	return MigrateOnlineGame_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate)
{
	static UFunction* uFnClearRecalculateSkillRatingCompleteDelegate = nullptr;

	if (!uFnClearRecalculateSkillRatingCompleteDelegate)
	{
		uFnClearRecalculateSkillRatingCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Params ClearRecalculateSkillRatingCompleteDelegate_Params;
	memset(&ClearRecalculateSkillRatingCompleteDelegate_Params, 0, sizeof(ClearRecalculateSkillRatingCompleteDelegate_Params));
	if (!uFnClearRecalculateSkillRatingCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearRecalculateSkillRatingCompleteDelegate_Params.RecalculateSkillRatingGameCompleteDelegate, sizeof(ClearRecalculateSkillRatingCompleteDelegate_Params.RecalculateSkillRatingGameCompleteDelegate), &RecalculateSkillRatingGameCompleteDelegate, sizeof(RecalculateSkillRatingGameCompleteDelegate));

	this->ProcessEvent(uFnClearRecalculateSkillRatingCompleteDelegate, &ClearRecalculateSkillRatingCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate)
{
	static UFunction* uFnAddRecalculateSkillRatingCompleteDelegate = nullptr;

	if (!uFnAddRecalculateSkillRatingCompleteDelegate)
	{
		uFnAddRecalculateSkillRatingCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Params AddRecalculateSkillRatingCompleteDelegate_Params;
	memset(&AddRecalculateSkillRatingCompleteDelegate_Params, 0, sizeof(AddRecalculateSkillRatingCompleteDelegate_Params));
	if (!uFnAddRecalculateSkillRatingCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddRecalculateSkillRatingCompleteDelegate_Params.RecalculateSkillRatingCompleteDelegate, sizeof(AddRecalculateSkillRatingCompleteDelegate_Params.RecalculateSkillRatingCompleteDelegate), &RecalculateSkillRatingCompleteDelegate, sizeof(RecalculateSkillRatingCompleteDelegate));

	this->ProcessEvent(uFnAddRecalculateSkillRatingCompleteDelegate, &AddRecalculateSkillRatingCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRecalculateSkillRatingComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnRecalculateSkillRatingComplete = nullptr;

	if (!uFnOnRecalculateSkillRatingComplete)
	{
		uFnOnRecalculateSkillRatingComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete");
	}

	UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Params OnRecalculateSkillRatingComplete_Params;
	memset(&OnRecalculateSkillRatingComplete_Params, 0, sizeof(OnRecalculateSkillRatingComplete_Params));
	if (!uFnOnRecalculateSkillRatingComplete)
	{
		return;
	}

	memcpy_s(&OnRecalculateSkillRatingComplete_Params.SessionName, sizeof(OnRecalculateSkillRatingComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnRecalculateSkillRatingComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRecalculateSkillRatingComplete, &OnRecalculateSkillRatingComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::RecalculateSkillRating(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers)
{
	static UFunction* uFnRecalculateSkillRating = nullptr;

	if (!uFnRecalculateSkillRating)
	{
		uFnRecalculateSkillRating = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating");
	}

	UOnlineGameInterfaceImpl_execRecalculateSkillRating_Params RecalculateSkillRating_Params;
	memset(&RecalculateSkillRating_Params, 0, sizeof(RecalculateSkillRating_Params));
	if (!uFnRecalculateSkillRating)
	{
		return {};
	}

	memcpy_s(&RecalculateSkillRating_Params.SessionName, sizeof(RecalculateSkillRating_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&RecalculateSkillRating_Params.Players, sizeof(RecalculateSkillRating_Params.Players), &outPlayers, sizeof(outPlayers));

	this->ProcessEvent(uFnRecalculateSkillRating, &RecalculateSkillRating_Params, nullptr);

	memcpy_s(&outPlayers, sizeof(outPlayers), &RecalculateSkillRating_Params.Players, sizeof(RecalculateSkillRating_Params.Players));

	return RecalculateSkillRating_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::AcceptGameInvite(uint8_t LocalUserNum, const class FName& SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite");
	}

	UOnlineGameInterfaceImpl_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memset(&AcceptGameInvite_Params, 0, sizeof(AcceptGameInvite_Params));
	if (!uFnAcceptGameInvite)
	{
		return {};
	}

	AcceptGameInvite_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AcceptGameInvite_Params.SessionName, sizeof(AcceptGameInvite_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);

	return AcceptGameInvite_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static UFunction* uFnClearGameInviteAcceptedDelegate = nullptr;

	if (!uFnClearGameInviteAcceptedDelegate)
	{
		uFnClearGameInviteAcceptedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate");
	}

	UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Params ClearGameInviteAcceptedDelegate_Params;
	memset(&ClearGameInviteAcceptedDelegate_Params, 0, sizeof(ClearGameInviteAcceptedDelegate_Params));
	if (!uFnClearGameInviteAcceptedDelegate)
	{
		return;
	}

	ClearGameInviteAcceptedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate, sizeof(ClearGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate), &GameInviteAcceptedDelegate, sizeof(GameInviteAcceptedDelegate));

	this->ProcessEvent(uFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static UFunction* uFnAddGameInviteAcceptedDelegate = nullptr;

	if (!uFnAddGameInviteAcceptedDelegate)
	{
		uFnAddGameInviteAcceptedDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate");
	}

	UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Params AddGameInviteAcceptedDelegate_Params;
	memset(&AddGameInviteAcceptedDelegate_Params, 0, sizeof(AddGameInviteAcceptedDelegate_Params));
	if (!uFnAddGameInviteAcceptedDelegate)
	{
		return;
	}

	AddGameInviteAcceptedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate, sizeof(AddGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate), &GameInviteAcceptedDelegate, sizeof(GameInviteAcceptedDelegate));

	this->ProcessEvent(uFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceImpl::OnGameInviteAccepted(struct FOnlineGameSearchResult& outInviteResult)
{
	static UFunction* uFnOnGameInviteAccepted = nullptr;

	if (!uFnOnGameInviteAccepted)
	{
		uFnOnGameInviteAccepted = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted");
	}

	UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Params OnGameInviteAccepted_Params;
	memset(&OnGameInviteAccepted_Params, 0, sizeof(OnGameInviteAccepted_Params));
	if (!uFnOnGameInviteAccepted)
	{
		return;
	}

	memcpy_s(&OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult), &outInviteResult, sizeof(outInviteResult));

	this->ProcessEvent(uFnOnGameInviteAccepted, &OnGameInviteAccepted_Params, nullptr);

	memcpy_s(&outInviteResult, sizeof(outInviteResult), &OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult));
}

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FOnlineArbitrationRegistrant> ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FName                    SessionName                    (CPF_Parm)

class TArray<struct FOnlineArbitrationRegistrant> UOnlineGameInterfaceImpl::GetArbitratedPlayers(const class FName& SessionName)
{
	static UFunction* uFnGetArbitratedPlayers = nullptr;

	if (!uFnGetArbitratedPlayers)
	{
		uFnGetArbitratedPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers");
	}

	UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Params GetArbitratedPlayers_Params;
	memset(&GetArbitratedPlayers_Params, 0, sizeof(GetArbitratedPlayers_Params));
	if (!uFnGetArbitratedPlayers)
	{
		return {};
	}

	memcpy_s(&GetArbitratedPlayers_Params.SessionName, sizeof(GetArbitratedPlayers_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnGetArbitratedPlayers, &GetArbitratedPlayers_Params, nullptr);

	return GetArbitratedPlayers_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static UFunction* uFnClearArbitrationRegistrationCompleteDelegate = nullptr;

	if (!uFnClearArbitrationRegistrationCompleteDelegate)
	{
		uFnClearArbitrationRegistrationCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Params ClearArbitrationRegistrationCompleteDelegate_Params;
	memset(&ClearArbitrationRegistrationCompleteDelegate_Params, 0, sizeof(ClearArbitrationRegistrationCompleteDelegate_Params));
	if (!uFnClearArbitrationRegistrationCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearArbitrationRegistrationCompleteDelegate_Params.ArbitrationRegistrationCompleteDelegate, sizeof(ClearArbitrationRegistrationCompleteDelegate_Params.ArbitrationRegistrationCompleteDelegate), &ArbitrationRegistrationCompleteDelegate, sizeof(ArbitrationRegistrationCompleteDelegate));

	this->ProcessEvent(uFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static UFunction* uFnAddArbitrationRegistrationCompleteDelegate = nullptr;

	if (!uFnAddArbitrationRegistrationCompleteDelegate)
	{
		uFnAddArbitrationRegistrationCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Params AddArbitrationRegistrationCompleteDelegate_Params;
	memset(&AddArbitrationRegistrationCompleteDelegate_Params, 0, sizeof(AddArbitrationRegistrationCompleteDelegate_Params));
	if (!uFnAddArbitrationRegistrationCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddArbitrationRegistrationCompleteDelegate_Params.ArbitrationRegistrationCompleteDelegate, sizeof(AddArbitrationRegistrationCompleteDelegate_Params.ArbitrationRegistrationCompleteDelegate), &ArbitrationRegistrationCompleteDelegate, sizeof(ArbitrationRegistrationCompleteDelegate));

	this->ProcessEvent(uFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnArbitrationRegistrationComplete = nullptr;

	if (!uFnOnArbitrationRegistrationComplete)
	{
		uFnOnArbitrationRegistrationComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete");
	}

	UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Params OnArbitrationRegistrationComplete_Params;
	memset(&OnArbitrationRegistrationComplete_Params, 0, sizeof(OnArbitrationRegistrationComplete_Params));
	if (!uFnOnArbitrationRegistrationComplete)
	{
		return;
	}

	memcpy_s(&OnArbitrationRegistrationComplete_Params.SessionName, sizeof(OnArbitrationRegistrationComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnArbitrationRegistrationComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::RegisterForArbitration(const class FName& SessionName)
{
	static UFunction* uFnRegisterForArbitration = nullptr;

	if (!uFnRegisterForArbitration)
	{
		uFnRegisterForArbitration = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration");
	}

	UOnlineGameInterfaceImpl_execRegisterForArbitration_Params RegisterForArbitration_Params;
	memset(&RegisterForArbitration_Params, 0, sizeof(RegisterForArbitration_Params));
	if (!uFnRegisterForArbitration)
	{
		return {};
	}

	memcpy_s(&RegisterForArbitration_Params.SessionName, sizeof(RegisterForArbitration_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnRegisterForArbitration, &RegisterForArbitration_Params, nullptr);

	return RegisterForArbitration_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearEndOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearEndOnlineGameCompleteDelegate)
	{
		uFnClearEndOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Params ClearEndOnlineGameCompleteDelegate_Params;
	memset(&ClearEndOnlineGameCompleteDelegate_Params, 0, sizeof(ClearEndOnlineGameCompleteDelegate_Params));
	if (!uFnClearEndOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearEndOnlineGameCompleteDelegate_Params.EndOnlineGameCompleteDelegate, sizeof(ClearEndOnlineGameCompleteDelegate_Params.EndOnlineGameCompleteDelegate), &EndOnlineGameCompleteDelegate, sizeof(EndOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddEndOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddEndOnlineGameCompleteDelegate)
	{
		uFnAddEndOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Params AddEndOnlineGameCompleteDelegate_Params;
	memset(&AddEndOnlineGameCompleteDelegate_Params, 0, sizeof(AddEndOnlineGameCompleteDelegate_Params));
	if (!uFnAddEndOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddEndOnlineGameCompleteDelegate_Params.EndOnlineGameCompleteDelegate, sizeof(AddEndOnlineGameCompleteDelegate_Params.EndOnlineGameCompleteDelegate), &EndOnlineGameCompleteDelegate, sizeof(EndOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnEndOnlineGameComplete = nullptr;

	if (!uFnOnEndOnlineGameComplete)
	{
		uFnOnEndOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Params OnEndOnlineGameComplete_Params;
	memset(&OnEndOnlineGameComplete_Params, 0, sizeof(OnEndOnlineGameComplete_Params));
	if (!uFnOnEndOnlineGameComplete)
	{
		return;
	}

	memcpy_s(&OnEndOnlineGameComplete_Params.SessionName, sizeof(OnEndOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnEndOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::EndOnlineGame(const class FName& SessionName)
{
	static UFunction* uFnEndOnlineGame = nullptr;

	if (!uFnEndOnlineGame)
	{
		uFnEndOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame");
	}

	UOnlineGameInterfaceImpl_execEndOnlineGame_Params EndOnlineGame_Params;
	memset(&EndOnlineGame_Params, 0, sizeof(EndOnlineGame_Params));
	if (!uFnEndOnlineGame)
	{
		return {};
	}

	memcpy_s(&EndOnlineGame_Params.SessionName, sizeof(EndOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));

	auto native_EndOnlineGame = uFnEndOnlineGame->iNative;
	uFnEndOnlineGame->iNative = 0;
	this->ProcessEvent(uFnEndOnlineGame, &EndOnlineGame_Params, nullptr);
	uFnEndOnlineGame->iNative = native_EndOnlineGame;

	return EndOnlineGame_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearStartOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearStartOnlineGameCompleteDelegate)
	{
		uFnClearStartOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Params ClearStartOnlineGameCompleteDelegate_Params;
	memset(&ClearStartOnlineGameCompleteDelegate_Params, 0, sizeof(ClearStartOnlineGameCompleteDelegate_Params));
	if (!uFnClearStartOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearStartOnlineGameCompleteDelegate_Params.StartOnlineGameCompleteDelegate, sizeof(ClearStartOnlineGameCompleteDelegate_Params.StartOnlineGameCompleteDelegate), &StartOnlineGameCompleteDelegate, sizeof(StartOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddStartOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddStartOnlineGameCompleteDelegate)
	{
		uFnAddStartOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Params AddStartOnlineGameCompleteDelegate_Params;
	memset(&AddStartOnlineGameCompleteDelegate_Params, 0, sizeof(AddStartOnlineGameCompleteDelegate_Params));
	if (!uFnAddStartOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddStartOnlineGameCompleteDelegate_Params.StartOnlineGameCompleteDelegate, sizeof(AddStartOnlineGameCompleteDelegate_Params.StartOnlineGameCompleteDelegate), &StartOnlineGameCompleteDelegate, sizeof(StartOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnStartOnlineGameComplete = nullptr;

	if (!uFnOnStartOnlineGameComplete)
	{
		uFnOnStartOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Params OnStartOnlineGameComplete_Params;
	memset(&OnStartOnlineGameComplete_Params, 0, sizeof(OnStartOnlineGameComplete_Params));
	if (!uFnOnStartOnlineGameComplete)
	{
		return;
	}

	memcpy_s(&OnStartOnlineGameComplete_Params.SessionName, sizeof(OnStartOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnStartOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::StartOnlineGame(const class FName& SessionName)
{
	static UFunction* uFnStartOnlineGame = nullptr;

	if (!uFnStartOnlineGame)
	{
		uFnStartOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame");
	}

	UOnlineGameInterfaceImpl_execStartOnlineGame_Params StartOnlineGame_Params;
	memset(&StartOnlineGame_Params, 0, sizeof(StartOnlineGame_Params));
	if (!uFnStartOnlineGame)
	{
		return {};
	}

	memcpy_s(&StartOnlineGame_Params.SessionName, sizeof(StartOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));

	auto native_StartOnlineGame = uFnStartOnlineGame->iNative;
	uFnStartOnlineGame->iNative = 0;
	this->ProcessEvent(uFnStartOnlineGame, &StartOnlineGame_Params, nullptr);
	uFnStartOnlineGame->iNative = native_StartOnlineGame;

	return StartOnlineGame_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		uFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Params ClearUnregisterPlayerCompleteDelegate_Params;
	memset(&ClearUnregisterPlayerCompleteDelegate_Params, 0, sizeof(ClearUnregisterPlayerCompleteDelegate_Params));
	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		uFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Params AddUnregisterPlayerCompleteDelegate_Params;
	memset(&AddUnregisterPlayerCompleteDelegate_Params, 0, sizeof(AddUnregisterPlayerCompleteDelegate_Params));
	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnUnregisterPlayerComplete = nullptr;

	if (!uFnOnUnregisterPlayerComplete)
	{
		uFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete");
	}

	UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Params OnUnregisterPlayerComplete_Params;
	memset(&OnUnregisterPlayerComplete_Params, 0, sizeof(OnUnregisterPlayerComplete_Params));
	if (!uFnOnUnregisterPlayerComplete)
	{
		return;
	}

	memcpy_s(&OnUnregisterPlayerComplete_Params.SessionName, sizeof(OnUnregisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnUnregisterPlayerComplete_Params.PlayerID, sizeof(OnUnregisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnUnregisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::UnregisterPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers)
{
	static UFunction* uFnUnregisterPlayers = nullptr;

	if (!uFnUnregisterPlayers)
	{
		uFnUnregisterPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers");
	}

	UOnlineGameInterfaceImpl_execUnregisterPlayers_Params UnregisterPlayers_Params;
	memset(&UnregisterPlayers_Params, 0, sizeof(UnregisterPlayers_Params));
	if (!uFnUnregisterPlayers)
	{
		return {};
	}

	memcpy_s(&UnregisterPlayers_Params.SessionName, sizeof(UnregisterPlayers_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UnregisterPlayers_Params.Players, sizeof(UnregisterPlayers_Params.Players), &outPlayers, sizeof(outPlayers));

	this->ProcessEvent(uFnUnregisterPlayers, &UnregisterPlayers_Params, nullptr);

	memcpy_s(&outPlayers, sizeof(outPlayers), &UnregisterPlayers_Params.Players, sizeof(UnregisterPlayers_Params.Players));

	return UnregisterPlayers_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineGameInterfaceImpl::UnregisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnUnregisterPlayer = nullptr;

	if (!uFnUnregisterPlayer)
	{
		uFnUnregisterPlayer = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer");
	}

	UOnlineGameInterfaceImpl_execUnregisterPlayer_Params UnregisterPlayer_Params;
	memset(&UnregisterPlayer_Params, 0, sizeof(UnregisterPlayer_Params));
	if (!uFnUnregisterPlayer)
	{
		return {};
	}

	memcpy_s(&UnregisterPlayer_Params.SessionName, sizeof(UnregisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UnregisterPlayer_Params.PlayerID, sizeof(UnregisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnUnregisterPlayer, &UnregisterPlayer_Params, nullptr);

	return UnregisterPlayer_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		uFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Params ClearRegisterPlayerCompleteDelegate_Params;
	memset(&ClearRegisterPlayerCompleteDelegate_Params, 0, sizeof(ClearRegisterPlayerCompleteDelegate_Params));
	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		uFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Params AddRegisterPlayerCompleteDelegate_Params;
	memset(&AddRegisterPlayerCompleteDelegate_Params, 0, sizeof(AddRegisterPlayerCompleteDelegate_Params));
	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterPlayerComplete = nullptr;

	if (!uFnOnRegisterPlayerComplete)
	{
		uFnOnRegisterPlayerComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete");
	}

	UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Params OnRegisterPlayerComplete_Params;
	memset(&OnRegisterPlayerComplete_Params, 0, sizeof(OnRegisterPlayerComplete_Params));
	if (!uFnOnRegisterPlayerComplete)
	{
		return;
	}

	memcpy_s(&OnRegisterPlayerComplete_Params.SessionName, sizeof(OnRegisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnRegisterPlayerComplete_Params.PlayerID, sizeof(OnRegisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnRegisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::RegisterPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers)
{
	static UFunction* uFnRegisterPlayers = nullptr;

	if (!uFnRegisterPlayers)
	{
		uFnRegisterPlayers = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers");
	}

	UOnlineGameInterfaceImpl_execRegisterPlayers_Params RegisterPlayers_Params;
	memset(&RegisterPlayers_Params, 0, sizeof(RegisterPlayers_Params));
	if (!uFnRegisterPlayers)
	{
		return {};
	}

	memcpy_s(&RegisterPlayers_Params.SessionName, sizeof(RegisterPlayers_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&RegisterPlayers_Params.Players, sizeof(RegisterPlayers_Params.Players), &outPlayers, sizeof(outPlayers));

	this->ProcessEvent(uFnRegisterPlayers, &RegisterPlayers_Params, nullptr);

	memcpy_s(&outPlayers, sizeof(outPlayers), &RegisterPlayers_Params.Players, sizeof(RegisterPlayers_Params.Players));

	return RegisterPlayers_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::RegisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static UFunction* uFnRegisterPlayer = nullptr;

	if (!uFnRegisterPlayer)
	{
		uFnRegisterPlayer = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer");
	}

	UOnlineGameInterfaceImpl_execRegisterPlayer_Params RegisterPlayer_Params;
	memset(&RegisterPlayer_Params, 0, sizeof(RegisterPlayer_Params));
	if (!uFnRegisterPlayer)
	{
		return {};
	}

	memcpy_s(&RegisterPlayer_Params.SessionName, sizeof(RegisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&RegisterPlayer_Params.PlayerID, sizeof(RegisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	RegisterPlayer_Params.bWasInvited = bWasInvited;

	this->ProcessEvent(uFnRegisterPlayer, &RegisterPlayer_Params, nullptr);

	return RegisterPlayer_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class FString                  ConnectInfo                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceImpl::GetResolvedConnectString(const class FName& SessionName, class FString& outConnectInfo)
{
	static UFunction* uFnGetResolvedConnectString = nullptr;

	if (!uFnGetResolvedConnectString)
	{
		uFnGetResolvedConnectString = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString");
	}

	UOnlineGameInterfaceImpl_execGetResolvedConnectString_Params GetResolvedConnectString_Params;
	memset(&GetResolvedConnectString_Params, 0, sizeof(GetResolvedConnectString_Params));
	if (!uFnGetResolvedConnectString)
	{
		return {};
	}

	memcpy_s(&GetResolvedConnectString_Params.SessionName, sizeof(GetResolvedConnectString_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&GetResolvedConnectString_Params.ConnectInfo, sizeof(GetResolvedConnectString_Params.ConnectInfo), &outConnectInfo, sizeof(outConnectInfo));

	auto native_GetResolvedConnectString = uFnGetResolvedConnectString->iNative;
	uFnGetResolvedConnectString->iNative = 0;
	this->ProcessEvent(uFnGetResolvedConnectString, &GetResolvedConnectString_Params, nullptr);
	uFnGetResolvedConnectString->iNative = native_GetResolvedConnectString;

	memcpy_s(&outConnectInfo, sizeof(outConnectInfo), &GetResolvedConnectString_Params.ConnectInfo, sizeof(GetResolvedConnectString_Params.ConnectInfo));

	return GetResolvedConnectString_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearJoinOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearJoinOnlineGameCompleteDelegate)
	{
		uFnClearJoinOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Params ClearJoinOnlineGameCompleteDelegate_Params;
	memset(&ClearJoinOnlineGameCompleteDelegate_Params, 0, sizeof(ClearJoinOnlineGameCompleteDelegate_Params));
	if (!uFnClearJoinOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearJoinOnlineGameCompleteDelegate_Params.JoinOnlineGameCompleteDelegate, sizeof(ClearJoinOnlineGameCompleteDelegate_Params.JoinOnlineGameCompleteDelegate), &JoinOnlineGameCompleteDelegate, sizeof(JoinOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddJoinOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddJoinOnlineGameCompleteDelegate)
	{
		uFnAddJoinOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Params AddJoinOnlineGameCompleteDelegate_Params;
	memset(&AddJoinOnlineGameCompleteDelegate_Params, 0, sizeof(AddJoinOnlineGameCompleteDelegate_Params));
	if (!uFnAddJoinOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddJoinOnlineGameCompleteDelegate_Params.JoinOnlineGameCompleteDelegate, sizeof(AddJoinOnlineGameCompleteDelegate_Params.JoinOnlineGameCompleteDelegate), &JoinOnlineGameCompleteDelegate, sizeof(JoinOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnJoinOnlineGameComplete = nullptr;

	if (!uFnOnJoinOnlineGameComplete)
	{
		uFnOnJoinOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Params OnJoinOnlineGameComplete_Params;
	memset(&OnJoinOnlineGameComplete_Params, 0, sizeof(OnJoinOnlineGameComplete_Params));
	if (!uFnOnJoinOnlineGameComplete)
	{
		return;
	}

	memcpy_s(&OnJoinOnlineGameComplete_Params.SessionName, sizeof(OnJoinOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnJoinOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)
// struct FOnlineGameSearchResult DesiredGame                    (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineGameInterfaceImpl::JoinOnlineGame(uint8_t PlayerNum, const class FName& SessionName, struct FOnlineGameSearchResult& outDesiredGame)
{
	static UFunction* uFnJoinOnlineGame = nullptr;

	if (!uFnJoinOnlineGame)
	{
		uFnJoinOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame");
	}

	UOnlineGameInterfaceImpl_execJoinOnlineGame_Params JoinOnlineGame_Params;
	memset(&JoinOnlineGame_Params, 0, sizeof(JoinOnlineGame_Params));
	if (!uFnJoinOnlineGame)
	{
		return {};
	}

	JoinOnlineGame_Params.PlayerNum = static_cast<uint8_t>(PlayerNum);
	memcpy_s(&JoinOnlineGame_Params.SessionName, sizeof(JoinOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&JoinOnlineGame_Params.DesiredGame, sizeof(JoinOnlineGame_Params.DesiredGame), &outDesiredGame, sizeof(outDesiredGame));

	auto native_JoinOnlineGame = uFnJoinOnlineGame->iNative;
	uFnJoinOnlineGame->iNative = 0;
	this->ProcessEvent(uFnJoinOnlineGame, &JoinOnlineGame_Params, nullptr);
	uFnJoinOnlineGame->iNative = native_JoinOnlineGame;

	memcpy_s(&outDesiredGame, sizeof(outDesiredGame), &JoinOnlineGame_Params.DesiredGame, sizeof(JoinOnlineGame_Params.DesiredGame));

	return JoinOnlineGame_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineGameSearch*       Search                         (CPF_Parm)

bool UOnlineGameInterfaceImpl::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static UFunction* uFnFreeSearchResults = nullptr;

	if (!uFnFreeSearchResults)
	{
		uFnFreeSearchResults = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults");
	}

	UOnlineGameInterfaceImpl_execFreeSearchResults_Params FreeSearchResults_Params;
	memset(&FreeSearchResults_Params, 0, sizeof(FreeSearchResults_Params));
	if (!uFnFreeSearchResults)
	{
		return {};
	}

	FreeSearchResults_Params.Search = Search;

	auto native_FreeSearchResults = uFnFreeSearchResults->iNative;
	uFnFreeSearchResults->iNative = 0;
	this->ProcessEvent(uFnFreeSearchResults, &FreeSearchResults_Params, nullptr);
	uFnFreeSearchResults->iNative = native_FreeSearchResults;

	return FreeSearchResults_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnClearCancelFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnClearCancelFindOnlineGamesCompleteDelegate)
	{
		uFnClearCancelFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Params ClearCancelFindOnlineGamesCompleteDelegate_Params;
	memset(&ClearCancelFindOnlineGamesCompleteDelegate_Params, 0, sizeof(ClearCancelFindOnlineGamesCompleteDelegate_Params));
	if (!uFnClearCancelFindOnlineGamesCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearCancelFindOnlineGamesCompleteDelegate_Params.CancelFindOnlineGamesCompleteDelegate, sizeof(ClearCancelFindOnlineGamesCompleteDelegate_Params.CancelFindOnlineGamesCompleteDelegate), &CancelFindOnlineGamesCompleteDelegate, sizeof(CancelFindOnlineGamesCompleteDelegate));

	this->ProcessEvent(uFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnAddCancelFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnAddCancelFindOnlineGamesCompleteDelegate)
	{
		uFnAddCancelFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Params AddCancelFindOnlineGamesCompleteDelegate_Params;
	memset(&AddCancelFindOnlineGamesCompleteDelegate_Params, 0, sizeof(AddCancelFindOnlineGamesCompleteDelegate_Params));
	if (!uFnAddCancelFindOnlineGamesCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddCancelFindOnlineGamesCompleteDelegate_Params.CancelFindOnlineGamesCompleteDelegate, sizeof(AddCancelFindOnlineGamesCompleteDelegate_Params.CancelFindOnlineGamesCompleteDelegate), &CancelFindOnlineGamesCompleteDelegate, sizeof(CancelFindOnlineGamesCompleteDelegate));

	this->ProcessEvent(uFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnCancelFindOnlineGamesComplete = nullptr;

	if (!uFnOnCancelFindOnlineGamesComplete)
	{
		uFnOnCancelFindOnlineGamesComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete");
	}

	UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Params OnCancelFindOnlineGamesComplete_Params;
	memset(&OnCancelFindOnlineGamesComplete_Params, 0, sizeof(OnCancelFindOnlineGamesComplete_Params));
	if (!uFnOnCancelFindOnlineGamesComplete)
	{
		return;
	}

	OnCancelFindOnlineGamesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames()
{
	static UFunction* uFnCancelFindOnlineGames = nullptr;

	if (!uFnCancelFindOnlineGames)
	{
		uFnCancelFindOnlineGames = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames");
	}

	UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Params CancelFindOnlineGames_Params;
	memset(&CancelFindOnlineGames_Params, 0, sizeof(CancelFindOnlineGames_Params));
	if (!uFnCancelFindOnlineGames)
	{
		return {};
	}


	auto native_CancelFindOnlineGames = uFnCancelFindOnlineGames->iNative;
	uFnCancelFindOnlineGames->iNative = 0;
	this->ProcessEvent(uFnCancelFindOnlineGames, &CancelFindOnlineGames_Params, nullptr);
	uFnCancelFindOnlineGames->iNative = native_CancelFindOnlineGames;

	return CancelFindOnlineGames_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnClearFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnClearFindOnlineGamesCompleteDelegate)
	{
		uFnClearFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Params ClearFindOnlineGamesCompleteDelegate_Params;
	memset(&ClearFindOnlineGamesCompleteDelegate_Params, 0, sizeof(ClearFindOnlineGamesCompleteDelegate_Params));
	if (!uFnClearFindOnlineGamesCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearFindOnlineGamesCompleteDelegate_Params.FindOnlineGamesCompleteDelegate, sizeof(ClearFindOnlineGamesCompleteDelegate_Params.FindOnlineGamesCompleteDelegate), &FindOnlineGamesCompleteDelegate, sizeof(FindOnlineGamesCompleteDelegate));

	this->ProcessEvent(uFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static UFunction* uFnAddFindOnlineGamesCompleteDelegate = nullptr;

	if (!uFnAddFindOnlineGamesCompleteDelegate)
	{
		uFnAddFindOnlineGamesCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Params AddFindOnlineGamesCompleteDelegate_Params;
	memset(&AddFindOnlineGamesCompleteDelegate_Params, 0, sizeof(AddFindOnlineGamesCompleteDelegate_Params));
	if (!uFnAddFindOnlineGamesCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddFindOnlineGamesCompleteDelegate_Params.FindOnlineGamesCompleteDelegate, sizeof(AddFindOnlineGamesCompleteDelegate_Params.FindOnlineGamesCompleteDelegate), &FindOnlineGamesCompleteDelegate, sizeof(FindOnlineGamesCompleteDelegate));

	this->ProcessEvent(uFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        SearchingPlayerNum             (CPF_Parm)
// class UOnlineGameSearch*       SearchSettings                 (CPF_Parm)

bool UOnlineGameInterfaceImpl::FindOnlineGames(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings)
{
	static UFunction* uFnFindOnlineGames = nullptr;

	if (!uFnFindOnlineGames)
	{
		uFnFindOnlineGames = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames");
	}

	UOnlineGameInterfaceImpl_execFindOnlineGames_Params FindOnlineGames_Params;
	memset(&FindOnlineGames_Params, 0, sizeof(FindOnlineGames_Params));
	if (!uFnFindOnlineGames)
	{
		return {};
	}

	FindOnlineGames_Params.SearchingPlayerNum = static_cast<uint8_t>(SearchingPlayerNum);
	FindOnlineGames_Params.SearchSettings = SearchSettings;

	auto native_FindOnlineGames = uFnFindOnlineGames->iNative;
	uFnFindOnlineGames->iNative = 0;
	this->ProcessEvent(uFnFindOnlineGames, &FindOnlineGames_Params, nullptr);
	uFnFindOnlineGames->iNative = native_FindOnlineGames;

	return FindOnlineGames_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearDestroyOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearDestroyOnlineGameCompleteDelegate)
	{
		uFnClearDestroyOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Params ClearDestroyOnlineGameCompleteDelegate_Params;
	memset(&ClearDestroyOnlineGameCompleteDelegate_Params, 0, sizeof(ClearDestroyOnlineGameCompleteDelegate_Params));
	if (!uFnClearDestroyOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearDestroyOnlineGameCompleteDelegate_Params.DestroyOnlineGameCompleteDelegate, sizeof(ClearDestroyOnlineGameCompleteDelegate_Params.DestroyOnlineGameCompleteDelegate), &DestroyOnlineGameCompleteDelegate, sizeof(DestroyOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddDestroyOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddDestroyOnlineGameCompleteDelegate)
	{
		uFnAddDestroyOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Params AddDestroyOnlineGameCompleteDelegate_Params;
	memset(&AddDestroyOnlineGameCompleteDelegate_Params, 0, sizeof(AddDestroyOnlineGameCompleteDelegate_Params));
	if (!uFnAddDestroyOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddDestroyOnlineGameCompleteDelegate_Params.DestroyOnlineGameCompleteDelegate, sizeof(AddDestroyOnlineGameCompleteDelegate_Params.DestroyOnlineGameCompleteDelegate), &DestroyOnlineGameCompleteDelegate, sizeof(DestroyOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnDestroyOnlineGameComplete = nullptr;

	if (!uFnOnDestroyOnlineGameComplete)
	{
		uFnOnDestroyOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Params OnDestroyOnlineGameComplete_Params;
	memset(&OnDestroyOnlineGameComplete_Params, 0, sizeof(OnDestroyOnlineGameComplete_Params));
	if (!uFnOnDestroyOnlineGameComplete)
	{
		return;
	}

	memcpy_s(&OnDestroyOnlineGameComplete_Params.SessionName, sizeof(OnDestroyOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnDestroyOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceImpl::DestroyOnlineGame(const class FName& SessionName)
{
	static UFunction* uFnDestroyOnlineGame = nullptr;

	if (!uFnDestroyOnlineGame)
	{
		uFnDestroyOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame");
	}

	UOnlineGameInterfaceImpl_execDestroyOnlineGame_Params DestroyOnlineGame_Params;
	memset(&DestroyOnlineGame_Params, 0, sizeof(DestroyOnlineGame_Params));
	if (!uFnDestroyOnlineGame)
	{
		return {};
	}

	memcpy_s(&DestroyOnlineGame_Params.SessionName, sizeof(DestroyOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));

	auto native_DestroyOnlineGame = uFnDestroyOnlineGame->iNative;
	uFnDestroyOnlineGame->iNative = 0;
	this->ProcessEvent(uFnDestroyOnlineGame, &DestroyOnlineGame_Params, nullptr);
	uFnDestroyOnlineGame->iNative = native_DestroyOnlineGame;

	return DestroyOnlineGame_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearUpdateOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearUpdateOnlineGameCompleteDelegate)
	{
		uFnClearUpdateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Params ClearUpdateOnlineGameCompleteDelegate_Params;
	memset(&ClearUpdateOnlineGameCompleteDelegate_Params, 0, sizeof(ClearUpdateOnlineGameCompleteDelegate_Params));
	if (!uFnClearUpdateOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearUpdateOnlineGameCompleteDelegate_Params.UpdateOnlineGameCompleteDelegate, sizeof(ClearUpdateOnlineGameCompleteDelegate_Params.UpdateOnlineGameCompleteDelegate), &UpdateOnlineGameCompleteDelegate, sizeof(UpdateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddUpdateOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddUpdateOnlineGameCompleteDelegate)
	{
		uFnAddUpdateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Params AddUpdateOnlineGameCompleteDelegate_Params;
	memset(&AddUpdateOnlineGameCompleteDelegate_Params, 0, sizeof(AddUpdateOnlineGameCompleteDelegate_Params));
	if (!uFnAddUpdateOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddUpdateOnlineGameCompleteDelegate_Params.UpdateOnlineGameCompleteDelegate, sizeof(AddUpdateOnlineGameCompleteDelegate_Params.UpdateOnlineGameCompleteDelegate), &UpdateOnlineGameCompleteDelegate, sizeof(UpdateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnUpdateOnlineGameComplete = nullptr;

	if (!uFnOnUpdateOnlineGameComplete)
	{
		uFnOnUpdateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Params OnUpdateOnlineGameComplete_Params;
	memset(&OnUpdateOnlineGameComplete_Params, 0, sizeof(OnUpdateOnlineGameComplete_Params));
	if (!uFnOnUpdateOnlineGameComplete)
	{
		return;
	}

	memcpy_s(&OnUpdateOnlineGameComplete_Params.SessionName, sizeof(OnUpdateOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnUpdateOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] (FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// uint32_t                       bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceImpl::UpdateOnlineGame(const class FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame");
	}

	UOnlineGameInterfaceImpl_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memset(&UpdateOnlineGame_Params, 0, sizeof(UpdateOnlineGame_Params));
	if (!uFnUpdateOnlineGame)
	{
		return {};
	}

	memcpy_s(&UpdateOnlineGame_Params.SessionName, sizeof(UpdateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	UpdateOnlineGame_Params.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = optionalBShouldRefreshOnlineData;

	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);

	return UpdateOnlineGame_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static UFunction* uFnClearCreateOnlineGameCompleteDelegate = nullptr;

	if (!uFnClearCreateOnlineGameCompleteDelegate)
	{
		uFnClearCreateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Params ClearCreateOnlineGameCompleteDelegate_Params;
	memset(&ClearCreateOnlineGameCompleteDelegate_Params, 0, sizeof(ClearCreateOnlineGameCompleteDelegate_Params));
	if (!uFnClearCreateOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearCreateOnlineGameCompleteDelegate_Params.CreateOnlineGameCompleteDelegate, sizeof(ClearCreateOnlineGameCompleteDelegate_Params.CreateOnlineGameCompleteDelegate), &CreateOnlineGameCompleteDelegate, sizeof(CreateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static UFunction* uFnAddCreateOnlineGameCompleteDelegate = nullptr;

	if (!uFnAddCreateOnlineGameCompleteDelegate)
	{
		uFnAddCreateOnlineGameCompleteDelegate = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate");
	}

	UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Params AddCreateOnlineGameCompleteDelegate_Params;
	memset(&AddCreateOnlineGameCompleteDelegate_Params, 0, sizeof(AddCreateOnlineGameCompleteDelegate_Params));
	if (!uFnAddCreateOnlineGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddCreateOnlineGameCompleteDelegate_Params.CreateOnlineGameCompleteDelegate, sizeof(AddCreateOnlineGameCompleteDelegate_Params.CreateOnlineGameCompleteDelegate), &CreateOnlineGameCompleteDelegate, sizeof(CreateOnlineGameCompleteDelegate));

	this->ProcessEvent(uFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnCreateOnlineGameComplete = nullptr;

	if (!uFnOnCreateOnlineGameComplete)
	{
		uFnOnCreateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Params OnCreateOnlineGameComplete_Params;
	memset(&OnCreateOnlineGameComplete_Params, 0, sizeof(OnCreateOnlineGameComplete_Params));
	if (!uFnOnCreateOnlineGameComplete)
	{
		return;
	}

	memcpy_s(&OnCreateOnlineGameComplete_Params.SessionName, sizeof(OnCreateOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnCreateOnlineGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Params, nullptr);
}

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        HostingPlayerNum               (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     NewGameSettings                (CPF_Parm)

bool UOnlineGameInterfaceImpl::CreateOnlineGame(uint8_t HostingPlayerNum, const class FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static UFunction* uFnCreateOnlineGame = nullptr;

	if (!uFnCreateOnlineGame)
	{
		uFnCreateOnlineGame = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame");
	}

	UOnlineGameInterfaceImpl_execCreateOnlineGame_Params CreateOnlineGame_Params;
	memset(&CreateOnlineGame_Params, 0, sizeof(CreateOnlineGame_Params));
	if (!uFnCreateOnlineGame)
	{
		return {};
	}

	CreateOnlineGame_Params.HostingPlayerNum = static_cast<uint8_t>(HostingPlayerNum);
	memcpy_s(&CreateOnlineGame_Params.SessionName, sizeof(CreateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	CreateOnlineGame_Params.NewGameSettings = NewGameSettings;

	auto native_CreateOnlineGame = uFnCreateOnlineGame->iNative;
	uFnCreateOnlineGame->iNative = 0;
	this->ProcessEvent(uFnCreateOnlineGame, &CreateOnlineGame_Params, nullptr);
	uFnCreateOnlineGame->iNative = native_CreateOnlineGame;

	return CreateOnlineGame_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineGameSearch*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch()
{
	static UFunction* uFnGetGameSearch = nullptr;

	if (!uFnGetGameSearch)
	{
		uFnGetGameSearch = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch");
	}

	UOnlineGameInterfaceImpl_execGetGameSearch_Params GetGameSearch_Params;
	memset(&GetGameSearch_Params, 0, sizeof(GetGameSearch_Params));
	if (!uFnGetGameSearch)
	{
		return {};
	}


	this->ProcessEvent(uFnGetGameSearch, &GetGameSearch_Params, nullptr);

	return GetGameSearch_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineGameSettings*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings(const class FName& SessionName)
{
	static UFunction* uFnGetGameSettings = nullptr;

	if (!uFnGetGameSettings)
	{
		uFnGetGameSettings = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings");
	}

	UOnlineGameInterfaceImpl_execGetGameSettings_Params GetGameSettings_Params;
	memset(&GetGameSettings_Params, 0, sizeof(GetGameSettings_Params));
	if (!uFnGetGameSettings)
	{
		return {};
	}

	memcpy_s(&GetGameSettings_Params.SessionName, sizeof(GetGameSettings_Params.SessionName), &SessionName, sizeof(SessionName));

	this->ProcessEvent(uFnGetGameSettings, &GetGameSettings_Params, nullptr);

	return GetGameSettings_Params.ReturnValue;
}

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnFindOnlineGamesComplete = nullptr;

	if (!uFnOnFindOnlineGamesComplete)
	{
		uFnOnFindOnlineGamesComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete");
	}

	UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Params OnFindOnlineGamesComplete_Params;
	memset(&OnFindOnlineGamesComplete_Params, 0, sizeof(OnFindOnlineGamesComplete_Params));
	if (!uFnOnFindOnlineGamesComplete)
	{
		return;
	}

	OnFindOnlineGamesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.CheckStateChange
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UROnlineCustomContentCacheManager::CheckStateChange()
{
	static UFunction* uFnCheckStateChange = nullptr;

	if (!uFnCheckStateChange)
	{
		uFnCheckStateChange = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.CheckStateChange");
	}

	UROnlineCustomContentCacheManager_execCheckStateChange_Params CheckStateChange_Params;
	memset(&CheckStateChange_Params, 0, sizeof(CheckStateChange_Params));
	if (!uFnCheckStateChange)
	{
		return;
	}


	auto native_CheckStateChange = uFnCheckStateChange->iNative;
	uFnCheckStateChange->iNative = 0;
	this->ProcessEvent(uFnCheckStateChange, &CheckStateChange_Params, nullptr);
	uFnCheckStateChange->iNative = native_CheckStateChange;
}

// Function IpDrv.ROnlineCustomContentCacheManager.Tick
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UROnlineCustomContentCacheManager::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.Tick");
	}

	UROnlineCustomContentCacheManager_execTick_Params Tick_Params;
	memset(&Tick_Params, 0, sizeof(Tick_Params));
	if (!uFnTick)
	{
		return;
	}

	Tick_Params.DeltaTime = DeltaTime;

	auto native_Tick = uFnTick->iNative;
	uFnTick->iNative = 0;
	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
	uFnTick->iNative = native_Tick;
}

// Function IpDrv.ROnlineCustomContentCacheManager.GetActivityLogAsList
// [0x00C20802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    OutList                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UROnlineCustomContentCacheManager::eventGetActivityLogAsList(class TArray<class FString>& outOutList)
{
	static UFunction* uFnGetActivityLogAsList = nullptr;

	if (!uFnGetActivityLogAsList)
	{
		uFnGetActivityLogAsList = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.GetActivityLogAsList");
	}

	UROnlineCustomContentCacheManager_eventGetActivityLogAsList_Params GetActivityLogAsList_Params;
	memset(&GetActivityLogAsList_Params, 0, sizeof(GetActivityLogAsList_Params));
	if (!uFnGetActivityLogAsList)
	{
		return;
	}

	memcpy_s(&GetActivityLogAsList_Params.OutList, sizeof(GetActivityLogAsList_Params.OutList), &outOutList, sizeof(outOutList));

	this->ProcessEvent(uFnGetActivityLogAsList, &GetActivityLogAsList_Params, nullptr);

	memcpy_s(&outOutList, sizeof(outOutList), &GetActivityLogAsList_Params.OutList, sizeof(GetActivityLogAsList_Params.OutList));
}

// Function IpDrv.ROnlineCustomContentCacheManager.UpdateActivity
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// ECacheActivityType             Type                           (CPF_Parm)
// ECacheActivityStatus           Status                         (CPF_Parm)
// int32_t                        bytesTransferred               (CPF_Parm)
// float                          timeTaken                      (CPF_Parm)

void UROnlineCustomContentCacheManager::eventUpdateActivity(const class FString& Filename, ECacheActivityType Type, ECacheActivityStatus Status, int32_t bytesTransferred, float timeTaken)
{
	static UFunction* uFnUpdateActivity = nullptr;

	if (!uFnUpdateActivity)
	{
		uFnUpdateActivity = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.UpdateActivity");
	}

	UROnlineCustomContentCacheManager_eventUpdateActivity_Params UpdateActivity_Params;
	memset(&UpdateActivity_Params, 0, sizeof(UpdateActivity_Params));
	if (!uFnUpdateActivity)
	{
		return;
	}

	memcpy_s(&UpdateActivity_Params.Filename, sizeof(UpdateActivity_Params.Filename), &Filename, sizeof(Filename));
	UpdateActivity_Params.Type = static_cast<uint8_t>(Type);
	UpdateActivity_Params.Status = static_cast<uint8_t>(Status);
	UpdateActivity_Params.bytesTransferred = bytesTransferred;
	UpdateActivity_Params.timeTaken = timeTaken;

	this->ProcessEvent(uFnUpdateActivity, &UpdateActivity_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.OnCleanupObsoleteInternal
// [0x00120002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  sCustomId                      (CPF_Parm | CPF_NeedCtorLink)

void UROnlineCustomContentCacheManager::OnCleanupObsoleteInternal(bool bWasSuccessful, const class FString& sCustomId)
{
	static UFunction* uFnOnCleanupObsoleteInternal = nullptr;

	if (!uFnOnCleanupObsoleteInternal)
	{
		uFnOnCleanupObsoleteInternal = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.OnCleanupObsoleteInternal");
	}

	UROnlineCustomContentCacheManager_execOnCleanupObsoleteInternal_Params OnCleanupObsoleteInternal_Params;
	memset(&OnCleanupObsoleteInternal_Params, 0, sizeof(OnCleanupObsoleteInternal_Params));
	if (!uFnOnCleanupObsoleteInternal)
	{
		return;
	}

	OnCleanupObsoleteInternal_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCleanupObsoleteInternal_Params.sCustomId, sizeof(OnCleanupObsoleteInternal_Params.sCustomId), &sCustomId, sizeof(sCustomId));

	this->ProcessEvent(uFnOnCleanupObsoleteInternal, &OnCleanupObsoleteInternal_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.OnCrcDownloadComplete
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UOnlineCustomContentRequestHydra* SubRequest                     (CPF_Parm)
// class FString                  Category                       (CPF_Parm | CPF_NeedCtorLink)

void UROnlineCustomContentCacheManager::eventOnCrcDownloadComplete(class UOnlineCustomContentRequestHydra* SubRequest, const class FString& Category)
{
	static UFunction* uFnOnCrcDownloadComplete = nullptr;

	if (!uFnOnCrcDownloadComplete)
	{
		uFnOnCrcDownloadComplete = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.OnCrcDownloadComplete");
	}

	UROnlineCustomContentCacheManager_eventOnCrcDownloadComplete_Params OnCrcDownloadComplete_Params;
	memset(&OnCrcDownloadComplete_Params, 0, sizeof(OnCrcDownloadComplete_Params));
	if (!uFnOnCrcDownloadComplete)
	{
		return;
	}

	OnCrcDownloadComplete_Params.SubRequest = SubRequest;
	memcpy_s(&OnCrcDownloadComplete_Params.Category, sizeof(OnCrcDownloadComplete_Params.Category), &Category, sizeof(Category));

	this->ProcessEvent(uFnOnCrcDownloadComplete, &OnCrcDownloadComplete_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.GetRegistryAsFileNames
// [0x00C20802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    OutList                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UROnlineCustomContentCacheManager::eventGetRegistryAsFileNames(class TArray<class FString>& outOutList)
{
	static UFunction* uFnGetRegistryAsFileNames = nullptr;

	if (!uFnGetRegistryAsFileNames)
	{
		uFnGetRegistryAsFileNames = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.GetRegistryAsFileNames");
	}

	UROnlineCustomContentCacheManager_eventGetRegistryAsFileNames_Params GetRegistryAsFileNames_Params;
	memset(&GetRegistryAsFileNames_Params, 0, sizeof(GetRegistryAsFileNames_Params));
	if (!uFnGetRegistryAsFileNames)
	{
		return;
	}

	memcpy_s(&GetRegistryAsFileNames_Params.OutList, sizeof(GetRegistryAsFileNames_Params.OutList), &outOutList, sizeof(outOutList));

	this->ProcessEvent(uFnGetRegistryAsFileNames, &GetRegistryAsFileNames_Params, nullptr);

	memcpy_s(&outOutList, sizeof(outOutList), &GetRegistryAsFileNames_Params.OutList, sizeof(GetRegistryAsFileNames_Params.OutList));
}

// Function IpDrv.ROnlineCustomContentCacheManager.GetRegistryAsList
// [0x00C20802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class TArray<class FString>    OutList                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UROnlineCustomContentCacheManager::eventGetRegistryAsList(class TArray<class FString>& outOutList)
{
	static UFunction* uFnGetRegistryAsList = nullptr;

	if (!uFnGetRegistryAsList)
	{
		uFnGetRegistryAsList = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.GetRegistryAsList");
	}

	UROnlineCustomContentCacheManager_eventGetRegistryAsList_Params GetRegistryAsList_Params;
	memset(&GetRegistryAsList_Params, 0, sizeof(GetRegistryAsList_Params));
	if (!uFnGetRegistryAsList)
	{
		return {};
	}

	memcpy_s(&GetRegistryAsList_Params.OutList, sizeof(GetRegistryAsList_Params.OutList), &outOutList, sizeof(outOutList));

	this->ProcessEvent(uFnGetRegistryAsList, &GetRegistryAsList_Params, nullptr);

	memcpy_s(&outOutList, sizeof(outOutList), &GetRegistryAsList_Params.OutList, sizeof(GetRegistryAsList_Params.OutList));

	return GetRegistryAsList_Params.ReturnValue;
}

// Function IpDrv.ROnlineCustomContentCacheManager.GetIndexOfFolderInRegistry
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Subfolder                      (CPF_Parm | CPF_NeedCtorLink)
// struct FRegistryFolder         folderCopy                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UROnlineCustomContentCacheManager::GetIndexOfFolderInRegistry(const class FString& Subfolder, struct FRegistryFolder& outFolderCopy)
{
	static UFunction* uFnGetIndexOfFolderInRegistry = nullptr;

	if (!uFnGetIndexOfFolderInRegistry)
	{
		uFnGetIndexOfFolderInRegistry = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.GetIndexOfFolderInRegistry");
	}

	UROnlineCustomContentCacheManager_execGetIndexOfFolderInRegistry_Params GetIndexOfFolderInRegistry_Params;
	memset(&GetIndexOfFolderInRegistry_Params, 0, sizeof(GetIndexOfFolderInRegistry_Params));
	if (!uFnGetIndexOfFolderInRegistry)
	{
		return {};
	}

	memcpy_s(&GetIndexOfFolderInRegistry_Params.Subfolder, sizeof(GetIndexOfFolderInRegistry_Params.Subfolder), &Subfolder, sizeof(Subfolder));
	memcpy_s(&GetIndexOfFolderInRegistry_Params.folderCopy, sizeof(GetIndexOfFolderInRegistry_Params.folderCopy), &outFolderCopy, sizeof(outFolderCopy));

	this->ProcessEvent(uFnGetIndexOfFolderInRegistry, &GetIndexOfFolderInRegistry_Params, nullptr);

	memcpy_s(&outFolderCopy, sizeof(outFolderCopy), &GetIndexOfFolderInRegistry_Params.folderCopy, sizeof(GetIndexOfFolderInRegistry_Params.folderCopy));

	return GetIndexOfFolderInRegistry_Params.ReturnValue;
}

// Function IpDrv.ROnlineCustomContentCacheManager.GetIndexOfEntryInFolder
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRegistryFolder         folderCopy                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// struct FRegistryEntry          entryCopy                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UROnlineCustomContentCacheManager::GetIndexOfEntryInFolder(const struct FRegistryFolder& folderCopy, const class FString& Filename, struct FRegistryEntry& outEntryCopy)
{
	static UFunction* uFnGetIndexOfEntryInFolder = nullptr;

	if (!uFnGetIndexOfEntryInFolder)
	{
		uFnGetIndexOfEntryInFolder = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.GetIndexOfEntryInFolder");
	}

	UROnlineCustomContentCacheManager_execGetIndexOfEntryInFolder_Params GetIndexOfEntryInFolder_Params;
	memset(&GetIndexOfEntryInFolder_Params, 0, sizeof(GetIndexOfEntryInFolder_Params));
	if (!uFnGetIndexOfEntryInFolder)
	{
		return {};
	}

	memcpy_s(&GetIndexOfEntryInFolder_Params.folderCopy, sizeof(GetIndexOfEntryInFolder_Params.folderCopy), &folderCopy, sizeof(folderCopy));
	memcpy_s(&GetIndexOfEntryInFolder_Params.Filename, sizeof(GetIndexOfEntryInFolder_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetIndexOfEntryInFolder_Params.entryCopy, sizeof(GetIndexOfEntryInFolder_Params.entryCopy), &outEntryCopy, sizeof(outEntryCopy));

	this->ProcessEvent(uFnGetIndexOfEntryInFolder, &GetIndexOfEntryInFolder_Params, nullptr);

	memcpy_s(&outEntryCopy, sizeof(outEntryCopy), &GetIndexOfEntryInFolder_Params.entryCopy, sizeof(GetIndexOfEntryInFolder_Params.entryCopy));

	return GetIndexOfEntryInFolder_Params.ReturnValue;
}

// Function IpDrv.ROnlineCustomContentCacheManager.GetCopyOfEntryInRegistry
// [0x00C20802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Subfolder                      (CPF_Parm | CPF_NeedCtorLink)
// struct FRegistryEntry          entryCopy                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UROnlineCustomContentCacheManager::eventGetCopyOfEntryInRegistry(const class FString& Filename, const class FString& Subfolder, struct FRegistryEntry& outEntryCopy)
{
	static UFunction* uFnGetCopyOfEntryInRegistry = nullptr;

	if (!uFnGetCopyOfEntryInRegistry)
	{
		uFnGetCopyOfEntryInRegistry = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.GetCopyOfEntryInRegistry");
	}

	UROnlineCustomContentCacheManager_eventGetCopyOfEntryInRegistry_Params GetCopyOfEntryInRegistry_Params;
	memset(&GetCopyOfEntryInRegistry_Params, 0, sizeof(GetCopyOfEntryInRegistry_Params));
	if (!uFnGetCopyOfEntryInRegistry)
	{
		return {};
	}

	memcpy_s(&GetCopyOfEntryInRegistry_Params.Filename, sizeof(GetCopyOfEntryInRegistry_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetCopyOfEntryInRegistry_Params.Subfolder, sizeof(GetCopyOfEntryInRegistry_Params.Subfolder), &Subfolder, sizeof(Subfolder));
	memcpy_s(&GetCopyOfEntryInRegistry_Params.entryCopy, sizeof(GetCopyOfEntryInRegistry_Params.entryCopy), &outEntryCopy, sizeof(outEntryCopy));

	this->ProcessEvent(uFnGetCopyOfEntryInRegistry, &GetCopyOfEntryInRegistry_Params, nullptr);

	memcpy_s(&outEntryCopy, sizeof(outEntryCopy), &GetCopyOfEntryInRegistry_Params.entryCopy, sizeof(GetCopyOfEntryInRegistry_Params.entryCopy));

	return GetCopyOfEntryInRegistry_Params.ReturnValue;
}

// Function IpDrv.ROnlineCustomContentCacheManager.FlagObsoleteInRegistry
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Subfolder                      (CPF_Parm | CPF_NeedCtorLink)

bool UROnlineCustomContentCacheManager::eventFlagObsoleteInRegistry(const class FString& Filename, const class FString& Subfolder)
{
	static UFunction* uFnFlagObsoleteInRegistry = nullptr;

	if (!uFnFlagObsoleteInRegistry)
	{
		uFnFlagObsoleteInRegistry = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.FlagObsoleteInRegistry");
	}

	UROnlineCustomContentCacheManager_eventFlagObsoleteInRegistry_Params FlagObsoleteInRegistry_Params;
	memset(&FlagObsoleteInRegistry_Params, 0, sizeof(FlagObsoleteInRegistry_Params));
	if (!uFnFlagObsoleteInRegistry)
	{
		return {};
	}

	memcpy_s(&FlagObsoleteInRegistry_Params.Filename, sizeof(FlagObsoleteInRegistry_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&FlagObsoleteInRegistry_Params.Subfolder, sizeof(FlagObsoleteInRegistry_Params.Subfolder), &Subfolder, sizeof(Subfolder));

	this->ProcessEvent(uFnFlagObsoleteInRegistry, &FlagObsoleteInRegistry_Params, nullptr);

	return FlagObsoleteInRegistry_Params.ReturnValue;
}

// Function IpDrv.ROnlineCustomContentCacheManager.RemoveFromRegistry
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Subfolder                      (CPF_Parm | CPF_NeedCtorLink)

bool UROnlineCustomContentCacheManager::eventRemoveFromRegistry(const class FString& Filename, const class FString& Subfolder)
{
	static UFunction* uFnRemoveFromRegistry = nullptr;

	if (!uFnRemoveFromRegistry)
	{
		uFnRemoveFromRegistry = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.RemoveFromRegistry");
	}

	UROnlineCustomContentCacheManager_eventRemoveFromRegistry_Params RemoveFromRegistry_Params;
	memset(&RemoveFromRegistry_Params, 0, sizeof(RemoveFromRegistry_Params));
	if (!uFnRemoveFromRegistry)
	{
		return {};
	}

	memcpy_s(&RemoveFromRegistry_Params.Filename, sizeof(RemoveFromRegistry_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&RemoveFromRegistry_Params.Subfolder, sizeof(RemoveFromRegistry_Params.Subfolder), &Subfolder, sizeof(Subfolder));

	this->ProcessEvent(uFnRemoveFromRegistry, &RemoveFromRegistry_Params, nullptr);

	return RemoveFromRegistry_Params.ReturnValue;
}

// Function IpDrv.ROnlineCustomContentCacheManager.UpdateRegistry
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Subfolder                      (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Crc32                          (CPF_Parm)
// int32_t                        Size                           (CPF_Parm)
// uint32_t                       bObsolete                      (CPF_Parm)

void UROnlineCustomContentCacheManager::eventUpdateRegistry(const class FString& Filename, const class FString& Subfolder, int32_t Crc32, int32_t Size, bool bObsolete)
{
	static UFunction* uFnUpdateRegistry = nullptr;

	if (!uFnUpdateRegistry)
	{
		uFnUpdateRegistry = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.UpdateRegistry");
	}

	UROnlineCustomContentCacheManager_eventUpdateRegistry_Params UpdateRegistry_Params;
	memset(&UpdateRegistry_Params, 0, sizeof(UpdateRegistry_Params));
	if (!uFnUpdateRegistry)
	{
		return;
	}

	memcpy_s(&UpdateRegistry_Params.Filename, sizeof(UpdateRegistry_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&UpdateRegistry_Params.Subfolder, sizeof(UpdateRegistry_Params.Subfolder), &Subfolder, sizeof(Subfolder));
	UpdateRegistry_Params.Crc32 = Crc32;
	UpdateRegistry_Params.Size = Size;
	UpdateRegistry_Params.bObsolete = bObsolete;

	this->ProcessEvent(uFnUpdateRegistry, &UpdateRegistry_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.GetFileCacheSize
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Subfolder                      (CPF_Parm | CPF_NeedCtorLink)

int32_t UROnlineCustomContentCacheManager::GetFileCacheSize(const class FString& Filename, const class FString& Subfolder)
{
	static UFunction* uFnGetFileCacheSize = nullptr;

	if (!uFnGetFileCacheSize)
	{
		uFnGetFileCacheSize = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.GetFileCacheSize");
	}

	UROnlineCustomContentCacheManager_execGetFileCacheSize_Params GetFileCacheSize_Params;
	memset(&GetFileCacheSize_Params, 0, sizeof(GetFileCacheSize_Params));
	if (!uFnGetFileCacheSize)
	{
		return {};
	}

	memcpy_s(&GetFileCacheSize_Params.Filename, sizeof(GetFileCacheSize_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetFileCacheSize_Params.Subfolder, sizeof(GetFileCacheSize_Params.Subfolder), &Subfolder, sizeof(Subfolder));

	this->ProcessEvent(uFnGetFileCacheSize, &GetFileCacheSize_Params, nullptr);

	return GetFileCacheSize_Params.ReturnValue;
}

// Function IpDrv.ROnlineCustomContentCacheManager.GetFileCacheStatus
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// ECacheFileStatus               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Subfolder                      (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        ExpectedCrc32                  (CPF_Parm)

ECacheFileStatus UROnlineCustomContentCacheManager::GetFileCacheStatus(const class FString& Filename, const class FString& Subfolder, int32_t ExpectedCrc32)
{
	static UFunction* uFnGetFileCacheStatus = nullptr;

	if (!uFnGetFileCacheStatus)
	{
		uFnGetFileCacheStatus = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.GetFileCacheStatus");
	}

	UROnlineCustomContentCacheManager_execGetFileCacheStatus_Params GetFileCacheStatus_Params;
	memset(&GetFileCacheStatus_Params, 0, sizeof(GetFileCacheStatus_Params));
	if (!uFnGetFileCacheStatus)
	{
		return {};
	}

	memcpy_s(&GetFileCacheStatus_Params.Filename, sizeof(GetFileCacheStatus_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetFileCacheStatus_Params.Subfolder, sizeof(GetFileCacheStatus_Params.Subfolder), &Subfolder, sizeof(Subfolder));
	GetFileCacheStatus_Params.ExpectedCrc32 = ExpectedCrc32;

	this->ProcessEvent(uFnGetFileCacheStatus, &GetFileCacheStatus_Params, nullptr);

	return static_cast<ECacheFileStatus>(GetFileCacheStatus_Params.ReturnValue);
}

// Function IpDrv.ROnlineCustomContentCacheManager.InitializeCacheRegistry
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void UROnlineCustomContentCacheManager::eventInitializeCacheRegistry()
{
	static UFunction* uFnInitializeCacheRegistry = nullptr;

	if (!uFnInitializeCacheRegistry)
	{
		uFnInitializeCacheRegistry = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.InitializeCacheRegistry");
	}

	UROnlineCustomContentCacheManager_eventInitializeCacheRegistry_Params InitializeCacheRegistry_Params;
	memset(&InitializeCacheRegistry_Params, 0, sizeof(InitializeCacheRegistry_Params));
	if (!uFnInitializeCacheRegistry)
	{
		return;
	}


	this->ProcessEvent(uFnInitializeCacheRegistry, &InitializeCacheRegistry_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheDeleteComplete
// [0x00120002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// float                          timeTaken                      (CPF_Parm)

void UROnlineCustomContentCacheManager::OnCacheDeleteComplete(bool bWasSuccessful, const class FString& Filename, float timeTaken)
{
	static UFunction* uFnOnCacheDeleteComplete = nullptr;

	if (!uFnOnCacheDeleteComplete)
	{
		uFnOnCacheDeleteComplete = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.OnCacheDeleteComplete");
	}

	UROnlineCustomContentCacheManager_execOnCacheDeleteComplete_Params OnCacheDeleteComplete_Params;
	memset(&OnCacheDeleteComplete_Params, 0, sizeof(OnCacheDeleteComplete_Params));
	if (!uFnOnCacheDeleteComplete)
	{
		return;
	}

	OnCacheDeleteComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCacheDeleteComplete_Params.Filename, sizeof(OnCacheDeleteComplete_Params.Filename), &Filename, sizeof(Filename));
	OnCacheDeleteComplete_Params.timeTaken = timeTaken;

	this->ProcessEvent(uFnOnCacheDeleteComplete, &OnCacheDeleteComplete_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheDeleteBegin
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UROnlineCustomContentCacheManager::eventOnCacheDeleteBegin()
{
	static UFunction* uFnOnCacheDeleteBegin = nullptr;

	if (!uFnOnCacheDeleteBegin)
	{
		uFnOnCacheDeleteBegin = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.OnCacheDeleteBegin");
	}

	UROnlineCustomContentCacheManager_eventOnCacheDeleteBegin_Params OnCacheDeleteBegin_Params;
	memset(&OnCacheDeleteBegin_Params, 0, sizeof(OnCacheDeleteBegin_Params));
	if (!uFnOnCacheDeleteBegin)
	{
		return;
	}


	this->ProcessEvent(uFnOnCacheDeleteBegin, &OnCacheDeleteBegin_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheSaveComplete
// [0x00120002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytesTransferred               (CPF_Parm)
// float                          timeTaken                      (CPF_Parm)

void UROnlineCustomContentCacheManager::OnCacheSaveComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesTransferred, float timeTaken)
{
	static UFunction* uFnOnCacheSaveComplete = nullptr;

	if (!uFnOnCacheSaveComplete)
	{
		uFnOnCacheSaveComplete = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.OnCacheSaveComplete");
	}

	UROnlineCustomContentCacheManager_execOnCacheSaveComplete_Params OnCacheSaveComplete_Params;
	memset(&OnCacheSaveComplete_Params, 0, sizeof(OnCacheSaveComplete_Params));
	if (!uFnOnCacheSaveComplete)
	{
		return;
	}

	OnCacheSaveComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCacheSaveComplete_Params.Filename, sizeof(OnCacheSaveComplete_Params.Filename), &Filename, sizeof(Filename));
	OnCacheSaveComplete_Params.bytesTransferred = bytesTransferred;
	OnCacheSaveComplete_Params.timeTaken = timeTaken;

	this->ProcessEvent(uFnOnCacheSaveComplete, &OnCacheSaveComplete_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheSaveBegin
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UROnlineCustomContentCacheManager::eventOnCacheSaveBegin()
{
	static UFunction* uFnOnCacheSaveBegin = nullptr;

	if (!uFnOnCacheSaveBegin)
	{
		uFnOnCacheSaveBegin = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.OnCacheSaveBegin");
	}

	UROnlineCustomContentCacheManager_eventOnCacheSaveBegin_Params OnCacheSaveBegin_Params;
	memset(&OnCacheSaveBegin_Params, 0, sizeof(OnCacheSaveBegin_Params));
	if (!uFnOnCacheSaveBegin)
	{
		return;
	}


	this->ProcessEvent(uFnOnCacheSaveBegin, &OnCacheSaveBegin_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheLoadComplete
// [0x00120002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytesTransferred               (CPF_Parm)
// float                          timeTaken                      (CPF_Parm)

void UROnlineCustomContentCacheManager::OnCacheLoadComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesTransferred, float timeTaken)
{
	static UFunction* uFnOnCacheLoadComplete = nullptr;

	if (!uFnOnCacheLoadComplete)
	{
		uFnOnCacheLoadComplete = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.OnCacheLoadComplete");
	}

	UROnlineCustomContentCacheManager_execOnCacheLoadComplete_Params OnCacheLoadComplete_Params;
	memset(&OnCacheLoadComplete_Params, 0, sizeof(OnCacheLoadComplete_Params));
	if (!uFnOnCacheLoadComplete)
	{
		return;
	}

	OnCacheLoadComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCacheLoadComplete_Params.Filename, sizeof(OnCacheLoadComplete_Params.Filename), &Filename, sizeof(Filename));
	OnCacheLoadComplete_Params.bytesTransferred = bytesTransferred;
	OnCacheLoadComplete_Params.timeTaken = timeTaken;

	this->ProcessEvent(uFnOnCacheLoadComplete, &OnCacheLoadComplete_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheLoadBegin
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UROnlineCustomContentCacheManager::eventOnCacheLoadBegin()
{
	static UFunction* uFnOnCacheLoadBegin = nullptr;

	if (!uFnOnCacheLoadBegin)
	{
		uFnOnCacheLoadBegin = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.OnCacheLoadBegin");
	}

	UROnlineCustomContentCacheManager_eventOnCacheLoadBegin_Params OnCacheLoadBegin_Params;
	memset(&OnCacheLoadBegin_Params, 0, sizeof(OnCacheLoadBegin_Params));
	if (!uFnOnCacheLoadBegin)
	{
		return;
	}


	this->ProcessEvent(uFnOnCacheLoadBegin, &OnCacheLoadBegin_Params, nullptr);
}

// Function IpDrv.ROnlineCustomContentCacheManager.AddToDeleteQueue
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineCustomContentRequestCacheableHydra* Request                        (CPF_Parm)

void UROnlineCustomContentCacheManager::eventAddToDeleteQueue(class UOnlineCustomContentRequestCacheableHydra* Request)
{
	static UFunction* uFnAddToDeleteQueue = nullptr;

	if (!uFnAddToDeleteQueue)
	{
		uFnAddToDeleteQueue = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.AddToDeleteQueue");
	}

	UROnlineCustomContentCacheManager_eventAddToDeleteQueue_Params AddToDeleteQueue_Params;
	memset(&AddToDeleteQueue_Params, 0, sizeof(AddToDeleteQueue_Params));
	if (!uFnAddToDeleteQueue)
	{
		return;
	}

	AddToDeleteQueue_Params.Request = Request;

	auto native_AddToDeleteQueue = uFnAddToDeleteQueue->iNative;
	uFnAddToDeleteQueue->iNative = 0;
	this->ProcessEvent(uFnAddToDeleteQueue, &AddToDeleteQueue_Params, nullptr);
	uFnAddToDeleteQueue->iNative = native_AddToDeleteQueue;
}

// Function IpDrv.ROnlineCustomContentCacheManager.AddToWriteQueue
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineCustomContentRequestCacheableHydra* Request                        (CPF_Parm)

void UROnlineCustomContentCacheManager::eventAddToWriteQueue(class UOnlineCustomContentRequestCacheableHydra* Request)
{
	static UFunction* uFnAddToWriteQueue = nullptr;

	if (!uFnAddToWriteQueue)
	{
		uFnAddToWriteQueue = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.AddToWriteQueue");
	}

	UROnlineCustomContentCacheManager_eventAddToWriteQueue_Params AddToWriteQueue_Params;
	memset(&AddToWriteQueue_Params, 0, sizeof(AddToWriteQueue_Params));
	if (!uFnAddToWriteQueue)
	{
		return;
	}

	AddToWriteQueue_Params.Request = Request;

	auto native_AddToWriteQueue = uFnAddToWriteQueue->iNative;
	uFnAddToWriteQueue->iNative = 0;
	this->ProcessEvent(uFnAddToWriteQueue, &AddToWriteQueue_Params, nullptr);
	uFnAddToWriteQueue->iNative = native_AddToWriteQueue;
}

// Function IpDrv.ROnlineCustomContentCacheManager.RemoveFromReadQueue
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineCustomContentRequestCacheableHydra* Request                        (CPF_Parm)

void UROnlineCustomContentCacheManager::eventRemoveFromReadQueue(class UOnlineCustomContentRequestCacheableHydra* Request)
{
	static UFunction* uFnRemoveFromReadQueue = nullptr;

	if (!uFnRemoveFromReadQueue)
	{
		uFnRemoveFromReadQueue = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.RemoveFromReadQueue");
	}

	UROnlineCustomContentCacheManager_eventRemoveFromReadQueue_Params RemoveFromReadQueue_Params;
	memset(&RemoveFromReadQueue_Params, 0, sizeof(RemoveFromReadQueue_Params));
	if (!uFnRemoveFromReadQueue)
	{
		return;
	}

	RemoveFromReadQueue_Params.Request = Request;

	auto native_RemoveFromReadQueue = uFnRemoveFromReadQueue->iNative;
	uFnRemoveFromReadQueue->iNative = 0;
	this->ProcessEvent(uFnRemoveFromReadQueue, &RemoveFromReadQueue_Params, nullptr);
	uFnRemoveFromReadQueue->iNative = native_RemoveFromReadQueue;
}

// Function IpDrv.ROnlineCustomContentCacheManager.AddToReadQueue
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineCustomContentRequestCacheableHydra* Request                        (CPF_Parm)

void UROnlineCustomContentCacheManager::eventAddToReadQueue(class UOnlineCustomContentRequestCacheableHydra* Request)
{
	static UFunction* uFnAddToReadQueue = nullptr;

	if (!uFnAddToReadQueue)
	{
		uFnAddToReadQueue = UFunction::FindFunction("Function IpDrv.ROnlineCustomContentCacheManager.AddToReadQueue");
	}

	UROnlineCustomContentCacheManager_eventAddToReadQueue_Params AddToReadQueue_Params;
	memset(&AddToReadQueue_Params, 0, sizeof(AddToReadQueue_Params));
	if (!uFnAddToReadQueue)
	{
		return;
	}

	AddToReadQueue_Params.Request = Request;

	auto native_AddToReadQueue = uFnAddToReadQueue->iNative;
	uFnAddToReadQueue->iNative = 0;
	this->ProcessEvent(uFnAddToReadQueue, &AddToReadQueue_Params, nullptr);
	uFnAddToReadQueue->iNative = native_AddToReadQueue;
}

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UOnlineImageDownloaderWeb::DebugDraw(class UCanvas* Canvas)
{
	static UFunction* uFnDebugDraw = nullptr;

	if (!uFnDebugDraw)
	{
		uFnDebugDraw = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DebugDraw");
	}

	UOnlineImageDownloaderWeb_execDebugDraw_Params DebugDraw_Params;
	memset(&DebugDraw_Params, 0, sizeof(DebugDraw_Params));
	if (!uFnDebugDraw)
	{
		return;
	}

	DebugDraw_Params.Canvas = Canvas;

	this->ProcessEvent(uFnDebugDraw, &DebugDraw_Params, nullptr);
}

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bDidSucceed                    (CPF_Parm)

void UOnlineImageDownloaderWeb::OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnOnDownloadComplete = nullptr;

	if (!uFnOnDownloadComplete)
	{
		uFnOnDownloadComplete = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete");
	}

	UOnlineImageDownloaderWeb_execOnDownloadComplete_Params OnDownloadComplete_Params;
	memset(&OnDownloadComplete_Params, 0, sizeof(OnDownloadComplete_Params));
	if (!uFnOnDownloadComplete)
	{
		return;
	}

	OnDownloadComplete_Params.OriginalRequest = OriginalRequest;
	OnDownloadComplete_Params.Response = Response;
	OnDownloadComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnDownloadComplete, &OnDownloadComplete_Params, nullptr);
}

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UOnlineImageDownloaderWeb::DownloadNextImage()
{
	static UFunction* uFnDownloadNextImage = nullptr;

	if (!uFnDownloadNextImage)
	{
		uFnDownloadNextImage = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage");
	}

	UOnlineImageDownloaderWeb_execDownloadNextImage_Params DownloadNextImage_Params;
	memset(&DownloadNextImage_Params, 0, sizeof(DownloadNextImage_Params));
	if (!uFnDownloadNextImage)
	{
		return;
	}


	this->ProcessEvent(uFnDownloadNextImage, &DownloadNextImage_Params, nullptr);
}

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineImageDownloaderWeb::ClearAllDownloads()
{
	static UFunction* uFnClearAllDownloads = nullptr;

	if (!uFnClearAllDownloads)
	{
		uFnClearAllDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads");
	}

	UOnlineImageDownloaderWeb_execClearAllDownloads_Params ClearAllDownloads_Params;
	memset(&ClearAllDownloads_Params, 0, sizeof(ClearAllDownloads_Params));
	if (!uFnClearAllDownloads)
	{
		return;
	}


	this->ProcessEvent(uFnClearAllDownloads, &ClearAllDownloads_Params, nullptr);
}

// Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    URLs                           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::ClearDownloads(const class TArray<class FString>& URLs)
{
	static UFunction* uFnClearDownloads = nullptr;

	if (!uFnClearDownloads)
	{
		uFnClearDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads");
	}

	UOnlineImageDownloaderWeb_execClearDownloads_Params ClearDownloads_Params;
	memset(&ClearDownloads_Params, 0, sizeof(ClearDownloads_Params));
	if (!uFnClearDownloads)
	{
		return;
	}

	memcpy_s(&ClearDownloads_Params.URLs, sizeof(ClearDownloads_Params.URLs), &URLs, sizeof(URLs));

	this->ProcessEvent(uFnClearDownloads, &ClearDownloads_Params, nullptr);
}

// Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOnlineImageDownloaderWeb::GetNumPendingDownloads()
{
	static UFunction* uFnGetNumPendingDownloads = nullptr;

	if (!uFnGetNumPendingDownloads)
	{
		uFnGetNumPendingDownloads = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads");
	}

	UOnlineImageDownloaderWeb_execGetNumPendingDownloads_Params GetNumPendingDownloads_Params;
	memset(&GetNumPendingDownloads_Params, 0, sizeof(GetNumPendingDownloads_Params));
	if (!uFnGetNumPendingDownloads)
	{
		return {};
	}


	this->ProcessEvent(uFnGetNumPendingDownloads, &GetNumPendingDownloads_Params, nullptr);

	return GetNumPendingDownloads_Params.ReturnValue;
}

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    URLs                           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::RequestOnlineImages(const class TArray<class FString>& URLs)
{
	static UFunction* uFnRequestOnlineImages = nullptr;

	if (!uFnRequestOnlineImages)
	{
		uFnRequestOnlineImages = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages");
	}

	UOnlineImageDownloaderWeb_execRequestOnlineImages_Params RequestOnlineImages_Params;
	memset(&RequestOnlineImages_Params, 0, sizeof(RequestOnlineImages_Params));
	if (!uFnRequestOnlineImages)
	{
		return;
	}

	memcpy_s(&RequestOnlineImages_Params.URLs, sizeof(RequestOnlineImages_Params.URLs), &URLs, sizeof(URLs));

	this->ProcessEvent(uFnRequestOnlineImages, &RequestOnlineImages_Params, nullptr);
}

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UTexture*                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

class UTexture* UOnlineImageDownloaderWeb::GetOnlineImageTexture(const class FString& URL)
{
	static UFunction* uFnGetOnlineImageTexture = nullptr;

	if (!uFnGetOnlineImageTexture)
	{
		uFnGetOnlineImageTexture = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture");
	}

	UOnlineImageDownloaderWeb_execGetOnlineImageTexture_Params GetOnlineImageTexture_Params;
	memset(&GetOnlineImageTexture_Params, 0, sizeof(GetOnlineImageTexture_Params));
	if (!uFnGetOnlineImageTexture)
	{
		return {};
	}

	memcpy_s(&GetOnlineImageTexture_Params.URL, sizeof(GetOnlineImageTexture_Params.URL), &URL, sizeof(URL));

	this->ProcessEvent(uFnGetOnlineImageTexture, &GetOnlineImageTexture_Params, nullptr);

	return GetOnlineImageTexture_Params.ReturnValue;
}

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FOnlineImageDownload    CachedEntry                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineImageDownloaderWeb::OnOnlineImageDownloaded(const struct FOnlineImageDownload& CachedEntry)
{
	static UFunction* uFnOnOnlineImageDownloaded = nullptr;

	if (!uFnOnOnlineImageDownloaded)
	{
		uFnOnOnlineImageDownloaded = UFunction::FindFunction("Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded");
	}

	UOnlineImageDownloaderWeb_execOnOnlineImageDownloaded_Params OnOnlineImageDownloaded_Params;
	memset(&OnOnlineImageDownloaded_Params, 0, sizeof(OnOnlineImageDownloaded_Params));
	if (!uFnOnOnlineImageDownloaded)
	{
		return;
	}

	memcpy_s(&OnOnlineImageDownloaded_Params.CachedEntry, sizeof(OnOnlineImageDownloaded_Params.CachedEntry), &CachedEntry, sizeof(CachedEntry));

	this->ProcessEvent(uFnOnOnlineImageDownloaded, &OnOnlineImageDownloaded_Params, nullptr);
}

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
