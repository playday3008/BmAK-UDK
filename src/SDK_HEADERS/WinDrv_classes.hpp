/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: WinDrv_classes.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WinDrv.FacebookWindows
// 0x0010 (0x00D4 - 0x00E4)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x00D4 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    ChildProcHandle;                               // 0x00DC (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.FacebookWindows");
		}

		return uClassPointer;
	};


	void OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void eventRequestFacebookFriends();
	void OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void eventRequestFacebookMeInfo();
	void FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ProcessFacebookRequest(const class FString& Payload, int32_t ResponseCode);
	void FacebookRequest(const class FString& GraphRequest);
	void Disconnect();
	bool IsAuthorized();
	bool Authorize();
	bool Init();
};
// Class WinDrv.HttpRequestWindows
// 0x0030 (0x0064 - 0x0094)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                       // 0x0064 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	class FString                                      RequestVerb;                                   // 0x006C (0x0010) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FPointer                                    RequestURL;                                    // 0x007C (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<uint8_t>                              Payload;                                       // 0x0084 (0x0010) [0x0000000000000201] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		}

		return uClassPointer;
	};


	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(const class FString& HeaderName, const class FString& HeaderValue);
	class UHttpRequestInterface* SetContentAsString(const class FString& ContentString);
	class UHttpRequestInterface* SetContent(class TArray<uint8_t>& outContentPayload);
	class UHttpRequestInterface* SetURL(const class FString& URL);
	class UHttpRequestInterface* SetVerb(const class FString& Verb);
	class FString GetVerb();
	void GetContent(class TArray<uint8_t>& outContent);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(const class FString& ParameterName);
	class TArray<class FString> GetHeaders();
	class FString GetHeader(const class FString& HeaderName);
};
// Class WinDrv.HttpResponseWindows
// 0x0018 (0x0054 - 0x006C)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                      // 0x0054 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<uint8_t>                              Payload;                                       // 0x005C (0x0010) [0x0000000000000201] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		}

		return uClassPointer;
	};


	int32_t GetResponseCode();
	class FString GetContentAsString();
	void GetContent(class TArray<uint8_t>& outContent);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(const class FString& ParameterName);
	class TArray<class FString> GetHeaders();
	class FString GetHeader(const class FString& HeaderName);
};
// Class WinDrv.WindowsClient
// 0x01F4 (0x0078 - 0x026C)
class UWindowsClient : public UClient
{
public:
	uint8_t                                            UnknownData00[0x17C];                          // 0x0078 (0x017C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                              // 0x01F4 (0x0008) [0x0000000000000800] (CPF_Config)  
	uint8_t                                            UnknownData01[0x34];                            // 0x01FC (0x0034) MISSED OFFSET
	int32_t                                            AllowJoystickInput;                            // 0x0230 (0x0004) [0x0000000000000800] (CPF_Config)  
	uint8_t                                            UnknownData02[0x38];                            // 0x0234 (0x0038) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.WindowsClient");
		}

		return uClassPointer;
	};

};
// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x00AC - 0x00AC)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		}

		return uClassPointer;
	};

};
// Class WinDrv.HttpRequestWindowsMcp
// 0x0020 (0x0094 - 0x00B4)
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	class FString                                      AppID;                                         // 0x0094 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      AppSecret;                                     // 0x00A4 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpRequestWindowsMcp");
		}

		return uClassPointer;
	};


	bool ProcessRequest();
};
/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
