/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.DeleteDLC
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  DLCName                        (CPF_Parm | CPF_NeedCtorLink)

void UDownloadableContentEnumeratorSteamworks::DeleteDLC(const class FString& DLCName)
{
	static UFunction* uFnDeleteDLC = nullptr;

	if (!uFnDeleteDLC)
	{
		uFnDeleteDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.DeleteDLC");
	}

	UDownloadableContentEnumeratorSteamworks_execDeleteDLC_Params DeleteDLC_Params;
	memset(&DeleteDLC_Params, 0, sizeof(DeleteDLC_Params));
	if (!uFnDeleteDLC)
	{
		return;
	}

	memcpy_s(&DeleteDLC_Params.DLCName, sizeof(DeleteDLC_Params.DLCName), &DLCName, sizeof(DLCName));

	this->ProcessEvent(uFnDeleteDLC, &DeleteDLC_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.AppendDLC
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FOnlineContent> Bundles                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UDownloadableContentEnumeratorSteamworks::AppendDLC(class TArray<struct FOnlineContent>& outBundles)
{
	static UFunction* uFnAppendDLC = nullptr;

	if (!uFnAppendDLC)
	{
		uFnAppendDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.AppendDLC");
	}

	UDownloadableContentEnumeratorSteamworks_execAppendDLC_Params AppendDLC_Params;
	memset(&AppendDLC_Params, 0, sizeof(AppendDLC_Params));
	if (!uFnAppendDLC)
	{
		return;
	}

	memcpy_s(&AppendDLC_Params.Bundles, sizeof(AppendDLC_Params.Bundles), &outBundles, sizeof(outBundles));

	auto native_AppendDLC = uFnAppendDLC->iNative;
	uFnAppendDLC->iNative = 0;
	this->ProcessEvent(uFnAppendDLC, &AppendDLC_Params, nullptr);
	uFnAppendDLC->iNative = native_AppendDLC;

	memcpy_s(&outBundles, sizeof(outBundles), &AppendDLC_Params.Bundles, sizeof(AppendDLC_Params.Bundles));
}

// Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.OnReadContentComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UDownloadableContentEnumeratorSteamworks::OnReadContentComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadContentComplete = nullptr;

	if (!uFnOnReadContentComplete)
	{
		uFnOnReadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.OnReadContentComplete");
	}

	UDownloadableContentEnumeratorSteamworks_execOnReadContentComplete_Params OnReadContentComplete_Params;
	memset(&OnReadContentComplete_Params, 0, sizeof(OnReadContentComplete_Params));
	if (!uFnOnReadContentComplete)
	{
		return;
	}

	OnReadContentComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadContentComplete, &OnReadContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.ClearAllContent
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDownloadableContentEnumeratorSteamworks::ClearAllContent()
{
	static UFunction* uFnClearAllContent = nullptr;

	if (!uFnClearAllContent)
	{
		uFnClearAllContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.ClearAllContent");
	}

	UDownloadableContentEnumeratorSteamworks_execClearAllContent_Params ClearAllContent_Params;
	memset(&ClearAllContent_Params, 0, sizeof(ClearAllContent_Params));
	if (!uFnClearAllContent)
	{
		return;
	}


	this->ProcessEvent(uFnClearAllContent, &ClearAllContent_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.FindDLC
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UDownloadableContentEnumeratorSteamworks::FindDLC()
{
	static UFunction* uFnFindDLC = nullptr;

	if (!uFnFindDLC)
	{
		uFnFindDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.FindDLC");
	}

	UDownloadableContentEnumeratorSteamworks_execFindDLC_Params FindDLC_Params;
	memset(&FindDLC_Params, 0, sizeof(FindDLC_Params));
	if (!uFnFindDLC)
	{
		return;
	}


	this->ProcessEvent(uFnFindDLC, &FindDLC_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        OutServerIP                    (CPF_Parm | CPF_OutParm)
// int32_t                        OutServerPort                  (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::GetServerAddr(int32_t& outOutServerIP, int32_t& outOutServerPort)
{
	static UFunction* uFnGetServerAddr = nullptr;

	if (!uFnGetServerAddr)
	{
		uFnGetServerAddr = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr");
	}

	UOnlineAuthInterfaceSteamworks_execGetServerAddr_Params GetServerAddr_Params;
	memset(&GetServerAddr_Params, 0, sizeof(GetServerAddr_Params));
	if (!uFnGetServerAddr)
	{
		return {};
	}

	GetServerAddr_Params.OutServerIP = outOutServerIP;
	GetServerAddr_Params.OutServerPort = outOutServerPort;

	auto native_GetServerAddr = uFnGetServerAddr->iNative;
	uFnGetServerAddr->iNative = 0;
	this->ProcessEvent(uFnGetServerAddr, &GetServerAddr_Params, nullptr);
	uFnGetServerAddr->iNative = native_GetServerAddr;

	outOutServerIP = GetServerAddr_Params.OutServerIP;
	outOutServerPort = GetServerAddr_Params.OutServerPort;

	return GetServerAddr_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            OutServerUID                   (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId(struct FUniqueNetId& outOutServerUID)
{
	static UFunction* uFnGetServerUniqueId = nullptr;

	if (!uFnGetServerUniqueId)
	{
		uFnGetServerUniqueId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId");
	}

	UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Params GetServerUniqueId_Params;
	memset(&GetServerUniqueId_Params, 0, sizeof(GetServerUniqueId_Params));
	if (!uFnGetServerUniqueId)
	{
		return {};
	}

	memcpy_s(&GetServerUniqueId_Params.OutServerUID, sizeof(GetServerUniqueId_Params.OutServerUID), &outOutServerUID, sizeof(outOutServerUID));

	auto native_GetServerUniqueId = uFnGetServerUniqueId->iNative;
	uFnGetServerUniqueId->iNative = 0;
	this->ProcessEvent(uFnGetServerUniqueId, &GetServerUniqueId_Params, nullptr);
	uFnGetServerUniqueId->iNative = native_GetServerUniqueId;

	memcpy_s(&outOutServerUID, sizeof(outOutServerUID), &GetServerUniqueId_Params.OutServerUID, sizeof(GetServerUniqueId_Params.OutServerUID));

	return GetServerUniqueId_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyServerAuthSession = nullptr;

	if (!uFnVerifyServerAuthSession)
	{
		uFnVerifyServerAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Params VerifyServerAuthSession_Params;
	memset(&VerifyServerAuthSession_Params, 0, sizeof(VerifyServerAuthSession_Params));
	if (!uFnVerifyServerAuthSession)
	{
		return {};
	}

	memcpy_s(&VerifyServerAuthSession_Params.ServerUID, sizeof(VerifyServerAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	VerifyServerAuthSession_Params.ServerIP = ServerIP;
	VerifyServerAuthSession_Params.AuthTicketUID = AuthTicketUID;

	auto native_VerifyServerAuthSession = uFnVerifyServerAuthSession->iNative;
	uFnVerifyServerAuthSession->iNative = 0;
	this->ProcessEvent(uFnVerifyServerAuthSession, &VerifyServerAuthSession_Params, nullptr);
	uFnVerifyServerAuthSession->iNative = native_VerifyServerAuthSession;

	return VerifyServerAuthSession_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t& outOutAuthTicketUID)
{
	static UFunction* uFnCreateServerAuthSession = nullptr;

	if (!uFnCreateServerAuthSession)
	{
		uFnCreateServerAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Params CreateServerAuthSession_Params;
	memset(&CreateServerAuthSession_Params, 0, sizeof(CreateServerAuthSession_Params));
	if (!uFnCreateServerAuthSession)
	{
		return {};
	}

	memcpy_s(&CreateServerAuthSession_Params.ClientUID, sizeof(CreateServerAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	CreateServerAuthSession_Params.ClientIP = ClientIP;
	CreateServerAuthSession_Params.ClientPort = ClientPort;
	CreateServerAuthSession_Params.OutAuthTicketUID = outOutAuthTicketUID;

	auto native_CreateServerAuthSession = uFnCreateServerAuthSession->iNative;
	uFnCreateServerAuthSession->iNative = 0;
	this->ProcessEvent(uFnCreateServerAuthSession, &CreateServerAuthSession_Params, nullptr);
	uFnCreateServerAuthSession->iNative = native_CreateServerAuthSession;

	outOutAuthTicketUID = CreateServerAuthSession_Params.OutAuthTicketUID;

	return CreateServerAuthSession_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyClientAuthSession = nullptr;

	if (!uFnVerifyClientAuthSession)
	{
		uFnVerifyClientAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Params VerifyClientAuthSession_Params;
	memset(&VerifyClientAuthSession_Params, 0, sizeof(VerifyClientAuthSession_Params));
	if (!uFnVerifyClientAuthSession)
	{
		return {};
	}

	memcpy_s(&VerifyClientAuthSession_Params.ClientUID, sizeof(VerifyClientAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	VerifyClientAuthSession_Params.ClientIP = ClientIP;
	VerifyClientAuthSession_Params.ClientPort = ClientPort;
	VerifyClientAuthSession_Params.AuthTicketUID = AuthTicketUID;

	auto native_VerifyClientAuthSession = uFnVerifyClientAuthSession->iNative;
	uFnVerifyClientAuthSession->iNative = 0;
	this->ProcessEvent(uFnVerifyClientAuthSession, &VerifyClientAuthSession_Params, nullptr);
	uFnVerifyClientAuthSession->iNative = native_VerifyClientAuthSession;

	return VerifyClientAuthSession_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)
// uint32_t                       bSecure                        (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort, bool bSecure, int32_t& outOutAuthTicketUID)
{
	static UFunction* uFnCreateClientAuthSession = nullptr;

	if (!uFnCreateClientAuthSession)
	{
		uFnCreateClientAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Params CreateClientAuthSession_Params;
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

	auto native_CreateClientAuthSession = uFnCreateClientAuthSession->iNative;
	uFnCreateClientAuthSession->iNative = 0;
	this->ProcessEvent(uFnCreateClientAuthSession, &CreateClientAuthSession_Params, nullptr);
	uFnCreateClientAuthSession->iNative = native_CreateClientAuthSession;

	outOutAuthTicketUID = CreateClientAuthSession_Params.OutAuthTicketUID;

	return CreateClientAuthSession_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::SendServerAuthRequest(const struct FUniqueNetId& ServerUID)
{
	static UFunction* uFnSendServerAuthRequest = nullptr;

	if (!uFnSendServerAuthRequest)
	{
		uFnSendServerAuthRequest = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest");
	}

	UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Params SendServerAuthRequest_Params;
	memset(&SendServerAuthRequest_Params, 0, sizeof(SendServerAuthRequest_Params));
	if (!uFnSendServerAuthRequest)
	{
		return {};
	}

	memcpy_s(&SendServerAuthRequest_Params.ServerUID, sizeof(SendServerAuthRequest_Params.ServerUID), &ServerUID, sizeof(ServerUID));

	auto native_SendServerAuthRequest = uFnSendServerAuthRequest->iNative;
	uFnSendServerAuthRequest->iNative = 0;
	this->ProcessEvent(uFnSendServerAuthRequest, &SendServerAuthRequest_Params, nullptr);
	uFnSendServerAuthRequest->iNative = native_SendServerAuthRequest;

	return SendServerAuthRequest_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID)
{
	static UFunction* uFnSendClientAuthRequest = nullptr;

	if (!uFnSendClientAuthRequest)
	{
		uFnSendClientAuthRequest = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest");
	}

	UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Params SendClientAuthRequest_Params;
	memset(&SendClientAuthRequest_Params, 0, sizeof(SendClientAuthRequest_Params));
	if (!uFnSendClientAuthRequest)
	{
		return {};
	}

	SendClientAuthRequest_Params.ClientConnection = ClientConnection;
	memcpy_s(&SendClientAuthRequest_Params.ClientUID, sizeof(SendClientAuthRequest_Params.ClientUID), &ClientUID, sizeof(ClientUID));

	auto native_SendClientAuthRequest = uFnSendClientAuthRequest->iNative;
	uFnSendClientAuthRequest->iNative = 0;
	this->ProcessEvent(uFnSendClientAuthRequest, &SendClientAuthRequest_Params, nullptr);
	uFnSendClientAuthRequest->iNative = native_SendClientAuthRequest;

	return SendClientAuthRequest_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        StartAt                        (CPF_Parm)
// int32_t                        NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery)
{
	static UFunction* uFnQueryNonAdvertisedData = nullptr;

	if (!uFnQueryNonAdvertisedData)
	{
		uFnQueryNonAdvertisedData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData");
	}

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Params QueryNonAdvertisedData_Params;
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

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		uFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Params ClearUnregisterPlayerCompleteDelegate_Params;
	memset(&ClearUnregisterPlayerCompleteDelegate_Params, 0, sizeof(ClearUnregisterPlayerCompleteDelegate_Params));
	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		uFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Params AddUnregisterPlayerCompleteDelegate_Params;
	memset(&AddUnregisterPlayerCompleteDelegate_Params, 0, sizeof(AddUnregisterPlayerCompleteDelegate_Params));
	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnUnregisterPlayerComplete = nullptr;

	if (!uFnOnUnregisterPlayerComplete)
	{
		uFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete");
	}

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Params OnUnregisterPlayerComplete_Params;
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

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnUnregisterPlayer = nullptr;

	if (!uFnUnregisterPlayer)
	{
		uFnUnregisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer");
	}

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Params UnregisterPlayer_Params;
	memset(&UnregisterPlayer_Params, 0, sizeof(UnregisterPlayer_Params));
	if (!uFnUnregisterPlayer)
	{
		return {};
	}

	memcpy_s(&UnregisterPlayer_Params.SessionName, sizeof(UnregisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UnregisterPlayer_Params.PlayerID, sizeof(UnregisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	auto native_UnregisterPlayer = uFnUnregisterPlayer->iNative;
	uFnUnregisterPlayer->iNative = 0;
	this->ProcessEvent(uFnUnregisterPlayer, &UnregisterPlayer_Params, nullptr);
	uFnUnregisterPlayer->iNative = native_UnregisterPlayer;

	return UnregisterPlayer_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		uFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Params ClearRegisterPlayerCompleteDelegate_Params;
	memset(&ClearRegisterPlayerCompleteDelegate_Params, 0, sizeof(ClearRegisterPlayerCompleteDelegate_Params));
	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		uFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Params AddRegisterPlayerCompleteDelegate_Params;
	memset(&AddRegisterPlayerCompleteDelegate_Params, 0, sizeof(AddRegisterPlayerCompleteDelegate_Params));
	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterPlayerComplete = nullptr;

	if (!uFnOnRegisterPlayerComplete)
	{
		uFnOnRegisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete");
	}

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Params OnRegisterPlayerComplete_Params;
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

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::RegisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static UFunction* uFnRegisterPlayer = nullptr;

	if (!uFnRegisterPlayer)
	{
		uFnRegisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer");
	}

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Params RegisterPlayer_Params;
	memset(&RegisterPlayer_Params, 0, sizeof(RegisterPlayer_Params));
	if (!uFnRegisterPlayer)
	{
		return {};
	}

	memcpy_s(&RegisterPlayer_Params.SessionName, sizeof(RegisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&RegisterPlayer_Params.PlayerID, sizeof(RegisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	RegisterPlayer_Params.bWasInvited = bWasInvited;

	auto native_RegisterPlayer = uFnRegisterPlayer->iNative;
	uFnRegisterPlayer->iNative = 0;
	this->ProcessEvent(uFnRegisterPlayer, &RegisterPlayer_Params, nullptr);
	uFnRegisterPlayer->iNative = native_RegisterPlayer;

	return RegisterPlayer_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite(uint8_t LocalUserNum, const class FName& SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite");
	}

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memset(&AcceptGameInvite_Params, 0, sizeof(AcceptGameInvite_Params));
	if (!uFnAcceptGameInvite)
	{
		return {};
	}

	AcceptGameInvite_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AcceptGameInvite_Params.SessionName, sizeof(AcceptGameInvite_Params.SessionName), &SessionName, sizeof(SessionName));

	auto native_AcceptGameInvite = uFnAcceptGameInvite->iNative;
	uFnAcceptGameInvite->iNative = 0;
	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);
	uFnAcceptGameInvite->iNative = native_AcceptGameInvite;

	return AcceptGameInvite_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted(struct FOnlineGameSearchResult& outInviteResult)
{
	static UFunction* uFnOnGameInviteAccepted = nullptr;

	if (!uFnOnGameInviteAccepted)
	{
		uFnOnGameInviteAccepted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted");
	}

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Params OnGameInviteAccepted_Params;
	memset(&OnGameInviteAccepted_Params, 0, sizeof(OnGameInviteAccepted_Params));
	if (!uFnOnGameInviteAccepted)
	{
		return;
	}

	memcpy_s(&OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult), &outInviteResult, sizeof(outInviteResult));

	this->ProcessEvent(uFnOnGameInviteAccepted, &OnGameInviteAccepted_Params, nullptr);

	memcpy_s(&outInviteResult, sizeof(outInviteResult), &OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult));
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static UFunction* uFnClearGameInviteAcceptedDelegate = nullptr;

	if (!uFnClearGameInviteAcceptedDelegate)
	{
		uFnClearGameInviteAcceptedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate");
	}

	UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Params ClearGameInviteAcceptedDelegate_Params;
	memset(&ClearGameInviteAcceptedDelegate_Params, 0, sizeof(ClearGameInviteAcceptedDelegate_Params));
	if (!uFnClearGameInviteAcceptedDelegate)
	{
		return;
	}

	ClearGameInviteAcceptedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate, sizeof(ClearGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate), &GameInviteAcceptedDelegate, sizeof(GameInviteAcceptedDelegate));

	this->ProcessEvent(uFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static UFunction* uFnAddGameInviteAcceptedDelegate = nullptr;

	if (!uFnAddGameInviteAcceptedDelegate)
	{
		uFnAddGameInviteAcceptedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate");
	}

	UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Params AddGameInviteAcceptedDelegate_Params;
	memset(&AddGameInviteAcceptedDelegate_Params, 0, sizeof(AddGameInviteAcceptedDelegate_Params));
	if (!uFnAddGameInviteAcceptedDelegate)
	{
		return;
	}

	AddGameInviteAcceptedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate, sizeof(AddGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate), &GameInviteAcceptedDelegate, sizeof(GameInviteAcceptedDelegate));

	this->ProcessEvent(uFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// uint32_t                       bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame(const class FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame");
	}

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memset(&UpdateOnlineGame_Params, 0, sizeof(UpdateOnlineGame_Params));
	if (!uFnUpdateOnlineGame)
	{
		return {};
	}

	memcpy_s(&UpdateOnlineGame_Params.SessionName, sizeof(UpdateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	UpdateOnlineGame_Params.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = optionalBShouldRefreshOnlineData;

	auto native_UpdateOnlineGame = uFnUpdateOnlineGame->iNative;
	uFnUpdateOnlineGame->iNative = 0;
	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);
	uFnUpdateOnlineGame->iNative = native_UpdateOnlineGame;

	return UpdateOnlineGame_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CancelFetchSteamDLC
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 TargetObject                   (CPF_Parm)

void UOnlineSubsystemSteamworks::CancelFetchSteamDLC(class UObject* TargetObject)
{
	static UFunction* uFnCancelFetchSteamDLC = nullptr;

	if (!uFnCancelFetchSteamDLC)
	{
		uFnCancelFetchSteamDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CancelFetchSteamDLC");
	}

	UOnlineSubsystemSteamworks_execCancelFetchSteamDLC_Params CancelFetchSteamDLC_Params;
	memset(&CancelFetchSteamDLC_Params, 0, sizeof(CancelFetchSteamDLC_Params));
	if (!uFnCancelFetchSteamDLC)
	{
		return;
	}

	CancelFetchSteamDLC_Params.TargetObject = TargetObject;

	auto native_CancelFetchSteamDLC = uFnCancelFetchSteamDLC->iNative;
	uFnCancelFetchSteamDLC->iNative = 0;
	this->ProcessEvent(uFnCancelFetchSteamDLC, &CancelFetchSteamDLC_Params, nullptr);
	uFnCancelFetchSteamDLC->iNative = native_CancelFetchSteamDLC;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FetchSteamDLC
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 TargetObject                   (CPF_Parm)
// struct FScriptDelegate         cback                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::FetchSteamDLC(class UObject* TargetObject, const struct FScriptDelegate& cback)
{
	static UFunction* uFnFetchSteamDLC = nullptr;

	if (!uFnFetchSteamDLC)
	{
		uFnFetchSteamDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FetchSteamDLC");
	}

	UOnlineSubsystemSteamworks_execFetchSteamDLC_Params FetchSteamDLC_Params;
	memset(&FetchSteamDLC_Params, 0, sizeof(FetchSteamDLC_Params));
	if (!uFnFetchSteamDLC)
	{
		return;
	}

	FetchSteamDLC_Params.TargetObject = TargetObject;
	memcpy_s(&FetchSteamDLC_Params.cback, sizeof(FetchSteamDLC_Params.cback), &cback, sizeof(cback));

	auto native_FetchSteamDLC = uFnFetchSteamDLC->iNative;
	uFnFetchSteamDLC->iNative = 0;
	this->ProcessEvent(uFnFetchSteamDLC, &FetchSteamDLC_Params, nullptr);
	uFnFetchSteamDLC->iNative = native_FetchSteamDLC;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamDLCCallback
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class TArray<struct FSteam_PriceInfo> aPrices                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SteamDLCCallback(bool bWasSuccessful, const class TArray<struct FSteam_PriceInfo>& aPrices)
{
	static UFunction* uFnSteamDLCCallback = nullptr;

	if (!uFnSteamDLCCallback)
	{
		uFnSteamDLCCallback = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamDLCCallback");
	}

	UOnlineSubsystemSteamworks_execSteamDLCCallback_Params SteamDLCCallback_Params;
	memset(&SteamDLCCallback_Params, 0, sizeof(SteamDLCCallback_Params));
	if (!uFnSteamDLCCallback)
	{
		return;
	}

	SteamDLCCallback_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&SteamDLCCallback_Params.aPrices, sizeof(SteamDLCCallback_Params.aPrices), &aPrices, sizeof(aPrices));

	this->ProcessEvent(uFnSteamDLCCallback, &SteamDLCCallback_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::eventExit()
{
	static UFunction* uFnExit = nullptr;

	if (!uFnExit)
	{
		uFnExit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit");
	}

	UOnlineSubsystemSteamworks_eventExit_Params Exit_Params;
	memset(&Exit_Params, 0, sizeof(Exit_Params));
	if (!uFnExit)
	{
		return;
	}


	auto native_Exit = uFnExit->iNative;
	uFnExit->iNative = 0;
	this->ProcessEvent(uFnExit, &Exit_Params, nullptr);
	uFnExit->iNative = native_Exit;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init");
	}

	UOnlineSubsystemSteamworks_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));
	if (!uFnInit)
	{
		return {};
	}


	auto native_Init = uFnInit->iNative;
	uFnInit->iNative = 0;
	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
	uFnInit->iNative = native_Init;

	return Init_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRequestComplete
// [0x00120002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bDidSucceed                    (CPF_Parm)

void UOnlineSubsystemSteamworks::OnRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnOnRequestComplete = nullptr;

	if (!uFnOnRequestComplete)
	{
		uFnOnRequestComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRequestComplete");
	}

	UOnlineSubsystemSteamworks_execOnRequestComplete_Params OnRequestComplete_Params;
	memset(&OnRequestComplete_Params, 0, sizeof(OnRequestComplete_Params));
	if (!uFnOnRequestComplete)
	{
		return;
	}

	OnRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnRequestComplete_Params.Response = Response;
	OnRequestComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnRequestComplete, &OnRequestComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WebRequest
// [0x00024002] (FUNC_Defined | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  HttpMethod                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Params                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::WebRequest(const class FString& HttpMethod, const class FString& URL, const class FString& optionalParams)
{
	static UFunction* uFnWebRequest = nullptr;

	if (!uFnWebRequest)
	{
		uFnWebRequest = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WebRequest");
	}

	UOnlineSubsystemSteamworks_execWebRequest_Params WebRequest_Params;
	memset(&WebRequest_Params, 0, sizeof(WebRequest_Params));
	if (!uFnWebRequest)
	{
		return;
	}

	memcpy_s(&WebRequest_Params.HttpMethod, sizeof(WebRequest_Params.HttpMethod), &HttpMethod, sizeof(HttpMethod));
	memcpy_s(&WebRequest_Params.URL, sizeof(WebRequest_Params.URL), &URL, sizeof(URL));
	memcpy_s(&WebRequest_Params.Params, sizeof(WebRequest_Params.Params), &optionalParams, sizeof(optionalParams));

	this->ProcessEvent(uFnWebRequest, &WebRequest_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamID
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::GetSteamID()
{
	static UFunction* uFnGetSteamID = nullptr;

	if (!uFnGetSteamID)
	{
		uFnGetSteamID = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamID");
	}

	UOnlineSubsystemSteamworks_execGetSteamID_Params GetSteamID_Params;
	memset(&GetSteamID_Params, 0, sizeof(GetSteamID_Params));
	if (!uFnGetSteamID)
	{
		return {};
	}


	auto native_GetSteamID = uFnGetSteamID->iNative;
	uFnGetSteamID->iNative = 0;
	this->ProcessEvent(uFnGetSteamID, &GetSteamID_Params, nullptr);
	uFnGetSteamID->iNative = native_GetSteamID;

	return GetSteamID_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate)
{
	static UFunction* uFnClearWriteSharedFileCompleteDelegate = nullptr;

	if (!uFnClearWriteSharedFileCompleteDelegate)
	{
		uFnClearWriteSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Params ClearWriteSharedFileCompleteDelegate_Params;
	memset(&ClearWriteSharedFileCompleteDelegate_Params, 0, sizeof(ClearWriteSharedFileCompleteDelegate_Params));
	if (!uFnClearWriteSharedFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate, sizeof(ClearWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate), &WriteSharedFileCompleteDelegate, sizeof(WriteSharedFileCompleteDelegate));

	this->ProcessEvent(uFnClearWriteSharedFileCompleteDelegate, &ClearWriteSharedFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate)
{
	static UFunction* uFnAddWriteSharedFileCompleteDelegate = nullptr;

	if (!uFnAddWriteSharedFileCompleteDelegate)
	{
		uFnAddWriteSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Params AddWriteSharedFileCompleteDelegate_Params;
	memset(&AddWriteSharedFileCompleteDelegate_Params, 0, sizeof(AddWriteSharedFileCompleteDelegate_Params));
	if (!uFnAddWriteSharedFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate, sizeof(AddWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate), &WriteSharedFileCompleteDelegate, sizeof(WriteSharedFileCompleteDelegate));

	this->ProcessEvent(uFnAddWriteSharedFileCompleteDelegate, &AddWriteSharedFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          Contents                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteSharedFile(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outContents)
{
	static UFunction* uFnWriteSharedFile = nullptr;

	if (!uFnWriteSharedFile)
	{
		uFnWriteSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile");
	}

	UOnlineSubsystemSteamworks_execWriteSharedFile_Params WriteSharedFile_Params;
	memset(&WriteSharedFile_Params, 0, sizeof(WriteSharedFile_Params));
	if (!uFnWriteSharedFile)
	{
		return {};
	}

	memcpy_s(&WriteSharedFile_Params.UserId, sizeof(WriteSharedFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteSharedFile_Params.Filename, sizeof(WriteSharedFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteSharedFile_Params.Contents, sizeof(WriteSharedFile_Params.Contents), &outContents, sizeof(outContents));

	auto native_WriteSharedFile = uFnWriteSharedFile->iNative;
	uFnWriteSharedFile->iNative = 0;
	this->ProcessEvent(uFnWriteSharedFile, &WriteSharedFile_Params, nullptr);
	uFnWriteSharedFile->iNative = native_WriteSharedFile;

	memcpy_s(&outContents, sizeof(outContents), &WriteSharedFile_Params.Contents, sizeof(WriteSharedFile_Params.Contents));

	return WriteSharedFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteSharedFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename, const class FString& SharedHandle)
{
	static UFunction* uFnOnWriteSharedFileComplete = nullptr;

	if (!uFnOnWriteSharedFileComplete)
	{
		uFnOnWriteSharedFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Params OnWriteSharedFileComplete_Params;
	memset(&OnWriteSharedFileComplete_Params, 0, sizeof(OnWriteSharedFileComplete_Params));
	if (!uFnOnWriteSharedFileComplete)
	{
		return;
	}

	OnWriteSharedFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteSharedFileComplete_Params.UserId, sizeof(OnWriteSharedFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnWriteSharedFileComplete_Params.Filename, sizeof(OnWriteSharedFileComplete_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&OnWriteSharedFileComplete_Params.SharedHandle, sizeof(OnWriteSharedFileComplete_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	this->ProcessEvent(uFnOnWriteSharedFileComplete, &OnWriteSharedFileComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate)
{
	static UFunction* uFnClearReadSharedFileCompleteDelegate = nullptr;

	if (!uFnClearReadSharedFileCompleteDelegate)
	{
		uFnClearReadSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Params ClearReadSharedFileCompleteDelegate_Params;
	memset(&ClearReadSharedFileCompleteDelegate_Params, 0, sizeof(ClearReadSharedFileCompleteDelegate_Params));
	if (!uFnClearReadSharedFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate, sizeof(ClearReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate), &ReadSharedFileCompleteDelegate, sizeof(ReadSharedFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadSharedFileCompleteDelegate, &ClearReadSharedFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate)
{
	static UFunction* uFnAddReadSharedFileCompleteDelegate = nullptr;

	if (!uFnAddReadSharedFileCompleteDelegate)
	{
		uFnAddReadSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Params AddReadSharedFileCompleteDelegate_Params;
	memset(&AddReadSharedFileCompleteDelegate_Params, 0, sizeof(AddReadSharedFileCompleteDelegate_Params));
	if (!uFnAddReadSharedFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate, sizeof(AddReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate), &ReadSharedFileCompleteDelegate, sizeof(ReadSharedFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadSharedFileCompleteDelegate, &AddReadSharedFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadSharedFile(const class FString& SharedHandle)
{
	static UFunction* uFnReadSharedFile = nullptr;

	if (!uFnReadSharedFile)
	{
		uFnReadSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile");
	}

	UOnlineSubsystemSteamworks_execReadSharedFile_Params ReadSharedFile_Params;
	memset(&ReadSharedFile_Params, 0, sizeof(ReadSharedFile_Params));
	if (!uFnReadSharedFile)
	{
		return {};
	}

	memcpy_s(&ReadSharedFile_Params.SharedHandle, sizeof(ReadSharedFile_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	auto native_ReadSharedFile = uFnReadSharedFile->iNative;
	uFnReadSharedFile->iNative = 0;
	this->ProcessEvent(uFnReadSharedFile, &ReadSharedFile_Params, nullptr);
	uFnReadSharedFile->iNative = native_ReadSharedFile;

	return ReadSharedFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadSharedFileComplete(bool bWasSuccessful, const class FString& SharedHandle)
{
	static UFunction* uFnOnReadSharedFileComplete = nullptr;

	if (!uFnOnReadSharedFileComplete)
	{
		uFnOnReadSharedFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Params OnReadSharedFileComplete_Params;
	memset(&OnReadSharedFileComplete_Params, 0, sizeof(OnReadSharedFileComplete_Params));
	if (!uFnOnReadSharedFileComplete)
	{
		return;
	}

	OnReadSharedFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadSharedFileComplete_Params.SharedHandle, sizeof(OnReadSharedFileComplete_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	this->ProcessEvent(uFnOnReadSharedFileComplete, &OnReadSharedFileComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearSharedFile(const class FString& SharedHandle)
{
	static UFunction* uFnClearSharedFile = nullptr;

	if (!uFnClearSharedFile)
	{
		uFnClearSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile");
	}

	UOnlineSubsystemSteamworks_execClearSharedFile_Params ClearSharedFile_Params;
	memset(&ClearSharedFile_Params, 0, sizeof(ClearSharedFile_Params));
	if (!uFnClearSharedFile)
	{
		return {};
	}

	memcpy_s(&ClearSharedFile_Params.SharedHandle, sizeof(ClearSharedFile_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	auto native_ClearSharedFile = uFnClearSharedFile->iNative;
	uFnClearSharedFile->iNative = 0;
	this->ProcessEvent(uFnClearSharedFile, &ClearSharedFile_Params, nullptr);
	uFnClearSharedFile->iNative = native_ClearSharedFile;

	return ClearSharedFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ClearSharedFiles()
{
	static UFunction* uFnClearSharedFiles = nullptr;

	if (!uFnClearSharedFiles)
	{
		uFnClearSharedFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles");
	}

	UOnlineSubsystemSteamworks_execClearSharedFiles_Params ClearSharedFiles_Params;
	memset(&ClearSharedFiles_Params, 0, sizeof(ClearSharedFiles_Params));
	if (!uFnClearSharedFiles)
	{
		return {};
	}


	auto native_ClearSharedFiles = uFnClearSharedFiles->iNative;
	uFnClearSharedFiles->iNative = 0;
	this->ProcessEvent(uFnClearSharedFiles, &ClearSharedFiles_Params, nullptr);
	uFnClearSharedFiles->iNative = native_ClearSharedFiles;

	return ClearSharedFiles_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetSharedFileContents(const class FString& SharedHandle, class TArray<uint8_t>& outFileContents)
{
	static UFunction* uFnGetSharedFileContents = nullptr;

	if (!uFnGetSharedFileContents)
	{
		uFnGetSharedFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents");
	}

	UOnlineSubsystemSteamworks_execGetSharedFileContents_Params GetSharedFileContents_Params;
	memset(&GetSharedFileContents_Params, 0, sizeof(GetSharedFileContents_Params));
	if (!uFnGetSharedFileContents)
	{
		return {};
	}

	memcpy_s(&GetSharedFileContents_Params.SharedHandle, sizeof(GetSharedFileContents_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));
	memcpy_s(&GetSharedFileContents_Params.FileContents, sizeof(GetSharedFileContents_Params.FileContents), &outFileContents, sizeof(outFileContents));

	auto native_GetSharedFileContents = uFnGetSharedFileContents->iNative;
	uFnGetSharedFileContents->iNative = 0;
	this->ProcessEvent(uFnGetSharedFileContents, &GetSharedFileContents_Params, nullptr);
	uFnGetSharedFileContents->iNative = native_GetSharedFileContents;

	memcpy_s(&outFileContents, sizeof(outFileContents), &GetSharedFileContents_Params.FileContents, sizeof(GetSharedFileContents_Params.FileContents));

	return GetSharedFileContents_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteFileToScatch
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteFileToScatch(uint8_t LocalUserNum, const class FString& Filename, class TArray<uint8_t>& outFileContents)
{
	static UFunction* uFnWriteFileToScatch = nullptr;

	if (!uFnWriteFileToScatch)
	{
		uFnWriteFileToScatch = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteFileToScatch");
	}

	UOnlineSubsystemSteamworks_execWriteFileToScatch_Params WriteFileToScatch_Params;
	memset(&WriteFileToScatch_Params, 0, sizeof(WriteFileToScatch_Params));
	if (!uFnWriteFileToScatch)
	{
		return {};
	}

	WriteFileToScatch_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&WriteFileToScatch_Params.Filename, sizeof(WriteFileToScatch_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteFileToScatch_Params.FileContents, sizeof(WriteFileToScatch_Params.FileContents), &outFileContents, sizeof(outFileContents));

	auto native_WriteFileToScatch = uFnWriteFileToScatch->iNative;
	uFnWriteFileToScatch->iNative = 0;
	this->ProcessEvent(uFnWriteFileToScatch, &WriteFileToScatch_Params, nullptr);
	uFnWriteFileToScatch->iNative = native_WriteFileToScatch;

	memcpy_s(&outFileContents, sizeof(outFileContents), &WriteFileToScatch_Params.FileContents, sizeof(WriteFileToScatch_Params.FileContents));

	return WriteFileToScatch_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFileFromScatch
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          OutFileContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadFileFromScatch(uint8_t LocalUserNum, const class FString& Filename, class TArray<uint8_t>& outOutFileContents)
{
	static UFunction* uFnReadFileFromScatch = nullptr;

	if (!uFnReadFileFromScatch)
	{
		uFnReadFileFromScatch = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFileFromScatch");
	}

	UOnlineSubsystemSteamworks_execReadFileFromScatch_Params ReadFileFromScatch_Params;
	memset(&ReadFileFromScatch_Params, 0, sizeof(ReadFileFromScatch_Params));
	if (!uFnReadFileFromScatch)
	{
		return {};
	}

	ReadFileFromScatch_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ReadFileFromScatch_Params.Filename, sizeof(ReadFileFromScatch_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&ReadFileFromScatch_Params.OutFileContents, sizeof(ReadFileFromScatch_Params.OutFileContents), &outOutFileContents, sizeof(outOutFileContents));

	auto native_ReadFileFromScatch = uFnReadFileFromScatch->iNative;
	uFnReadFileFromScatch->iNative = 0;
	this->ProcessEvent(uFnReadFileFromScatch, &ReadFileFromScatch_Params, nullptr);
	uFnReadFileFromScatch->iNative = native_ReadFileFromScatch;

	memcpy_s(&outOutFileContents, sizeof(outOutFileContents), &ReadFileFromScatch_Params.OutFileContents, sizeof(ReadFileFromScatch_Params.OutFileContents));

	return ReadFileFromScatch_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::ClearAllDelegates()
{
	static UFunction* uFnClearAllDelegates = nullptr;

	if (!uFnClearAllDelegates)
	{
		uFnClearAllDelegates = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates");
	}

	UOnlineSubsystemSteamworks_execClearAllDelegates_Params ClearAllDelegates_Params;
	memset(&ClearAllDelegates_Params, 0, sizeof(ClearAllDelegates_Params));
	if (!uFnClearAllDelegates)
	{
		return;
	}


	this->ProcessEvent(uFnClearAllDelegates, &ClearAllDelegates_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CancelDownloadFileIO
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::CancelDownloadFileIO()
{
	static UFunction* uFnCancelDownloadFileIO = nullptr;

	if (!uFnCancelDownloadFileIO)
	{
		uFnCancelDownloadFileIO = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CancelDownloadFileIO");
	}

	UOnlineSubsystemSteamworks_execCancelDownloadFileIO_Params CancelDownloadFileIO_Params;
	memset(&CancelDownloadFileIO_Params, 0, sizeof(CancelDownloadFileIO_Params));
	if (!uFnCancelDownloadFileIO)
	{
		return;
	}


	auto native_CancelDownloadFileIO = uFnCancelDownloadFileIO->iNative;
	uFnCancelDownloadFileIO->iNative = 0;
	this->ProcessEvent(uFnCancelDownloadFileIO, &CancelDownloadFileIO_Params, nullptr);
	uFnCancelDownloadFileIO->iNative = native_CancelDownloadFileIO;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteDownloadFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteDownloadFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeleteDownloadFileCompleteDelegate(const struct FScriptDelegate& DeleteDownloadFileCompleteDelegate)
{
	static UFunction* uFnClearDeleteDownloadFileCompleteDelegate = nullptr;

	if (!uFnClearDeleteDownloadFileCompleteDelegate)
	{
		uFnClearDeleteDownloadFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteDownloadFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearDeleteDownloadFileCompleteDelegate_Params ClearDeleteDownloadFileCompleteDelegate_Params;
	memset(&ClearDeleteDownloadFileCompleteDelegate_Params, 0, sizeof(ClearDeleteDownloadFileCompleteDelegate_Params));
	if (!uFnClearDeleteDownloadFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearDeleteDownloadFileCompleteDelegate_Params.DeleteDownloadFileCompleteDelegate, sizeof(ClearDeleteDownloadFileCompleteDelegate_Params.DeleteDownloadFileCompleteDelegate), &DeleteDownloadFileCompleteDelegate, sizeof(DeleteDownloadFileCompleteDelegate));

	this->ProcessEvent(uFnClearDeleteDownloadFileCompleteDelegate, &ClearDeleteDownloadFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteDownloadFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteDownloadFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeleteDownloadFileCompleteDelegate(const struct FScriptDelegate& DeleteDownloadFileCompleteDelegate)
{
	static UFunction* uFnAddDeleteDownloadFileCompleteDelegate = nullptr;

	if (!uFnAddDeleteDownloadFileCompleteDelegate)
	{
		uFnAddDeleteDownloadFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteDownloadFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddDeleteDownloadFileCompleteDelegate_Params AddDeleteDownloadFileCompleteDelegate_Params;
	memset(&AddDeleteDownloadFileCompleteDelegate_Params, 0, sizeof(AddDeleteDownloadFileCompleteDelegate_Params));
	if (!uFnAddDeleteDownloadFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddDeleteDownloadFileCompleteDelegate_Params.DeleteDownloadFileCompleteDelegate, sizeof(AddDeleteDownloadFileCompleteDelegate_Params.DeleteDownloadFileCompleteDelegate), &DeleteDownloadFileCompleteDelegate, sizeof(DeleteDownloadFileCompleteDelegate));

	this->ProcessEvent(uFnAddDeleteDownloadFileCompleteDelegate, &AddDeleteDownloadFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteDownloadFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnDeleteDownloadFileComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnDeleteDownloadFileComplete = nullptr;

	if (!uFnOnDeleteDownloadFileComplete)
	{
		uFnOnDeleteDownloadFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteDownloadFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnDeleteDownloadFileComplete_Params OnDeleteDownloadFileComplete_Params;
	memset(&OnDeleteDownloadFileComplete_Params, 0, sizeof(OnDeleteDownloadFileComplete_Params));
	if (!uFnOnDeleteDownloadFileComplete)
	{
		return;
	}

	OnDeleteDownloadFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteDownloadFileComplete_Params.Filename, sizeof(OnDeleteDownloadFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnDeleteDownloadFileComplete, &OnDeleteDownloadFileComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteDownloadFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::DeleteDownloadFile(const class FString& Filename)
{
	static UFunction* uFnDeleteDownloadFile = nullptr;

	if (!uFnDeleteDownloadFile)
	{
		uFnDeleteDownloadFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteDownloadFile");
	}

	UOnlineSubsystemSteamworks_execDeleteDownloadFile_Params DeleteDownloadFile_Params;
	memset(&DeleteDownloadFile_Params, 0, sizeof(DeleteDownloadFile_Params));
	if (!uFnDeleteDownloadFile)
	{
		return {};
	}

	memcpy_s(&DeleteDownloadFile_Params.Filename, sizeof(DeleteDownloadFile_Params.Filename), &Filename, sizeof(Filename));

	auto native_DeleteDownloadFile = uFnDeleteDownloadFile->iNative;
	uFnDeleteDownloadFile->iNative = 0;
	this->ProcessEvent(uFnDeleteDownloadFile, &DeleteDownloadFile_Params, nullptr);
	uFnDeleteDownloadFile->iNative = native_DeleteDownloadFile;

	return DeleteDownloadFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteDownloadFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteDownloadFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteDownloadFileCompleteDelegate(const struct FScriptDelegate& WriteDownloadFileCompleteDelegate)
{
	static UFunction* uFnClearWriteDownloadFileCompleteDelegate = nullptr;

	if (!uFnClearWriteDownloadFileCompleteDelegate)
	{
		uFnClearWriteDownloadFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteDownloadFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteDownloadFileCompleteDelegate_Params ClearWriteDownloadFileCompleteDelegate_Params;
	memset(&ClearWriteDownloadFileCompleteDelegate_Params, 0, sizeof(ClearWriteDownloadFileCompleteDelegate_Params));
	if (!uFnClearWriteDownloadFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearWriteDownloadFileCompleteDelegate_Params.WriteDownloadFileCompleteDelegate, sizeof(ClearWriteDownloadFileCompleteDelegate_Params.WriteDownloadFileCompleteDelegate), &WriteDownloadFileCompleteDelegate, sizeof(WriteDownloadFileCompleteDelegate));

	this->ProcessEvent(uFnClearWriteDownloadFileCompleteDelegate, &ClearWriteDownloadFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteDownloadFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteDownloadFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteDownloadFileCompleteDelegate(const struct FScriptDelegate& WriteDownloadFileCompleteDelegate)
{
	static UFunction* uFnAddWriteDownloadFileCompleteDelegate = nullptr;

	if (!uFnAddWriteDownloadFileCompleteDelegate)
	{
		uFnAddWriteDownloadFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteDownloadFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteDownloadFileCompleteDelegate_Params AddWriteDownloadFileCompleteDelegate_Params;
	memset(&AddWriteDownloadFileCompleteDelegate_Params, 0, sizeof(AddWriteDownloadFileCompleteDelegate_Params));
	if (!uFnAddWriteDownloadFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddWriteDownloadFileCompleteDelegate_Params.WriteDownloadFileCompleteDelegate, sizeof(AddWriteDownloadFileCompleteDelegate_Params.WriteDownloadFileCompleteDelegate), &WriteDownloadFileCompleteDelegate, sizeof(WriteDownloadFileCompleteDelegate));

	this->ProcessEvent(uFnAddWriteDownloadFileCompleteDelegate, &AddWriteDownloadFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteDownloadFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytesProcessed                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWriteDownloadFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed)
{
	static UFunction* uFnOnWriteDownloadFileComplete = nullptr;

	if (!uFnOnWriteDownloadFileComplete)
	{
		uFnOnWriteDownloadFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteDownloadFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteDownloadFileComplete_Params OnWriteDownloadFileComplete_Params;
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

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteDownloadFile
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  FileCRC                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteDownloadFile(const class FString& Filename, class TArray<uint8_t>& outFileContents, class FString& outFileCRC)
{
	static UFunction* uFnWriteDownloadFile = nullptr;

	if (!uFnWriteDownloadFile)
	{
		uFnWriteDownloadFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteDownloadFile");
	}

	UOnlineSubsystemSteamworks_execWriteDownloadFile_Params WriteDownloadFile_Params;
	memset(&WriteDownloadFile_Params, 0, sizeof(WriteDownloadFile_Params));
	if (!uFnWriteDownloadFile)
	{
		return {};
	}

	memcpy_s(&WriteDownloadFile_Params.Filename, sizeof(WriteDownloadFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteDownloadFile_Params.FileContents, sizeof(WriteDownloadFile_Params.FileContents), &outFileContents, sizeof(outFileContents));
	memcpy_s(&WriteDownloadFile_Params.FileCRC, sizeof(WriteDownloadFile_Params.FileCRC), &outFileCRC, sizeof(outFileCRC));

	auto native_WriteDownloadFile = uFnWriteDownloadFile->iNative;
	uFnWriteDownloadFile->iNative = 0;
	this->ProcessEvent(uFnWriteDownloadFile, &WriteDownloadFile_Params, nullptr);
	uFnWriteDownloadFile->iNative = native_WriteDownloadFile;

	memcpy_s(&outFileContents, sizeof(outFileContents), &WriteDownloadFile_Params.FileContents, sizeof(WriteDownloadFile_Params.FileContents));
	memcpy_s(&outFileCRC, sizeof(outFileCRC), &WriteDownloadFile_Params.FileCRC, sizeof(WriteDownloadFile_Params.FileCRC));

	return WriteDownloadFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadDownloadFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadDownloadFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadDownloadFileCompleteDelegate(const struct FScriptDelegate& ReadDownloadFileCompleteDelegate)
{
	static UFunction* uFnClearReadDownloadFileCompleteDelegate = nullptr;

	if (!uFnClearReadDownloadFileCompleteDelegate)
	{
		uFnClearReadDownloadFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadDownloadFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadDownloadFileCompleteDelegate_Params ClearReadDownloadFileCompleteDelegate_Params;
	memset(&ClearReadDownloadFileCompleteDelegate_Params, 0, sizeof(ClearReadDownloadFileCompleteDelegate_Params));
	if (!uFnClearReadDownloadFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearReadDownloadFileCompleteDelegate_Params.ReadDownloadFileCompleteDelegate, sizeof(ClearReadDownloadFileCompleteDelegate_Params.ReadDownloadFileCompleteDelegate), &ReadDownloadFileCompleteDelegate, sizeof(ReadDownloadFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadDownloadFileCompleteDelegate, &ClearReadDownloadFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadDownloadFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadDownloadFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadDownloadFileCompleteDelegate(const struct FScriptDelegate& ReadDownloadFileCompleteDelegate)
{
	static UFunction* uFnAddReadDownloadFileCompleteDelegate = nullptr;

	if (!uFnAddReadDownloadFileCompleteDelegate)
	{
		uFnAddReadDownloadFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadDownloadFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadDownloadFileCompleteDelegate_Params AddReadDownloadFileCompleteDelegate_Params;
	memset(&AddReadDownloadFileCompleteDelegate_Params, 0, sizeof(AddReadDownloadFileCompleteDelegate_Params));
	if (!uFnAddReadDownloadFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddReadDownloadFileCompleteDelegate_Params.ReadDownloadFileCompleteDelegate, sizeof(AddReadDownloadFileCompleteDelegate_Params.ReadDownloadFileCompleteDelegate), &ReadDownloadFileCompleteDelegate, sizeof(ReadDownloadFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadDownloadFileCompleteDelegate, &AddReadDownloadFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadDownloadFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytesProcessed                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadDownloadFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed)
{
	static UFunction* uFnOnReadDownloadFileComplete = nullptr;

	if (!uFnOnReadDownloadFileComplete)
	{
		uFnOnReadDownloadFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadDownloadFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadDownloadFileComplete_Params OnReadDownloadFileComplete_Params;
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

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadDownloadFile
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          OutFileContents                (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  OutFileCRC                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadDownloadFile(const class FString& Filename, class TArray<uint8_t>& outOutFileContents, class FString& outOutFileCRC)
{
	static UFunction* uFnReadDownloadFile = nullptr;

	if (!uFnReadDownloadFile)
	{
		uFnReadDownloadFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadDownloadFile");
	}

	UOnlineSubsystemSteamworks_execReadDownloadFile_Params ReadDownloadFile_Params;
	memset(&ReadDownloadFile_Params, 0, sizeof(ReadDownloadFile_Params));
	if (!uFnReadDownloadFile)
	{
		return {};
	}

	memcpy_s(&ReadDownloadFile_Params.Filename, sizeof(ReadDownloadFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&ReadDownloadFile_Params.OutFileContents, sizeof(ReadDownloadFile_Params.OutFileContents), &outOutFileContents, sizeof(outOutFileContents));
	memcpy_s(&ReadDownloadFile_Params.OutFileCRC, sizeof(ReadDownloadFile_Params.OutFileCRC), &outOutFileCRC, sizeof(outOutFileCRC));

	auto native_ReadDownloadFile = uFnReadDownloadFile->iNative;
	uFnReadDownloadFile->iNative = 0;
	this->ProcessEvent(uFnReadDownloadFile, &ReadDownloadFile_Params, nullptr);
	uFnReadDownloadFile->iNative = native_ReadDownloadFile;

	memcpy_s(&outOutFileContents, sizeof(outOutFileContents), &ReadDownloadFile_Params.OutFileContents, sizeof(ReadDownloadFile_Params.OutFileContents));
	memcpy_s(&outOutFileCRC, sizeof(outOutFileCRC), &ReadDownloadFile_Params.OutFileCRC, sizeof(ReadDownloadFile_Params.OutFileCRC));

	return ReadDownloadFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDownloadFileSize
// [0x00024400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       KeepHandle                     (CPF_OptionalParm | CPF_Parm)

int32_t UOnlineSubsystemSteamworks::GetDownloadFileSize(const class FString& Filename, bool optionalKeepHandle)
{
	static UFunction* uFnGetDownloadFileSize = nullptr;

	if (!uFnGetDownloadFileSize)
	{
		uFnGetDownloadFileSize = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDownloadFileSize");
	}

	UOnlineSubsystemSteamworks_execGetDownloadFileSize_Params GetDownloadFileSize_Params;
	memset(&GetDownloadFileSize_Params, 0, sizeof(GetDownloadFileSize_Params));
	if (!uFnGetDownloadFileSize)
	{
		return {};
	}

	memcpy_s(&GetDownloadFileSize_Params.Filename, sizeof(GetDownloadFileSize_Params.Filename), &Filename, sizeof(Filename));
	GetDownloadFileSize_Params.KeepHandle = optionalKeepHandle;

	auto native_GetDownloadFileSize = uFnGetDownloadFileSize->iNative;
	uFnGetDownloadFileSize->iNative = 0;
	this->ProcessEvent(uFnGetDownloadFileSize, &GetDownloadFileSize_Params, nullptr);
	uFnGetDownloadFileSize->iNative = native_GetDownloadFileSize;

	return GetDownloadFileSize_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateDownloadFiles
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  Subfolder                      (CPF_Parm | CPF_NeedCtorLink)
// class TArray<class FString>    OutFiles                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EnumerateDownloadFiles(const class FString& Subfolder, class TArray<class FString>& outOutFiles)
{
	static UFunction* uFnEnumerateDownloadFiles = nullptr;

	if (!uFnEnumerateDownloadFiles)
	{
		uFnEnumerateDownloadFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateDownloadFiles");
	}

	UOnlineSubsystemSteamworks_execEnumerateDownloadFiles_Params EnumerateDownloadFiles_Params;
	memset(&EnumerateDownloadFiles_Params, 0, sizeof(EnumerateDownloadFiles_Params));
	if (!uFnEnumerateDownloadFiles)
	{
		return;
	}

	memcpy_s(&EnumerateDownloadFiles_Params.Subfolder, sizeof(EnumerateDownloadFiles_Params.Subfolder), &Subfolder, sizeof(Subfolder));
	memcpy_s(&EnumerateDownloadFiles_Params.OutFiles, sizeof(EnumerateDownloadFiles_Params.OutFiles), &outOutFiles, sizeof(outOutFiles));

	auto native_EnumerateDownloadFiles = uFnEnumerateDownloadFiles->iNative;
	uFnEnumerateDownloadFiles->iNative = 0;
	this->ProcessEvent(uFnEnumerateDownloadFiles, &EnumerateDownloadFiles_Params, nullptr);
	uFnEnumerateDownloadFiles->iNative = native_EnumerateDownloadFiles;

	memcpy_s(&outOutFiles, sizeof(outOutFiles), &EnumerateDownloadFiles_Params.OutFiles, sizeof(EnumerateDownloadFiles_Params.OutFiles));
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateDownloadFolders
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    OutFolders                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EnumerateDownloadFolders(class TArray<class FString>& outOutFolders)
{
	static UFunction* uFnEnumerateDownloadFolders = nullptr;

	if (!uFnEnumerateDownloadFolders)
	{
		uFnEnumerateDownloadFolders = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateDownloadFolders");
	}

	UOnlineSubsystemSteamworks_execEnumerateDownloadFolders_Params EnumerateDownloadFolders_Params;
	memset(&EnumerateDownloadFolders_Params, 0, sizeof(EnumerateDownloadFolders_Params));
	if (!uFnEnumerateDownloadFolders)
	{
		return;
	}

	memcpy_s(&EnumerateDownloadFolders_Params.OutFolders, sizeof(EnumerateDownloadFolders_Params.OutFolders), &outOutFolders, sizeof(outOutFolders));

	auto native_EnumerateDownloadFolders = uFnEnumerateDownloadFolders->iNative;
	uFnEnumerateDownloadFolders->iNative = 0;
	this->ProcessEvent(uFnEnumerateDownloadFolders, &EnumerateDownloadFolders_Params, nullptr);
	uFnEnumerateDownloadFolders->iNative = native_EnumerateDownloadFolders;

	memcpy_s(&outOutFolders, sizeof(outOutFolders), &EnumerateDownloadFolders_Params.OutFolders, sizeof(EnumerateDownloadFolders_Params.OutFolders));
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnClearDeleteUserFileCompleteDelegate)
	{
		uFnClearDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Params ClearDeleteUserFileCompleteDelegate_Params;
	memset(&ClearDeleteUserFileCompleteDelegate_Params, 0, sizeof(ClearDeleteUserFileCompleteDelegate_Params));
	if (!uFnClearDeleteUserFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, sizeof(ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate), &DeleteUserFileCompleteDelegate, sizeof(DeleteUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnAddDeleteUserFileCompleteDelegate)
	{
		uFnAddDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Params AddDeleteUserFileCompleteDelegate_Params;
	memset(&AddDeleteUserFileCompleteDelegate_Params, 0, sizeof(AddDeleteUserFileCompleteDelegate_Params));
	if (!uFnAddDeleteUserFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, sizeof(AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate), &DeleteUserFileCompleteDelegate, sizeof(DeleteUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bShouldCloudDelete             (CPF_Parm)
// uint32_t                       bShouldLocallyDelete           (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteUserFile(const class FString& UserId, const class FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static UFunction* uFnDeleteUserFile = nullptr;

	if (!uFnDeleteUserFile)
	{
		uFnDeleteUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile");
	}

	UOnlineSubsystemSteamworks_execDeleteUserFile_Params DeleteUserFile_Params;
	memset(&DeleteUserFile_Params, 0, sizeof(DeleteUserFile_Params));
	if (!uFnDeleteUserFile)
	{
		return {};
	}

	memcpy_s(&DeleteUserFile_Params.UserId, sizeof(DeleteUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&DeleteUserFile_Params.Filename, sizeof(DeleteUserFile_Params.Filename), &Filename, sizeof(Filename));
	DeleteUserFile_Params.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Params.bShouldLocallyDelete = bShouldLocallyDelete;

	auto native_DeleteUserFile = uFnDeleteUserFile->iNative;
	uFnDeleteUserFile->iNative = 0;
	this->ProcessEvent(uFnDeleteUserFile, &DeleteUserFile_Params, nullptr);
	uFnDeleteUserFile->iNative = native_DeleteUserFile;

	return DeleteUserFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnDeleteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnOnDeleteUserFileComplete = nullptr;

	if (!uFnOnDeleteUserFileComplete)
	{
		uFnOnDeleteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Params OnDeleteUserFileComplete_Params;
	memset(&OnDeleteUserFileComplete_Params, 0, sizeof(OnDeleteUserFileComplete_Params));
	if (!uFnOnDeleteUserFileComplete)
	{
		return;
	}

	OnDeleteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Params.UserId, sizeof(OnDeleteUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnDeleteUserFileComplete_Params.Filename, sizeof(OnDeleteUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static UFunction* uFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!uFnClearWriteUserFileCompleteDelegate)
	{
		uFnClearWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Params ClearWriteUserFileCompleteDelegate_Params;
	memset(&ClearWriteUserFileCompleteDelegate_Params, 0, sizeof(ClearWriteUserFileCompleteDelegate_Params));
	if (!uFnClearWriteUserFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, sizeof(ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate), &WriteUserFileCompleteDelegate, sizeof(WriteUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static UFunction* uFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!uFnAddWriteUserFileCompleteDelegate)
	{
		uFnAddWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Params AddWriteUserFileCompleteDelegate_Params;
	memset(&AddWriteUserFileCompleteDelegate_Params, 0, sizeof(AddWriteUserFileCompleteDelegate_Params));
	if (!uFnAddWriteUserFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, sizeof(AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate), &WriteUserFileCompleteDelegate, sizeof(WriteUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ManageLocalBackups
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ManageLocalBackups(const class FString& Filename)
{
	static UFunction* uFnManageLocalBackups = nullptr;

	if (!uFnManageLocalBackups)
	{
		uFnManageLocalBackups = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ManageLocalBackups");
	}

	UOnlineSubsystemSteamworks_execManageLocalBackups_Params ManageLocalBackups_Params;
	memset(&ManageLocalBackups_Params, 0, sizeof(ManageLocalBackups_Params));
	if (!uFnManageLocalBackups)
	{
		return {};
	}

	memcpy_s(&ManageLocalBackups_Params.Filename, sizeof(ManageLocalBackups_Params.Filename), &Filename, sizeof(Filename));

	auto native_ManageLocalBackups = uFnManageLocalBackups->iNative;
	uFnManageLocalBackups->iNative = 0;
	this->ProcessEvent(uFnManageLocalBackups, &ManageLocalBackups_Params, nullptr);
	uFnManageLocalBackups->iNative = native_ManageLocalBackups;

	return ManageLocalBackups_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileLocal
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SaveName                       (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       isSteamBackup                  (CPF_Parm)
// class TArray<uint8_t>          Contents                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFileLocal(const class FString& SaveName, bool isSteamBackup, class TArray<uint8_t>& outContents)
{
	static UFunction* uFnWriteUserFileLocal = nullptr;

	if (!uFnWriteUserFileLocal)
	{
		uFnWriteUserFileLocal = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileLocal");
	}

	UOnlineSubsystemSteamworks_execWriteUserFileLocal_Params WriteUserFileLocal_Params;
	memset(&WriteUserFileLocal_Params, 0, sizeof(WriteUserFileLocal_Params));
	if (!uFnWriteUserFileLocal)
	{
		return {};
	}

	memcpy_s(&WriteUserFileLocal_Params.SaveName, sizeof(WriteUserFileLocal_Params.SaveName), &SaveName, sizeof(SaveName));
	WriteUserFileLocal_Params.isSteamBackup = isSteamBackup;
	memcpy_s(&WriteUserFileLocal_Params.Contents, sizeof(WriteUserFileLocal_Params.Contents), &outContents, sizeof(outContents));

	auto native_WriteUserFileLocal = uFnWriteUserFileLocal->iNative;
	uFnWriteUserFileLocal->iNative = 0;
	this->ProcessEvent(uFnWriteUserFileLocal, &WriteUserFileLocal_Params, nullptr);
	uFnWriteUserFileLocal->iNative = native_WriteUserFileLocal;

	memcpy_s(&outContents, sizeof(outContents), &WriteUserFileLocal_Params.Contents, sizeof(WriteUserFileLocal_Params.Contents));

	return WriteUserFileLocal_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFile(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents)
{
	static UFunction* uFnWriteUserFile = nullptr;

	if (!uFnWriteUserFile)
	{
		uFnWriteUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile");
	}

	UOnlineSubsystemSteamworks_execWriteUserFile_Params WriteUserFile_Params;
	memset(&WriteUserFile_Params, 0, sizeof(WriteUserFile_Params));
	if (!uFnWriteUserFile)
	{
		return {};
	}

	memcpy_s(&WriteUserFile_Params.UserId, sizeof(WriteUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteUserFile_Params.Filename, sizeof(WriteUserFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteUserFile_Params.FileContents, sizeof(WriteUserFile_Params.FileContents), &outFileContents, sizeof(outFileContents));

	auto native_WriteUserFile = uFnWriteUserFile->iNative;
	uFnWriteUserFile->iNative = 0;
	this->ProcessEvent(uFnWriteUserFile, &WriteUserFile_Params, nullptr);
	uFnWriteUserFile->iNative = native_WriteUserFile;

	memcpy_s(&outFileContents, sizeof(outFileContents), &WriteUserFile_Params.FileContents, sizeof(WriteUserFile_Params.FileContents));

	return WriteUserFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnOnWriteUserFileComplete = nullptr;

	if (!uFnOnWriteUserFileComplete)
	{
		uFnOnWriteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Params OnWriteUserFileComplete_Params;
	memset(&OnWriteUserFileComplete_Params, 0, sizeof(OnWriteUserFileComplete_Params));
	if (!uFnOnWriteUserFileComplete)
	{
		return;
	}

	OnWriteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Params.UserId, sizeof(OnWriteUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnWriteUserFileComplete_Params.Filename, sizeof(OnWriteUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static UFunction* uFnClearReadUserFileCompleteDelegate = nullptr;

	if (!uFnClearReadUserFileCompleteDelegate)
	{
		uFnClearReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Params ClearReadUserFileCompleteDelegate_Params;
	memset(&ClearReadUserFileCompleteDelegate_Params, 0, sizeof(ClearReadUserFileCompleteDelegate_Params));
	if (!uFnClearReadUserFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, sizeof(ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate), &ReadUserFileCompleteDelegate, sizeof(ReadUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static UFunction* uFnAddReadUserFileCompleteDelegate = nullptr;

	if (!uFnAddReadUserFileCompleteDelegate)
	{
		uFnAddReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Params AddReadUserFileCompleteDelegate_Params;
	memset(&AddReadUserFileCompleteDelegate_Params, 0, sizeof(AddReadUserFileCompleteDelegate_Params));
	if (!uFnAddReadUserFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, sizeof(AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate), &ReadUserFileCompleteDelegate, sizeof(ReadUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadUserFile(const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnReadUserFile = nullptr;

	if (!uFnReadUserFile)
	{
		uFnReadUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile");
	}

	UOnlineSubsystemSteamworks_execReadUserFile_Params ReadUserFile_Params;
	memset(&ReadUserFile_Params, 0, sizeof(ReadUserFile_Params));
	if (!uFnReadUserFile)
	{
		return {};
	}

	memcpy_s(&ReadUserFile_Params.UserId, sizeof(ReadUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&ReadUserFile_Params.Filename, sizeof(ReadUserFile_Params.Filename), &Filename, sizeof(Filename));

	auto native_ReadUserFile = uFnReadUserFile->iNative;
	uFnReadUserFile->iNative = 0;
	this->ProcessEvent(uFnReadUserFile, &ReadUserFile_Params, nullptr);
	uFnReadUserFile->iNative = native_ReadUserFile;

	return ReadUserFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnOnReadUserFileComplete = nullptr;

	if (!uFnOnReadUserFileComplete)
	{
		uFnOnReadUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Params OnReadUserFileComplete_Params;
	memset(&OnReadUserFileComplete_Params, 0, sizeof(OnReadUserFileComplete_Params));
	if (!uFnOnReadUserFileComplete)
	{
		return;
	}

	OnReadUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Params.UserId, sizeof(OnReadUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnReadUserFileComplete_Params.Filename, sizeof(OnReadUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadUserFileComplete, &OnReadUserFileComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FEmsFile>  UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetUserFileList(const class FString& UserId, class TArray<struct FEmsFile>& outUserFiles)
{
	static UFunction* uFnGetUserFileList = nullptr;

	if (!uFnGetUserFileList)
	{
		uFnGetUserFileList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList");
	}

	UOnlineSubsystemSteamworks_execGetUserFileList_Params GetUserFileList_Params;
	memset(&GetUserFileList_Params, 0, sizeof(GetUserFileList_Params));
	if (!uFnGetUserFileList)
	{
		return;
	}

	memcpy_s(&GetUserFileList_Params.UserId, sizeof(GetUserFileList_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetUserFileList_Params.UserFiles, sizeof(GetUserFileList_Params.UserFiles), &outUserFiles, sizeof(outUserFiles));

	auto native_GetUserFileList = uFnGetUserFileList->iNative;
	uFnGetUserFileList->iNative = 0;
	this->ProcessEvent(uFnGetUserFileList, &GetUserFileList_Params, nullptr);
	uFnGetUserFileList->iNative = native_GetUserFileList;

	memcpy_s(&outUserFiles, sizeof(outUserFiles), &GetUserFileList_Params.UserFiles, sizeof(GetUserFileList_Params.UserFiles));
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnClearEnumerateUserFileCompleteDelegate)
	{
		uFnClearEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Params ClearEnumerateUserFileCompleteDelegate_Params;
	memset(&ClearEnumerateUserFileCompleteDelegate_Params, 0, sizeof(ClearEnumerateUserFileCompleteDelegate_Params));
	if (!uFnClearEnumerateUserFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, sizeof(ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate), &EnumerateUserFileCompleteDelegate, sizeof(EnumerateUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnAddEnumerateUserFileCompleteDelegate)
	{
		uFnAddEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Params AddEnumerateUserFileCompleteDelegate_Params;
	memset(&AddEnumerateUserFileCompleteDelegate_Params, 0, sizeof(AddEnumerateUserFileCompleteDelegate_Params));
	if (!uFnAddEnumerateUserFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, sizeof(AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate), &EnumerateUserFileCompleteDelegate, sizeof(EnumerateUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EnumerateUserFiles(const class FString& UserId)
{
	static UFunction* uFnEnumerateUserFiles = nullptr;

	if (!uFnEnumerateUserFiles)
	{
		uFnEnumerateUserFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles");
	}

	UOnlineSubsystemSteamworks_execEnumerateUserFiles_Params EnumerateUserFiles_Params;
	memset(&EnumerateUserFiles_Params, 0, sizeof(EnumerateUserFiles_Params));
	if (!uFnEnumerateUserFiles)
	{
		return;
	}

	memcpy_s(&EnumerateUserFiles_Params.UserId, sizeof(EnumerateUserFiles_Params.UserId), &UserId, sizeof(UserId));

	auto native_EnumerateUserFiles = uFnEnumerateUserFiles->iNative;
	uFnEnumerateUserFiles->iNative = 0;
	this->ProcessEvent(uFnEnumerateUserFiles, &EnumerateUserFiles_Params, nullptr);
	uFnEnumerateUserFiles->iNative = native_EnumerateUserFiles;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnEnumerateUserFilesComplete(bool bWasSuccessful, const class FString& UserId)
{
	static UFunction* uFnOnEnumerateUserFilesComplete = nullptr;

	if (!uFnOnEnumerateUserFilesComplete)
	{
		uFnOnEnumerateUserFilesComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete");
	}

	UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Params OnEnumerateUserFilesComplete_Params;
	memset(&OnEnumerateUserFilesComplete_Params, 0, sizeof(OnEnumerateUserFilesComplete_Params));
	if (!uFnOnEnumerateUserFilesComplete)
	{
		return;
	}

	OnEnumerateUserFilesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Params.UserId, sizeof(OnEnumerateUserFilesComplete_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearFile(const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnClearFile = nullptr;

	if (!uFnClearFile)
	{
		uFnClearFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile");
	}

	UOnlineSubsystemSteamworks_execClearFile_Params ClearFile_Params;
	memset(&ClearFile_Params, 0, sizeof(ClearFile_Params));
	if (!uFnClearFile)
	{
		return {};
	}

	memcpy_s(&ClearFile_Params.UserId, sizeof(ClearFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&ClearFile_Params.Filename, sizeof(ClearFile_Params.Filename), &Filename, sizeof(Filename));

	auto native_ClearFile = uFnClearFile->iNative;
	uFnClearFile->iNative = 0;
	this->ProcessEvent(uFnClearFile, &ClearFile_Params, nullptr);
	uFnClearFile->iNative = native_ClearFile;

	return ClearFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearFiles(const class FString& UserId)
{
	static UFunction* uFnClearFiles = nullptr;

	if (!uFnClearFiles)
	{
		uFnClearFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles");
	}

	UOnlineSubsystemSteamworks_execClearFiles_Params ClearFiles_Params;
	memset(&ClearFiles_Params, 0, sizeof(ClearFiles_Params));
	if (!uFnClearFiles)
	{
		return {};
	}

	memcpy_s(&ClearFiles_Params.UserId, sizeof(ClearFiles_Params.UserId), &UserId, sizeof(UserId));

	auto native_ClearFiles = uFnClearFiles->iNative;
	uFnClearFiles->iNative = 0;
	this->ProcessEvent(uFnClearFiles, &ClearFiles_Params, nullptr);
	uFnClearFiles->iNative = native_ClearFiles;

	return ClearFiles_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetFileContents(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents)
{
	static UFunction* uFnGetFileContents = nullptr;

	if (!uFnGetFileContents)
	{
		uFnGetFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents");
	}

	UOnlineSubsystemSteamworks_execGetFileContents_Params GetFileContents_Params;
	memset(&GetFileContents_Params, 0, sizeof(GetFileContents_Params));
	if (!uFnGetFileContents)
	{
		return {};
	}

	memcpy_s(&GetFileContents_Params.UserId, sizeof(GetFileContents_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetFileContents_Params.Filename, sizeof(GetFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetFileContents_Params.FileContents, sizeof(GetFileContents_Params.FileContents), &outFileContents, sizeof(outFileContents));

	auto native_GetFileContents = uFnGetFileContents->iNative;
	uFnGetFileContents->iNative = 0;
	this->ProcessEvent(uFnGetFileContents, &GetFileContents_Params, nullptr);
	uFnGetFileContents->iNative = native_GetFileContents;

	memcpy_s(&outFileContents, sizeof(outFileContents), &GetFileContents_Params.FileContents, sizeof(GetFileContents_Params.FileContents));

	return GetFileContents_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAudioComponent*         VOIPAudioComponent             (CPF_Parm | CPF_EditInline)

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent)
{
	static UFunction* uFnNotifyVOIPPlaybackFinished = nullptr;

	if (!uFnNotifyVOIPPlaybackFinished)
	{
		uFnNotifyVOIPPlaybackFinished = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished");
	}

	UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Params NotifyVOIPPlaybackFinished_Params;
	memset(&NotifyVOIPPlaybackFinished_Params, 0, sizeof(NotifyVOIPPlaybackFinished_Params));
	if (!uFnNotifyVOIPPlaybackFinished)
	{
		return;
	}

	NotifyVOIPPlaybackFinished_Params.VOIPAudioComponent = VOIPAudioComponent;

	auto native_NotifyVOIPPlaybackFinished = uFnNotifyVOIPPlaybackFinished->iNative;
	uFnNotifyVOIPPlaybackFinished->iNative = 0;
	this->ProcessEvent(uFnNotifyVOIPPlaybackFinished, &NotifyVOIPPlaybackFinished_Params, nullptr);
	uFnNotifyVOIPPlaybackFinished->iNative = native_NotifyVOIPPlaybackFinished;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAudioComponent*         AC                             (CPF_Parm | CPF_EditInline)

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished(class UAudioComponent* AC)
{
	static UFunction* uFnOnVOIPPlaybackFinished = nullptr;

	if (!uFnOnVOIPPlaybackFinished)
	{
		uFnOnVOIPPlaybackFinished = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished");
	}

	UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Params OnVOIPPlaybackFinished_Params;
	memset(&OnVOIPPlaybackFinished_Params, 0, sizeof(OnVOIPPlaybackFinished_Params));
	if (!uFnOnVOIPPlaybackFinished)
	{
		return;
	}

	OnVOIPPlaybackFinished_Params.AC = AC;

	this->ProcessEvent(uFnOnVOIPPlaybackFinished, &OnVOIPPlaybackFinished_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteAll(uint8_t LocalUserNum)
{
	static UFunction* uFnUnmuteAll = nullptr;

	if (!uFnUnmuteAll)
	{
		uFnUnmuteAll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll");
	}

	UOnlineSubsystemSteamworks_execUnmuteAll_Params UnmuteAll_Params;
	memset(&UnmuteAll_Params, 0, sizeof(UnmuteAll_Params));
	if (!uFnUnmuteAll)
	{
		return {};
	}

	UnmuteAll_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnUnmuteAll, &UnmuteAll_Params, nullptr);

	return UnmuteAll_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bAllowFriends                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteAll(uint8_t LocalUserNum, bool bAllowFriends)
{
	static UFunction* uFnMuteAll = nullptr;

	if (!uFnMuteAll)
	{
		uFnMuteAll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll");
	}

	UOnlineSubsystemSteamworks_execMuteAll_Params MuteAll_Params;
	memset(&MuteAll_Params, 0, sizeof(MuteAll_Params));
	if (!uFnMuteAll)
	{
		return {};
	}

	MuteAll_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	MuteAll_Params.bAllowFriends = bAllowFriends;

	this->ProcessEvent(uFnMuteAll, &MuteAll_Params, nullptr);

	return MuteAll_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* uFnSetSpeechRecognitionObject = nullptr;

	if (!uFnSetSpeechRecognitionObject)
	{
		uFnSetSpeechRecognitionObject = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject");
	}

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Params SetSpeechRecognitionObject_Params;
	memset(&SetSpeechRecognitionObject_Params, 0, sizeof(SetSpeechRecognitionObject_Params));
	if (!uFnSetSpeechRecognitionObject)
	{
		return {};
	}

	SetSpeechRecognitionObject_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	SetSpeechRecognitionObject_Params.SpeechRecogObj = SpeechRecogObj;

	auto native_SetSpeechRecognitionObject = uFnSetSpeechRecognitionObject->iNative;
	uFnSetSpeechRecognitionObject->iNative = 0;
	this->ProcessEvent(uFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Params, nullptr);
	uFnSetSpeechRecognitionObject->iNative = native_SetSpeechRecognitionObject;

	return SetSpeechRecognitionObject_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        VocabularyId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId)
{
	static UFunction* uFnSelectVocabulary = nullptr;

	if (!uFnSelectVocabulary)
	{
		uFnSelectVocabulary = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary");
	}

	UOnlineSubsystemSteamworks_execSelectVocabulary_Params SelectVocabulary_Params;
	memset(&SelectVocabulary_Params, 0, sizeof(SelectVocabulary_Params));
	if (!uFnSelectVocabulary)
	{
		return {};
	}

	SelectVocabulary_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	SelectVocabulary_Params.VocabularyId = VocabularyId;

	auto native_SelectVocabulary = uFnSelectVocabulary->iNative;
	uFnSelectVocabulary->iNative = 0;
	this->ProcessEvent(uFnSelectVocabulary, &SelectVocabulary_Params, nullptr);
	uFnSelectVocabulary->iNative = native_SelectVocabulary;

	return SelectVocabulary_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static UFunction* uFnClearRecognitionCompleteDelegate = nullptr;

	if (!uFnClearRecognitionCompleteDelegate)
	{
		uFnClearRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Params ClearRecognitionCompleteDelegate_Params;
	memset(&ClearRecognitionCompleteDelegate_Params, 0, sizeof(ClearRecognitionCompleteDelegate_Params));
	if (!uFnClearRecognitionCompleteDelegate)
	{
		return;
	}

	ClearRecognitionCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.RecognitionDelegate, sizeof(ClearRecognitionCompleteDelegate_Params.RecognitionDelegate), &RecognitionDelegate, sizeof(RecognitionDelegate));

	this->ProcessEvent(uFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static UFunction* uFnAddRecognitionCompleteDelegate = nullptr;

	if (!uFnAddRecognitionCompleteDelegate)
	{
		uFnAddRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Params AddRecognitionCompleteDelegate_Params;
	memset(&AddRecognitionCompleteDelegate_Params, 0, sizeof(AddRecognitionCompleteDelegate_Params));
	if (!uFnAddRecognitionCompleteDelegate)
	{
		return;
	}

	AddRecognitionCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddRecognitionCompleteDelegate_Params.RecognitionDelegate, sizeof(AddRecognitionCompleteDelegate_Params.RecognitionDelegate), &RecognitionDelegate, sizeof(RecognitionDelegate));

	this->ProcessEvent(uFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnRecognitionComplete()
{
	static UFunction* uFnOnRecognitionComplete = nullptr;

	if (!uFnOnRecognitionComplete)
	{
		uFnOnRecognitionComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete");
	}

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Params OnRecognitionComplete_Params;
	memset(&OnRecognitionComplete_Params, 0, sizeof(OnRecognitionComplete_Params));
	if (!uFnOnRecognitionComplete)
	{
		return;
	}


	this->ProcessEvent(uFnOnRecognitionComplete, &OnRecognitionComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetRecognitionResults(uint8_t LocalUserNum, class TArray<struct FSpeechRecognizedWord>& outWords)
{
	static UFunction* uFnGetRecognitionResults = nullptr;

	if (!uFnGetRecognitionResults)
	{
		uFnGetRecognitionResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults");
	}

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Params GetRecognitionResults_Params;
	memset(&GetRecognitionResults_Params, 0, sizeof(GetRecognitionResults_Params));
	if (!uFnGetRecognitionResults)
	{
		return {};
	}

	GetRecognitionResults_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&GetRecognitionResults_Params.Words, sizeof(GetRecognitionResults_Params.Words), &outWords, sizeof(outWords));

	auto native_GetRecognitionResults = uFnGetRecognitionResults->iNative;
	uFnGetRecognitionResults->iNative = 0;
	this->ProcessEvent(uFnGetRecognitionResults, &GetRecognitionResults_Params, nullptr);
	uFnGetRecognitionResults->iNative = native_GetRecognitionResults;

	memcpy_s(&outWords, sizeof(outWords), &GetRecognitionResults_Params.Words, sizeof(GetRecognitionResults_Params.Words));

	return GetRecognitionResults_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::StopSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStopSpeechRecognition = nullptr;

	if (!uFnStopSpeechRecognition)
	{
		uFnStopSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition");
	}

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Params StopSpeechRecognition_Params;
	memset(&StopSpeechRecognition_Params, 0, sizeof(StopSpeechRecognition_Params));
	if (!uFnStopSpeechRecognition)
	{
		return {};
	}

	StopSpeechRecognition_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_StopSpeechRecognition = uFnStopSpeechRecognition->iNative;
	uFnStopSpeechRecognition->iNative = 0;
	this->ProcessEvent(uFnStopSpeechRecognition, &StopSpeechRecognition_Params, nullptr);
	uFnStopSpeechRecognition->iNative = native_StopSpeechRecognition;

	return StopSpeechRecognition_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::StartSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStartSpeechRecognition = nullptr;

	if (!uFnStartSpeechRecognition)
	{
		uFnStartSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition");
	}

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Params StartSpeechRecognition_Params;
	memset(&StartSpeechRecognition_Params, 0, sizeof(StartSpeechRecognition_Params));
	if (!uFnStartSpeechRecognition)
	{
		return {};
	}

	StartSpeechRecognition_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_StartSpeechRecognition = uFnStartSpeechRecognition->iNative;
	uFnStartSpeechRecognition->iNative = 0;
	this->ProcessEvent(uFnStartSpeechRecognition, &StartSpeechRecognition_Params, nullptr);
	uFnStartSpeechRecognition->iNative = native_StartSpeechRecognition;

	return StartSpeechRecognition_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StopNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStopNetworkedVoice = nullptr;

	if (!uFnStopNetworkedVoice)
	{
		uFnStopNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice");
	}

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Params StopNetworkedVoice_Params;
	memset(&StopNetworkedVoice_Params, 0, sizeof(StopNetworkedVoice_Params));
	if (!uFnStopNetworkedVoice)
	{
		return;
	}

	StopNetworkedVoice_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_StopNetworkedVoice = uFnStopNetworkedVoice->iNative;
	uFnStopNetworkedVoice->iNative = 0;
	this->ProcessEvent(uFnStopNetworkedVoice, &StopNetworkedVoice_Params, nullptr);
	uFnStopNetworkedVoice->iNative = native_StopNetworkedVoice;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StartNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStartNetworkedVoice = nullptr;

	if (!uFnStartNetworkedVoice)
	{
		uFnStartNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice");
	}

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Params StartNetworkedVoice_Params;
	memset(&StartNetworkedVoice_Params, 0, sizeof(StartNetworkedVoice_Params));
	if (!uFnStartNetworkedVoice)
	{
		return;
	}

	StartNetworkedVoice_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_StartNetworkedVoice = uFnStartNetworkedVoice->iNative;
	uFnStartNetworkedVoice->iNative = 0;
	this->ProcessEvent(uFnStartNetworkedVoice, &StartNetworkedVoice_Params, nullptr);
	uFnStartNetworkedVoice->iNative = native_StartNetworkedVoice;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static UFunction* uFnClearPlayerTalkingDelegate = nullptr;

	if (!uFnClearPlayerTalkingDelegate)
	{
		uFnClearPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate");
	}

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Params ClearPlayerTalkingDelegate_Params;
	memset(&ClearPlayerTalkingDelegate_Params, 0, sizeof(ClearPlayerTalkingDelegate_Params));
	if (!uFnClearPlayerTalkingDelegate)
	{
		return;
	}

	memcpy_s(&ClearPlayerTalkingDelegate_Params.TalkerDelegate, sizeof(ClearPlayerTalkingDelegate_Params.TalkerDelegate), &TalkerDelegate, sizeof(TalkerDelegate));

	this->ProcessEvent(uFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static UFunction* uFnAddPlayerTalkingDelegate = nullptr;

	if (!uFnAddPlayerTalkingDelegate)
	{
		uFnAddPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate");
	}

	UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Params AddPlayerTalkingDelegate_Params;
	memset(&AddPlayerTalkingDelegate_Params, 0, sizeof(AddPlayerTalkingDelegate_Params));
	if (!uFnAddPlayerTalkingDelegate)
	{
		return;
	}

	memcpy_s(&AddPlayerTalkingDelegate_Params.TalkerDelegate, sizeof(AddPlayerTalkingDelegate_Params.TalkerDelegate), &TalkerDelegate, sizeof(TalkerDelegate));

	this->ProcessEvent(uFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            Player                         (CPF_Parm)
// uint32_t                       bIsTalking                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking)
{
	static UFunction* uFnOnPlayerTalkingStateChange = nullptr;

	if (!uFnOnPlayerTalkingStateChange)
	{
		uFnOnPlayerTalkingStateChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange");
	}

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params OnPlayerTalkingStateChange_Params;
	memset(&OnPlayerTalkingStateChange_Params, 0, sizeof(OnPlayerTalkingStateChange_Params));
	if (!uFnOnPlayerTalkingStateChange)
	{
		return;
	}

	memcpy_s(&OnPlayerTalkingStateChange_Params.Player, sizeof(OnPlayerTalkingStateChange_Params.Player), &Player, sizeof(Player));
	OnPlayerTalkingStateChange_Params.bIsTalking = bIsTalking;

	this->ProcessEvent(uFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, bool optionalBIsSystemWide)
{
	static UFunction* uFnUnmuteRemoteTalker = nullptr;

	if (!uFnUnmuteRemoteTalker)
	{
		uFnUnmuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Params UnmuteRemoteTalker_Params;
	memset(&UnmuteRemoteTalker_Params, 0, sizeof(UnmuteRemoteTalker_Params));
	if (!uFnUnmuteRemoteTalker)
	{
		return {};
	}

	UnmuteRemoteTalker_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&UnmuteRemoteTalker_Params.PlayerID, sizeof(UnmuteRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	UnmuteRemoteTalker_Params.bIsSystemWide = optionalBIsSystemWide;

	auto native_UnmuteRemoteTalker = uFnUnmuteRemoteTalker->iNative;
	uFnUnmuteRemoteTalker->iNative = 0;
	this->ProcessEvent(uFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Params, nullptr);
	uFnUnmuteRemoteTalker->iNative = native_UnmuteRemoteTalker;

	return UnmuteRemoteTalker_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteRemoteTalker(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, bool optionalBIsSystemWide)
{
	static UFunction* uFnMuteRemoteTalker = nullptr;

	if (!uFnMuteRemoteTalker)
	{
		uFnMuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Params MuteRemoteTalker_Params;
	memset(&MuteRemoteTalker_Params, 0, sizeof(MuteRemoteTalker_Params));
	if (!uFnMuteRemoteTalker)
	{
		return {};
	}

	MuteRemoteTalker_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&MuteRemoteTalker_Params.PlayerID, sizeof(MuteRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	MuteRemoteTalker_Params.bIsSystemWide = optionalBIsSystemWide;

	auto native_MuteRemoteTalker = uFnMuteRemoteTalker->iNative;
	uFnMuteRemoteTalker->iNative = 0;
	this->ProcessEvent(uFnMuteRemoteTalker, &MuteRemoteTalker_Params, nullptr);
	uFnMuteRemoteTalker->iNative = native_MuteRemoteTalker;

	return MuteRemoteTalker_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// int32_t                        Priority                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, int32_t Priority)
{
	static UFunction* uFnSetRemoteTalkerPriority = nullptr;

	if (!uFnSetRemoteTalkerPriority)
	{
		uFnSetRemoteTalkerPriority = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority");
	}

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Params SetRemoteTalkerPriority_Params;
	memset(&SetRemoteTalkerPriority_Params, 0, sizeof(SetRemoteTalkerPriority_Params));
	if (!uFnSetRemoteTalkerPriority)
	{
		return {};
	}

	SetRemoteTalkerPriority_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&SetRemoteTalkerPriority_Params.PlayerID, sizeof(SetRemoteTalkerPriority_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	SetRemoteTalkerPriority_Params.Priority = Priority;

	auto native_SetRemoteTalkerPriority = uFnSetRemoteTalkerPriority->iNative;
	uFnSetRemoteTalkerPriority->iNative = 0;
	this->ProcessEvent(uFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Params, nullptr);
	uFnSetRemoteTalkerPriority->iNative = native_SetRemoteTalkerPriority;

	return SetRemoteTalkerPriority_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsHeadsetPresent(uint8_t LocalUserNum)
{
	static UFunction* uFnIsHeadsetPresent = nullptr;

	if (!uFnIsHeadsetPresent)
	{
		uFnIsHeadsetPresent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent");
	}

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Params IsHeadsetPresent_Params;
	memset(&IsHeadsetPresent_Params, 0, sizeof(IsHeadsetPresent_Params));
	if (!uFnIsHeadsetPresent)
	{
		return {};
	}

	IsHeadsetPresent_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_IsHeadsetPresent = uFnIsHeadsetPresent->iNative;
	uFnIsHeadsetPresent->iNative = 0;
	this->ProcessEvent(uFnIsHeadsetPresent, &IsHeadsetPresent_Params, nullptr);
	uFnIsHeadsetPresent->iNative = native_IsHeadsetPresent;

	return IsHeadsetPresent_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsRemotePlayerTalking = nullptr;

	if (!uFnIsRemotePlayerTalking)
	{
		uFnIsRemotePlayerTalking = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking");
	}

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Params IsRemotePlayerTalking_Params;
	memset(&IsRemotePlayerTalking_Params, 0, sizeof(IsRemotePlayerTalking_Params));
	if (!uFnIsRemotePlayerTalking)
	{
		return {};
	}

	memcpy_s(&IsRemotePlayerTalking_Params.PlayerID, sizeof(IsRemotePlayerTalking_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	auto native_IsRemotePlayerTalking = uFnIsRemotePlayerTalking->iNative;
	uFnIsRemotePlayerTalking->iNative = 0;
	this->ProcessEvent(uFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Params, nullptr);
	uFnIsRemotePlayerTalking->iNative = native_IsRemotePlayerTalking;

	return IsRemotePlayerTalking_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalPlayerTalking = nullptr;

	if (!uFnIsLocalPlayerTalking)
	{
		uFnIsLocalPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking");
	}

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Params IsLocalPlayerTalking_Params;
	memset(&IsLocalPlayerTalking_Params, 0, sizeof(IsLocalPlayerTalking_Params));
	if (!uFnIsLocalPlayerTalking)
	{
		return {};
	}

	IsLocalPlayerTalking_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_IsLocalPlayerTalking = uFnIsLocalPlayerTalking->iNative;
	uFnIsLocalPlayerTalking->iNative = 0;
	this->ProcessEvent(uFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Params, nullptr);
	uFnIsLocalPlayerTalking->iNative = native_IsLocalPlayerTalking;

	return IsLocalPlayerTalking_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnUnregisterRemoteTalker = nullptr;

	if (!uFnUnregisterRemoteTalker)
	{
		uFnUnregisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Params UnregisterRemoteTalker_Params;
	memset(&UnregisterRemoteTalker_Params, 0, sizeof(UnregisterRemoteTalker_Params));
	if (!uFnUnregisterRemoteTalker)
	{
		return {};
	}

	memcpy_s(&UnregisterRemoteTalker_Params.PlayerID, sizeof(UnregisterRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	auto native_UnregisterRemoteTalker = uFnUnregisterRemoteTalker->iNative;
	uFnUnregisterRemoteTalker->iNative = 0;
	this->ProcessEvent(uFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Params, nullptr);
	uFnUnregisterRemoteTalker->iNative = native_UnregisterRemoteTalker;

	return UnregisterRemoteTalker_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnRegisterRemoteTalker = nullptr;

	if (!uFnRegisterRemoteTalker)
	{
		uFnRegisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Params RegisterRemoteTalker_Params;
	memset(&RegisterRemoteTalker_Params, 0, sizeof(RegisterRemoteTalker_Params));
	if (!uFnRegisterRemoteTalker)
	{
		return {};
	}

	memcpy_s(&RegisterRemoteTalker_Params.PlayerID, sizeof(RegisterRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	auto native_RegisterRemoteTalker = uFnRegisterRemoteTalker->iNative;
	uFnRegisterRemoteTalker->iNative = 0;
	this->ProcessEvent(uFnRegisterRemoteTalker, &RegisterRemoteTalker_Params, nullptr);
	uFnRegisterRemoteTalker->iNative = native_RegisterRemoteTalker;

	return RegisterRemoteTalker_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnUnregisterLocalTalker = nullptr;

	if (!uFnUnregisterLocalTalker)
	{
		uFnUnregisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker");
	}

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Params UnregisterLocalTalker_Params;
	memset(&UnregisterLocalTalker_Params, 0, sizeof(UnregisterLocalTalker_Params));
	if (!uFnUnregisterLocalTalker)
	{
		return {};
	}

	UnregisterLocalTalker_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_UnregisterLocalTalker = uFnUnregisterLocalTalker->iNative;
	uFnUnregisterLocalTalker->iNative = 0;
	this->ProcessEvent(uFnUnregisterLocalTalker, &UnregisterLocalTalker_Params, nullptr);
	uFnUnregisterLocalTalker->iNative = native_UnregisterLocalTalker;

	return UnregisterLocalTalker_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::RegisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnRegisterLocalTalker = nullptr;

	if (!uFnRegisterLocalTalker)
	{
		uFnRegisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker");
	}

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Params RegisterLocalTalker_Params;
	memset(&RegisterLocalTalker_Params, 0, sizeof(RegisterLocalTalker_Params));
	if (!uFnRegisterLocalTalker)
	{
		return {};
	}

	RegisterLocalTalker_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_RegisterLocalTalker = uFnRegisterLocalTalker->iNative;
	uFnRegisterLocalTalker->iNative = 0;
	this->ProcessEvent(uFnRegisterLocalTalker, &RegisterLocalTalker_Params, nullptr);
	uFnRegisterLocalTalker->iNative = native_RegisterLocalTalker;

	return RegisterLocalTalker_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRequestTitleFileListCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RequestTitleFileListDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate)
{
	static UFunction* uFnClearRequestTitleFileListCompleteDelegate = nullptr;

	if (!uFnClearRequestTitleFileListCompleteDelegate)
	{
		uFnClearRequestTitleFileListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRequestTitleFileListCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRequestTitleFileListCompleteDelegate_Params ClearRequestTitleFileListCompleteDelegate_Params;
	memset(&ClearRequestTitleFileListCompleteDelegate_Params, 0, sizeof(ClearRequestTitleFileListCompleteDelegate_Params));
	if (!uFnClearRequestTitleFileListCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearRequestTitleFileListCompleteDelegate_Params.RequestTitleFileListDelegate, sizeof(ClearRequestTitleFileListCompleteDelegate_Params.RequestTitleFileListDelegate), &RequestTitleFileListDelegate, sizeof(RequestTitleFileListDelegate));

	this->ProcessEvent(uFnClearRequestTitleFileListCompleteDelegate, &ClearRequestTitleFileListCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRequestTitleFileListCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RequestTitleFileListDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate)
{
	static UFunction* uFnAddRequestTitleFileListCompleteDelegate = nullptr;

	if (!uFnAddRequestTitleFileListCompleteDelegate)
	{
		uFnAddRequestTitleFileListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRequestTitleFileListCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRequestTitleFileListCompleteDelegate_Params AddRequestTitleFileListCompleteDelegate_Params;
	memset(&AddRequestTitleFileListCompleteDelegate_Params, 0, sizeof(AddRequestTitleFileListCompleteDelegate_Params));
	if (!uFnAddRequestTitleFileListCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddRequestTitleFileListCompleteDelegate_Params.RequestTitleFileListDelegate, sizeof(AddRequestTitleFileListCompleteDelegate_Params.RequestTitleFileListDelegate), &RequestTitleFileListDelegate, sizeof(RequestTitleFileListDelegate));

	this->ProcessEvent(uFnAddRequestTitleFileListCompleteDelegate, &AddRequestTitleFileListCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRequestTitleFileListComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  ResultStr                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnRequestTitleFileListComplete(bool bWasSuccessful, const class FString& ResultStr)
{
	static UFunction* uFnOnRequestTitleFileListComplete = nullptr;

	if (!uFnOnRequestTitleFileListComplete)
	{
		uFnOnRequestTitleFileListComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRequestTitleFileListComplete");
	}

	UOnlineSubsystemSteamworks_execOnRequestTitleFileListComplete_Params OnRequestTitleFileListComplete_Params;
	memset(&OnRequestTitleFileListComplete_Params, 0, sizeof(OnRequestTitleFileListComplete_Params));
	if (!uFnOnRequestTitleFileListComplete)
	{
		return;
	}

	OnRequestTitleFileListComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRequestTitleFileListComplete_Params.ResultStr, sizeof(OnRequestTitleFileListComplete_Params.ResultStr), &ResultStr, sizeof(ResultStr));

	this->ProcessEvent(uFnOnRequestTitleFileListComplete, &OnRequestTitleFileListComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestTitleFileList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::RequestTitleFileList()
{
	static UFunction* uFnRequestTitleFileList = nullptr;

	if (!uFnRequestTitleFileList)
	{
		uFnRequestTitleFileList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestTitleFileList");
	}

	UOnlineSubsystemSteamworks_execRequestTitleFileList_Params RequestTitleFileList_Params;
	memset(&RequestTitleFileList_Params, 0, sizeof(RequestTitleFileList_Params));
	if (!uFnRequestTitleFileList)
	{
		return;
	}


	this->ProcessEvent(uFnRequestTitleFileList, &RequestTitleFileList_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFile
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearDownloadedFile(const class FString& Filename)
{
	static UFunction* uFnClearDownloadedFile = nullptr;

	if (!uFnClearDownloadedFile)
	{
		uFnClearDownloadedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFile");
	}

	UOnlineSubsystemSteamworks_execClearDownloadedFile_Params ClearDownloadedFile_Params;
	memset(&ClearDownloadedFile_Params, 0, sizeof(ClearDownloadedFile_Params));
	if (!uFnClearDownloadedFile)
	{
		return {};
	}

	memcpy_s(&ClearDownloadedFile_Params.Filename, sizeof(ClearDownloadedFile_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnClearDownloadedFile, &ClearDownloadedFile_Params, nullptr);

	return ClearDownloadedFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFiles
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ClearDownloadedFiles()
{
	static UFunction* uFnClearDownloadedFiles = nullptr;

	if (!uFnClearDownloadedFiles)
	{
		uFnClearDownloadedFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFiles");
	}

	UOnlineSubsystemSteamworks_execClearDownloadedFiles_Params ClearDownloadedFiles_Params;
	memset(&ClearDownloadedFiles_Params, 0, sizeof(ClearDownloadedFiles_Params));
	if (!uFnClearDownloadedFiles)
	{
		return {};
	}


	this->ProcessEvent(uFnClearDownloadedFiles, &ClearDownloadedFiles_Params, nullptr);

	return ClearDownloadedFiles_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetTitleFileState(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState");
	}

	UOnlineSubsystemSteamworks_execGetTitleFileState_Params GetTitleFileState_Params;
	memset(&GetTitleFileState_Params, 0, sizeof(GetTitleFileState_Params));
	if (!uFnGetTitleFileState)
	{
		return {};
	}

	memcpy_s(&GetTitleFileState_Params.Filename, sizeof(GetTitleFileState_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return static_cast<EOnlineEnumerationReadState>(GetTitleFileState_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents");
	}

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Params GetTitleFileContents_Params;
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

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnClearReadTitleFileCompleteDelegate = nullptr;

	if (!uFnClearReadTitleFileCompleteDelegate)
	{
		uFnClearReadTitleFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params ClearReadTitleFileCompleteDelegate_Params;
	memset(&ClearReadTitleFileCompleteDelegate_Params, 0, sizeof(ClearReadTitleFileCompleteDelegate_Params));
	if (!uFnClearReadTitleFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, sizeof(ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate), &ReadTitleFileCompleteDelegate, sizeof(ReadTitleFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnAddReadTitleFileCompleteDelegate = nullptr;

	if (!uFnAddReadTitleFileCompleteDelegate)
	{
		uFnAddReadTitleFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params AddReadTitleFileCompleteDelegate_Params;
	memset(&AddReadTitleFileCompleteDelegate_Params, 0, sizeof(AddReadTitleFileCompleteDelegate_Params));
	if (!uFnAddReadTitleFileCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, sizeof(AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate), &ReadTitleFileCompleteDelegate, sizeof(ReadTitleFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FileToRead                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadTitleFile(const class FString& FileToRead)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile");
	}

	UOnlineSubsystemSteamworks_execReadTitleFile_Params ReadTitleFile_Params;
	memset(&ReadTitleFile_Params, 0, sizeof(ReadTitleFile_Params));
	if (!uFnReadTitleFile)
	{
		return {};
	}

	memcpy_s(&ReadTitleFile_Params.FileToRead, sizeof(ReadTitleFile_Params.FileToRead), &FileToRead, sizeof(FileToRead));

	auto native_ReadTitleFile = uFnReadTitleFile->iNative;
	uFnReadTitleFile->iNative = 0;
	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);
	uFnReadTitleFile->iNative = native_ReadTitleFile;

	return ReadTitleFile_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnReadTitleFileComplete = nullptr;

	if (!uFnOnReadTitleFileComplete)
	{
		uFnOnReadTitleFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params OnReadTitleFileComplete_Params;
	memset(&OnReadTitleFileComplete_Params, 0, sizeof(OnReadTitleFileComplete_Params));
	if (!uFnOnReadTitleFileComplete)
	{
		return;
	}

	OnReadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Params.Filename, sizeof(OnReadTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveGames
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ClearSaveGames(uint8_t LocalUserNum)
{
	static UFunction* uFnClearSaveGames = nullptr;

	if (!uFnClearSaveGames)
	{
		uFnClearSaveGames = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveGames");
	}

	UOnlineSubsystemSteamworks_execClearSaveGames_Params ClearSaveGames_Params;
	memset(&ClearSaveGames_Params, 0, sizeof(ClearSaveGames_Params));
	if (!uFnClearSaveGames)
	{
		return {};
	}

	ClearSaveGames_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnClearSaveGames, &ClearSaveGames_Params, nullptr);

	return ClearSaveGames_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteSaveGame
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        DeviceID                       (CPF_Parm)
// class FString                  FriendlyName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::DeleteSaveGame(uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename)
{
	static UFunction* uFnDeleteSaveGame = nullptr;

	if (!uFnDeleteSaveGame)
	{
		uFnDeleteSaveGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteSaveGame");
	}

	UOnlineSubsystemSteamworks_execDeleteSaveGame_Params DeleteSaveGame_Params;
	memset(&DeleteSaveGame_Params, 0, sizeof(DeleteSaveGame_Params));
	if (!uFnDeleteSaveGame)
	{
		return {};
	}

	DeleteSaveGame_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	DeleteSaveGame_Params.DeviceID = DeviceID;
	memcpy_s(&DeleteSaveGame_Params.FriendlyName, sizeof(DeleteSaveGame_Params.FriendlyName), &FriendlyName, sizeof(FriendlyName));
	memcpy_s(&DeleteSaveGame_Params.Filename, sizeof(DeleteSaveGame_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnDeleteSaveGame, &DeleteSaveGame_Params, nullptr);

	return DeleteSaveGame_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSaveGameDataComplete
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteSaveGameDataCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& WriteSaveGameDataCompleteDelegate)
{
	static UFunction* uFnClearWriteSaveGameDataComplete = nullptr;

	if (!uFnClearWriteSaveGameDataComplete)
	{
		uFnClearWriteSaveGameDataComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSaveGameDataComplete");
	}

	UOnlineSubsystemSteamworks_execClearWriteSaveGameDataComplete_Params ClearWriteSaveGameDataComplete_Params;
	memset(&ClearWriteSaveGameDataComplete_Params, 0, sizeof(ClearWriteSaveGameDataComplete_Params));
	if (!uFnClearWriteSaveGameDataComplete)
	{
		return;
	}

	ClearWriteSaveGameDataComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearWriteSaveGameDataComplete_Params.WriteSaveGameDataCompleteDelegate, sizeof(ClearWriteSaveGameDataComplete_Params.WriteSaveGameDataCompleteDelegate), &WriteSaveGameDataCompleteDelegate, sizeof(WriteSaveGameDataCompleteDelegate));

	this->ProcessEvent(uFnClearWriteSaveGameDataComplete, &ClearWriteSaveGameDataComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSaveGameDataComplete
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteSaveGameDataCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& WriteSaveGameDataCompleteDelegate)
{
	static UFunction* uFnAddWriteSaveGameDataComplete = nullptr;

	if (!uFnAddWriteSaveGameDataComplete)
	{
		uFnAddWriteSaveGameDataComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSaveGameDataComplete");
	}

	UOnlineSubsystemSteamworks_execAddWriteSaveGameDataComplete_Params AddWriteSaveGameDataComplete_Params;
	memset(&AddWriteSaveGameDataComplete_Params, 0, sizeof(AddWriteSaveGameDataComplete_Params));
	if (!uFnAddWriteSaveGameDataComplete)
	{
		return;
	}

	AddWriteSaveGameDataComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddWriteSaveGameDataComplete_Params.WriteSaveGameDataCompleteDelegate, sizeof(AddWriteSaveGameDataComplete_Params.WriteSaveGameDataCompleteDelegate), &WriteSaveGameDataCompleteDelegate, sizeof(WriteSaveGameDataCompleteDelegate));

	this->ProcessEvent(uFnAddWriteSaveGameDataComplete, &AddWriteSaveGameDataComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSaveGameDataComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        DeviceID                       (CPF_Parm)
// class FString                  FriendlyName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveFileName                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteSaveGameDataComplete(bool bWasSuccessful, uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName)
{
	static UFunction* uFnOnWriteSaveGameDataComplete = nullptr;

	if (!uFnOnWriteSaveGameDataComplete)
	{
		uFnOnWriteSaveGameDataComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSaveGameDataComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteSaveGameDataComplete_Params OnWriteSaveGameDataComplete_Params;
	memset(&OnWriteSaveGameDataComplete_Params, 0, sizeof(OnWriteSaveGameDataComplete_Params));
	if (!uFnOnWriteSaveGameDataComplete)
	{
		return;
	}

	OnWriteSaveGameDataComplete_Params.bWasSuccessful = bWasSuccessful;
	OnWriteSaveGameDataComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	OnWriteSaveGameDataComplete_Params.DeviceID = DeviceID;
	memcpy_s(&OnWriteSaveGameDataComplete_Params.FriendlyName, sizeof(OnWriteSaveGameDataComplete_Params.FriendlyName), &FriendlyName, sizeof(FriendlyName));
	memcpy_s(&OnWriteSaveGameDataComplete_Params.Filename, sizeof(OnWriteSaveGameDataComplete_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&OnWriteSaveGameDataComplete_Params.SaveFileName, sizeof(OnWriteSaveGameDataComplete_Params.SaveFileName), &SaveFileName, sizeof(SaveFileName));

	this->ProcessEvent(uFnOnWriteSaveGameDataComplete, &OnWriteSaveGameDataComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSaveGameData
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        DeviceID                       (CPF_Parm)
// class FString                  FriendlyName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveFileName                   (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          SaveGameData                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteSaveGameData(uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName, class TArray<uint8_t>& outSaveGameData)
{
	static UFunction* uFnWriteSaveGameData = nullptr;

	if (!uFnWriteSaveGameData)
	{
		uFnWriteSaveGameData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSaveGameData");
	}

	UOnlineSubsystemSteamworks_execWriteSaveGameData_Params WriteSaveGameData_Params;
	memset(&WriteSaveGameData_Params, 0, sizeof(WriteSaveGameData_Params));
	if (!uFnWriteSaveGameData)
	{
		return {};
	}

	WriteSaveGameData_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	WriteSaveGameData_Params.DeviceID = DeviceID;
	memcpy_s(&WriteSaveGameData_Params.FriendlyName, sizeof(WriteSaveGameData_Params.FriendlyName), &FriendlyName, sizeof(FriendlyName));
	memcpy_s(&WriteSaveGameData_Params.Filename, sizeof(WriteSaveGameData_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteSaveGameData_Params.SaveFileName, sizeof(WriteSaveGameData_Params.SaveFileName), &SaveFileName, sizeof(SaveFileName));
	memcpy_s(&WriteSaveGameData_Params.SaveGameData, sizeof(WriteSaveGameData_Params.SaveGameData), &outSaveGameData, sizeof(outSaveGameData));

	this->ProcessEvent(uFnWriteSaveGameData, &WriteSaveGameData_Params, nullptr);

	memcpy_s(&outSaveGameData, sizeof(outSaveGameData), &WriteSaveGameData_Params.SaveGameData, sizeof(WriteSaveGameData_Params.SaveGameData));

	return WriteSaveGameData_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGameDataComplete
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate)
{
	static UFunction* uFnClearReadSaveGameDataComplete = nullptr;

	if (!uFnClearReadSaveGameDataComplete)
	{
		uFnClearReadSaveGameDataComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGameDataComplete");
	}

	UOnlineSubsystemSteamworks_execClearReadSaveGameDataComplete_Params ClearReadSaveGameDataComplete_Params;
	memset(&ClearReadSaveGameDataComplete_Params, 0, sizeof(ClearReadSaveGameDataComplete_Params));
	if (!uFnClearReadSaveGameDataComplete)
	{
		return;
	}

	ClearReadSaveGameDataComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearReadSaveGameDataComplete_Params.ReadSaveGameDataCompleteDelegate, sizeof(ClearReadSaveGameDataComplete_Params.ReadSaveGameDataCompleteDelegate), &ReadSaveGameDataCompleteDelegate, sizeof(ReadSaveGameDataCompleteDelegate));

	this->ProcessEvent(uFnClearReadSaveGameDataComplete, &ClearReadSaveGameDataComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGameDataComplete
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate)
{
	static UFunction* uFnAddReadSaveGameDataComplete = nullptr;

	if (!uFnAddReadSaveGameDataComplete)
	{
		uFnAddReadSaveGameDataComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGameDataComplete");
	}

	UOnlineSubsystemSteamworks_execAddReadSaveGameDataComplete_Params AddReadSaveGameDataComplete_Params;
	memset(&AddReadSaveGameDataComplete_Params, 0, sizeof(AddReadSaveGameDataComplete_Params));
	if (!uFnAddReadSaveGameDataComplete)
	{
		return;
	}

	AddReadSaveGameDataComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddReadSaveGameDataComplete_Params.ReadSaveGameDataCompleteDelegate, sizeof(AddReadSaveGameDataComplete_Params.ReadSaveGameDataCompleteDelegate), &ReadSaveGameDataCompleteDelegate, sizeof(ReadSaveGameDataCompleteDelegate));

	this->ProcessEvent(uFnAddReadSaveGameDataComplete, &AddReadSaveGameDataComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGameDataComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        DeviceID                       (CPF_Parm)
// class FString                  FriendlyName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveFileName                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadSaveGameDataComplete(bool bWasSuccessful, uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName)
{
	static UFunction* uFnOnReadSaveGameDataComplete = nullptr;

	if (!uFnOnReadSaveGameDataComplete)
	{
		uFnOnReadSaveGameDataComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGameDataComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadSaveGameDataComplete_Params OnReadSaveGameDataComplete_Params;
	memset(&OnReadSaveGameDataComplete_Params, 0, sizeof(OnReadSaveGameDataComplete_Params));
	if (!uFnOnReadSaveGameDataComplete)
	{
		return;
	}

	OnReadSaveGameDataComplete_Params.bWasSuccessful = bWasSuccessful;
	OnReadSaveGameDataComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	OnReadSaveGameDataComplete_Params.DeviceID = DeviceID;
	memcpy_s(&OnReadSaveGameDataComplete_Params.FriendlyName, sizeof(OnReadSaveGameDataComplete_Params.FriendlyName), &FriendlyName, sizeof(FriendlyName));
	memcpy_s(&OnReadSaveGameDataComplete_Params.Filename, sizeof(OnReadSaveGameDataComplete_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&OnReadSaveGameDataComplete_Params.SaveFileName, sizeof(OnReadSaveGameDataComplete_Params.SaveFileName), &SaveFileName, sizeof(SaveFileName));

	this->ProcessEvent(uFnOnReadSaveGameDataComplete, &OnReadSaveGameDataComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGameData
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        DeviceID                       (CPF_Parm)
// class FString                  FriendlyName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveFileName                   (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        bIsValid                       (CPF_Parm | CPF_OutParm)
// class TArray<uint8_t>          SaveGameData                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetSaveGameData(uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName, uint8_t& outBIsValid, class TArray<uint8_t>& outSaveGameData)
{
	static UFunction* uFnGetSaveGameData = nullptr;

	if (!uFnGetSaveGameData)
	{
		uFnGetSaveGameData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGameData");
	}

	UOnlineSubsystemSteamworks_execGetSaveGameData_Params GetSaveGameData_Params;
	memset(&GetSaveGameData_Params, 0, sizeof(GetSaveGameData_Params));
	if (!uFnGetSaveGameData)
	{
		return {};
	}

	GetSaveGameData_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	GetSaveGameData_Params.DeviceID = DeviceID;
	memcpy_s(&GetSaveGameData_Params.FriendlyName, sizeof(GetSaveGameData_Params.FriendlyName), &FriendlyName, sizeof(FriendlyName));
	memcpy_s(&GetSaveGameData_Params.Filename, sizeof(GetSaveGameData_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetSaveGameData_Params.SaveFileName, sizeof(GetSaveGameData_Params.SaveFileName), &SaveFileName, sizeof(SaveFileName));
	GetSaveGameData_Params.bIsValid = static_cast<uint8_t>(outBIsValid);
	memcpy_s(&GetSaveGameData_Params.SaveGameData, sizeof(GetSaveGameData_Params.SaveGameData), &outSaveGameData, sizeof(outSaveGameData));

	this->ProcessEvent(uFnGetSaveGameData, &GetSaveGameData_Params, nullptr);

	outBIsValid = static_cast<uint8_t>(outBIsValid);
	memcpy_s(&outSaveGameData, sizeof(outSaveGameData), &GetSaveGameData_Params.SaveGameData, sizeof(GetSaveGameData_Params.SaveGameData));

	return GetSaveGameData_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGameData
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        DeviceID                       (CPF_Parm)
// class FString                  FriendlyName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveFileName                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadSaveGameData(uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName)
{
	static UFunction* uFnReadSaveGameData = nullptr;

	if (!uFnReadSaveGameData)
	{
		uFnReadSaveGameData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGameData");
	}

	UOnlineSubsystemSteamworks_execReadSaveGameData_Params ReadSaveGameData_Params;
	memset(&ReadSaveGameData_Params, 0, sizeof(ReadSaveGameData_Params));
	if (!uFnReadSaveGameData)
	{
		return {};
	}

	ReadSaveGameData_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadSaveGameData_Params.DeviceID = DeviceID;
	memcpy_s(&ReadSaveGameData_Params.FriendlyName, sizeof(ReadSaveGameData_Params.FriendlyName), &FriendlyName, sizeof(FriendlyName));
	memcpy_s(&ReadSaveGameData_Params.Filename, sizeof(ReadSaveGameData_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&ReadSaveGameData_Params.SaveFileName, sizeof(ReadSaveGameData_Params.SaveFileName), &SaveFileName, sizeof(SaveFileName));

	this->ProcessEvent(uFnReadSaveGameData, &ReadSaveGameData_Params, nullptr);

	return ReadSaveGameData_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        NewDownloads                   (CPF_Parm | CPF_OutParm)
// int32_t                        TotalDownloads                 (CPF_Parm | CPF_OutParm)

void UOnlineSubsystemSteamworks::GetAvailableDownloadCounts(uint8_t LocalUserNum, int32_t& outNewDownloads, int32_t& outTotalDownloads)
{
	static UFunction* uFnGetAvailableDownloadCounts = nullptr;

	if (!uFnGetAvailableDownloadCounts)
	{
		uFnGetAvailableDownloadCounts = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts");
	}

	UOnlineSubsystemSteamworks_execGetAvailableDownloadCounts_Params GetAvailableDownloadCounts_Params;
	memset(&GetAvailableDownloadCounts_Params, 0, sizeof(GetAvailableDownloadCounts_Params));
	if (!uFnGetAvailableDownloadCounts)
	{
		return;
	}

	GetAvailableDownloadCounts_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	GetAvailableDownloadCounts_Params.NewDownloads = outNewDownloads;
	GetAvailableDownloadCounts_Params.TotalDownloads = outTotalDownloads;

	this->ProcessEvent(uFnGetAvailableDownloadCounts, &GetAvailableDownloadCounts_Params, nullptr);

	outNewDownloads = GetAvailableDownloadCounts_Params.NewDownloads;
	outTotalDownloads = GetAvailableDownloadCounts_Params.TotalDownloads;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDownloadsDelegate         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearQueryAvailableDownloadsComplete(uint8_t LocalUserNum, const struct FScriptDelegate& QueryDownloadsDelegate)
{
	static UFunction* uFnClearQueryAvailableDownloadsComplete = nullptr;

	if (!uFnClearQueryAvailableDownloadsComplete)
	{
		uFnClearQueryAvailableDownloadsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete");
	}

	UOnlineSubsystemSteamworks_execClearQueryAvailableDownloadsComplete_Params ClearQueryAvailableDownloadsComplete_Params;
	memset(&ClearQueryAvailableDownloadsComplete_Params, 0, sizeof(ClearQueryAvailableDownloadsComplete_Params));
	if (!uFnClearQueryAvailableDownloadsComplete)
	{
		return;
	}

	ClearQueryAvailableDownloadsComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearQueryAvailableDownloadsComplete_Params.QueryDownloadsDelegate, sizeof(ClearQueryAvailableDownloadsComplete_Params.QueryDownloadsDelegate), &QueryDownloadsDelegate, sizeof(QueryDownloadsDelegate));

	this->ProcessEvent(uFnClearQueryAvailableDownloadsComplete, &ClearQueryAvailableDownloadsComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDownloadsDelegate         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddQueryAvailableDownloadsComplete(uint8_t LocalUserNum, const struct FScriptDelegate& QueryDownloadsDelegate)
{
	static UFunction* uFnAddQueryAvailableDownloadsComplete = nullptr;

	if (!uFnAddQueryAvailableDownloadsComplete)
	{
		uFnAddQueryAvailableDownloadsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete");
	}

	UOnlineSubsystemSteamworks_execAddQueryAvailableDownloadsComplete_Params AddQueryAvailableDownloadsComplete_Params;
	memset(&AddQueryAvailableDownloadsComplete_Params, 0, sizeof(AddQueryAvailableDownloadsComplete_Params));
	if (!uFnAddQueryAvailableDownloadsComplete)
	{
		return;
	}

	AddQueryAvailableDownloadsComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddQueryAvailableDownloadsComplete_Params.QueryDownloadsDelegate, sizeof(AddQueryAvailableDownloadsComplete_Params.QueryDownloadsDelegate), &QueryDownloadsDelegate, sizeof(QueryDownloadsDelegate));

	this->ProcessEvent(uFnAddQueryAvailableDownloadsComplete, &AddQueryAvailableDownloadsComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnQueryAvailableDownloadsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnQueryAvailableDownloadsComplete = nullptr;

	if (!uFnOnQueryAvailableDownloadsComplete)
	{
		uFnOnQueryAvailableDownloadsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete");
	}

	UOnlineSubsystemSteamworks_execOnQueryAvailableDownloadsComplete_Params OnQueryAvailableDownloadsComplete_Params;
	memset(&OnQueryAvailableDownloadsComplete_Params, 0, sizeof(OnQueryAvailableDownloadsComplete_Params));
	if (!uFnOnQueryAvailableDownloadsComplete)
	{
		return;
	}

	OnQueryAvailableDownloadsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnQueryAvailableDownloadsComplete, &OnQueryAvailableDownloadsComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads
// [0x00024000] (FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        CategoryMask                   (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::QueryAvailableDownloads(uint8_t LocalUserNum, int32_t optionalCategoryMask)
{
	static UFunction* uFnQueryAvailableDownloads = nullptr;

	if (!uFnQueryAvailableDownloads)
	{
		uFnQueryAvailableDownloads = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads");
	}

	UOnlineSubsystemSteamworks_execQueryAvailableDownloads_Params QueryAvailableDownloads_Params;
	memset(&QueryAvailableDownloads_Params, 0, sizeof(QueryAvailableDownloads_Params));
	if (!uFnQueryAvailableDownloads)
	{
		return {};
	}

	QueryAvailableDownloads_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	QueryAvailableDownloads_Params.CategoryMask = optionalCategoryMask;

	this->ProcessEvent(uFnQueryAvailableDownloads, &QueryAvailableDownloads_Params, nullptr);

	return QueryAvailableDownloads_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleSaveGames
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ClearCrossTitleSaveGames(uint8_t LocalUserNum)
{
	static UFunction* uFnClearCrossTitleSaveGames = nullptr;

	if (!uFnClearCrossTitleSaveGames)
	{
		uFnClearCrossTitleSaveGames = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleSaveGames");
	}

	UOnlineSubsystemSteamworks_execClearCrossTitleSaveGames_Params ClearCrossTitleSaveGames_Params;
	memset(&ClearCrossTitleSaveGames_Params, 0, sizeof(ClearCrossTitleSaveGames_Params));
	if (!uFnClearCrossTitleSaveGames)
	{
		return {};
	}

	ClearCrossTitleSaveGames_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnClearCrossTitleSaveGames, &ClearCrossTitleSaveGames_Params, nullptr);

	return ClearCrossTitleSaveGames_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleSaveGameDataComplete
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate)
{
	static UFunction* uFnClearReadCrossTitleSaveGameDataComplete = nullptr;

	if (!uFnClearReadCrossTitleSaveGameDataComplete)
	{
		uFnClearReadCrossTitleSaveGameDataComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleSaveGameDataComplete");
	}

	UOnlineSubsystemSteamworks_execClearReadCrossTitleSaveGameDataComplete_Params ClearReadCrossTitleSaveGameDataComplete_Params;
	memset(&ClearReadCrossTitleSaveGameDataComplete_Params, 0, sizeof(ClearReadCrossTitleSaveGameDataComplete_Params));
	if (!uFnClearReadCrossTitleSaveGameDataComplete)
	{
		return;
	}

	ClearReadCrossTitleSaveGameDataComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearReadCrossTitleSaveGameDataComplete_Params.ReadSaveGameDataCompleteDelegate, sizeof(ClearReadCrossTitleSaveGameDataComplete_Params.ReadSaveGameDataCompleteDelegate), &ReadSaveGameDataCompleteDelegate, sizeof(ReadSaveGameDataCompleteDelegate));

	this->ProcessEvent(uFnClearReadCrossTitleSaveGameDataComplete, &ClearReadCrossTitleSaveGameDataComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleSaveGameDataComplete
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate)
{
	static UFunction* uFnAddReadCrossTitleSaveGameDataComplete = nullptr;

	if (!uFnAddReadCrossTitleSaveGameDataComplete)
	{
		uFnAddReadCrossTitleSaveGameDataComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleSaveGameDataComplete");
	}

	UOnlineSubsystemSteamworks_execAddReadCrossTitleSaveGameDataComplete_Params AddReadCrossTitleSaveGameDataComplete_Params;
	memset(&AddReadCrossTitleSaveGameDataComplete_Params, 0, sizeof(AddReadCrossTitleSaveGameDataComplete_Params));
	if (!uFnAddReadCrossTitleSaveGameDataComplete)
	{
		return;
	}

	AddReadCrossTitleSaveGameDataComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddReadCrossTitleSaveGameDataComplete_Params.ReadSaveGameDataCompleteDelegate, sizeof(AddReadCrossTitleSaveGameDataComplete_Params.ReadSaveGameDataCompleteDelegate), &ReadSaveGameDataCompleteDelegate, sizeof(ReadSaveGameDataCompleteDelegate));

	this->ProcessEvent(uFnAddReadCrossTitleSaveGameDataComplete, &AddReadCrossTitleSaveGameDataComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleSaveGameDataComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        DeviceID                       (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// class FString                  FriendlyName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveFileName                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadCrossTitleSaveGameDataComplete(bool bWasSuccessful, uint8_t LocalUserNum, int32_t DeviceID, int32_t TitleId, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName)
{
	static UFunction* uFnOnReadCrossTitleSaveGameDataComplete = nullptr;

	if (!uFnOnReadCrossTitleSaveGameDataComplete)
	{
		uFnOnReadCrossTitleSaveGameDataComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleSaveGameDataComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadCrossTitleSaveGameDataComplete_Params OnReadCrossTitleSaveGameDataComplete_Params;
	memset(&OnReadCrossTitleSaveGameDataComplete_Params, 0, sizeof(OnReadCrossTitleSaveGameDataComplete_Params));
	if (!uFnOnReadCrossTitleSaveGameDataComplete)
	{
		return;
	}

	OnReadCrossTitleSaveGameDataComplete_Params.bWasSuccessful = bWasSuccessful;
	OnReadCrossTitleSaveGameDataComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	OnReadCrossTitleSaveGameDataComplete_Params.DeviceID = DeviceID;
	OnReadCrossTitleSaveGameDataComplete_Params.TitleId = TitleId;
	memcpy_s(&OnReadCrossTitleSaveGameDataComplete_Params.FriendlyName, sizeof(OnReadCrossTitleSaveGameDataComplete_Params.FriendlyName), &FriendlyName, sizeof(FriendlyName));
	memcpy_s(&OnReadCrossTitleSaveGameDataComplete_Params.Filename, sizeof(OnReadCrossTitleSaveGameDataComplete_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&OnReadCrossTitleSaveGameDataComplete_Params.SaveFileName, sizeof(OnReadCrossTitleSaveGameDataComplete_Params.SaveFileName), &SaveFileName, sizeof(SaveFileName));

	this->ProcessEvent(uFnOnReadCrossTitleSaveGameDataComplete, &OnReadCrossTitleSaveGameDataComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleSaveGameData
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        DeviceID                       (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// class FString                  FriendlyName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveFileName                   (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        bIsValid                       (CPF_Parm | CPF_OutParm)
// class TArray<uint8_t>          SaveGameData                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetCrossTitleSaveGameData(uint8_t LocalUserNum, int32_t DeviceID, int32_t TitleId, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName, uint8_t& outBIsValid, class TArray<uint8_t>& outSaveGameData)
{
	static UFunction* uFnGetCrossTitleSaveGameData = nullptr;

	if (!uFnGetCrossTitleSaveGameData)
	{
		uFnGetCrossTitleSaveGameData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleSaveGameData");
	}

	UOnlineSubsystemSteamworks_execGetCrossTitleSaveGameData_Params GetCrossTitleSaveGameData_Params;
	memset(&GetCrossTitleSaveGameData_Params, 0, sizeof(GetCrossTitleSaveGameData_Params));
	if (!uFnGetCrossTitleSaveGameData)
	{
		return {};
	}

	GetCrossTitleSaveGameData_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	GetCrossTitleSaveGameData_Params.DeviceID = DeviceID;
	GetCrossTitleSaveGameData_Params.TitleId = TitleId;
	memcpy_s(&GetCrossTitleSaveGameData_Params.FriendlyName, sizeof(GetCrossTitleSaveGameData_Params.FriendlyName), &FriendlyName, sizeof(FriendlyName));
	memcpy_s(&GetCrossTitleSaveGameData_Params.Filename, sizeof(GetCrossTitleSaveGameData_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetCrossTitleSaveGameData_Params.SaveFileName, sizeof(GetCrossTitleSaveGameData_Params.SaveFileName), &SaveFileName, sizeof(SaveFileName));
	GetCrossTitleSaveGameData_Params.bIsValid = static_cast<uint8_t>(outBIsValid);
	memcpy_s(&GetCrossTitleSaveGameData_Params.SaveGameData, sizeof(GetCrossTitleSaveGameData_Params.SaveGameData), &outSaveGameData, sizeof(outSaveGameData));

	this->ProcessEvent(uFnGetCrossTitleSaveGameData, &GetCrossTitleSaveGameData_Params, nullptr);

	outBIsValid = static_cast<uint8_t>(outBIsValid);
	memcpy_s(&outSaveGameData, sizeof(outSaveGameData), &GetCrossTitleSaveGameData_Params.SaveGameData, sizeof(GetCrossTitleSaveGameData_Params.SaveGameData));

	return GetCrossTitleSaveGameData_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleSaveGameData
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        DeviceID                       (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// class FString                  FriendlyName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SaveFileName                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadCrossTitleSaveGameData(uint8_t LocalUserNum, int32_t DeviceID, int32_t TitleId, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName)
{
	static UFunction* uFnReadCrossTitleSaveGameData = nullptr;

	if (!uFnReadCrossTitleSaveGameData)
	{
		uFnReadCrossTitleSaveGameData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleSaveGameData");
	}

	UOnlineSubsystemSteamworks_execReadCrossTitleSaveGameData_Params ReadCrossTitleSaveGameData_Params;
	memset(&ReadCrossTitleSaveGameData_Params, 0, sizeof(ReadCrossTitleSaveGameData_Params));
	if (!uFnReadCrossTitleSaveGameData)
	{
		return {};
	}

	ReadCrossTitleSaveGameData_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadCrossTitleSaveGameData_Params.DeviceID = DeviceID;
	ReadCrossTitleSaveGameData_Params.TitleId = TitleId;
	memcpy_s(&ReadCrossTitleSaveGameData_Params.FriendlyName, sizeof(ReadCrossTitleSaveGameData_Params.FriendlyName), &FriendlyName, sizeof(FriendlyName));
	memcpy_s(&ReadCrossTitleSaveGameData_Params.Filename, sizeof(ReadCrossTitleSaveGameData_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&ReadCrossTitleSaveGameData_Params.SaveFileName, sizeof(ReadCrossTitleSaveGameData_Params.SaveFileName), &SaveFileName, sizeof(SaveFileName));

	this->ProcessEvent(uFnReadCrossTitleSaveGameData, &ReadCrossTitleSaveGameData_Params, nullptr);

	return ReadCrossTitleSaveGameData_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleContentCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineContentType             ContentType                    (CPF_Parm)
// struct FScriptDelegate         ReadContentCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleContentCompleteDelegate(uint8_t LocalUserNum, EOnlineContentType ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate)
{
	static UFunction* uFnClearReadCrossTitleContentCompleteDelegate = nullptr;

	if (!uFnClearReadCrossTitleContentCompleteDelegate)
	{
		uFnClearReadCrossTitleContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleContentCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadCrossTitleContentCompleteDelegate_Params ClearReadCrossTitleContentCompleteDelegate_Params;
	memset(&ClearReadCrossTitleContentCompleteDelegate_Params, 0, sizeof(ClearReadCrossTitleContentCompleteDelegate_Params));
	if (!uFnClearReadCrossTitleContentCompleteDelegate)
	{
		return;
	}

	ClearReadCrossTitleContentCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ClearReadCrossTitleContentCompleteDelegate_Params.ContentType = static_cast<uint8_t>(ContentType);
	memcpy_s(&ClearReadCrossTitleContentCompleteDelegate_Params.ReadContentCompleteDelegate, sizeof(ClearReadCrossTitleContentCompleteDelegate_Params.ReadContentCompleteDelegate), &ReadContentCompleteDelegate, sizeof(ReadContentCompleteDelegate));

	this->ProcessEvent(uFnClearReadCrossTitleContentCompleteDelegate, &ClearReadCrossTitleContentCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleContentCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineContentType             ContentType                    (CPF_Parm)
// struct FScriptDelegate         ReadContentCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleContentCompleteDelegate(uint8_t LocalUserNum, EOnlineContentType ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate)
{
	static UFunction* uFnAddReadCrossTitleContentCompleteDelegate = nullptr;

	if (!uFnAddReadCrossTitleContentCompleteDelegate)
	{
		uFnAddReadCrossTitleContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleContentCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadCrossTitleContentCompleteDelegate_Params AddReadCrossTitleContentCompleteDelegate_Params;
	memset(&AddReadCrossTitleContentCompleteDelegate_Params, 0, sizeof(AddReadCrossTitleContentCompleteDelegate_Params));
	if (!uFnAddReadCrossTitleContentCompleteDelegate)
	{
		return;
	}

	AddReadCrossTitleContentCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	AddReadCrossTitleContentCompleteDelegate_Params.ContentType = static_cast<uint8_t>(ContentType);
	memcpy_s(&AddReadCrossTitleContentCompleteDelegate_Params.ReadContentCompleteDelegate, sizeof(AddReadCrossTitleContentCompleteDelegate_Params.ReadContentCompleteDelegate), &ReadContentCompleteDelegate, sizeof(ReadContentCompleteDelegate));

	this->ProcessEvent(uFnAddReadCrossTitleContentCompleteDelegate, &AddReadCrossTitleContentCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleContentComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadCrossTitleContentComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadCrossTitleContentComplete = nullptr;

	if (!uFnOnReadCrossTitleContentComplete)
	{
		uFnOnReadCrossTitleContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleContentComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadCrossTitleContentComplete_Params OnReadCrossTitleContentComplete_Params;
	memset(&OnReadCrossTitleContentComplete_Params, 0, sizeof(OnReadCrossTitleContentComplete_Params));
	if (!uFnOnReadCrossTitleContentComplete)
	{
		return;
	}

	OnReadCrossTitleContentComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadCrossTitleContentComplete, &OnReadCrossTitleContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleContentList
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineContentType             ContentType                    (CPF_Parm)
// class TArray<struct FOnlineCrossTitleContent> ContentList                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetCrossTitleContentList(uint8_t LocalUserNum, EOnlineContentType ContentType, class TArray<struct FOnlineCrossTitleContent>& outContentList)
{
	static UFunction* uFnGetCrossTitleContentList = nullptr;

	if (!uFnGetCrossTitleContentList)
	{
		uFnGetCrossTitleContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleContentList");
	}

	UOnlineSubsystemSteamworks_execGetCrossTitleContentList_Params GetCrossTitleContentList_Params;
	memset(&GetCrossTitleContentList_Params, 0, sizeof(GetCrossTitleContentList_Params));
	if (!uFnGetCrossTitleContentList)
	{
		return {};
	}

	GetCrossTitleContentList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	GetCrossTitleContentList_Params.ContentType = static_cast<uint8_t>(ContentType);
	memcpy_s(&GetCrossTitleContentList_Params.ContentList, sizeof(GetCrossTitleContentList_Params.ContentList), &outContentList, sizeof(outContentList));

	this->ProcessEvent(uFnGetCrossTitleContentList, &GetCrossTitleContentList_Params, nullptr);

	memcpy_s(&outContentList, sizeof(outContentList), &GetCrossTitleContentList_Params.ContentList, sizeof(GetCrossTitleContentList_Params.ContentList));

	return static_cast<EOnlineEnumerationReadState>(GetCrossTitleContentList_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleContentList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineContentType             ContentType                    (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleContentList(uint8_t LocalUserNum, EOnlineContentType ContentType)
{
	static UFunction* uFnClearCrossTitleContentList = nullptr;

	if (!uFnClearCrossTitleContentList)
	{
		uFnClearCrossTitleContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleContentList");
	}

	UOnlineSubsystemSteamworks_execClearCrossTitleContentList_Params ClearCrossTitleContentList_Params;
	memset(&ClearCrossTitleContentList_Params, 0, sizeof(ClearCrossTitleContentList_Params));
	if (!uFnClearCrossTitleContentList)
	{
		return;
	}

	ClearCrossTitleContentList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ClearCrossTitleContentList_Params.ContentType = static_cast<uint8_t>(ContentType);

	this->ProcessEvent(uFnClearCrossTitleContentList, &ClearCrossTitleContentList_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleContentList
// [0x00024000] (FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineContentType             ContentType                    (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleContentList(uint8_t LocalUserNum, EOnlineContentType ContentType, int32_t optionalTitleId, int32_t optionalDeviceID)
{
	static UFunction* uFnReadCrossTitleContentList = nullptr;

	if (!uFnReadCrossTitleContentList)
	{
		uFnReadCrossTitleContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleContentList");
	}

	UOnlineSubsystemSteamworks_execReadCrossTitleContentList_Params ReadCrossTitleContentList_Params;
	memset(&ReadCrossTitleContentList_Params, 0, sizeof(ReadCrossTitleContentList_Params));
	if (!uFnReadCrossTitleContentList)
	{
		return {};
	}

	ReadCrossTitleContentList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadCrossTitleContentList_Params.ContentType = static_cast<uint8_t>(ContentType);
	ReadCrossTitleContentList_Params.TitleId = optionalTitleId;
	ReadCrossTitleContentList_Params.DeviceID = optionalDeviceID;

	this->ProcessEvent(uFnReadCrossTitleContentList, &ReadCrossTitleContentList_Params, nullptr);

	return ReadCrossTitleContentList_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserLanguage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::GetUserLanguage()
{
	static UFunction* uFnGetUserLanguage = nullptr;

	if (!uFnGetUserLanguage)
	{
		uFnGetUserLanguage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserLanguage");
	}

	UOnlineSubsystemSteamworks_execGetUserLanguage_Params GetUserLanguage_Params;
	memset(&GetUserLanguage_Params, 0, sizeof(GetUserLanguage_Params));
	if (!uFnGetUserLanguage)
	{
		return {};
	}


	auto native_GetUserLanguage = uFnGetUserLanguage->iNative;
	uFnGetUserLanguage->iNative = 0;
	this->ProcessEvent(uFnGetUserLanguage, &GetUserLanguage_Params, nullptr);
	uFnGetUserLanguage->iNative = native_GetUserLanguage;

	return GetUserLanguage_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserCountryCode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::GetUserCountryCode()
{
	static UFunction* uFnGetUserCountryCode = nullptr;

	if (!uFnGetUserCountryCode)
	{
		uFnGetUserCountryCode = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserCountryCode");
	}

	UOnlineSubsystemSteamworks_execGetUserCountryCode_Params GetUserCountryCode_Params;
	memset(&GetUserCountryCode_Params, 0, sizeof(GetUserCountryCode_Params));
	if (!uFnGetUserCountryCode)
	{
		return {};
	}


	auto native_GetUserCountryCode = uFnGetUserCountryCode->iNative;
	uFnGetUserCountryCode->iNative = 0;
	this->ProcessEvent(uFnGetUserCountryCode, &GetUserCountryCode_Params, nullptr);
	uFnGetUserCountryCode->iNative = native_GetUserCountryCode;

	return GetUserCountryCode_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPS4DownloadList
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ShowPS4DownloadList(uint8_t LocalUserNum)
{
	static UFunction* uFnShowPS4DownloadList = nullptr;

	if (!uFnShowPS4DownloadList)
	{
		uFnShowPS4DownloadList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPS4DownloadList");
	}

	UOnlineSubsystemSteamworks_execShowPS4DownloadList_Params ShowPS4DownloadList_Params;
	memset(&ShowPS4DownloadList_Params, 0, sizeof(ShowPS4DownloadList_Params));
	if (!uFnShowPS4DownloadList)
	{
		return;
	}

	ShowPS4DownloadList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnShowPS4DownloadList, &ShowPS4DownloadList_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPS4StoreIcon
// [0x00024000] (FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bShow                          (CPF_Parm)
// int32_t                        Position                       (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemSteamworks::ShowPS4StoreIcon(bool bShow, int32_t optionalPosition)
{
	static UFunction* uFnShowPS4StoreIcon = nullptr;

	if (!uFnShowPS4StoreIcon)
	{
		uFnShowPS4StoreIcon = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPS4StoreIcon");
	}

	UOnlineSubsystemSteamworks_execShowPS4StoreIcon_Params ShowPS4StoreIcon_Params;
	memset(&ShowPS4StoreIcon_Params, 0, sizeof(ShowPS4StoreIcon_Params));
	if (!uFnShowPS4StoreIcon)
	{
		return;
	}

	ShowPS4StoreIcon_Params.bShow = bShow;
	ShowPS4StoreIcon_Params.Position = optionalPosition;

	this->ProcessEvent(uFnShowPS4StoreIcon, &ShowPS4StoreIcon_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.BrowseInGameStoreItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  ItemId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::BrowseInGameStoreItem(uint8_t LocalUserNum, const class FString& ItemId)
{
	static UFunction* uFnBrowseInGameStoreItem = nullptr;

	if (!uFnBrowseInGameStoreItem)
	{
		uFnBrowseInGameStoreItem = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.BrowseInGameStoreItem");
	}

	UOnlineSubsystemSteamworks_execBrowseInGameStoreItem_Params BrowseInGameStoreItem_Params;
	memset(&BrowseInGameStoreItem_Params, 0, sizeof(BrowseInGameStoreItem_Params));
	if (!uFnBrowseInGameStoreItem)
	{
		return;
	}

	BrowseInGameStoreItem_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&BrowseInGameStoreItem_Params.ItemId, sizeof(BrowseInGameStoreItem_Params.ItemId), &ItemId, sizeof(ItemId));

	auto native_BrowseInGameStoreItem = uFnBrowseInGameStoreItem->iNative;
	uFnBrowseInGameStoreItem->iNative = 0;
	this->ProcessEvent(uFnBrowseInGameStoreItem, &BrowseInGameStoreItem_Params, nullptr);
	uFnBrowseInGameStoreItem->iNative = native_BrowseInGameStoreItem;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PurchaseInGameStoreItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  ItemId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::PurchaseInGameStoreItem(uint8_t LocalUserNum, const class FString& ItemId)
{
	static UFunction* uFnPurchaseInGameStoreItem = nullptr;

	if (!uFnPurchaseInGameStoreItem)
	{
		uFnPurchaseInGameStoreItem = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PurchaseInGameStoreItem");
	}

	UOnlineSubsystemSteamworks_execPurchaseInGameStoreItem_Params PurchaseInGameStoreItem_Params;
	memset(&PurchaseInGameStoreItem_Params, 0, sizeof(PurchaseInGameStoreItem_Params));
	if (!uFnPurchaseInGameStoreItem)
	{
		return;
	}

	PurchaseInGameStoreItem_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&PurchaseInGameStoreItem_Params.ItemId, sizeof(PurchaseInGameStoreItem_Params.ItemId), &ItemId, sizeof(ItemId));

	auto native_PurchaseInGameStoreItem = uFnPurchaseInGameStoreItem->iNative;
	uFnPurchaseInGameStoreItem->iNative = 0;
	this->ProcessEvent(uFnPurchaseInGameStoreItem, &PurchaseInGameStoreItem_Params, nullptr);
	uFnPurchaseInGameStoreItem->iNative = native_PurchaseInGameStoreItem;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPurchaseInGameStoreContentComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PurchaseInGameStoreContentComplete (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPurchaseInGameStoreContentComplete(uint8_t LocalUserNum, const struct FScriptDelegate& PurchaseInGameStoreContentComplete)
{
	static UFunction* uFnClearPurchaseInGameStoreContentComplete = nullptr;

	if (!uFnClearPurchaseInGameStoreContentComplete)
	{
		uFnClearPurchaseInGameStoreContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPurchaseInGameStoreContentComplete");
	}

	UOnlineSubsystemSteamworks_execClearPurchaseInGameStoreContentComplete_Params ClearPurchaseInGameStoreContentComplete_Params;
	memset(&ClearPurchaseInGameStoreContentComplete_Params, 0, sizeof(ClearPurchaseInGameStoreContentComplete_Params));
	if (!uFnClearPurchaseInGameStoreContentComplete)
	{
		return;
	}

	ClearPurchaseInGameStoreContentComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearPurchaseInGameStoreContentComplete_Params.PurchaseInGameStoreContentComplete, sizeof(ClearPurchaseInGameStoreContentComplete_Params.PurchaseInGameStoreContentComplete), &PurchaseInGameStoreContentComplete, sizeof(PurchaseInGameStoreContentComplete));

	this->ProcessEvent(uFnClearPurchaseInGameStoreContentComplete, &ClearPurchaseInGameStoreContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPurchaseInGameStoreContentComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PurchaseInGameStoreContentComplete (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPurchaseInGameStoreContentComplete(uint8_t LocalUserNum, const struct FScriptDelegate& PurchaseInGameStoreContentComplete)
{
	static UFunction* uFnAddPurchaseInGameStoreContentComplete = nullptr;

	if (!uFnAddPurchaseInGameStoreContentComplete)
	{
		uFnAddPurchaseInGameStoreContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPurchaseInGameStoreContentComplete");
	}

	UOnlineSubsystemSteamworks_execAddPurchaseInGameStoreContentComplete_Params AddPurchaseInGameStoreContentComplete_Params;
	memset(&AddPurchaseInGameStoreContentComplete_Params, 0, sizeof(AddPurchaseInGameStoreContentComplete_Params));
	if (!uFnAddPurchaseInGameStoreContentComplete)
	{
		return;
	}

	AddPurchaseInGameStoreContentComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddPurchaseInGameStoreContentComplete_Params.PurchaseInGameStoreContentComplete, sizeof(AddPurchaseInGameStoreContentComplete_Params.PurchaseInGameStoreContentComplete), &PurchaseInGameStoreContentComplete, sizeof(PurchaseInGameStoreContentComplete));

	this->ProcessEvent(uFnAddPurchaseInGameStoreContentComplete, &AddPurchaseInGameStoreContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPurchaseInGameStoreContentComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPurchaseInGameStoreContentComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnPurchaseInGameStoreContentComplete = nullptr;

	if (!uFnOnPurchaseInGameStoreContentComplete)
	{
		uFnOnPurchaseInGameStoreContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPurchaseInGameStoreContentComplete");
	}

	UOnlineSubsystemSteamworks_execOnPurchaseInGameStoreContentComplete_Params OnPurchaseInGameStoreContentComplete_Params;
	memset(&OnPurchaseInGameStoreContentComplete_Params, 0, sizeof(OnPurchaseInGameStoreContentComplete_Params));
	if (!uFnOnPurchaseInGameStoreContentComplete)
	{
		return;
	}

	OnPurchaseInGameStoreContentComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnPurchaseInGameStoreContentComplete, &OnPurchaseInGameStoreContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetInGameStoreContentList
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<struct FOnlineStoreContent> ContentList                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetInGameStoreContentList(uint8_t LocalUserNum, class TArray<struct FOnlineStoreContent>& outContentList)
{
	static UFunction* uFnGetInGameStoreContentList = nullptr;

	if (!uFnGetInGameStoreContentList)
	{
		uFnGetInGameStoreContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetInGameStoreContentList");
	}

	UOnlineSubsystemSteamworks_execGetInGameStoreContentList_Params GetInGameStoreContentList_Params;
	memset(&GetInGameStoreContentList_Params, 0, sizeof(GetInGameStoreContentList_Params));
	if (!uFnGetInGameStoreContentList)
	{
		return;
	}

	GetInGameStoreContentList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&GetInGameStoreContentList_Params.ContentList, sizeof(GetInGameStoreContentList_Params.ContentList), &outContentList, sizeof(outContentList));

	auto native_GetInGameStoreContentList = uFnGetInGameStoreContentList->iNative;
	uFnGetInGameStoreContentList->iNative = 0;
	this->ProcessEvent(uFnGetInGameStoreContentList, &GetInGameStoreContentList_Params, nullptr);
	uFnGetInGameStoreContentList->iNative = native_GetInGameStoreContentList;

	memcpy_s(&outContentList, sizeof(outContentList), &GetInGameStoreContentList_Params.ContentList, sizeof(GetInGameStoreContentList_Params.ContentList));
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadInGameStoreContentList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadInGameStoreContentList(uint8_t LocalUserNum)
{
	static UFunction* uFnReadInGameStoreContentList = nullptr;

	if (!uFnReadInGameStoreContentList)
	{
		uFnReadInGameStoreContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadInGameStoreContentList");
	}

	UOnlineSubsystemSteamworks_execReadInGameStoreContentList_Params ReadInGameStoreContentList_Params;
	memset(&ReadInGameStoreContentList_Params, 0, sizeof(ReadInGameStoreContentList_Params));
	if (!uFnReadInGameStoreContentList)
	{
		return {};
	}

	ReadInGameStoreContentList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_ReadInGameStoreContentList = uFnReadInGameStoreContentList->iNative;
	uFnReadInGameStoreContentList->iNative = 0;
	this->ProcessEvent(uFnReadInGameStoreContentList, &ReadInGameStoreContentList_Params, nullptr);
	uFnReadInGameStoreContentList->iNative = native_ReadInGameStoreContentList;

	return ReadInGameStoreContentList_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInGameStoreContentList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearInGameStoreContentList(uint8_t LocalUserNum)
{
	static UFunction* uFnClearInGameStoreContentList = nullptr;

	if (!uFnClearInGameStoreContentList)
	{
		uFnClearInGameStoreContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInGameStoreContentList");
	}

	UOnlineSubsystemSteamworks_execClearInGameStoreContentList_Params ClearInGameStoreContentList_Params;
	memset(&ClearInGameStoreContentList_Params, 0, sizeof(ClearInGameStoreContentList_Params));
	if (!uFnClearInGameStoreContentList)
	{
		return;
	}

	ClearInGameStoreContentList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_ClearInGameStoreContentList = uFnClearInGameStoreContentList->iNative;
	uFnClearInGameStoreContentList->iNative = 0;
	this->ProcessEvent(uFnClearInGameStoreContentList, &ClearInGameStoreContentList_Params, nullptr);
	uFnClearInGameStoreContentList->iNative = native_ClearInGameStoreContentList;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadInGameStoreContentComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadInGameStoreContentComplete (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadInGameStoreContentComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadInGameStoreContentComplete)
{
	static UFunction* uFnClearReadInGameStoreContentComplete = nullptr;

	if (!uFnClearReadInGameStoreContentComplete)
	{
		uFnClearReadInGameStoreContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadInGameStoreContentComplete");
	}

	UOnlineSubsystemSteamworks_execClearReadInGameStoreContentComplete_Params ClearReadInGameStoreContentComplete_Params;
	memset(&ClearReadInGameStoreContentComplete_Params, 0, sizeof(ClearReadInGameStoreContentComplete_Params));
	if (!uFnClearReadInGameStoreContentComplete)
	{
		return;
	}

	ClearReadInGameStoreContentComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearReadInGameStoreContentComplete_Params.ReadInGameStoreContentComplete, sizeof(ClearReadInGameStoreContentComplete_Params.ReadInGameStoreContentComplete), &ReadInGameStoreContentComplete, sizeof(ReadInGameStoreContentComplete));

	this->ProcessEvent(uFnClearReadInGameStoreContentComplete, &ClearReadInGameStoreContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadInGameStoreContentComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadInGameStoreContentComplete (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadInGameStoreContentComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadInGameStoreContentComplete)
{
	static UFunction* uFnAddReadInGameStoreContentComplete = nullptr;

	if (!uFnAddReadInGameStoreContentComplete)
	{
		uFnAddReadInGameStoreContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadInGameStoreContentComplete");
	}

	UOnlineSubsystemSteamworks_execAddReadInGameStoreContentComplete_Params AddReadInGameStoreContentComplete_Params;
	memset(&AddReadInGameStoreContentComplete_Params, 0, sizeof(AddReadInGameStoreContentComplete_Params));
	if (!uFnAddReadInGameStoreContentComplete)
	{
		return;
	}

	AddReadInGameStoreContentComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddReadInGameStoreContentComplete_Params.ReadInGameStoreContentComplete, sizeof(AddReadInGameStoreContentComplete_Params.ReadInGameStoreContentComplete), &ReadInGameStoreContentComplete, sizeof(ReadInGameStoreContentComplete));

	this->ProcessEvent(uFnAddReadInGameStoreContentComplete, &AddReadInGameStoreContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadInGameStoreContentComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadInGameStoreContentComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadInGameStoreContentComplete = nullptr;

	if (!uFnOnReadInGameStoreContentComplete)
	{
		uFnOnReadInGameStoreContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadInGameStoreContentComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadInGameStoreContentComplete_Params OnReadInGameStoreContentComplete_Params;
	memset(&OnReadInGameStoreContentComplete_Params, 0, sizeof(OnReadInGameStoreContentComplete_Params));
	if (!uFnOnReadInGameStoreContentComplete)
	{
		return;
	}

	OnReadInGameStoreContentComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadInGameStoreContentComplete, &OnReadInGameStoreContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentStatusChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ContentStatusChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearContentStatusChangeDelegate(const struct FScriptDelegate& ContentStatusChangeDelegate)
{
	static UFunction* uFnClearContentStatusChangeDelegate = nullptr;

	if (!uFnClearContentStatusChangeDelegate)
	{
		uFnClearContentStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearContentStatusChangeDelegate_Params ClearContentStatusChangeDelegate_Params;
	memset(&ClearContentStatusChangeDelegate_Params, 0, sizeof(ClearContentStatusChangeDelegate_Params));
	if (!uFnClearContentStatusChangeDelegate)
	{
		return;
	}

	memcpy_s(&ClearContentStatusChangeDelegate_Params.ContentStatusChangeDelegate, sizeof(ClearContentStatusChangeDelegate_Params.ContentStatusChangeDelegate), &ContentStatusChangeDelegate, sizeof(ContentStatusChangeDelegate));

	this->ProcessEvent(uFnClearContentStatusChangeDelegate, &ClearContentStatusChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentStatusChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ContentStatusChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddContentStatusChangeDelegate(const struct FScriptDelegate& ContentStatusChangeDelegate)
{
	static UFunction* uFnAddContentStatusChangeDelegate = nullptr;

	if (!uFnAddContentStatusChangeDelegate)
	{
		uFnAddContentStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddContentStatusChangeDelegate_Params AddContentStatusChangeDelegate_Params;
	memset(&AddContentStatusChangeDelegate_Params, 0, sizeof(AddContentStatusChangeDelegate_Params));
	if (!uFnAddContentStatusChangeDelegate)
	{
		return;
	}

	memcpy_s(&AddContentStatusChangeDelegate_Params.ContentStatusChangeDelegate, sizeof(AddContentStatusChangeDelegate_Params.ContentStatusChangeDelegate), &ContentStatusChangeDelegate, sizeof(ContentStatusChangeDelegate));

	this->ProcessEvent(uFnAddContentStatusChangeDelegate, &AddContentStatusChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnContentStatusChange()
{
	static UFunction* uFnOnContentStatusChange = nullptr;

	if (!uFnOnContentStatusChange)
	{
		uFnOnContentStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnContentStatusChange_Params OnContentStatusChange_Params;
	memset(&OnContentStatusChange_Params, 0, sizeof(OnContentStatusChange_Params));
	if (!uFnOnContentStatusChange)
	{
		return;
	}


	this->ProcessEvent(uFnOnContentStatusChange, &OnContentStatusChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineContentType             ContentType                    (CPF_Parm)
// class TArray<struct FOnlineContent> ContentList                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetContentList(uint8_t LocalUserNum, EOnlineContentType ContentType, class TArray<struct FOnlineContent>& outContentList)
{
	static UFunction* uFnGetContentList = nullptr;

	if (!uFnGetContentList)
	{
		uFnGetContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList");
	}

	UOnlineSubsystemSteamworks_execGetContentList_Params GetContentList_Params;
	memset(&GetContentList_Params, 0, sizeof(GetContentList_Params));
	if (!uFnGetContentList)
	{
		return {};
	}

	GetContentList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	GetContentList_Params.ContentType = static_cast<uint8_t>(ContentType);
	memcpy_s(&GetContentList_Params.ContentList, sizeof(GetContentList_Params.ContentList), &outContentList, sizeof(outContentList));

	this->ProcessEvent(uFnGetContentList, &GetContentList_Params, nullptr);

	memcpy_s(&outContentList, sizeof(outContentList), &GetContentList_Params.ContentList, sizeof(GetContentList_Params.ContentList));

	return static_cast<EOnlineEnumerationReadState>(GetContentList_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentList
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineContentType             ContentType                    (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearContentList(uint8_t LocalUserNum, EOnlineContentType ContentType)
{
	static UFunction* uFnClearContentList = nullptr;

	if (!uFnClearContentList)
	{
		uFnClearContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentList");
	}

	UOnlineSubsystemSteamworks_execClearContentList_Params ClearContentList_Params;
	memset(&ClearContentList_Params, 0, sizeof(ClearContentList_Params));
	if (!uFnClearContentList)
	{
		return;
	}

	ClearContentList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ClearContentList_Params.ContentType = static_cast<uint8_t>(ContentType);

	auto native_ClearContentList = uFnClearContentList->iNative;
	uFnClearContentList->iNative = 0;
	this->ProcessEvent(uFnClearContentList, &ClearContentList_Params, nullptr);
	uFnClearContentList->iNative = native_ClearContentList;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList
// [0x00024400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineContentType             ContentType                    (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadContentList(uint8_t LocalUserNum, EOnlineContentType ContentType, int32_t optionalDeviceID)
{
	static UFunction* uFnReadContentList = nullptr;

	if (!uFnReadContentList)
	{
		uFnReadContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList");
	}

	UOnlineSubsystemSteamworks_execReadContentList_Params ReadContentList_Params;
	memset(&ReadContentList_Params, 0, sizeof(ReadContentList_Params));
	if (!uFnReadContentList)
	{
		return {};
	}

	ReadContentList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadContentList_Params.ContentType = static_cast<uint8_t>(ContentType);
	ReadContentList_Params.DeviceID = optionalDeviceID;

	auto native_ReadContentList = uFnReadContentList->iNative;
	uFnReadContentList->iNative = 0;
	this->ProcessEvent(uFnReadContentList, &ReadContentList_Params, nullptr);
	uFnReadContentList->iNative = native_ReadContentList;

	return ReadContentList_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasContentUpdated
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasContentUpdated()
{
	static UFunction* uFnHasContentUpdated = nullptr;

	if (!uFnHasContentUpdated)
	{
		uFnHasContentUpdated = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasContentUpdated");
	}

	UOnlineSubsystemSteamworks_execHasContentUpdated_Params HasContentUpdated_Params;
	memset(&HasContentUpdated_Params, 0, sizeof(HasContentUpdated_Params));
	if (!uFnHasContentUpdated)
	{
		return {};
	}


	auto native_HasContentUpdated = uFnHasContentUpdated->iNative;
	uFnHasContentUpdated->iNative = 0;
	this->ProcessEvent(uFnHasContentUpdated, &HasContentUpdated_Params, nullptr);
	uFnHasContentUpdated->iNative = native_HasContentUpdated;

	return HasContentUpdated_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineContentType             ContentType                    (CPF_Parm)
// struct FScriptDelegate         ReadContentCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadContentComplete(uint8_t LocalUserNum, EOnlineContentType ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate)
{
	static UFunction* uFnClearReadContentComplete = nullptr;

	if (!uFnClearReadContentComplete)
	{
		uFnClearReadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete");
	}

	UOnlineSubsystemSteamworks_execClearReadContentComplete_Params ClearReadContentComplete_Params;
	memset(&ClearReadContentComplete_Params, 0, sizeof(ClearReadContentComplete_Params));
	if (!uFnClearReadContentComplete)
	{
		return;
	}

	ClearReadContentComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ClearReadContentComplete_Params.ContentType = static_cast<uint8_t>(ContentType);
	memcpy_s(&ClearReadContentComplete_Params.ReadContentCompleteDelegate, sizeof(ClearReadContentComplete_Params.ReadContentCompleteDelegate), &ReadContentCompleteDelegate, sizeof(ReadContentCompleteDelegate));

	this->ProcessEvent(uFnClearReadContentComplete, &ClearReadContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineContentType             ContentType                    (CPF_Parm)
// struct FScriptDelegate         ReadContentCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadContentComplete(uint8_t LocalUserNum, EOnlineContentType ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate)
{
	static UFunction* uFnAddReadContentComplete = nullptr;

	if (!uFnAddReadContentComplete)
	{
		uFnAddReadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete");
	}

	UOnlineSubsystemSteamworks_execAddReadContentComplete_Params AddReadContentComplete_Params;
	memset(&AddReadContentComplete_Params, 0, sizeof(AddReadContentComplete_Params));
	if (!uFnAddReadContentComplete)
	{
		return;
	}

	AddReadContentComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	AddReadContentComplete_Params.ContentType = static_cast<uint8_t>(ContentType);
	memcpy_s(&AddReadContentComplete_Params.ReadContentCompleteDelegate, sizeof(AddReadContentComplete_Params.ReadContentCompleteDelegate), &ReadContentCompleteDelegate, sizeof(ReadContentCompleteDelegate));

	this->ProcessEvent(uFnAddReadContentComplete, &AddReadContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadContentComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadContentComplete = nullptr;

	if (!uFnOnReadContentComplete)
	{
		uFnOnReadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadContentComplete_Params OnReadContentComplete_Params;
	memset(&OnReadContentComplete_Params, 0, sizeof(OnReadContentComplete_Params));
	if (!uFnOnReadContentComplete)
	{
		return;
	}

	OnReadContentComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadContentComplete, &OnReadContentComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate
// [0x00024002] (FUNC_Defined | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ContentDelegate                (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemSteamworks::ClearContentChangeDelegate(const struct FScriptDelegate& ContentDelegate, uint8_t optionalLocalUserNum)
{
	static UFunction* uFnClearContentChangeDelegate = nullptr;

	if (!uFnClearContentChangeDelegate)
	{
		uFnClearContentChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearContentChangeDelegate_Params ClearContentChangeDelegate_Params;
	memset(&ClearContentChangeDelegate_Params, 0, sizeof(ClearContentChangeDelegate_Params));
	if (!uFnClearContentChangeDelegate)
	{
		return;
	}

	memcpy_s(&ClearContentChangeDelegate_Params.ContentDelegate, sizeof(ClearContentChangeDelegate_Params.ContentDelegate), &ContentDelegate, sizeof(ContentDelegate));
	ClearContentChangeDelegate_Params.LocalUserNum = static_cast<uint8_t>(optionalLocalUserNum);

	this->ProcessEvent(uFnClearContentChangeDelegate, &ClearContentChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate
// [0x00024002] (FUNC_Defined | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ContentDelegate                (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemSteamworks::AddContentChangeDelegate(const struct FScriptDelegate& ContentDelegate, uint8_t optionalLocalUserNum)
{
	static UFunction* uFnAddContentChangeDelegate = nullptr;

	if (!uFnAddContentChangeDelegate)
	{
		uFnAddContentChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddContentChangeDelegate_Params AddContentChangeDelegate_Params;
	memset(&AddContentChangeDelegate_Params, 0, sizeof(AddContentChangeDelegate_Params));
	if (!uFnAddContentChangeDelegate)
	{
		return;
	}

	memcpy_s(&AddContentChangeDelegate_Params.ContentDelegate, sizeof(AddContentChangeDelegate_Params.ContentDelegate), &ContentDelegate, sizeof(ContentDelegate));
	AddContentChangeDelegate_Params.LocalUserNum = static_cast<uint8_t>(optionalLocalUserNum);

	this->ProcessEvent(uFnAddContentChangeDelegate, &AddContentChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnContentChange()
{
	static UFunction* uFnOnContentChange = nullptr;

	if (!uFnOnContentChange)
	{
		uFnOnContentChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange");
	}

	UOnlineSubsystemSteamworks_execOnContentChange_Params OnContentChange_Params;
	memset(&OnContentChange_Params, 0, sizeof(OnContentChange_Params));
	if (!uFnOnContentChange)
	{
		return;
	}


	this->ProcessEvent(uFnOnContentChange, &OnContentChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FDouble>   Mus                            (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FDouble>   Sigmas                         (CPF_Parm | CPF_NeedCtorLink)
// struct FDouble                 OutAggregateMu                 (CPF_Parm | CPF_OutParm)
// struct FDouble                 OutAggregateSigma              (CPF_Parm | CPF_OutParm)

void UOnlineSubsystemSteamworks::CalcAggregateSkill(const class TArray<struct FDouble>& Mus, const class TArray<struct FDouble>& Sigmas, struct FDouble& outOutAggregateMu, struct FDouble& outOutAggregateSigma)
{
	static UFunction* uFnCalcAggregateSkill = nullptr;

	if (!uFnCalcAggregateSkill)
	{
		uFnCalcAggregateSkill = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill");
	}

	UOnlineSubsystemSteamworks_execCalcAggregateSkill_Params CalcAggregateSkill_Params;
	memset(&CalcAggregateSkill_Params, 0, sizeof(CalcAggregateSkill_Params));
	if (!uFnCalcAggregateSkill)
	{
		return;
	}

	memcpy_s(&CalcAggregateSkill_Params.Mus, sizeof(CalcAggregateSkill_Params.Mus), &Mus, sizeof(Mus));
	memcpy_s(&CalcAggregateSkill_Params.Sigmas, sizeof(CalcAggregateSkill_Params.Sigmas), &Sigmas, sizeof(Sigmas));
	memcpy_s(&CalcAggregateSkill_Params.OutAggregateMu, sizeof(CalcAggregateSkill_Params.OutAggregateMu), &outOutAggregateMu, sizeof(outOutAggregateMu));
	memcpy_s(&CalcAggregateSkill_Params.OutAggregateSigma, sizeof(CalcAggregateSkill_Params.OutAggregateSigma), &outOutAggregateSigma, sizeof(outOutAggregateSigma));

	this->ProcessEvent(uFnCalcAggregateSkill, &CalcAggregateSkill_Params, nullptr);

	memcpy_s(&outOutAggregateMu, sizeof(outOutAggregateMu), &CalcAggregateSkill_Params.OutAggregateMu, sizeof(CalcAggregateSkill_Params.OutAggregateMu));
	memcpy_s(&outOutAggregateSigma, sizeof(outOutAggregateSigma), &CalcAggregateSkill_Params.OutAggregateSigma, sizeof(CalcAggregateSkill_Params.OutAggregateSigma));
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// class FString                  ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterStatGuid(const struct FUniqueNetId& PlayerID, class FString& outClientStatGuid)
{
	static UFunction* uFnRegisterStatGuid = nullptr;

	if (!uFnRegisterStatGuid)
	{
		uFnRegisterStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid");
	}

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Params RegisterStatGuid_Params;
	memset(&RegisterStatGuid_Params, 0, sizeof(RegisterStatGuid_Params));
	if (!uFnRegisterStatGuid)
	{
		return {};
	}

	memcpy_s(&RegisterStatGuid_Params.PlayerID, sizeof(RegisterStatGuid_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&RegisterStatGuid_Params.ClientStatGuid, sizeof(RegisterStatGuid_Params.ClientStatGuid), &outClientStatGuid, sizeof(outClientStatGuid));

	auto native_RegisterStatGuid = uFnRegisterStatGuid->iNative;
	uFnRegisterStatGuid->iNative = 0;
	this->ProcessEvent(uFnRegisterStatGuid, &RegisterStatGuid_Params, nullptr);
	uFnRegisterStatGuid->iNative = native_RegisterStatGuid;

	memcpy_s(&outClientStatGuid, sizeof(outClientStatGuid), &RegisterStatGuid_Params.ClientStatGuid, sizeof(RegisterStatGuid_Params.ClientStatGuid));

	return RegisterStatGuid_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::GetClientStatGuid()
{
	static UFunction* uFnGetClientStatGuid = nullptr;

	if (!uFnGetClientStatGuid)
	{
		uFnGetClientStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid");
	}

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Params GetClientStatGuid_Params;
	memset(&GetClientStatGuid_Params, 0, sizeof(GetClientStatGuid_Params));
	if (!uFnGetClientStatGuid)
	{
		return {};
	}


	auto native_GetClientStatGuid = uFnGetClientStatGuid->iNative;
	uFnGetClientStatGuid->iNative = 0;
	this->ProcessEvent(uFnGetClientStatGuid, &GetClientStatGuid_Params, nullptr);
	uFnGetClientStatGuid->iNative = native_GetClientStatGuid;

	return GetClientStatGuid_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!uFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		uFnClearRegisterHostStatGuidCompleteDelegateDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params ClearRegisterHostStatGuidCompleteDelegateDelegate_Params;
	memset(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, 0, sizeof(ClearRegisterHostStatGuidCompleteDelegateDelegate_Params));
	if (!uFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		return;
	}

	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate, sizeof(ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate), &RegisterHostStatGuidCompleteDelegate, sizeof(RegisterHostStatGuidCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!uFnAddRegisterHostStatGuidCompleteDelegate)
	{
		uFnAddRegisterHostStatGuidCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Params AddRegisterHostStatGuidCompleteDelegate_Params;
	memset(&AddRegisterHostStatGuidCompleteDelegate_Params, 0, sizeof(AddRegisterHostStatGuidCompleteDelegate_Params));
	if (!uFnAddRegisterHostStatGuidCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate, sizeof(AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate), &RegisterHostStatGuidCompleteDelegate, sizeof(RegisterHostStatGuidCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterHostStatGuidComplete = nullptr;

	if (!uFnOnRegisterHostStatGuidComplete)
	{
		uFnOnRegisterHostStatGuidComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete");
	}

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Params OnRegisterHostStatGuidComplete_Params;
	memset(&OnRegisterHostStatGuidComplete_Params, 0, sizeof(OnRegisterHostStatGuidComplete_Params));
	if (!uFnOnRegisterHostStatGuidComplete)
	{
		return;
	}

	OnRegisterHostStatGuidComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid(class FString& outHostStatGuid)
{
	static UFunction* uFnRegisterHostStatGuid = nullptr;

	if (!uFnRegisterHostStatGuid)
	{
		uFnRegisterHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid");
	}

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Params RegisterHostStatGuid_Params;
	memset(&RegisterHostStatGuid_Params, 0, sizeof(RegisterHostStatGuid_Params));
	if (!uFnRegisterHostStatGuid)
	{
		return {};
	}

	memcpy_s(&RegisterHostStatGuid_Params.HostStatGuid, sizeof(RegisterHostStatGuid_Params.HostStatGuid), &outHostStatGuid, sizeof(outHostStatGuid));

	auto native_RegisterHostStatGuid = uFnRegisterHostStatGuid->iNative;
	uFnRegisterHostStatGuid->iNative = 0;
	this->ProcessEvent(uFnRegisterHostStatGuid, &RegisterHostStatGuid_Params, nullptr);
	uFnRegisterHostStatGuid->iNative = native_RegisterHostStatGuid;

	memcpy_s(&outHostStatGuid, sizeof(outHostStatGuid), &RegisterHostStatGuid_Params.HostStatGuid, sizeof(RegisterHostStatGuid_Params.HostStatGuid));

	return RegisterHostStatGuid_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::GetHostStatGuid()
{
	static UFunction* uFnGetHostStatGuid = nullptr;

	if (!uFnGetHostStatGuid)
	{
		uFnGetHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid");
	}

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Params GetHostStatGuid_Params;
	memset(&GetHostStatGuid_Params, 0, sizeof(GetHostStatGuid_Params));
	if (!uFnGetHostStatGuid)
	{
		return {};
	}


	auto native_GetHostStatGuid = uFnGetHostStatGuid->iNative;
	uFnGetHostStatGuid->iNative = 0;
	this->ProcessEvent(uFnGetHostStatGuid, &GetHostStatGuid_Params, nullptr);
	uFnGetHostStatGuid->iNative = native_GetHostStatGuid;

	return GetHostStatGuid_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// int32_t                        LeaderboardId                  (CPF_Parm)
// class TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores(const class FName& SessionName, int32_t LeaderboardId, class TArray<struct FOnlinePlayerScore>& outPlayerScores)
{
	static UFunction* uFnWriteOnlinePlayerScores = nullptr;

	if (!uFnWriteOnlinePlayerScores)
	{
		uFnWriteOnlinePlayerScores = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores");
	}

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Params WriteOnlinePlayerScores_Params;
	memset(&WriteOnlinePlayerScores_Params, 0, sizeof(WriteOnlinePlayerScores_Params));
	if (!uFnWriteOnlinePlayerScores)
	{
		return {};
	}

	memcpy_s(&WriteOnlinePlayerScores_Params.SessionName, sizeof(WriteOnlinePlayerScores_Params.SessionName), &SessionName, sizeof(SessionName));
	WriteOnlinePlayerScores_Params.LeaderboardId = LeaderboardId;
	memcpy_s(&WriteOnlinePlayerScores_Params.PlayerScores, sizeof(WriteOnlinePlayerScores_Params.PlayerScores), &outPlayerScores, sizeof(outPlayerScores));

	auto native_WriteOnlinePlayerScores = uFnWriteOnlinePlayerScores->iNative;
	uFnWriteOnlinePlayerScores->iNative = 0;
	this->ProcessEvent(uFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Params, nullptr);
	uFnWriteOnlinePlayerScores->iNative = native_WriteOnlinePlayerScores;

	memcpy_s(&outPlayerScores, sizeof(outPlayerScores), &WriteOnlinePlayerScores_Params.PlayerScores, sizeof(WriteOnlinePlayerScores_Params.PlayerScores));

	return WriteOnlinePlayerScores_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  LeaderboardName                (CPF_Parm | CPF_NeedCtorLink)
// ELeaderboardSortType           SortType                       (CPF_Parm)
// ELeaderboardFormat             DisplayFormat                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::CreateLeaderboard(const class FString& LeaderboardName, ELeaderboardSortType SortType, ELeaderboardFormat DisplayFormat)
{
	static UFunction* uFnCreateLeaderboard = nullptr;

	if (!uFnCreateLeaderboard)
	{
		uFnCreateLeaderboard = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard");
	}

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Params CreateLeaderboard_Params;
	memset(&CreateLeaderboard_Params, 0, sizeof(CreateLeaderboard_Params));
	if (!uFnCreateLeaderboard)
	{
		return {};
	}

	memcpy_s(&CreateLeaderboard_Params.LeaderboardName, sizeof(CreateLeaderboard_Params.LeaderboardName), &LeaderboardName, sizeof(LeaderboardName));
	CreateLeaderboard_Params.SortType = static_cast<uint8_t>(SortType);
	CreateLeaderboard_Params.DisplayFormat = static_cast<uint8_t>(DisplayFormat);

	auto native_CreateLeaderboard = uFnCreateLeaderboard->iNative;
	uFnCreateLeaderboard->iNative = 0;
	this->ProcessEvent(uFnCreateLeaderboard, &CreateLeaderboard_Params, nullptr);
	uFnCreateLeaderboard->iNative = native_CreateLeaderboard;

	return CreateLeaderboard_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bResetAchievements             (CPF_Parm)

bool UOnlineSubsystemSteamworks::ResetStats(bool bResetAchievements)
{
	static UFunction* uFnResetStats = nullptr;

	if (!uFnResetStats)
	{
		uFnResetStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats");
	}

	UOnlineSubsystemSteamworks_execResetStats_Params ResetStats_Params;
	memset(&ResetStats_Params, 0, sizeof(ResetStats_Params));
	if (!uFnResetStats)
	{
		return {};
	}

	ResetStats_Params.bResetAchievements = bResetAchievements;

	auto native_ResetStats = uFnResetStats->iNative;
	uFnResetStats->iNative = 0;
	this->ProcessEvent(uFnResetStats, &ResetStats_Params, nullptr);
	uFnResetStats->iNative = native_ResetStats;

	return ResetStats_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearFlushOnlineStatsCompleteDelegate)
	{
		uFnClearFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Params ClearFlushOnlineStatsCompleteDelegate_Params;
	memset(&ClearFlushOnlineStatsCompleteDelegate_Params, 0, sizeof(ClearFlushOnlineStatsCompleteDelegate_Params));
	if (!uFnClearFlushOnlineStatsCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, sizeof(ClearFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate), &FlushOnlineStatsCompleteDelegate, sizeof(FlushOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddFlushOnlineStatsCompleteDelegate)
	{
		uFnAddFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Params AddFlushOnlineStatsCompleteDelegate_Params;
	memset(&AddFlushOnlineStatsCompleteDelegate_Params, 0, sizeof(AddFlushOnlineStatsCompleteDelegate_Params));
	if (!uFnAddFlushOnlineStatsCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, sizeof(AddFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate), &FlushOnlineStatsCompleteDelegate, sizeof(FlushOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnFlushOnlineStatsComplete = nullptr;

	if (!uFnOnFlushOnlineStatsComplete)
	{
		uFnOnFlushOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete");
	}

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Params OnFlushOnlineStatsComplete_Params;
	memset(&OnFlushOnlineStatsComplete_Params, 0, sizeof(OnFlushOnlineStatsComplete_Params));
	if (!uFnOnFlushOnlineStatsComplete)
	{
		return;
	}

	memcpy_s(&OnFlushOnlineStatsComplete_Params.SessionName, sizeof(OnFlushOnlineStatsComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnFlushOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::FlushOnlineStats(const class FName& SessionName)
{
	static UFunction* uFnFlushOnlineStats = nullptr;

	if (!uFnFlushOnlineStats)
	{
		uFnFlushOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats");
	}

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Params FlushOnlineStats_Params;
	memset(&FlushOnlineStats_Params, 0, sizeof(FlushOnlineStats_Params));
	if (!uFnFlushOnlineStats)
	{
		return {};
	}

	memcpy_s(&FlushOnlineStats_Params.SessionName, sizeof(FlushOnlineStats_Params.SessionName), &SessionName, sizeof(SessionName));

	auto native_FlushOnlineStats = uFnFlushOnlineStats->iNative;
	uFnFlushOnlineStats->iNative = 0;
	this->ProcessEvent(uFnFlushOnlineStats, &FlushOnlineStats_Params, nullptr);
	uFnFlushOnlineStats->iNative = native_FlushOnlineStats;

	return FlushOnlineStats_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            Player                         (CPF_Parm)
// class UOnlineStatsWrite*       StatsWrite                     (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteOnlineStats(const class FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static UFunction* uFnWriteOnlineStats = nullptr;

	if (!uFnWriteOnlineStats)
	{
		uFnWriteOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats");
	}

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Params WriteOnlineStats_Params;
	memset(&WriteOnlineStats_Params, 0, sizeof(WriteOnlineStats_Params));
	if (!uFnWriteOnlineStats)
	{
		return {};
	}

	memcpy_s(&WriteOnlineStats_Params.SessionName, sizeof(WriteOnlineStats_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&WriteOnlineStats_Params.Player, sizeof(WriteOnlineStats_Params.Player), &Player, sizeof(Player));
	WriteOnlineStats_Params.StatsWrite = StatsWrite;

	auto native_WriteOnlineStats = uFnWriteOnlineStats->iNative;
	uFnWriteOnlineStats->iNative = 0;
	this->ProcessEvent(uFnWriteOnlineStats, &WriteOnlineStats_Params, nullptr);
	uFnWriteOnlineStats->iNative = native_WriteOnlineStats;

	return WriteOnlineStats_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineSubsystemSteamworks::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnFreeStats = nullptr;

	if (!uFnFreeStats)
	{
		uFnFreeStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats");
	}

	UOnlineSubsystemSteamworks_execFreeStats_Params FreeStats_Params;
	memset(&FreeStats_Params, 0, sizeof(FreeStats_Params));
	if (!uFnFreeStats)
	{
		return;
	}

	FreeStats_Params.StatsRead = StatsRead;

	auto native_FreeStats = uFnFreeStats->iNative;
	uFnFreeStats->iNative = 0;
	this->ProcessEvent(uFnFreeStats, &FreeStats_Params, nullptr);
	uFnFreeStats->iNative = native_FreeStats;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearReadOnlineStatsCompleteDelegate)
	{
		uFnClearReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Params ClearReadOnlineStatsCompleteDelegate_Params;
	memset(&ClearReadOnlineStatsCompleteDelegate_Params, 0, sizeof(ClearReadOnlineStatsCompleteDelegate_Params));
	if (!uFnClearReadOnlineStatsCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, sizeof(ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate), &ReadOnlineStatsCompleteDelegate, sizeof(ReadOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddReadOnlineStatsCompleteDelegate)
	{
		uFnAddReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Params AddReadOnlineStatsCompleteDelegate_Params;
	memset(&AddReadOnlineStatsCompleteDelegate_Params, 0, sizeof(AddReadOnlineStatsCompleteDelegate_Params));
	if (!uFnAddReadOnlineStatsCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, sizeof(AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate), &ReadOnlineStatsCompleteDelegate, sizeof(ReadOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadOnlineStatsComplete = nullptr;

	if (!uFnOnReadOnlineStatsComplete)
	{
		uFnOnReadOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Params OnReadOnlineStatsComplete_Params;
	memset(&OnReadOnlineStatsComplete_Params, 0, sizeof(OnReadOnlineStatsComplete_Params));
	if (!uFnOnReadOnlineStatsComplete)
	{
		return;
	}

	OnReadOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t optionalNumRows)
{
	static UFunction* uFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!uFnReadOnlineStatsByRankAroundPlayer)
	{
		uFnReadOnlineStatsByRankAroundPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Params ReadOnlineStatsByRankAroundPlayer_Params;
	memset(&ReadOnlineStatsByRankAroundPlayer_Params, 0, sizeof(ReadOnlineStatsByRankAroundPlayer_Params));
	if (!uFnReadOnlineStatsByRankAroundPlayer)
	{
		return {};
	}

	ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadOnlineStatsByRankAroundPlayer_Params.StatsRead = StatsRead;
	ReadOnlineStatsByRankAroundPlayer_Params.NumRows = optionalNumRows;

	auto native_ReadOnlineStatsByRankAroundPlayer = uFnReadOnlineStatsByRankAroundPlayer->iNative;
	uFnReadOnlineStatsByRankAroundPlayer->iNative = 0;
	this->ProcessEvent(uFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Params, nullptr);
	uFnReadOnlineStatsByRankAroundPlayer->iNative = native_ReadOnlineStatsByRankAroundPlayer;

	return ReadOnlineStatsByRankAroundPlayer_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int32_t optionalStartIndex, int32_t optionalNumToRead)
{
	static UFunction* uFnReadOnlineStatsByRank = nullptr;

	if (!uFnReadOnlineStatsByRank)
	{
		uFnReadOnlineStatsByRank = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Params ReadOnlineStatsByRank_Params;
	memset(&ReadOnlineStatsByRank_Params, 0, sizeof(ReadOnlineStatsByRank_Params));
	if (!uFnReadOnlineStatsByRank)
	{
		return {};
	}

	ReadOnlineStatsByRank_Params.StatsRead = StatsRead;
	ReadOnlineStatsByRank_Params.StartIndex = optionalStartIndex;
	ReadOnlineStatsByRank_Params.NumToRead = optionalNumToRead;

	auto native_ReadOnlineStatsByRank = uFnReadOnlineStatsByRank->iNative;
	uFnReadOnlineStatsByRank->iNative = 0;
	this->ProcessEvent(uFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Params, nullptr);
	uFnReadOnlineStatsByRank->iNative = native_ReadOnlineStatsByRank;

	return ReadOnlineStatsByRank_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnReadOnlineStatsForFriends = nullptr;

	if (!uFnReadOnlineStatsForFriends)
	{
		uFnReadOnlineStatsForFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Params ReadOnlineStatsForFriends_Params;
	memset(&ReadOnlineStatsForFriends_Params, 0, sizeof(ReadOnlineStatsForFriends_Params));
	if (!uFnReadOnlineStatsForFriends)
	{
		return {};
	}

	ReadOnlineStatsForFriends_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadOnlineStatsForFriends_Params.StatsRead = StatsRead;

	auto native_ReadOnlineStatsForFriends = uFnReadOnlineStatsForFriends->iNative;
	uFnReadOnlineStatsForFriends->iNative = 0;
	this->ProcessEvent(uFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Params, nullptr);
	uFnReadOnlineStatsForFriends->iNative = native_ReadOnlineStatsForFriends;

	return ReadOnlineStatsForFriends_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadOnlineStats(class UOnlineStatsRead* StatsRead, class TArray<struct FUniqueNetId>& outPlayers)
{
	static UFunction* uFnReadOnlineStats = nullptr;

	if (!uFnReadOnlineStats)
	{
		uFnReadOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStats_Params ReadOnlineStats_Params;
	memset(&ReadOnlineStats_Params, 0, sizeof(ReadOnlineStats_Params));
	if (!uFnReadOnlineStats)
	{
		return {};
	}

	ReadOnlineStats_Params.StatsRead = StatsRead;
	memcpy_s(&ReadOnlineStats_Params.Players, sizeof(ReadOnlineStats_Params.Players), &outPlayers, sizeof(outPlayers));

	auto native_ReadOnlineStats = uFnReadOnlineStats->iNative;
	uFnReadOnlineStats->iNative = 0;
	this->ProcessEvent(uFnReadOnlineStats, &ReadOnlineStats_Params, nullptr);
	uFnReadOnlineStats->iNative = native_ReadOnlineStats;

	memcpy_s(&outPlayers, sizeof(outPlayers), &ReadOnlineStats_Params.Players, sizeof(ReadOnlineStats_Params.Players));

	return ReadOnlineStats_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DebugWriteLBForUser
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  User                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        BoardID                        (CPF_Parm)
// int32_t                        RankValue                      (CPF_Parm)
// class TArray<int32_t>          StatsArray                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::DebugWriteLBForUser(const class FString& User, int32_t BoardID, int32_t RankValue, const class TArray<int32_t>& StatsArray)
{
	static UFunction* uFnDebugWriteLBForUser = nullptr;

	if (!uFnDebugWriteLBForUser)
	{
		uFnDebugWriteLBForUser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DebugWriteLBForUser");
	}

	UOnlineSubsystemSteamworks_execDebugWriteLBForUser_Params DebugWriteLBForUser_Params;
	memset(&DebugWriteLBForUser_Params, 0, sizeof(DebugWriteLBForUser_Params));
	if (!uFnDebugWriteLBForUser)
	{
		return;
	}

	memcpy_s(&DebugWriteLBForUser_Params.User, sizeof(DebugWriteLBForUser_Params.User), &User, sizeof(User));
	DebugWriteLBForUser_Params.BoardID = BoardID;
	DebugWriteLBForUser_Params.RankValue = RankValue;
	memcpy_s(&DebugWriteLBForUser_Params.StatsArray, sizeof(DebugWriteLBForUser_Params.StatsArray), &StatsArray, sizeof(StatsArray));

	this->ProcessEvent(uFnDebugWriteLBForUser, &DebugWriteLBForUser_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DropOnlineStatsRead
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::DropOnlineStatsRead()
{
	static UFunction* uFnDropOnlineStatsRead = nullptr;

	if (!uFnDropOnlineStatsRead)
	{
		uFnDropOnlineStatsRead = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DropOnlineStatsRead");
	}

	UOnlineSubsystemSteamworks_execDropOnlineStatsRead_Params DropOnlineStatsRead_Params;
	memset(&DropOnlineStatsRead_Params, 0, sizeof(DropOnlineStatsRead_Params));
	if (!uFnDropOnlineStatsRead)
	{
		return;
	}


	auto native_DropOnlineStatsRead = uFnDropOnlineStatsRead->iNative;
	uFnDropOnlineStatsRead->iNative = 0;
	this->ProcessEvent(uFnDropOnlineStatsRead, &DropOnlineStatsRead_Params, nullptr);
	uFnDropOnlineStatsRead->iNative = native_DropOnlineStatsRead;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetOnlineStatsForAllUsers
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        BoardID                        (CPF_Parm)

bool UOnlineSubsystemSteamworks::ResetOnlineStatsForAllUsers(int32_t BoardID)
{
	static UFunction* uFnResetOnlineStatsForAllUsers = nullptr;

	if (!uFnResetOnlineStatsForAllUsers)
	{
		uFnResetOnlineStatsForAllUsers = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetOnlineStatsForAllUsers");
	}

	UOnlineSubsystemSteamworks_execResetOnlineStatsForAllUsers_Params ResetOnlineStatsForAllUsers_Params;
	memset(&ResetOnlineStatsForAllUsers_Params, 0, sizeof(ResetOnlineStatsForAllUsers_Params));
	if (!uFnResetOnlineStatsForAllUsers)
	{
		return {};
	}

	ResetOnlineStatsForAllUsers_Params.BoardID = BoardID;

	this->ProcessEvent(uFnResetOnlineStatsForAllUsers, &ResetOnlineStatsForAllUsers_Params, nullptr);

	return ResetOnlineStatsForAllUsers_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetOnlineStatsForUser
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        BoardID                        (CPF_Parm)

bool UOnlineSubsystemSteamworks::ResetOnlineStatsForUser(uint8_t LocalUserNum, int32_t BoardID)
{
	static UFunction* uFnResetOnlineStatsForUser = nullptr;

	if (!uFnResetOnlineStatsForUser)
	{
		uFnResetOnlineStatsForUser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetOnlineStatsForUser");
	}

	UOnlineSubsystemSteamworks_execResetOnlineStatsForUser_Params ResetOnlineStatsForUser_Params;
	memset(&ResetOnlineStatsForUser_Params, 0, sizeof(ResetOnlineStatsForUser_Params));
	if (!uFnResetOnlineStatsForUser)
	{
		return {};
	}

	ResetOnlineStatsForUser_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ResetOnlineStatsForUser_Params.BoardID = BoardID;

	this->ProcessEvent(uFnResetOnlineStatsForUser, &ResetOnlineStatsForUser_Params, nullptr);

	return ResetOnlineStatsForUser_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class TArray<class FString>    Accounts                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetLocalAccountNames(class TArray<class FString>& outAccounts)
{
	static UFunction* uFnGetLocalAccountNames = nullptr;

	if (!uFnGetLocalAccountNames)
	{
		uFnGetLocalAccountNames = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames");
	}

	UOnlineSubsystemSteamworks_execGetLocalAccountNames_Params GetLocalAccountNames_Params;
	memset(&GetLocalAccountNames_Params, 0, sizeof(GetLocalAccountNames_Params));
	if (!uFnGetLocalAccountNames)
	{
		return {};
	}

	memcpy_s(&GetLocalAccountNames_Params.Accounts, sizeof(GetLocalAccountNames_Params.Accounts), &outAccounts, sizeof(outAccounts));

	this->ProcessEvent(uFnGetLocalAccountNames, &GetLocalAccountNames_Params, nullptr);

	memcpy_s(&outAccounts, sizeof(outAccounts), &GetLocalAccountNames_Params.Accounts, sizeof(GetLocalAccountNames_Params.Accounts));

	return GetLocalAccountNames_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// [0x00024000] (FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserName                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::DeleteLocalAccount(const class FString& UserName, const class FString& optionalPassword)
{
	static UFunction* uFnDeleteLocalAccount = nullptr;

	if (!uFnDeleteLocalAccount)
	{
		uFnDeleteLocalAccount = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount");
	}

	UOnlineSubsystemSteamworks_execDeleteLocalAccount_Params DeleteLocalAccount_Params;
	memset(&DeleteLocalAccount_Params, 0, sizeof(DeleteLocalAccount_Params));
	if (!uFnDeleteLocalAccount)
	{
		return {};
	}

	memcpy_s(&DeleteLocalAccount_Params.UserName, sizeof(DeleteLocalAccount_Params.UserName), &UserName, sizeof(UserName));
	memcpy_s(&DeleteLocalAccount_Params.Password, sizeof(DeleteLocalAccount_Params.Password), &optionalPassword, sizeof(optionalPassword));

	this->ProcessEvent(uFnDeleteLocalAccount, &DeleteLocalAccount_Params, nullptr);

	return DeleteLocalAccount_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// [0x00024000] (FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  NewUserName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  OldUserName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RenameLocalAccount(const class FString& NewUserName, const class FString& OldUserName, const class FString& optionalPassword)
{
	static UFunction* uFnRenameLocalAccount = nullptr;

	if (!uFnRenameLocalAccount)
	{
		uFnRenameLocalAccount = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount");
	}

	UOnlineSubsystemSteamworks_execRenameLocalAccount_Params RenameLocalAccount_Params;
	memset(&RenameLocalAccount_Params, 0, sizeof(RenameLocalAccount_Params));
	if (!uFnRenameLocalAccount)
	{
		return {};
	}

	memcpy_s(&RenameLocalAccount_Params.NewUserName, sizeof(RenameLocalAccount_Params.NewUserName), &NewUserName, sizeof(NewUserName));
	memcpy_s(&RenameLocalAccount_Params.OldUserName, sizeof(RenameLocalAccount_Params.OldUserName), &OldUserName, sizeof(OldUserName));
	memcpy_s(&RenameLocalAccount_Params.Password, sizeof(RenameLocalAccount_Params.Password), &optionalPassword, sizeof(optionalPassword));

	this->ProcessEvent(uFnRenameLocalAccount, &RenameLocalAccount_Params, nullptr);

	return RenameLocalAccount_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// [0x00024000] (FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserName                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::CreateLocalAccount(const class FString& UserName, const class FString& optionalPassword)
{
	static UFunction* uFnCreateLocalAccount = nullptr;

	if (!uFnCreateLocalAccount)
	{
		uFnCreateLocalAccount = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount");
	}

	UOnlineSubsystemSteamworks_execCreateLocalAccount_Params CreateLocalAccount_Params;
	memset(&CreateLocalAccount_Params, 0, sizeof(CreateLocalAccount_Params));
	if (!uFnCreateLocalAccount)
	{
		return {};
	}

	memcpy_s(&CreateLocalAccount_Params.UserName, sizeof(CreateLocalAccount_Params.UserName), &UserName, sizeof(UserName));
	memcpy_s(&CreateLocalAccount_Params.Password, sizeof(CreateLocalAccount_Params.Password), &optionalPassword, sizeof(optionalPassword));

	this->ProcessEvent(uFnCreateLocalAccount, &CreateLocalAccount_Params, nullptr);

	return CreateLocalAccount_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static UFunction* uFnClearCreateOnlineAccountCompletedDelegate = nullptr;

	if (!uFnClearCreateOnlineAccountCompletedDelegate)
	{
		uFnClearCreateOnlineAccountCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Params ClearCreateOnlineAccountCompletedDelegate_Params;
	memset(&ClearCreateOnlineAccountCompletedDelegate_Params, 0, sizeof(ClearCreateOnlineAccountCompletedDelegate_Params));
	if (!uFnClearCreateOnlineAccountCompletedDelegate)
	{
		return;
	}

	memcpy_s(&ClearCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate, sizeof(ClearCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate), &AccountCreateDelegate, sizeof(AccountCreateDelegate));

	this->ProcessEvent(uFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static UFunction* uFnAddCreateOnlineAccountCompletedDelegate = nullptr;

	if (!uFnAddCreateOnlineAccountCompletedDelegate)
	{
		uFnAddCreateOnlineAccountCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Params AddCreateOnlineAccountCompletedDelegate_Params;
	memset(&AddCreateOnlineAccountCompletedDelegate_Params, 0, sizeof(AddCreateOnlineAccountCompletedDelegate_Params));
	if (!uFnAddCreateOnlineAccountCompletedDelegate)
	{
		return;
	}

	memcpy_s(&AddCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate, sizeof(AddCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate), &AccountCreateDelegate, sizeof(AccountCreateDelegate));

	this->ProcessEvent(uFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EOnlineAccountCreateStatus     ErrorStatus                    (CPF_Parm)

void UOnlineSubsystemSteamworks::OnCreateOnlineAccountCompleted(EOnlineAccountCreateStatus ErrorStatus)
{
	static UFunction* uFnOnCreateOnlineAccountCompleted = nullptr;

	if (!uFnOnCreateOnlineAccountCompleted)
	{
		uFnOnCreateOnlineAccountCompleted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted");
	}

	UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Params OnCreateOnlineAccountCompleted_Params;
	memset(&OnCreateOnlineAccountCompleted_Params, 0, sizeof(OnCreateOnlineAccountCompleted_Params));
	if (!uFnOnCreateOnlineAccountCompleted)
	{
		return;
	}

	OnCreateOnlineAccountCompleted_Params.ErrorStatus = static_cast<uint8_t>(ErrorStatus);

	this->ProcessEvent(uFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserName                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EmailAddress                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ProductKey                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::CreateOnlineAccount(const class FString& UserName, const class FString& Password, const class FString& EmailAddress, const class FString& optionalProductKey)
{
	static UFunction* uFnCreateOnlineAccount = nullptr;

	if (!uFnCreateOnlineAccount)
	{
		uFnCreateOnlineAccount = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount");
	}

	UOnlineSubsystemSteamworks_execCreateOnlineAccount_Params CreateOnlineAccount_Params;
	memset(&CreateOnlineAccount_Params, 0, sizeof(CreateOnlineAccount_Params));
	if (!uFnCreateOnlineAccount)
	{
		return {};
	}

	memcpy_s(&CreateOnlineAccount_Params.UserName, sizeof(CreateOnlineAccount_Params.UserName), &UserName, sizeof(UserName));
	memcpy_s(&CreateOnlineAccount_Params.Password, sizeof(CreateOnlineAccount_Params.Password), &Password, sizeof(Password));
	memcpy_s(&CreateOnlineAccount_Params.EmailAddress, sizeof(CreateOnlineAccount_Params.EmailAddress), &EmailAddress, sizeof(EmailAddress));
	memcpy_s(&CreateOnlineAccount_Params.ProductKey, sizeof(CreateOnlineAccount_Params.ProductKey), &optionalProductKey, sizeof(optionalProductKey));

	auto native_CreateOnlineAccount = uFnCreateOnlineAccount->iNative;
	uFnCreateOnlineAccount->iNative = 0;
	this->ProcessEvent(uFnCreateOnlineAccount, &CreateOnlineAccount_Params, nullptr);
	uFnCreateOnlineAccount->iNative = native_CreateOnlineAccount;

	return CreateOnlineAccount_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsExternalRemoteDevice
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsExternalRemoteDevice()
{
	static UFunction* uFnIsExternalRemoteDevice = nullptr;

	if (!uFnIsExternalRemoteDevice)
	{
		uFnIsExternalRemoteDevice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsExternalRemoteDevice");
	}

	UOnlineSubsystemSteamworks_execIsExternalRemoteDevice_Params IsExternalRemoteDevice_Params;
	memset(&IsExternalRemoteDevice_Params, 0, sizeof(IsExternalRemoteDevice_Params));
	if (!uFnIsExternalRemoteDevice)
	{
		return {};
	}


	auto native_IsExternalRemoteDevice = uFnIsExternalRemoteDevice->iNative;
	uFnIsExternalRemoteDevice->iNative = 0;
	this->ProcessEvent(uFnIsExternalRemoteDevice, &IsExternalRemoteDevice_Params, nullptr);
	uFnIsExternalRemoteDevice->iNative = native_IsExternalRemoteDevice;

	return IsExternalRemoteDevice_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenWebBrowser
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  sURL                           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OpenWebBrowser(const class FString& sURL)
{
	static UFunction* uFnOpenWebBrowser = nullptr;

	if (!uFnOpenWebBrowser)
	{
		uFnOpenWebBrowser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenWebBrowser");
	}

	UOnlineSubsystemSteamworks_execOpenWebBrowser_Params OpenWebBrowser_Params;
	memset(&OpenWebBrowser_Params, 0, sizeof(OpenWebBrowser_Params));
	if (!uFnOpenWebBrowser)
	{
		return;
	}

	memcpy_s(&OpenWebBrowser_Params.sURL, sizeof(OpenWebBrowser_Params.sURL), &sURL, sizeof(sURL));

	auto native_OpenWebBrowser = uFnOpenWebBrowser->iNative;
	uFnOpenWebBrowser->iNative = 0;
	this->ProcessEvent(uFnOpenWebBrowser, &OpenWebBrowser_Params, nullptr);
	uFnOpenWebBrowser->iNative = native_OpenWebBrowser;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNpAvailabilityForUser
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

int32_t UOnlineSubsystemSteamworks::GetNpAvailabilityForUser(uint8_t LocalUserNum)
{
	static UFunction* uFnGetNpAvailabilityForUser = nullptr;

	if (!uFnGetNpAvailabilityForUser)
	{
		uFnGetNpAvailabilityForUser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNpAvailabilityForUser");
	}

	UOnlineSubsystemSteamworks_execGetNpAvailabilityForUser_Params GetNpAvailabilityForUser_Params;
	memset(&GetNpAvailabilityForUser_Params, 0, sizeof(GetNpAvailabilityForUser_Params));
	if (!uFnGetNpAvailabilityForUser)
	{
		return {};
	}

	GetNpAvailabilityForUser_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnGetNpAvailabilityForUser, &GetNpAvailabilityForUser_Params, nullptr);

	return GetNpAvailabilityForUser_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckNpAvailabilityForUser
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::CheckNpAvailabilityForUser(uint8_t LocalUserNum)
{
	static UFunction* uFnCheckNpAvailabilityForUser = nullptr;

	if (!uFnCheckNpAvailabilityForUser)
	{
		uFnCheckNpAvailabilityForUser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckNpAvailabilityForUser");
	}

	UOnlineSubsystemSteamworks_execCheckNpAvailabilityForUser_Params CheckNpAvailabilityForUser_Params;
	memset(&CheckNpAvailabilityForUser_Params, 0, sizeof(CheckNpAvailabilityForUser_Params));
	if (!uFnCheckNpAvailabilityForUser)
	{
		return;
	}

	CheckNpAvailabilityForUser_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnCheckNpAvailabilityForUser, &CheckNpAvailabilityForUser_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StreamingInstall_Poll
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Percent                        (CPF_Parm | CPF_OutParm)
// int32_t                        Time                           (CPF_Parm | CPF_OutParm)

int32_t UOnlineSubsystemSteamworks::StreamingInstall_Poll(int32_t& outPercent, int32_t& outTime)
{
	static UFunction* uFnStreamingInstall_Poll = nullptr;

	if (!uFnStreamingInstall_Poll)
	{
		uFnStreamingInstall_Poll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StreamingInstall_Poll");
	}

	UOnlineSubsystemSteamworks_execStreamingInstall_Poll_Params StreamingInstall_Poll_Params;
	memset(&StreamingInstall_Poll_Params, 0, sizeof(StreamingInstall_Poll_Params));
	if (!uFnStreamingInstall_Poll)
	{
		return {};
	}

	StreamingInstall_Poll_Params.Percent = outPercent;
	StreamingInstall_Poll_Params.Time = outTime;

	auto native_StreamingInstall_Poll = uFnStreamingInstall_Poll->iNative;
	uFnStreamingInstall_Poll->iNative = 0;
	this->ProcessEvent(uFnStreamingInstall_Poll, &StreamingInstall_Poll_Params, nullptr);
	uFnStreamingInstall_Poll->iNative = native_StreamingInstall_Poll;

	outPercent = StreamingInstall_Poll_Params.Percent;
	outTime = StreamingInstall_Poll_Params.Time;

	return StreamingInstall_Poll_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StreamingInstall_CheckChunk
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Chunk                          (CPF_Parm)

bool UOnlineSubsystemSteamworks::StreamingInstall_CheckChunk(int32_t Chunk)
{
	static UFunction* uFnStreamingInstall_CheckChunk = nullptr;

	if (!uFnStreamingInstall_CheckChunk)
	{
		uFnStreamingInstall_CheckChunk = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StreamingInstall_CheckChunk");
	}

	UOnlineSubsystemSteamworks_execStreamingInstall_CheckChunk_Params StreamingInstall_CheckChunk_Params;
	memset(&StreamingInstall_CheckChunk_Params, 0, sizeof(StreamingInstall_CheckChunk_Params));
	if (!uFnStreamingInstall_CheckChunk)
	{
		return {};
	}

	StreamingInstall_CheckChunk_Params.Chunk = Chunk;

	auto native_StreamingInstall_CheckChunk = uFnStreamingInstall_CheckChunk->iNative;
	uFnStreamingInstall_CheckChunk->iNative = 0;
	this->ProcessEvent(uFnStreamingInstall_CheckChunk, &StreamingInstall_CheckChunk_Params, nullptr);
	uFnStreamingInstall_CheckChunk->iNative = native_StreamingInstall_CheckChunk;

	return StreamingInstall_CheckChunk_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StreamingInstall_IsFinished
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::StreamingInstall_IsFinished()
{
	static UFunction* uFnStreamingInstall_IsFinished = nullptr;

	if (!uFnStreamingInstall_IsFinished)
	{
		uFnStreamingInstall_IsFinished = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StreamingInstall_IsFinished");
	}

	UOnlineSubsystemSteamworks_execStreamingInstall_IsFinished_Params StreamingInstall_IsFinished_Params;
	memset(&StreamingInstall_IsFinished_Params, 0, sizeof(StreamingInstall_IsFinished_Params));
	if (!uFnStreamingInstall_IsFinished)
	{
		return {};
	}


	auto native_StreamingInstall_IsFinished = uFnStreamingInstall_IsFinished->iNative;
	uFnStreamingInstall_IsFinished->iNative = 0;
	this->ProcessEvent(uFnStreamingInstall_IsFinished, &StreamingInstall_IsFinished_Params, nullptr);
	uFnStreamingInstall_IsFinished->iNative = native_StreamingInstall_IsFinished;

	return StreamingInstall_IsFinished_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetDurangoKinectState
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bEnabled                       (CPF_Parm)

void UOnlineSubsystemSteamworks::SetDurangoKinectState(bool bEnabled)
{
	static UFunction* uFnSetDurangoKinectState = nullptr;

	if (!uFnSetDurangoKinectState)
	{
		uFnSetDurangoKinectState = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetDurangoKinectState");
	}

	UOnlineSubsystemSteamworks_execSetDurangoKinectState_Params SetDurangoKinectState_Params;
	memset(&SetDurangoKinectState_Params, 0, sizeof(SetDurangoKinectState_Params));
	if (!uFnSetDurangoKinectState)
	{
		return;
	}

	SetDurangoKinectState_Params.bEnabled = bEnabled;

	this->ProcessEvent(uFnSetDurangoKinectState, &SetDurangoKinectState_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetGTCStates
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bPlayEnabled                   (CPF_Parm)
// uint32_t                       bPauseEnabled                  (CPF_Parm)
// uint32_t                       bMenuEnabled                   (CPF_Parm)
// uint32_t                       bViewEnabled                   (CPF_Parm)
// uint32_t                       bBackEnabled                   (CPF_Parm)

void UOnlineSubsystemSteamworks::SetGTCStates(bool bPlayEnabled, bool bPauseEnabled, bool bMenuEnabled, bool bViewEnabled, bool bBackEnabled)
{
	static UFunction* uFnSetGTCStates = nullptr;

	if (!uFnSetGTCStates)
	{
		uFnSetGTCStates = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetGTCStates");
	}

	UOnlineSubsystemSteamworks_execSetGTCStates_Params SetGTCStates_Params;
	memset(&SetGTCStates_Params, 0, sizeof(SetGTCStates_Params));
	if (!uFnSetGTCStates)
	{
		return;
	}

	SetGTCStates_Params.bPlayEnabled = bPlayEnabled;
	SetGTCStates_Params.bPauseEnabled = bPauseEnabled;
	SetGTCStates_Params.bMenuEnabled = bMenuEnabled;
	SetGTCStates_Params.bViewEnabled = bViewEnabled;
	SetGTCStates_Params.bBackEnabled = bBackEnabled;

	this->ProcessEvent(uFnSetGTCStates, &SetGTCStates_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetGTCState
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EGTCCommand                    Id                             (CPF_Parm)
// uint32_t                       bState                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetGTCState(EGTCCommand Id, bool bState)
{
	static UFunction* uFnSetGTCState = nullptr;

	if (!uFnSetGTCState)
	{
		uFnSetGTCState = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetGTCState");
	}

	UOnlineSubsystemSteamworks_execSetGTCState_Params SetGTCState_Params;
	memset(&SetGTCState_Params, 0, sizeof(SetGTCState_Params));
	if (!uFnSetGTCState)
	{
		return;
	}

	SetGTCState_Params.Id = static_cast<uint8_t>(Id);
	SetGTCState_Params.bState = bState;

	this->ProcessEvent(uFnSetGTCState, &SetGTCState_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGTCCommandDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GTCCommandDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGTCCommandDelegate(const struct FScriptDelegate& GTCCommandDelegate)
{
	static UFunction* uFnClearGTCCommandDelegate = nullptr;

	if (!uFnClearGTCCommandDelegate)
	{
		uFnClearGTCCommandDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGTCCommandDelegate");
	}

	UOnlineSubsystemSteamworks_execClearGTCCommandDelegate_Params ClearGTCCommandDelegate_Params;
	memset(&ClearGTCCommandDelegate_Params, 0, sizeof(ClearGTCCommandDelegate_Params));
	if (!uFnClearGTCCommandDelegate)
	{
		return;
	}

	memcpy_s(&ClearGTCCommandDelegate_Params.GTCCommandDelegate, sizeof(ClearGTCCommandDelegate_Params.GTCCommandDelegate), &GTCCommandDelegate, sizeof(GTCCommandDelegate));

	this->ProcessEvent(uFnClearGTCCommandDelegate, &ClearGTCCommandDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGTCCommandDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GTCCommandDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGTCCommandDelegate(const struct FScriptDelegate& GTCCommandDelegate)
{
	static UFunction* uFnAddGTCCommandDelegate = nullptr;

	if (!uFnAddGTCCommandDelegate)
	{
		uFnAddGTCCommandDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGTCCommandDelegate");
	}

	UOnlineSubsystemSteamworks_execAddGTCCommandDelegate_Params AddGTCCommandDelegate_Params;
	memset(&AddGTCCommandDelegate_Params, 0, sizeof(AddGTCCommandDelegate_Params));
	if (!uFnAddGTCCommandDelegate)
	{
		return;
	}

	memcpy_s(&AddGTCCommandDelegate_Params.GTCCommandDelegate, sizeof(AddGTCCommandDelegate_Params.GTCCommandDelegate), &GTCCommandDelegate, sizeof(GTCCommandDelegate));

	this->ProcessEvent(uFnAddGTCCommandDelegate, &AddGTCCommandDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGTCCommand
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EGTCCommand                    NewCommand                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnGTCCommand(EGTCCommand NewCommand)
{
	static UFunction* uFnOnGTCCommand = nullptr;

	if (!uFnOnGTCCommand)
	{
		uFnOnGTCCommand = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGTCCommand");
	}

	UOnlineSubsystemSteamworks_execOnGTCCommand_Params OnGTCCommand_Params;
	memset(&OnGTCCommand_Params, 0, sizeof(OnGTCCommand_Params));
	if (!uFnOnGTCCommand)
	{
		return;
	}

	OnGTCCommand_Params.NewCommand = static_cast<uint8_t>(NewCommand);

	this->ProcessEvent(uFnOnGTCCommand, &OnGTCCommand_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NavigateBack
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::NavigateBack()
{
	static UFunction* uFnNavigateBack = nullptr;

	if (!uFnNavigateBack)
	{
		uFnNavigateBack = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NavigateBack");
	}

	UOnlineSubsystemSteamworks_execNavigateBack_Params NavigateBack_Params;
	memset(&NavigateBack_Params, 0, sizeof(NavigateBack_Params));
	if (!uFnNavigateBack)
	{
		return;
	}


	this->ProcessEvent(uFnNavigateBack, &NavigateBack_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenHelpManual
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OpenHelpManual(uint8_t LocalUserNum)
{
	static UFunction* uFnOpenHelpManual = nullptr;

	if (!uFnOpenHelpManual)
	{
		uFnOpenHelpManual = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenHelpManual");
	}

	UOnlineSubsystemSteamworks_execOpenHelpManual_Params OpenHelpManual_Params;
	memset(&OpenHelpManual_Params, 0, sizeof(OpenHelpManual_Params));
	if (!uFnOpenHelpManual)
	{
		return;
	}

	OpenHelpManual_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnOpenHelpManual, &OpenHelpManual_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordStop
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        VideoId                        (CPF_Parm)
// class FString                  TitleStr                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::VideoRecordStop(uint8_t LocalUserNum, uint8_t VideoId, const class FString& TitleStr)
{
	static UFunction* uFnVideoRecordStop = nullptr;

	if (!uFnVideoRecordStop)
	{
		uFnVideoRecordStop = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordStop");
	}

	UOnlineSubsystemSteamworks_execVideoRecordStop_Params VideoRecordStop_Params;
	memset(&VideoRecordStop_Params, 0, sizeof(VideoRecordStop_Params));
	if (!uFnVideoRecordStop)
	{
		return {};
	}

	VideoRecordStop_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	VideoRecordStop_Params.VideoId = static_cast<uint8_t>(VideoId);
	memcpy_s(&VideoRecordStop_Params.TitleStr, sizeof(VideoRecordStop_Params.TitleStr), &TitleStr, sizeof(TitleStr));

	this->ProcessEvent(uFnVideoRecordStop, &VideoRecordStop_Params, nullptr);

	return VideoRecordStop_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordStart
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::VideoRecordStart(uint8_t LocalUserNum)
{
	static UFunction* uFnVideoRecordStart = nullptr;

	if (!uFnVideoRecordStart)
	{
		uFnVideoRecordStart = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordStart");
	}

	UOnlineSubsystemSteamworks_execVideoRecordStart_Params VideoRecordStart_Params;
	memset(&VideoRecordStart_Params, 0, sizeof(VideoRecordStart_Params));
	if (!uFnVideoRecordStart)
	{
		return {};
	}

	VideoRecordStart_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnVideoRecordStart, &VideoRecordStart_Params, nullptr);

	return VideoRecordStart_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecord
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        VideoId                        (CPF_Parm)
// class FString                  TitleStr                       (CPF_Parm | CPF_NeedCtorLink)
// float                          TimeStart                      (CPF_Parm)
// float                          TimeStop                       (CPF_Parm)

void UOnlineSubsystemSteamworks::VideoRecord(uint8_t LocalUserNum, uint8_t VideoId, const class FString& TitleStr, float TimeStart, float TimeStop)
{
	static UFunction* uFnVideoRecord = nullptr;

	if (!uFnVideoRecord)
	{
		uFnVideoRecord = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecord");
	}

	UOnlineSubsystemSteamworks_execVideoRecord_Params VideoRecord_Params;
	memset(&VideoRecord_Params, 0, sizeof(VideoRecord_Params));
	if (!uFnVideoRecord)
	{
		return;
	}

	VideoRecord_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	VideoRecord_Params.VideoId = static_cast<uint8_t>(VideoId);
	memcpy_s(&VideoRecord_Params.TitleStr, sizeof(VideoRecord_Params.TitleStr), &TitleStr, sizeof(TitleStr));
	VideoRecord_Params.TimeStart = TimeStart;
	VideoRecord_Params.TimeStop = TimeStop;

	this->ProcessEvent(uFnVideoRecord, &VideoRecord_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordSetGameSectionId
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        SectionId                      (CPF_Parm)

void UOnlineSubsystemSteamworks::VideoRecordSetGameSectionId(int32_t SectionId)
{
	static UFunction* uFnVideoRecordSetGameSectionId = nullptr;

	if (!uFnVideoRecordSetGameSectionId)
	{
		uFnVideoRecordSetGameSectionId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordSetGameSectionId");
	}

	UOnlineSubsystemSteamworks_execVideoRecordSetGameSectionId_Params VideoRecordSetGameSectionId_Params;
	memset(&VideoRecordSetGameSectionId_Params, 0, sizeof(VideoRecordSetGameSectionId_Params));
	if (!uFnVideoRecordSetGameSectionId)
	{
		return;
	}

	VideoRecordSetGameSectionId_Params.SectionId = SectionId;

	this->ProcessEvent(uFnVideoRecordSetGameSectionId, &VideoRecordSetGameSectionId_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordAllowed
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bEnabled                       (CPF_Parm)

void UOnlineSubsystemSteamworks::VideoRecordAllowed(bool bEnabled)
{
	static UFunction* uFnVideoRecordAllowed = nullptr;

	if (!uFnVideoRecordAllowed)
	{
		uFnVideoRecordAllowed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordAllowed");
	}

	UOnlineSubsystemSteamworks_execVideoRecordAllowed_Params VideoRecordAllowed_Params;
	memset(&VideoRecordAllowed_Params, 0, sizeof(VideoRecordAllowed_Params));
	if (!uFnVideoRecordAllowed)
	{
		return;
	}

	VideoRecordAllowed_Params.bEnabled = bEnabled;

	this->ProcessEvent(uFnVideoRecordAllowed, &VideoRecordAllowed_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsVideoRecordAllowed
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsVideoRecordAllowed()
{
	static UFunction* uFnIsVideoRecordAllowed = nullptr;

	if (!uFnIsVideoRecordAllowed)
	{
		uFnIsVideoRecordAllowed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsVideoRecordAllowed");
	}

	UOnlineSubsystemSteamworks_execIsVideoRecordAllowed_Params IsVideoRecordAllowed_Params;
	memset(&IsVideoRecordAllowed_Params, 0, sizeof(IsVideoRecordAllowed_Params));
	if (!uFnIsVideoRecordAllowed)
	{
		return {};
	}


	this->ProcessEvent(uFnIsVideoRecordAllowed, &IsVideoRecordAllowed_Params, nullptr);

	return IsVideoRecordAllowed_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnBindAllPlayers
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::UnBindAllPlayers()
{
	static UFunction* uFnUnBindAllPlayers = nullptr;

	if (!uFnUnBindAllPlayers)
	{
		uFnUnBindAllPlayers = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnBindAllPlayers");
	}

	UOnlineSubsystemSteamworks_execUnBindAllPlayers_Params UnBindAllPlayers_Params;
	memset(&UnBindAllPlayers_Params, 0, sizeof(UnBindAllPlayers_Params));
	if (!uFnUnBindAllPlayers)
	{
		return;
	}


	this->ProcessEvent(uFnUnBindAllPlayers, &UnBindAllPlayers_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnBindPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::UnBindPlayer(int32_t ControllerId)
{
	static UFunction* uFnUnBindPlayer = nullptr;

	if (!uFnUnBindPlayer)
	{
		uFnUnBindPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnBindPlayer");
	}

	UOnlineSubsystemSteamworks_execUnBindPlayer_Params UnBindPlayer_Params;
	memset(&UnBindPlayer_Params, 0, sizeof(UnBindPlayer_Params));
	if (!uFnUnBindPlayer)
	{
		return;
	}

	UnBindPlayer_Params.ControllerId = ControllerId;

	this->ProcessEvent(uFnUnBindPlayer, &UnBindPlayer_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResumePlayer
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// int32_t                        ControllerIndex                (CPF_Parm)

int32_t UOnlineSubsystemSteamworks::ResumePlayer(int32_t ControllerId, int32_t ControllerIndex)
{
	static UFunction* uFnResumePlayer = nullptr;

	if (!uFnResumePlayer)
	{
		uFnResumePlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResumePlayer");
	}

	UOnlineSubsystemSteamworks_execResumePlayer_Params ResumePlayer_Params;
	memset(&ResumePlayer_Params, 0, sizeof(ResumePlayer_Params));
	if (!uFnResumePlayer)
	{
		return {};
	}

	ResumePlayer_Params.ControllerId = ControllerId;
	ResumePlayer_Params.ControllerIndex = ControllerIndex;

	this->ProcessEvent(uFnResumePlayer, &ResumePlayer_Params, nullptr);

	return ResumePlayer_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReBindPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// int32_t                        ControllerIndex                (CPF_Parm)

void UOnlineSubsystemSteamworks::ReBindPlayer(int32_t ControllerId, int32_t ControllerIndex)
{
	static UFunction* uFnReBindPlayer = nullptr;

	if (!uFnReBindPlayer)
	{
		uFnReBindPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReBindPlayer");
	}

	UOnlineSubsystemSteamworks_execReBindPlayer_Params ReBindPlayer_Params;
	memset(&ReBindPlayer_Params, 0, sizeof(ReBindPlayer_Params));
	if (!uFnReBindPlayer)
	{
		return;
	}

	ReBindPlayer_Params.ControllerId = ControllerId;
	ReBindPlayer_Params.ControllerIndex = ControllerIndex;

	this->ProcessEvent(uFnReBindPlayer, &ReBindPlayer_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.BindPlayer
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerIndex                (CPF_Parm)

int32_t UOnlineSubsystemSteamworks::BindPlayer(int32_t ControllerIndex)
{
	static UFunction* uFnBindPlayer = nullptr;

	if (!uFnBindPlayer)
	{
		uFnBindPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.BindPlayer");
	}

	UOnlineSubsystemSteamworks_execBindPlayer_Params BindPlayer_Params;
	memset(&BindPlayer_Params, 0, sizeof(BindPlayer_Params));
	if (!uFnBindPlayer)
	{
		return {};
	}

	BindPlayer_Params.ControllerIndex = ControllerIndex;

	this->ProcessEvent(uFnBindPlayer, &BindPlayer_Params, nullptr);

	return BindPlayer_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetBoundCount
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOnlineSubsystemSteamworks::GetBoundCount()
{
	static UFunction* uFnGetBoundCount = nullptr;

	if (!uFnGetBoundCount)
	{
		uFnGetBoundCount = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetBoundCount");
	}

	UOnlineSubsystemSteamworks_execGetBoundCount_Params GetBoundCount_Params;
	memset(&GetBoundCount_Params, 0, sizeof(GetBoundCount_Params));
	if (!uFnGetBoundCount)
	{
		return {};
	}


	this->ProcessEvent(uFnGetBoundCount, &GetBoundCount_Params, nullptr);

	return GetBoundCount_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm)
// int32_t                        Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, int32_t Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate)
{
	static UFunction* uFnReadOnlineAvatar = nullptr;

	if (!uFnReadOnlineAvatar)
	{
		uFnReadOnlineAvatar = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar");
	}

	UOnlineSubsystemSteamworks_execReadOnlineAvatar_Params ReadOnlineAvatar_Params;
	memset(&ReadOnlineAvatar_Params, 0, sizeof(ReadOnlineAvatar_Params));
	if (!uFnReadOnlineAvatar)
	{
		return;
	}

	memcpy_s(&ReadOnlineAvatar_Params.PlayerNetId, sizeof(ReadOnlineAvatar_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));
	ReadOnlineAvatar_Params.Size = Size;
	memcpy_s(&ReadOnlineAvatar_Params.ReadOnlineAvatarCompleteDelegate, sizeof(ReadOnlineAvatar_Params.ReadOnlineAvatarCompleteDelegate), &ReadOnlineAvatarCompleteDelegate, sizeof(ReadOnlineAvatarCompleteDelegate));

	auto native_ReadOnlineAvatar = uFnReadOnlineAvatar->iNative;
	uFnReadOnlineAvatar->iNative = 0;
	this->ProcessEvent(uFnReadOnlineAvatar, &ReadOnlineAvatar_Params, nullptr);
	uFnReadOnlineAvatar->iNative = native_ReadOnlineAvatar;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm)
// class UTexture2D*              Avatar                         (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar)
{
	static UFunction* uFnOnReadOnlineAvatarComplete = nullptr;

	if (!uFnOnReadOnlineAvatarComplete)
	{
		uFnOnReadOnlineAvatarComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Params OnReadOnlineAvatarComplete_Params;
	memset(&OnReadOnlineAvatarComplete_Params, 0, sizeof(OnReadOnlineAvatarComplete_Params));
	if (!uFnOnReadOnlineAvatarComplete)
	{
		return;
	}

	memcpy_s(&OnReadOnlineAvatarComplete_Params.PlayerNetId, sizeof(OnReadOnlineAvatarComplete_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));
	OnReadOnlineAvatarComplete_Params.Avatar = Avatar;

	this->ProcessEvent(uFnOnReadOnlineAvatarComplete, &OnReadOnlineAvatarComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] (FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  MessageTitle                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  NonEditableMessage             (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EditableMessage                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FUniqueNetId> Recipients                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI(uint8_t LocalUserNum, const class FString& MessageTitle, const class FString& NonEditableMessage, const class FString& optionalEditableMessage, class TArray<struct FUniqueNetId>& outRecipients)
{
	static UFunction* uFnShowCustomMessageUI = nullptr;

	if (!uFnShowCustomMessageUI)
	{
		uFnShowCustomMessageUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI");
	}

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params ShowCustomMessageUI_Params;
	memset(&ShowCustomMessageUI_Params, 0, sizeof(ShowCustomMessageUI_Params));
	if (!uFnShowCustomMessageUI)
	{
		return {};
	}

	ShowCustomMessageUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ShowCustomMessageUI_Params.MessageTitle, sizeof(ShowCustomMessageUI_Params.MessageTitle), &MessageTitle, sizeof(MessageTitle));
	memcpy_s(&ShowCustomMessageUI_Params.NonEditableMessage, sizeof(ShowCustomMessageUI_Params.NonEditableMessage), &NonEditableMessage, sizeof(NonEditableMessage));
	memcpy_s(&ShowCustomMessageUI_Params.EditableMessage, sizeof(ShowCustomMessageUI_Params.EditableMessage), &optionalEditableMessage, sizeof(optionalEditableMessage));
	memcpy_s(&ShowCustomMessageUI_Params.Recipients, sizeof(ShowCustomMessageUI_Params.Recipients), &outRecipients, sizeof(outRecipients));

	this->ProcessEvent(uFnShowCustomMessageUI, &ShowCustomMessageUI_Params, nullptr);

	memcpy_s(&outRecipients, sizeof(outRecipients), &ShowCustomMessageUI_Params.Recipients, sizeof(ShowCustomMessageUI_Params.Recipients));

	return ShowCustomMessageUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnClearCrossTitleProfileSettings = nullptr;

	if (!uFnClearCrossTitleProfileSettings)
	{
		uFnClearCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params ClearCrossTitleProfileSettings_Params;
	memset(&ClearCrossTitleProfileSettings_Params, 0, sizeof(ClearCrossTitleProfileSettings_Params));
	if (!uFnClearCrossTitleProfileSettings)
	{
		return;
	}

	ClearCrossTitleProfileSettings_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ClearCrossTitleProfileSettings_Params.TitleId = TitleId;

	this->ProcessEvent(uFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnGetCrossTitleProfileSettings = nullptr;

	if (!uFnGetCrossTitleProfileSettings)
	{
		uFnGetCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params GetCrossTitleProfileSettings_Params;
	memset(&GetCrossTitleProfileSettings_Params, 0, sizeof(GetCrossTitleProfileSettings_Params));
	if (!uFnGetCrossTitleProfileSettings)
	{
		return {};
	}

	GetCrossTitleProfileSettings_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	GetCrossTitleProfileSettings_Params.TitleId = TitleId;

	this->ProcessEvent(uFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Params, nullptr);

	return GetCrossTitleProfileSettings_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnClearReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params ClearReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memset(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params));
	if (!uFnClearReadCrossTitleProfileSettingsCompleteDelegate)
	{
		return;
	}

	ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnAddReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params AddReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memset(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params, 0, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params));
	if (!uFnAddReadCrossTitleProfileSettingsCompleteDelegate)
	{
		return;
	}

	AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadCrossTitleProfileSettingsComplete = nullptr;

	if (!uFnOnReadCrossTitleProfileSettingsComplete)
	{
		uFnOnReadCrossTitleProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params OnReadCrossTitleProfileSettingsComplete_Params;
	memset(&OnReadCrossTitleProfileSettingsComplete_Params, 0, sizeof(OnReadCrossTitleProfileSettingsComplete_Params));
	if (!uFnOnReadCrossTitleProfileSettingsComplete)
	{
		return;
	}

	OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	OnReadCrossTitleProfileSettingsComplete_Params.TitleId = TitleId;
	OnReadCrossTitleProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadCrossTitleProfileSettings = nullptr;

	if (!uFnReadCrossTitleProfileSettings)
	{
		uFnReadCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params ReadCrossTitleProfileSettings_Params;
	memset(&ReadCrossTitleProfileSettings_Params, 0, sizeof(ReadCrossTitleProfileSettings_Params));
	if (!uFnReadCrossTitleProfileSettings)
	{
		return {};
	}

	ReadCrossTitleProfileSettings_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadCrossTitleProfileSettings_Params.TitleId = TitleId;
	ReadCrossTitleProfileSettings_Params.ProfileSettings = ProfileSettings;

	this->ProcessEvent(uFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Params, nullptr);

	return ReadCrossTitleProfileSettings_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AvatarItemId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockAvatarAward(uint8_t LocalUserNum, int32_t AvatarItemId)
{
	static UFunction* uFnUnlockAvatarAward = nullptr;

	if (!uFnUnlockAvatarAward)
	{
		uFnUnlockAvatarAward = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward");
	}

	UOnlineSubsystemSteamworks_execUnlockAvatarAward_Params UnlockAvatarAward_Params;
	memset(&UnlockAvatarAward_Params, 0, sizeof(UnlockAvatarAward_Params));
	if (!uFnUnlockAvatarAward)
	{
		return {};
	}

	UnlockAvatarAward_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	UnlockAvatarAward_Params.AvatarItemId = AvatarItemId;

	this->ProcessEvent(uFnUnlockAvatarAward, &UnlockAvatarAward_Params, nullptr);

	return UnlockAvatarAward_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTimeSinceGuideLastClosed
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UOnlineSubsystemSteamworks::GetTimeSinceGuideLastClosed()
{
	static UFunction* uFnGetTimeSinceGuideLastClosed = nullptr;

	if (!uFnGetTimeSinceGuideLastClosed)
	{
		uFnGetTimeSinceGuideLastClosed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTimeSinceGuideLastClosed");
	}

	UOnlineSubsystemSteamworks_execGetTimeSinceGuideLastClosed_Params GetTimeSinceGuideLastClosed_Params;
	memset(&GetTimeSinceGuideLastClosed_Params, 0, sizeof(GetTimeSinceGuideLastClosed_Params));
	if (!uFnGetTimeSinceGuideLastClosed)
	{
		return {};
	}


	this->ProcessEvent(uFnGetTimeSinceGuideLastClosed, &GetTimeSinceGuideLastClosed_Params, nullptr);

	return GetTimeSinceGuideLastClosed_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateInfocastSystem
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::CreateInfocastSystem()
{
	static UFunction* uFnCreateInfocastSystem = nullptr;

	if (!uFnCreateInfocastSystem)
	{
		uFnCreateInfocastSystem = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateInfocastSystem");
	}

	UOnlineSubsystemSteamworks_execCreateInfocastSystem_Params CreateInfocastSystem_Params;
	memset(&CreateInfocastSystem_Params, 0, sizeof(CreateInfocastSystem_Params));
	if (!uFnCreateInfocastSystem)
	{
		return;
	}


	auto native_CreateInfocastSystem = uFnCreateInfocastSystem->iNative;
	uFnCreateInfocastSystem->iNative = 0;
	this->ProcessEvent(uFnCreateInfocastSystem, &CreateInfocastSystem_Params, nullptr);
	uFnCreateInfocastSystem->iNative = native_CreateInfocastSystem;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearNewInfocastDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InfocastDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearNewInfocastDelegate(const struct FScriptDelegate& InfocastDelegate)
{
	static UFunction* uFnClearNewInfocastDelegate = nullptr;

	if (!uFnClearNewInfocastDelegate)
	{
		uFnClearNewInfocastDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearNewInfocastDelegate");
	}

	UOnlineSubsystemSteamworks_execClearNewInfocastDelegate_Params ClearNewInfocastDelegate_Params;
	memset(&ClearNewInfocastDelegate_Params, 0, sizeof(ClearNewInfocastDelegate_Params));
	if (!uFnClearNewInfocastDelegate)
	{
		return;
	}

	memcpy_s(&ClearNewInfocastDelegate_Params.InfocastDelegate, sizeof(ClearNewInfocastDelegate_Params.InfocastDelegate), &InfocastDelegate, sizeof(InfocastDelegate));

	this->ProcessEvent(uFnClearNewInfocastDelegate, &ClearNewInfocastDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddNewInfocastDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InfocastDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddNewInfocastDelegate(const struct FScriptDelegate& InfocastDelegate)
{
	static UFunction* uFnAddNewInfocastDelegate = nullptr;

	if (!uFnAddNewInfocastDelegate)
	{
		uFnAddNewInfocastDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddNewInfocastDelegate");
	}

	UOnlineSubsystemSteamworks_execAddNewInfocastDelegate_Params AddNewInfocastDelegate_Params;
	memset(&AddNewInfocastDelegate_Params, 0, sizeof(AddNewInfocastDelegate_Params));
	if (!uFnAddNewInfocastDelegate)
	{
		return;
	}

	memcpy_s(&AddNewInfocastDelegate_Params.InfocastDelegate, sizeof(AddNewInfocastDelegate_Params.InfocastDelegate), &InfocastDelegate, sizeof(InfocastDelegate));

	this->ProcessEvent(uFnAddNewInfocastDelegate, &AddNewInfocastDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnNewInfocast
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FString                  Infocast                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnNewInfocast(const class FString& Infocast)
{
	static UFunction* uFnOnNewInfocast = nullptr;

	if (!uFnOnNewInfocast)
	{
		uFnOnNewInfocast = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnNewInfocast");
	}

	UOnlineSubsystemSteamworks_execOnNewInfocast_Params OnNewInfocast_Params;
	memset(&OnNewInfocast_Params, 0, sizeof(OnNewInfocast_Params));
	if (!uFnOnNewInfocast)
	{
		return;
	}

	memcpy_s(&OnNewInfocast_Params.Infocast, sizeof(OnNewInfocast_Params.Infocast), &Infocast, sizeof(Infocast));

	this->ProcessEvent(uFnOnNewInfocast, &OnNewInfocast_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Description                    (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(uint8_t LocalUserNum, const class FString& Title, const class FString& Description, class TArray<struct FUniqueNetId>& outPlayers)
{
	static UFunction* uFnShowCustomPlayersUI = nullptr;

	if (!uFnShowCustomPlayersUI)
	{
		uFnShowCustomPlayersUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI");
	}

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params ShowCustomPlayersUI_Params;
	memset(&ShowCustomPlayersUI_Params, 0, sizeof(ShowCustomPlayersUI_Params));
	if (!uFnShowCustomPlayersUI)
	{
		return {};
	}

	ShowCustomPlayersUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ShowCustomPlayersUI_Params.Title, sizeof(ShowCustomPlayersUI_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ShowCustomPlayersUI_Params.Description, sizeof(ShowCustomPlayersUI_Params.Description), &Description, sizeof(Description));
	memcpy_s(&ShowCustomPlayersUI_Params.Players, sizeof(ShowCustomPlayersUI_Params.Players), &outPlayers, sizeof(outPlayers));

	auto native_ShowCustomPlayersUI = uFnShowCustomPlayersUI->iNative;
	uFnShowCustomPlayersUI->iNative = 0;
	this->ProcessEvent(uFnShowCustomPlayersUI, &ShowCustomPlayersUI_Params, nullptr);
	uFnShowCustomPlayersUI->iNative = native_ShowCustomPlayersUI;

	memcpy_s(&outPlayers, sizeof(outPlayers), &ShowCustomPlayersUI_Params.Players, sizeof(ShowCustomPlayersUI_Params.Players));

	return ShowCustomPlayersUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowPlayersUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowPlayersUI = nullptr;

	if (!uFnShowPlayersUI)
	{
		uFnShowPlayersUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI");
	}

	UOnlineSubsystemSteamworks_execShowPlayersUI_Params ShowPlayersUI_Params;
	memset(&ShowPlayersUI_Params, 0, sizeof(ShowPlayersUI_Params));
	if (!uFnShowPlayersUI)
	{
		return {};
	}

	ShowPlayersUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_ShowPlayersUI = uFnShowPlayersUI->iNative;
	uFnShowPlayersUI->iNative = 0;
	this->ProcessEvent(uFnShowPlayersUI, &ShowPlayersUI_Params, nullptr);
	uFnShowPlayersUI->iNative = native_ShowPlayersUI;

	return ShowPlayersUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGuideUI
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowGuideUI()
{
	static UFunction* uFnShowGuideUI = nullptr;

	if (!uFnShowGuideUI)
	{
		uFnShowGuideUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGuideUI");
	}

	UOnlineSubsystemSteamworks_execShowGuideUI_Params ShowGuideUI_Params;
	memset(&ShowGuideUI_Params, 0, sizeof(ShowGuideUI_Params));
	if (!uFnShowGuideUI)
	{
		return {};
	}


	this->ProcessEvent(uFnShowGuideUI, &ShowGuideUI_Params, nullptr);

	return ShowGuideUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnShowFriendsInviteUI = nullptr;

	if (!uFnShowFriendsInviteUI)
	{
		uFnShowFriendsInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI");
	}

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params ShowFriendsInviteUI_Params;
	memset(&ShowFriendsInviteUI_Params, 0, sizeof(ShowFriendsInviteUI_Params));
	if (!uFnShowFriendsInviteUI)
	{
		return {};
	}

	ShowFriendsInviteUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ShowFriendsInviteUI_Params.PlayerID, sizeof(ShowFriendsInviteUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	auto native_ShowFriendsInviteUI = uFnShowFriendsInviteUI->iNative;
	uFnShowFriendsInviteUI->iNative = 0;
	this->ProcessEvent(uFnShowFriendsInviteUI, &ShowFriendsInviteUI_Params, nullptr);
	uFnShowFriendsInviteUI->iNative = native_ShowFriendsInviteUI;

	return ShowFriendsInviteUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static UFunction* uFnClearProfileDataChangedDelegate = nullptr;

	if (!uFnClearProfileDataChangedDelegate)
	{
		uFnClearProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params ClearProfileDataChangedDelegate_Params;
	memset(&ClearProfileDataChangedDelegate_Params, 0, sizeof(ClearProfileDataChangedDelegate_Params));
	if (!uFnClearProfileDataChangedDelegate)
	{
		return;
	}

	ClearProfileDataChangedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, sizeof(ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate), &ProfileDataChangedDelegate, sizeof(ProfileDataChangedDelegate));

	this->ProcessEvent(uFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static UFunction* uFnAddProfileDataChangedDelegate = nullptr;

	if (!uFnAddProfileDataChangedDelegate)
	{
		uFnAddProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params AddProfileDataChangedDelegate_Params;
	memset(&AddProfileDataChangedDelegate_Params, 0, sizeof(AddProfileDataChangedDelegate_Params));
	if (!uFnAddProfileDataChangedDelegate)
	{
		return;
	}

	AddProfileDataChangedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, sizeof(AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate), &ProfileDataChangedDelegate, sizeof(ProfileDataChangedDelegate));

	this->ProcessEvent(uFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnProfileDataChanged()
{
	static UFunction* uFnOnProfileDataChanged = nullptr;

	if (!uFnOnProfileDataChanged)
	{
		uFnOnProfileDataChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged");
	}

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Params OnProfileDataChanged_Params;
	memset(&OnProfileDataChanged_Params, 0, sizeof(OnProfileDataChanged_Params));
	if (!uFnOnProfileDataChanged)
	{
		return;
	}


	this->ProcessEvent(uFnOnProfileDataChanged, &OnProfileDataChanged_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        PictureId                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId)
{
	static UFunction* uFnUnlockGamerPicture = nullptr;

	if (!uFnUnlockGamerPicture)
	{
		uFnUnlockGamerPicture = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture");
	}

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params UnlockGamerPicture_Params;
	memset(&UnlockGamerPicture_Params, 0, sizeof(UnlockGamerPicture_Params));
	if (!uFnUnlockGamerPicture)
	{
		return {};
	}

	UnlockGamerPicture_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	UnlockGamerPicture_Params.PictureId = PictureId;

	auto native_UnlockGamerPicture = uFnUnlockGamerPicture->iNative;
	uFnUnlockGamerPicture->iNative = 0;
	this->ProcessEvent(uFnUnlockGamerPicture, &UnlockGamerPicture_Params, nullptr);
	uFnUnlockGamerPicture->iNative = native_UnlockGamerPicture;

	return UnlockGamerPicture_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        DeviceID                       (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::IsDeviceValid(int32_t DeviceID, int32_t optionalSizeNeeded)
{
	static UFunction* uFnIsDeviceValid = nullptr;

	if (!uFnIsDeviceValid)
	{
		uFnIsDeviceValid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid");
	}

	UOnlineSubsystemSteamworks_execIsDeviceValid_Params IsDeviceValid_Params;
	memset(&IsDeviceValid_Params, 0, sizeof(IsDeviceValid_Params));
	if (!uFnIsDeviceValid)
	{
		return {};
	}

	IsDeviceValid_Params.DeviceID = DeviceID;
	IsDeviceValid_Params.SizeNeeded = optionalSizeNeeded;

	auto native_IsDeviceValid = uFnIsDeviceValid->iNative;
	uFnIsDeviceValid->iNative = 0;
	this->ProcessEvent(uFnIsDeviceValid, &IsDeviceValid_Params, nullptr);
	uFnIsDeviceValid->iNative = native_IsDeviceValid;

	return IsDeviceValid_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  DeviceName                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UOnlineSubsystemSteamworks::GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& outDeviceName)
{
	static UFunction* uFnGetDeviceSelectionResults = nullptr;

	if (!uFnGetDeviceSelectionResults)
	{
		uFnGetDeviceSelectionResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults");
	}

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params GetDeviceSelectionResults_Params;
	memset(&GetDeviceSelectionResults_Params, 0, sizeof(GetDeviceSelectionResults_Params));
	if (!uFnGetDeviceSelectionResults)
	{
		return {};
	}

	GetDeviceSelectionResults_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&GetDeviceSelectionResults_Params.DeviceName, sizeof(GetDeviceSelectionResults_Params.DeviceName), &outDeviceName, sizeof(outDeviceName));

	auto native_GetDeviceSelectionResults = uFnGetDeviceSelectionResults->iNative;
	uFnGetDeviceSelectionResults->iNative = 0;
	this->ProcessEvent(uFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Params, nullptr);
	uFnGetDeviceSelectionResults->iNative = native_GetDeviceSelectionResults;

	memcpy_s(&outDeviceName, sizeof(outDeviceName), &GetDeviceSelectionResults_Params.DeviceName, sizeof(GetDeviceSelectionResults_Params.DeviceName));

	return GetDeviceSelectionResults_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static UFunction* uFnClearDeviceSelectionDoneDelegate = nullptr;

	if (!uFnClearDeviceSelectionDoneDelegate)
	{
		uFnClearDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params ClearDeviceSelectionDoneDelegate_Params;
	memset(&ClearDeviceSelectionDoneDelegate_Params, 0, sizeof(ClearDeviceSelectionDoneDelegate_Params));
	if (!uFnClearDeviceSelectionDoneDelegate)
	{
		return;
	}

	ClearDeviceSelectionDoneDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate, sizeof(ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static UFunction* uFnAddDeviceSelectionDoneDelegate = nullptr;

	if (!uFnAddDeviceSelectionDoneDelegate)
	{
		uFnAddDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params AddDeviceSelectionDoneDelegate_Params;
	memset(&AddDeviceSelectionDoneDelegate_Params, 0, sizeof(AddDeviceSelectionDoneDelegate_Params));
	if (!uFnAddDeviceSelectionDoneDelegate)
	{
		return;
	}

	AddDeviceSelectionDoneDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.DeviceDelegate, sizeof(AddDeviceSelectionDoneDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnDeviceSelectionComplete = nullptr;

	if (!uFnOnDeviceSelectionComplete)
	{
		uFnOnDeviceSelectionComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete");
	}

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params OnDeviceSelectionComplete_Params;
	memset(&OnDeviceSelectionComplete_Params, 0, sizeof(OnDeviceSelectionComplete_Params));
	if (!uFnOnDeviceSelectionComplete)
	{
		return;
	}

	OnDeviceSelectionComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_Parm)
// uint32_t                       bForceShowUI                   (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bManageStorage                 (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool optionalBForceShowUI, bool optionalBManageStorage)
{
	static UFunction* uFnShowDeviceSelectionUI = nullptr;

	if (!uFnShowDeviceSelectionUI)
	{
		uFnShowDeviceSelectionUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI");
	}

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params ShowDeviceSelectionUI_Params;
	memset(&ShowDeviceSelectionUI_Params, 0, sizeof(ShowDeviceSelectionUI_Params));
	if (!uFnShowDeviceSelectionUI)
	{
		return {};
	}

	ShowDeviceSelectionUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ShowDeviceSelectionUI_Params.SizeNeeded = SizeNeeded;
	ShowDeviceSelectionUI_Params.bForceShowUI = optionalBForceShowUI;
	ShowDeviceSelectionUI_Params.bManageStorage = optionalBManageStorage;

	auto native_ShowDeviceSelectionUI = uFnShowDeviceSelectionUI->iNative;
	uFnShowDeviceSelectionUI->iNative = 0;
	this->ProcessEvent(uFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Params, nullptr);
	uFnShowDeviceSelectionUI->iNative = native_ShowDeviceSelectionUI;

	return ShowDeviceSelectionUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowMembershipMarketplaceUI = nullptr;

	if (!uFnShowMembershipMarketplaceUI)
	{
		uFnShowMembershipMarketplaceUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI");
	}

	UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Params ShowMembershipMarketplaceUI_Params;
	memset(&ShowMembershipMarketplaceUI_Params, 0, sizeof(ShowMembershipMarketplaceUI_Params));
	if (!uFnShowMembershipMarketplaceUI)
	{
		return {};
	}

	ShowMembershipMarketplaceUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_ShowMembershipMarketplaceUI = uFnShowMembershipMarketplaceUI->iNative;
	uFnShowMembershipMarketplaceUI->iNative = 0;
	this->ProcessEvent(uFnShowMembershipMarketplaceUI, &ShowMembershipMarketplaceUI_Params, nullptr);
	uFnShowMembershipMarketplaceUI->iNative = native_ShowMembershipMarketplaceUI;

	return ShowMembershipMarketplaceUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        CategoryMask                   (CPF_OptionalParm | CPF_Parm)
// int32_t                        OfferId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(uint8_t LocalUserNum, int32_t optionalCategoryMask, int32_t optionalOfferId)
{
	static UFunction* uFnShowContentMarketplaceUI = nullptr;

	if (!uFnShowContentMarketplaceUI)
	{
		uFnShowContentMarketplaceUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI");
	}

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params ShowContentMarketplaceUI_Params;
	memset(&ShowContentMarketplaceUI_Params, 0, sizeof(ShowContentMarketplaceUI_Params));
	if (!uFnShowContentMarketplaceUI)
	{
		return {};
	}

	ShowContentMarketplaceUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ShowContentMarketplaceUI_Params.CategoryMask = optionalCategoryMask;
	ShowContentMarketplaceUI_Params.OfferId = optionalOfferId;

	auto native_ShowContentMarketplaceUI = uFnShowContentMarketplaceUI->iNative;
	uFnShowContentMarketplaceUI->iNative = 0;
	this->ProcessEvent(uFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Params, nullptr);
	uFnShowContentMarketplaceUI->iNative = native_ShowContentMarketplaceUI;

	return ShowContentMarketplaceUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviteText                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowInviteUI(uint8_t LocalUserNum, const class FString& optionalInviteText)
{
	static UFunction* uFnShowInviteUI = nullptr;

	if (!uFnShowInviteUI)
	{
		uFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI");
	}

	UOnlineSubsystemSteamworks_execShowInviteUI_Params ShowInviteUI_Params;
	memset(&ShowInviteUI_Params, 0, sizeof(ShowInviteUI_Params));
	if (!uFnShowInviteUI)
	{
		return {};
	}

	ShowInviteUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ShowInviteUI_Params.InviteText, sizeof(ShowInviteUI_Params.InviteText), &optionalInviteText, sizeof(optionalInviteText));

	auto native_ShowInviteUI = uFnShowInviteUI->iNative;
	uFnShowInviteUI->iNative = 0;
	this->ProcessEvent(uFnShowInviteUI, &ShowInviteUI_Params, nullptr);
	uFnShowInviteUI->iNative = native_ShowInviteUI;

	return ShowInviteUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowAchievementsUI = nullptr;

	if (!uFnShowAchievementsUI)
	{
		uFnShowAchievementsUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI");
	}

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Params ShowAchievementsUI_Params;
	memset(&ShowAchievementsUI_Params, 0, sizeof(ShowAchievementsUI_Params));
	if (!uFnShowAchievementsUI)
	{
		return {};
	}

	ShowAchievementsUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_ShowAchievementsUI = uFnShowAchievementsUI->iNative;
	uFnShowAchievementsUI->iNative = 0;
	this->ProcessEvent(uFnShowAchievementsUI, &ShowAchievementsUI_Params, nullptr);
	uFnShowAchievementsUI->iNative = native_ShowAchievementsUI;

	return ShowAchievementsUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowMessagesUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowMessagesUI = nullptr;

	if (!uFnShowMessagesUI)
	{
		uFnShowMessagesUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI");
	}

	UOnlineSubsystemSteamworks_execShowMessagesUI_Params ShowMessagesUI_Params;
	memset(&ShowMessagesUI_Params, 0, sizeof(ShowMessagesUI_Params));
	if (!uFnShowMessagesUI)
	{
		return {};
	}

	ShowMessagesUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_ShowMessagesUI = uFnShowMessagesUI->iNative;
	uFnShowMessagesUI->iNative = 0;
	this->ProcessEvent(uFnShowMessagesUI, &ShowMessagesUI_Params, nullptr);
	uFnShowMessagesUI->iNative = native_ShowMessagesUI;

	return ShowMessagesUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowTokenRedemptionUI
// [0x00024003] (FUNC_Final | FUNC_Defined | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  OfferId                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowTokenRedemptionUI(uint8_t LocalUserNum, const class FString& optionalOfferId)
{
	static UFunction* uFnShowTokenRedemptionUI = nullptr;

	if (!uFnShowTokenRedemptionUI)
	{
		uFnShowTokenRedemptionUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowTokenRedemptionUI");
	}

	UOnlineSubsystemSteamworks_execShowTokenRedemptionUI_Params ShowTokenRedemptionUI_Params;
	memset(&ShowTokenRedemptionUI_Params, 0, sizeof(ShowTokenRedemptionUI_Params));
	if (!uFnShowTokenRedemptionUI)
	{
		return {};
	}

	ShowTokenRedemptionUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ShowTokenRedemptionUI_Params.OfferId, sizeof(ShowTokenRedemptionUI_Params.OfferId), &optionalOfferId, sizeof(optionalOfferId));

	this->ProcessEvent(uFnShowTokenRedemptionUI, &ShowTokenRedemptionUI_Params, nullptr);

	return ShowTokenRedemptionUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAccountPickerUI
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowAccountPickerUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowAccountPickerUI = nullptr;

	if (!uFnShowAccountPickerUI)
	{
		uFnShowAccountPickerUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAccountPickerUI");
	}

	UOnlineSubsystemSteamworks_execShowAccountPickerUI_Params ShowAccountPickerUI_Params;
	memset(&ShowAccountPickerUI_Params, 0, sizeof(ShowAccountPickerUI_Params));
	if (!uFnShowAccountPickerUI)
	{
		return {};
	}

	ShowAccountPickerUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnShowAccountPickerUI, &ShowAccountPickerUI_Params, nullptr);

	return ShowAccountPickerUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// class FString                  NickName                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, const class FString& optionalNickName)
{
	static UFunction* uFnShowGamerCardUI = nullptr;

	if (!uFnShowGamerCardUI)
	{
		uFnShowGamerCardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI");
	}

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Params ShowGamerCardUI_Params;
	memset(&ShowGamerCardUI_Params, 0, sizeof(ShowGamerCardUI_Params));
	if (!uFnShowGamerCardUI)
	{
		return {};
	}

	ShowGamerCardUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ShowGamerCardUI_Params.PlayerID, sizeof(ShowGamerCardUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&ShowGamerCardUI_Params.NickName, sizeof(ShowGamerCardUI_Params.NickName), &optionalNickName, sizeof(optionalNickName));

	auto native_ShowGamerCardUI = uFnShowGamerCardUI->iNative;
	uFnShowGamerCardUI->iNative = 0;
	this->ProcessEvent(uFnShowGamerCardUI, &ShowGamerCardUI_Params, nullptr);
	uFnShowGamerCardUI->iNative = native_ShowGamerCardUI;

	return ShowGamerCardUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnShowFeedbackUI = nullptr;

	if (!uFnShowFeedbackUI)
	{
		uFnShowFeedbackUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI");
	}

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Params ShowFeedbackUI_Params;
	memset(&ShowFeedbackUI_Params, 0, sizeof(ShowFeedbackUI_Params));
	if (!uFnShowFeedbackUI)
	{
		return {};
	}

	ShowFeedbackUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ShowFeedbackUI_Params.PlayerID, sizeof(ShowFeedbackUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	auto native_ShowFeedbackUI = uFnShowFeedbackUI->iNative;
	uFnShowFeedbackUI->iNative = 0;
	this->ProcessEvent(uFnShowFeedbackUI, &ShowFeedbackUI_Params, nullptr);
	uFnShowFeedbackUI->iNative = native_ShowFeedbackUI;

	return ShowFeedbackUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMsgBoxUIDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MsgDelegate                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearMsgBoxUIDelegate(const struct FScriptDelegate& MsgDelegate)
{
	static UFunction* uFnClearMsgBoxUIDelegate = nullptr;

	if (!uFnClearMsgBoxUIDelegate)
	{
		uFnClearMsgBoxUIDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMsgBoxUIDelegate");
	}

	UOnlineSubsystemSteamworks_execClearMsgBoxUIDelegate_Params ClearMsgBoxUIDelegate_Params;
	memset(&ClearMsgBoxUIDelegate_Params, 0, sizeof(ClearMsgBoxUIDelegate_Params));
	if (!uFnClearMsgBoxUIDelegate)
	{
		return;
	}

	memcpy_s(&ClearMsgBoxUIDelegate_Params.MsgDelegate, sizeof(ClearMsgBoxUIDelegate_Params.MsgDelegate), &MsgDelegate, sizeof(MsgDelegate));

	this->ProcessEvent(uFnClearMsgBoxUIDelegate, &ClearMsgBoxUIDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMsgBoxUIDoneDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MsgDelegate                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddMsgBoxUIDoneDelegate(const struct FScriptDelegate& MsgDelegate)
{
	static UFunction* uFnAddMsgBoxUIDoneDelegate = nullptr;

	if (!uFnAddMsgBoxUIDoneDelegate)
	{
		uFnAddMsgBoxUIDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMsgBoxUIDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execAddMsgBoxUIDoneDelegate_Params AddMsgBoxUIDoneDelegate_Params;
	memset(&AddMsgBoxUIDoneDelegate_Params, 0, sizeof(AddMsgBoxUIDoneDelegate_Params));
	if (!uFnAddMsgBoxUIDoneDelegate)
	{
		return;
	}

	memcpy_s(&AddMsgBoxUIDoneDelegate_Params.MsgDelegate, sizeof(AddMsgBoxUIDoneDelegate_Params.MsgDelegate), &MsgDelegate, sizeof(MsgDelegate));

	this->ProcessEvent(uFnAddMsgBoxUIDoneDelegate, &AddMsgBoxUIDoneDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMsgBoxUIComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ButtonResult                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnMsgBoxUIComplete(int32_t ButtonResult)
{
	static UFunction* uFnOnMsgBoxUIComplete = nullptr;

	if (!uFnOnMsgBoxUIComplete)
	{
		uFnOnMsgBoxUIComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMsgBoxUIComplete");
	}

	UOnlineSubsystemSteamworks_execOnMsgBoxUIComplete_Params OnMsgBoxUIComplete_Params;
	memset(&OnMsgBoxUIComplete_Params, 0, sizeof(OnMsgBoxUIComplete_Params));
	if (!uFnOnMsgBoxUIComplete)
	{
		return;
	}

	OnMsgBoxUIComplete_Params.ButtonResult = ButtonResult;

	this->ProcessEvent(uFnOnMsgBoxUIComplete, &OnMsgBoxUIComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowSystemMsgBoxUI
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        SysMsg                         (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowSystemMsgBoxUI(uint8_t LocalUserNum, int32_t SysMsg)
{
	static UFunction* uFnShowSystemMsgBoxUI = nullptr;

	if (!uFnShowSystemMsgBoxUI)
	{
		uFnShowSystemMsgBoxUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowSystemMsgBoxUI");
	}

	UOnlineSubsystemSteamworks_execShowSystemMsgBoxUI_Params ShowSystemMsgBoxUI_Params;
	memset(&ShowSystemMsgBoxUI_Params, 0, sizeof(ShowSystemMsgBoxUI_Params));
	if (!uFnShowSystemMsgBoxUI)
	{
		return {};
	}

	ShowSystemMsgBoxUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ShowSystemMsgBoxUI_Params.SysMsg = SysMsg;

	this->ProcessEvent(uFnShowSystemMsgBoxUI, &ShowSystemMsgBoxUI_Params, nullptr);

	return ShowSystemMsgBoxUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFileInternal(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents)
{
	static UFunction* uFnWriteUserFileInternal = nullptr;

	if (!uFnWriteUserFileInternal)
	{
		uFnWriteUserFileInternal = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal");
	}

	UOnlineSubsystemSteamworks_execWriteUserFileInternal_Params WriteUserFileInternal_Params;
	memset(&WriteUserFileInternal_Params, 0, sizeof(WriteUserFileInternal_Params));
	if (!uFnWriteUserFileInternal)
	{
		return {};
	}

	memcpy_s(&WriteUserFileInternal_Params.UserId, sizeof(WriteUserFileInternal_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteUserFileInternal_Params.Filename, sizeof(WriteUserFileInternal_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteUserFileInternal_Params.FileContents, sizeof(WriteUserFileInternal_Params.FileContents), &outFileContents, sizeof(outFileContents));

	auto native_WriteUserFileInternal = uFnWriteUserFileInternal->iNative;
	uFnWriteUserFileInternal->iNative = 0;
	this->ProcessEvent(uFnWriteUserFileInternal, &WriteUserFileInternal_Params, nullptr);
	uFnWriteUserFileInternal->iNative = native_WriteUserFileInternal;

	memcpy_s(&outFileContents, sizeof(outFileContents), &WriteUserFileInternal_Params.FileContents, sizeof(WriteUserFileInternal_Params.FileContents));

	return WriteUserFileInternal_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

class FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex");
	}

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memset(&GetPlayerNicknameFromIndex_Params, 0, sizeof(GetPlayerNicknameFromIndex_Params));
	if (!uFnGetPlayerNicknameFromIndex)
	{
		return {};
	}

	GetPlayerNicknameFromIndex_Params.UserIndex = UserIndex;

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FAchievementDetails> Achievements                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, class TArray<struct FAchievementDetails>& outAchievements)
{
	static UFunction* uFnGetAchievements = nullptr;

	if (!uFnGetAchievements)
	{
		uFnGetAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements");
	}

	UOnlineSubsystemSteamworks_execGetAchievements_Params GetAchievements_Params;
	memset(&GetAchievements_Params, 0, sizeof(GetAchievements_Params));
	if (!uFnGetAchievements)
	{
		return {};
	}

	GetAchievements_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	GetAchievements_Params.TitleId = optionalTitleId;
	memcpy_s(&GetAchievements_Params.Achievements, sizeof(GetAchievements_Params.Achievements), &outAchievements, sizeof(outAchievements));

	auto native_GetAchievements = uFnGetAchievements->iNative;
	uFnGetAchievements->iNative = 0;
	this->ProcessEvent(uFnGetAchievements, &GetAchievements_Params, nullptr);
	uFnGetAchievements->iNative = native_GetAchievements;

	memcpy_s(&outAchievements, sizeof(outAchievements), &GetAchievements_Params.Achievements, sizeof(GetAchievements_Params.Achievements));

	return static_cast<EOnlineEnumerationReadState>(GetAchievements_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static UFunction* uFnClearReadAchievementsCompleteDelegate = nullptr;

	if (!uFnClearReadAchievementsCompleteDelegate)
	{
		uFnClearReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params ClearReadAchievementsCompleteDelegate_Params;
	memset(&ClearReadAchievementsCompleteDelegate_Params, 0, sizeof(ClearReadAchievementsCompleteDelegate_Params));
	if (!uFnClearReadAchievementsCompleteDelegate)
	{
		return;
	}

	ClearReadAchievementsCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate, sizeof(ClearReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate), &ReadAchievementsCompleteDelegate, sizeof(ReadAchievementsCompleteDelegate));

	this->ProcessEvent(uFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static UFunction* uFnAddReadAchievementsCompleteDelegate = nullptr;

	if (!uFnAddReadAchievementsCompleteDelegate)
	{
		uFnAddReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params AddReadAchievementsCompleteDelegate_Params;
	memset(&AddReadAchievementsCompleteDelegate_Params, 0, sizeof(AddReadAchievementsCompleteDelegate_Params));
	if (!uFnAddReadAchievementsCompleteDelegate)
	{
		return;
	}

	AddReadAchievementsCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate, sizeof(AddReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate), &ReadAchievementsCompleteDelegate, sizeof(ReadAchievementsCompleteDelegate));

	this->ProcessEvent(uFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete(int32_t TitleId)
{
	static UFunction* uFnOnReadAchievementsComplete = nullptr;

	if (!uFnOnReadAchievementsComplete)
	{
		uFnOnReadAchievementsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params OnReadAchievementsComplete_Params;
	memset(&OnReadAchievementsComplete_Params, 0, sizeof(OnReadAchievementsComplete_Params));
	if (!uFnOnReadAchievementsComplete)
	{
		return;
	}

	OnReadAchievementsComplete_Params.TitleId = TitleId;

	this->ProcessEvent(uFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bShouldReadText                (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bShouldReadImages              (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, bool optionalBShouldReadText, bool optionalBShouldReadImages)
{
	static UFunction* uFnReadAchievements = nullptr;

	if (!uFnReadAchievements)
	{
		uFnReadAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements");
	}

	UOnlineSubsystemSteamworks_execReadAchievements_Params ReadAchievements_Params;
	memset(&ReadAchievements_Params, 0, sizeof(ReadAchievements_Params));
	if (!uFnReadAchievements)
	{
		return {};
	}

	ReadAchievements_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadAchievements_Params.TitleId = optionalTitleId;
	ReadAchievements_Params.bShouldReadText = optionalBShouldReadText;
	ReadAchievements_Params.bShouldReadImages = optionalBShouldReadImages;

	auto native_ReadAchievements = uFnReadAchievements->iNative;
	uFnReadAchievements->iNative = 0;
	this->ProcessEvent(uFnReadAchievements, &ReadAchievements_Params, nullptr);
	uFnReadAchievements->iNative = native_ReadAchievements;

	return ReadAchievements_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static UFunction* uFnClearUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnClearUnlockAchievementCompleteDelegate)
	{
		uFnClearUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params ClearUnlockAchievementCompleteDelegate_Params;
	memset(&ClearUnlockAchievementCompleteDelegate_Params, 0, sizeof(ClearUnlockAchievementCompleteDelegate_Params));
	if (!uFnClearUnlockAchievementCompleteDelegate)
	{
		return;
	}

	ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate, sizeof(ClearUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate), &UnlockAchievementCompleteDelegate, sizeof(UnlockAchievementCompleteDelegate));

	this->ProcessEvent(uFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static UFunction* uFnAddUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnAddUnlockAchievementCompleteDelegate)
	{
		uFnAddUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params AddUnlockAchievementCompleteDelegate_Params;
	memset(&AddUnlockAchievementCompleteDelegate_Params, 0, sizeof(AddUnlockAchievementCompleteDelegate_Params));
	if (!uFnAddUnlockAchievementCompleteDelegate)
	{
		return;
	}

	AddUnlockAchievementCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate, sizeof(AddUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate), &UnlockAchievementCompleteDelegate, sizeof(UnlockAchievementCompleteDelegate));

	this->ProcessEvent(uFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnUnlockAchievementComplete = nullptr;

	if (!uFnOnUnlockAchievementComplete)
	{
		uFnOnUnlockAchievementComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete");
	}

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params OnUnlockAchievementComplete_Params;
	memset(&OnUnlockAchievementComplete_Params, 0, sizeof(OnUnlockAchievementComplete_Params));
	if (!uFnOnUnlockAchievementComplete)
	{
		return;
	}

	OnUnlockAchievementComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AchievementId                  (CPF_Parm)
// float                          PercentComplete                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float optionalPercentComplete)
{
	static UFunction* uFnUnlockAchievement = nullptr;

	if (!uFnUnlockAchievement)
	{
		uFnUnlockAchievement = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement");
	}

	UOnlineSubsystemSteamworks_execUnlockAchievement_Params UnlockAchievement_Params;
	memset(&UnlockAchievement_Params, 0, sizeof(UnlockAchievement_Params));
	if (!uFnUnlockAchievement)
	{
		return {};
	}

	UnlockAchievement_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	UnlockAchievement_Params.AchievementId = AchievementId;
	UnlockAchievement_Params.PercentComplete = optionalPercentComplete;

	auto native_UnlockAchievement = uFnUnlockAchievement->iNative;
	uFnUnlockAchievement->iNative = 0;
	this->ProcessEvent(uFnUnlockAchievement, &UnlockAchievement_Params, nullptr);
	uFnUnlockAchievement->iNative = native_UnlockAchievement;

	return UnlockAchievement_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        AchievementId                  (CPF_Parm)
// int32_t                        ProgressCount                  (CPF_Parm)
// int32_t                        MaxProgress                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress(int32_t AchievementId, int32_t ProgressCount, int32_t MaxProgress)
{
	static UFunction* uFnDisplayAchievementProgress = nullptr;

	if (!uFnDisplayAchievementProgress)
	{
		uFnDisplayAchievementProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress");
	}

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params DisplayAchievementProgress_Params;
	memset(&DisplayAchievementProgress_Params, 0, sizeof(DisplayAchievementProgress_Params));
	if (!uFnDisplayAchievementProgress)
	{
		return {};
	}

	DisplayAchievementProgress_Params.AchievementId = AchievementId;
	DisplayAchievementProgress_Params.ProgressCount = ProgressCount;
	DisplayAchievementProgress_Params.MaxProgress = MaxProgress;

	auto native_DisplayAchievementProgress = uFnDisplayAchievementProgress->iNative;
	uFnDisplayAchievementProgress->iNative = 0;
	this->ProcessEvent(uFnDisplayAchievementProgress, &DisplayAchievementProgress_Params, nullptr);
	uFnDisplayAchievementProgress->iNative = native_DisplayAchievementProgress;

	return DisplayAchievementProgress_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        MessageIndex                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage");
	}

	UOnlineSubsystemSteamworks_execDeleteMessage_Params DeleteMessage_Params;
	memset(&DeleteMessage_Params, 0, sizeof(DeleteMessage_Params));
	if (!uFnDeleteMessage)
	{
		return {};
	}

	DeleteMessage_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	DeleteMessage_Params.MessageIndex = MessageIndex;

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);

	return DeleteMessage_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static UFunction* uFnClearFriendMessageReceivedDelegate = nullptr;

	if (!uFnClearFriendMessageReceivedDelegate)
	{
		uFnClearFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Params ClearFriendMessageReceivedDelegate_Params;
	memset(&ClearFriendMessageReceivedDelegate_Params, 0, sizeof(ClearFriendMessageReceivedDelegate_Params));
	if (!uFnClearFriendMessageReceivedDelegate)
	{
		return;
	}

	ClearFriendMessageReceivedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.MessageDelegate, sizeof(ClearFriendMessageReceivedDelegate_Params.MessageDelegate), &MessageDelegate, sizeof(MessageDelegate));

	this->ProcessEvent(uFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static UFunction* uFnAddFriendMessageReceivedDelegate = nullptr;

	if (!uFnAddFriendMessageReceivedDelegate)
	{
		uFnAddFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Params AddFriendMessageReceivedDelegate_Params;
	memset(&AddFriendMessageReceivedDelegate_Params, 0, sizeof(AddFriendMessageReceivedDelegate_Params));
	if (!uFnAddFriendMessageReceivedDelegate)
	{
		return;
	}

	AddFriendMessageReceivedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.MessageDelegate, sizeof(AddFriendMessageReceivedDelegate_Params.MessageDelegate), &MessageDelegate, sizeof(MessageDelegate));

	this->ProcessEvent(uFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            SendingPlayer                  (CPF_Parm)
// class FString                  SendingNick                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendMessageReceived(uint8_t LocalUserNum, const struct FUniqueNetId& SendingPlayer, const class FString& SendingNick, const class FString& Message)
{
	static UFunction* uFnOnFriendMessageReceived = nullptr;

	if (!uFnOnFriendMessageReceived)
	{
		uFnOnFriendMessageReceived = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived");
	}

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Params OnFriendMessageReceived_Params;
	memset(&OnFriendMessageReceived_Params, 0, sizeof(OnFriendMessageReceived_Params));
	if (!uFnOnFriendMessageReceived)
	{
		return;
	}

	OnFriendMessageReceived_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&OnFriendMessageReceived_Params.SendingPlayer, sizeof(OnFriendMessageReceived_Params.SendingPlayer), &SendingPlayer, sizeof(SendingPlayer));
	memcpy_s(&OnFriendMessageReceived_Params.SendingNick, sizeof(OnFriendMessageReceived_Params.SendingNick), &SendingNick, sizeof(SendingNick));
	memcpy_s(&OnFriendMessageReceived_Params.Message, sizeof(OnFriendMessageReceived_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnOnFriendMessageReceived, &OnFriendMessageReceived_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<struct FOnlineFriendMessage> FriendMessages                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendMessages(uint8_t LocalUserNum, class TArray<struct FOnlineFriendMessage>& outFriendMessages)
{
	static UFunction* uFnGetFriendMessages = nullptr;

	if (!uFnGetFriendMessages)
	{
		uFnGetFriendMessages = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages");
	}

	UOnlineSubsystemSteamworks_execGetFriendMessages_Params GetFriendMessages_Params;
	memset(&GetFriendMessages_Params, 0, sizeof(GetFriendMessages_Params));
	if (!uFnGetFriendMessages)
	{
		return;
	}

	GetFriendMessages_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&GetFriendMessages_Params.FriendMessages, sizeof(GetFriendMessages_Params.FriendMessages), &outFriendMessages, sizeof(outFriendMessages));

	this->ProcessEvent(uFnGetFriendMessages, &GetFriendMessages_Params, nullptr);

	memcpy_s(&outFriendMessages, sizeof(outFriendMessages), &GetFriendMessages_Params.FriendMessages, sizeof(GetFriendMessages_Params.FriendMessages));
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnClearJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnClearJoinFriendGameCompleteDelegate)
	{
		uFnClearJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Params ClearJoinFriendGameCompleteDelegate_Params;
	memset(&ClearJoinFriendGameCompleteDelegate_Params, 0, sizeof(ClearJoinFriendGameCompleteDelegate_Params));
	if (!uFnClearJoinFriendGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, sizeof(ClearJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate), &JoinFriendGameCompleteDelegate, sizeof(JoinFriendGameCompleteDelegate));

	this->ProcessEvent(uFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnAddJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnAddJoinFriendGameCompleteDelegate)
	{
		uFnAddJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Params AddJoinFriendGameCompleteDelegate_Params;
	memset(&AddJoinFriendGameCompleteDelegate_Params, 0, sizeof(AddJoinFriendGameCompleteDelegate_Params));
	if (!uFnAddJoinFriendGameCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, sizeof(AddJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate), &JoinFriendGameCompleteDelegate, sizeof(JoinFriendGameCompleteDelegate));

	this->ProcessEvent(uFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnJoinFriendGameComplete = nullptr;

	if (!uFnOnJoinFriendGameComplete)
	{
		uFnOnJoinFriendGameComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete");
	}

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Params OnJoinFriendGameComplete_Params;
	memset(&OnJoinFriendGameComplete_Params, 0, sizeof(OnJoinFriendGameComplete_Params));
	if (!uFnOnJoinFriendGameComplete)
	{
		return;
	}

	OnJoinFriendGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm)

bool UOnlineSubsystemSteamworks::JoinFriendGame(uint8_t LocalUserNum, const struct FUniqueNetId& Friend)
{
	static UFunction* uFnJoinFriendGame = nullptr;

	if (!uFnJoinFriendGame)
	{
		uFnJoinFriendGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame");
	}

	UOnlineSubsystemSteamworks_execJoinFriendGame_Params JoinFriendGame_Params;
	memset(&JoinFriendGame_Params, 0, sizeof(JoinFriendGame_Params));
	if (!uFnJoinFriendGame)
	{
		return {};
	}

	JoinFriendGame_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&JoinFriendGame_Params.Friend, sizeof(JoinFriendGame_Params.Friend), &Friend, sizeof(Friend));

	auto native_JoinFriendGame = uFnJoinFriendGame->iNative;
	uFnJoinFriendGame->iNative = 0;
	this->ProcessEvent(uFnJoinFriendGame, &JoinFriendGame_Params, nullptr);
	uFnJoinFriendGame->iNative = native_JoinFriendGame;

	return JoinFriendGame_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static UFunction* uFnClearReceivedGameInviteDelegate = nullptr;

	if (!uFnClearReceivedGameInviteDelegate)
	{
		uFnClearReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Params ClearReceivedGameInviteDelegate_Params;
	memset(&ClearReceivedGameInviteDelegate_Params, 0, sizeof(ClearReceivedGameInviteDelegate_Params));
	if (!uFnClearReceivedGameInviteDelegate)
	{
		return;
	}

	ClearReceivedGameInviteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, sizeof(ClearReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate), &ReceivedGameInviteDelegate, sizeof(ReceivedGameInviteDelegate));

	this->ProcessEvent(uFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static UFunction* uFnAddReceivedGameInviteDelegate = nullptr;

	if (!uFnAddReceivedGameInviteDelegate)
	{
		uFnAddReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Params AddReceivedGameInviteDelegate_Params;
	memset(&AddReceivedGameInviteDelegate_Params, 0, sizeof(AddReceivedGameInviteDelegate_Params));
	if (!uFnAddReceivedGameInviteDelegate)
	{
		return;
	}

	AddReceivedGameInviteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, sizeof(AddReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate), &ReceivedGameInviteDelegate, sizeof(ReceivedGameInviteDelegate));

	this->ProcessEvent(uFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviterName                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReceivedGameInvite(uint8_t LocalUserNum, const class FString& InviterName)
{
	static UFunction* uFnOnReceivedGameInvite = nullptr;

	if (!uFnOnReceivedGameInvite)
	{
		uFnOnReceivedGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite");
	}

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params OnReceivedGameInvite_Params;
	memset(&OnReceivedGameInvite_Params, 0, sizeof(OnReceivedGameInvite_Params));
	if (!uFnOnReceivedGameInvite)
	{
		return;
	}

	OnReceivedGameInvite_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&OnReceivedGameInvite_Params.InviterName, sizeof(OnReceivedGameInvite_Params.InviterName), &InviterName, sizeof(InviterName));

	this->ProcessEvent(uFnOnReceivedGameInvite, &OnReceivedGameInvite_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<struct FUniqueNetId> Friends                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends(uint8_t LocalUserNum, const class TArray<struct FUniqueNetId>& Friends, const class FString& optionalText)
{
	static UFunction* uFnSendGameInviteToFriends = nullptr;

	if (!uFnSendGameInviteToFriends)
	{
		uFnSendGameInviteToFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends");
	}

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Params SendGameInviteToFriends_Params;
	memset(&SendGameInviteToFriends_Params, 0, sizeof(SendGameInviteToFriends_Params));
	if (!uFnSendGameInviteToFriends)
	{
		return {};
	}

	SendGameInviteToFriends_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&SendGameInviteToFriends_Params.Friends, sizeof(SendGameInviteToFriends_Params.Friends), &Friends, sizeof(Friends));
	memcpy_s(&SendGameInviteToFriends_Params.Text, sizeof(SendGameInviteToFriends_Params.Text), &optionalText, sizeof(optionalText));

	auto native_SendGameInviteToFriends = uFnSendGameInviteToFriends->iNative;
	uFnSendGameInviteToFriends->iNative = 0;
	this->ProcessEvent(uFnSendGameInviteToFriends, &SendGameInviteToFriends_Params, nullptr);
	uFnSendGameInviteToFriends->iNative = native_SendGameInviteToFriends;

	return SendGameInviteToFriends_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend(uint8_t LocalUserNum, const struct FUniqueNetId& Friend, const class FString& optionalText)
{
	static UFunction* uFnSendGameInviteToFriend = nullptr;

	if (!uFnSendGameInviteToFriend)
	{
		uFnSendGameInviteToFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend");
	}

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Params SendGameInviteToFriend_Params;
	memset(&SendGameInviteToFriend_Params, 0, sizeof(SendGameInviteToFriend_Params));
	if (!uFnSendGameInviteToFriend)
	{
		return {};
	}

	SendGameInviteToFriend_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&SendGameInviteToFriend_Params.Friend, sizeof(SendGameInviteToFriend_Params.Friend), &Friend, sizeof(Friend));
	memcpy_s(&SendGameInviteToFriend_Params.Text, sizeof(SendGameInviteToFriend_Params.Text), &optionalText, sizeof(optionalText));

	auto native_SendGameInviteToFriend = uFnSendGameInviteToFriend->iNative;
	uFnSendGameInviteToFriend->iNative = 0;
	this->ProcessEvent(uFnSendGameInviteToFriend, &SendGameInviteToFriend_Params, nullptr);
	uFnSendGameInviteToFriend->iNative = native_SendGameInviteToFriend;

	return SendGameInviteToFriend_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendMessageToFriendWin(uint8_t LocalUserNum, const struct FUniqueNetId& Friend, const class FString& Message)
{
	static UFunction* uFnSendMessageToFriendWin = nullptr;

	if (!uFnSendMessageToFriendWin)
	{
		uFnSendMessageToFriendWin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend");
	}

	UOnlineSubsystemSteamworks_execSendMessageToFriendWin_Params SendMessageToFriendWin_Params;
	memset(&SendMessageToFriendWin_Params, 0, sizeof(SendMessageToFriendWin_Params));
	if (!uFnSendMessageToFriendWin)
	{
		return {};
	}

	SendMessageToFriendWin_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&SendMessageToFriendWin_Params.Friend, sizeof(SendMessageToFriendWin_Params.Friend), &Friend, sizeof(Friend));
	memcpy_s(&SendMessageToFriendWin_Params.Message, sizeof(SendMessageToFriendWin_Params.Message), &Message, sizeof(Message));

	auto native_SendMessageToFriendWin = uFnSendMessageToFriendWin->iNative;
	uFnSendMessageToFriendWin->iNative = 0;
	this->ProcessEvent(uFnSendMessageToFriendWin, &SendMessageToFriendWin_Params, nullptr);
	uFnSendMessageToFriendWin->iNative = native_SendMessageToFriendWin;

	return SendMessageToFriendWin_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static UFunction* uFnClearFriendInviteReceivedDelegate = nullptr;

	if (!uFnClearFriendInviteReceivedDelegate)
	{
		uFnClearFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Params ClearFriendInviteReceivedDelegate_Params;
	memset(&ClearFriendInviteReceivedDelegate_Params, 0, sizeof(ClearFriendInviteReceivedDelegate_Params));
	if (!uFnClearFriendInviteReceivedDelegate)
	{
		return;
	}

	ClearFriendInviteReceivedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.InviteDelegate, sizeof(ClearFriendInviteReceivedDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static UFunction* uFnAddFriendInviteReceivedDelegate = nullptr;

	if (!uFnAddFriendInviteReceivedDelegate)
	{
		uFnAddFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Params AddFriendInviteReceivedDelegate_Params;
	memset(&AddFriendInviteReceivedDelegate_Params, 0, sizeof(AddFriendInviteReceivedDelegate_Params));
	if (!uFnAddFriendInviteReceivedDelegate)
	{
		return;
	}

	AddFriendInviteReceivedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.InviteDelegate, sizeof(AddFriendInviteReceivedDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm)
// class FString                  RequestingNick                 (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteReceived(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const class FString& RequestingNick, const class FString& Message)
{
	static UFunction* uFnOnFriendInviteReceived = nullptr;

	if (!uFnOnFriendInviteReceived)
	{
		uFnOnFriendInviteReceived = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived");
	}

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Params OnFriendInviteReceived_Params;
	memset(&OnFriendInviteReceived_Params, 0, sizeof(OnFriendInviteReceived_Params));
	if (!uFnOnFriendInviteReceived)
	{
		return;
	}

	OnFriendInviteReceived_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&OnFriendInviteReceived_Params.RequestingPlayer, sizeof(OnFriendInviteReceived_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));
	memcpy_s(&OnFriendInviteReceived_Params.RequestingNick, sizeof(OnFriendInviteReceived_Params.RequestingNick), &RequestingNick, sizeof(RequestingNick));
	memcpy_s(&OnFriendInviteReceived_Params.Message, sizeof(OnFriendInviteReceived_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnOnFriendInviteReceived, &OnFriendInviteReceived_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            FormerFriend                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::RemoveFriend(uint8_t LocalUserNum, const struct FUniqueNetId& FormerFriend)
{
	static UFunction* uFnRemoveFriend = nullptr;

	if (!uFnRemoveFriend)
	{
		uFnRemoveFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend");
	}

	UOnlineSubsystemSteamworks_execRemoveFriend_Params RemoveFriend_Params;
	memset(&RemoveFriend_Params, 0, sizeof(RemoveFriend_Params));
	if (!uFnRemoveFriend)
	{
		return {};
	}

	RemoveFriend_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&RemoveFriend_Params.FormerFriend, sizeof(RemoveFriend_Params.FormerFriend), &FormerFriend, sizeof(FormerFriend));

	auto native_RemoveFriend = uFnRemoveFriend->iNative;
	uFnRemoveFriend->iNative = 0;
	this->ProcessEvent(uFnRemoveFriend, &RemoveFriend_Params, nullptr);
	uFnRemoveFriend->iNative = native_RemoveFriend;

	return RemoveFriend_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm)

bool UOnlineSubsystemSteamworks::DenyFriendInvite(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static UFunction* uFnDenyFriendInvite = nullptr;

	if (!uFnDenyFriendInvite)
	{
		uFnDenyFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite");
	}

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Params DenyFriendInvite_Params;
	memset(&DenyFriendInvite_Params, 0, sizeof(DenyFriendInvite_Params));
	if (!uFnDenyFriendInvite)
	{
		return {};
	}

	DenyFriendInvite_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&DenyFriendInvite_Params.RequestingPlayer, sizeof(DenyFriendInvite_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));

	auto native_DenyFriendInvite = uFnDenyFriendInvite->iNative;
	uFnDenyFriendInvite->iNative = 0;
	this->ProcessEvent(uFnDenyFriendInvite, &DenyFriendInvite_Params, nullptr);
	uFnDenyFriendInvite->iNative = native_DenyFriendInvite;

	return DenyFriendInvite_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm)

bool UOnlineSubsystemSteamworks::AcceptFriendInvite(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static UFunction* uFnAcceptFriendInvite = nullptr;

	if (!uFnAcceptFriendInvite)
	{
		uFnAcceptFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite");
	}

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Params AcceptFriendInvite_Params;
	memset(&AcceptFriendInvite_Params, 0, sizeof(AcceptFriendInvite_Params));
	if (!uFnAcceptFriendInvite)
	{
		return {};
	}

	AcceptFriendInvite_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AcceptFriendInvite_Params.RequestingPlayer, sizeof(AcceptFriendInvite_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));

	auto native_AcceptFriendInvite = uFnAcceptFriendInvite->iNative;
	uFnAcceptFriendInvite->iNative = 0;
	this->ProcessEvent(uFnAcceptFriendInvite, &AcceptFriendInvite_Params, nullptr);
	uFnAcceptFriendInvite->iNative = native_AcceptFriendInvite;

	return AcceptFriendInvite_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static UFunction* uFnClearAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnClearAddFriendByNameCompleteDelegate)
	{
		uFnClearAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Params ClearAddFriendByNameCompleteDelegate_Params;
	memset(&ClearAddFriendByNameCompleteDelegate_Params, 0, sizeof(ClearAddFriendByNameCompleteDelegate_Params));
	if (!uFnClearAddFriendByNameCompleteDelegate)
	{
		return;
	}

	ClearAddFriendByNameCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.FriendDelegate, sizeof(ClearAddFriendByNameCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static UFunction* uFnAddAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnAddAddFriendByNameCompleteDelegate)
	{
		uFnAddAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Params AddAddFriendByNameCompleteDelegate_Params;
	memset(&AddAddFriendByNameCompleteDelegate_Params, 0, sizeof(AddAddFriendByNameCompleteDelegate_Params));
	if (!uFnAddAddFriendByNameCompleteDelegate)
	{
		return;
	}

	AddAddFriendByNameCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.FriendDelegate, sizeof(AddAddFriendByNameCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnAddFriendByNameComplete = nullptr;

	if (!uFnOnAddFriendByNameComplete)
	{
		uFnOnAddFriendByNameComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete");
	}

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Params OnAddFriendByNameComplete_Params;
	memset(&OnAddFriendByNameComplete_Params, 0, sizeof(OnAddFriendByNameComplete_Params));
	if (!uFnOnAddFriendByNameComplete)
	{
		return;
	}

	OnAddFriendByNameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  FriendName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddFriendByName(uint8_t LocalUserNum, const class FString& FriendName, const class FString& optionalMessage)
{
	static UFunction* uFnAddFriendByName = nullptr;

	if (!uFnAddFriendByName)
	{
		uFnAddFriendByName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName");
	}

	UOnlineSubsystemSteamworks_execAddFriendByName_Params AddFriendByName_Params;
	memset(&AddFriendByName_Params, 0, sizeof(AddFriendByName_Params));
	if (!uFnAddFriendByName)
	{
		return {};
	}

	AddFriendByName_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddFriendByName_Params.FriendName, sizeof(AddFriendByName_Params.FriendName), &FriendName, sizeof(FriendName));
	memcpy_s(&AddFriendByName_Params.Message, sizeof(AddFriendByName_Params.Message), &optionalMessage, sizeof(optionalMessage));

	auto native_AddFriendByName = uFnAddFriendByName->iNative;
	uFnAddFriendByName->iNative = 0;
	this->ProcessEvent(uFnAddFriendByName, &AddFriendByName_Params, nullptr);
	uFnAddFriendByName->iNative = native_AddFriendByName;

	return AddFriendByName_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NewFriend                      (CPF_Parm)
// class FString                  Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddFriend(uint8_t LocalUserNum, const struct FUniqueNetId& NewFriend, const class FString& optionalMessage)
{
	static UFunction* uFnAddFriend = nullptr;

	if (!uFnAddFriend)
	{
		uFnAddFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend");
	}

	UOnlineSubsystemSteamworks_execAddFriend_Params AddFriend_Params;
	memset(&AddFriend_Params, 0, sizeof(AddFriend_Params));
	if (!uFnAddFriend)
	{
		return {};
	}

	AddFriend_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddFriend_Params.NewFriend, sizeof(AddFriend_Params.NewFriend), &NewFriend, sizeof(NewFriend));
	memcpy_s(&AddFriend_Params.Message, sizeof(AddFriend_Params.Message), &optionalMessage, sizeof(optionalMessage));

	auto native_AddFriend = uFnAddFriend->iNative;
	uFnAddFriend->iNative = 0;
	this->ProcessEvent(uFnAddFriend, &AddFriend_Params, nullptr);
	uFnAddFriend->iNative = native_AddFriend;

	return AddFriend_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        bWasCanceled                   (CPF_Parm | CPF_OutParm)

class FString UOnlineSubsystemSteamworks::GetKeyboardInputResults(uint8_t& outBWasCanceled)
{
	static UFunction* uFnGetKeyboardInputResults = nullptr;

	if (!uFnGetKeyboardInputResults)
	{
		uFnGetKeyboardInputResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults");
	}

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params GetKeyboardInputResults_Params;
	memset(&GetKeyboardInputResults_Params, 0, sizeof(GetKeyboardInputResults_Params));
	if (!uFnGetKeyboardInputResults)
	{
		return {};
	}

	GetKeyboardInputResults_Params.bWasCanceled = static_cast<uint8_t>(outBWasCanceled);

	this->ProcessEvent(uFnGetKeyboardInputResults, &GetKeyboardInputResults_Params, nullptr);

	outBWasCanceled = static_cast<uint8_t>(outBWasCanceled);

	return GetKeyboardInputResults_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static UFunction* uFnClearKeyboardInputDoneDelegate = nullptr;

	if (!uFnClearKeyboardInputDoneDelegate)
	{
		uFnClearKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params ClearKeyboardInputDoneDelegate_Params;
	memset(&ClearKeyboardInputDoneDelegate_Params, 0, sizeof(ClearKeyboardInputDoneDelegate_Params));
	if (!uFnClearKeyboardInputDoneDelegate)
	{
		return;
	}

	memcpy_s(&ClearKeyboardInputDoneDelegate_Params.InputDelegate, sizeof(ClearKeyboardInputDoneDelegate_Params.InputDelegate), &InputDelegate, sizeof(InputDelegate));

	this->ProcessEvent(uFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static UFunction* uFnAddKeyboardInputDoneDelegate = nullptr;

	if (!uFnAddKeyboardInputDoneDelegate)
	{
		uFnAddKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params AddKeyboardInputDoneDelegate_Params;
	memset(&AddKeyboardInputDoneDelegate_Params, 0, sizeof(AddKeyboardInputDoneDelegate_Params));
	if (!uFnAddKeyboardInputDoneDelegate)
	{
		return;
	}

	memcpy_s(&AddKeyboardInputDoneDelegate_Params.InputDelegate, sizeof(AddKeyboardInputDoneDelegate_Params.InputDelegate), &InputDelegate, sizeof(InputDelegate));

	this->ProcessEvent(uFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnKeyboardInputComplete = nullptr;

	if (!uFnOnKeyboardInputComplete)
	{
		uFnOnKeyboardInputComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete");
	}

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params OnKeyboardInputComplete_Params;
	memset(&OnKeyboardInputComplete_Params, 0, sizeof(OnKeyboardInputComplete_Params));
	if (!uFnOnKeyboardInputComplete)
	{
		return;
	}

	OnKeyboardInputComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  TitleText                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DescriptionText                (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bIsPassword                    (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bShouldValidate                (CPF_OptionalParm | CPF_Parm)
// class FString                  DefaultText                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MaxResultLength                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(uint8_t LocalUserNum, const class FString& TitleText, const class FString& DescriptionText, bool optionalBIsPassword, bool optionalBShouldValidate, const class FString& optionalDefaultText, int32_t optionalMaxResultLength)
{
	static UFunction* uFnShowKeyboardUI = nullptr;

	if (!uFnShowKeyboardUI)
	{
		uFnShowKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI");
	}

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Params ShowKeyboardUI_Params;
	memset(&ShowKeyboardUI_Params, 0, sizeof(ShowKeyboardUI_Params));
	if (!uFnShowKeyboardUI)
	{
		return {};
	}

	ShowKeyboardUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ShowKeyboardUI_Params.TitleText, sizeof(ShowKeyboardUI_Params.TitleText), &TitleText, sizeof(TitleText));
	memcpy_s(&ShowKeyboardUI_Params.DescriptionText, sizeof(ShowKeyboardUI_Params.DescriptionText), &DescriptionText, sizeof(DescriptionText));
	ShowKeyboardUI_Params.bIsPassword = optionalBIsPassword;
	ShowKeyboardUI_Params.bShouldValidate = optionalBShouldValidate;
	memcpy_s(&ShowKeyboardUI_Params.DefaultText, sizeof(ShowKeyboardUI_Params.DefaultText), &optionalDefaultText, sizeof(optionalDefaultText));
	ShowKeyboardUI_Params.MaxResultLength = optionalMaxResultLength;

	auto native_ShowKeyboardUI = uFnShowKeyboardUI->iNative;
	uFnShowKeyboardUI->iNative = 0;
	this->ProcessEvent(uFnShowKeyboardUI, &ShowKeyboardUI_Params, nullptr);
	uFnShowKeyboardUI->iNative = native_ShowKeyboardUI;

	return ShowKeyboardUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        StatusId                       (CPF_Parm)
// class TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class TArray<struct FSettingsProperty> Properties                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, class TArray<struct FLocalizedStringSetting>& outLocalizedStringSettings, class TArray<struct FSettingsProperty>& outProperties)
{
	static UFunction* uFnSetOnlineStatus = nullptr;

	if (!uFnSetOnlineStatus)
	{
		uFnSetOnlineStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus");
	}

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Params SetOnlineStatus_Params;
	memset(&SetOnlineStatus_Params, 0, sizeof(SetOnlineStatus_Params));
	if (!uFnSetOnlineStatus)
	{
		return;
	}

	SetOnlineStatus_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	SetOnlineStatus_Params.StatusId = StatusId;
	memcpy_s(&SetOnlineStatus_Params.LocalizedStringSettings, sizeof(SetOnlineStatus_Params.LocalizedStringSettings), &outLocalizedStringSettings, sizeof(outLocalizedStringSettings));
	memcpy_s(&SetOnlineStatus_Params.Properties, sizeof(SetOnlineStatus_Params.Properties), &outProperties, sizeof(outProperties));

	auto native_SetOnlineStatus = uFnSetOnlineStatus->iNative;
	uFnSetOnlineStatus->iNative = 0;
	this->ProcessEvent(uFnSetOnlineStatus, &SetOnlineStatus_Params, nullptr);
	uFnSetOnlineStatus->iNative = native_SetOnlineStatus;

	memcpy_s(&outLocalizedStringSettings, sizeof(outLocalizedStringSettings), &SetOnlineStatus_Params.LocalizedStringSettings, sizeof(SetOnlineStatus_Params.LocalizedStringSettings));
	memcpy_s(&outProperties, sizeof(outProperties), &SetOnlineStatus_Params.Properties, sizeof(SetOnlineStatus_Params.Properties));
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FOnlineFriend> Friends                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt, class TArray<struct FOnlineFriend>& outFriends)
{
	static UFunction* uFnGetFriendsList = nullptr;

	if (!uFnGetFriendsList)
	{
		uFnGetFriendsList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList");
	}

	UOnlineSubsystemSteamworks_execGetFriendsList_Params GetFriendsList_Params;
	memset(&GetFriendsList_Params, 0, sizeof(GetFriendsList_Params));
	if (!uFnGetFriendsList)
	{
		return {};
	}

	GetFriendsList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	GetFriendsList_Params.Count = optionalCount;
	GetFriendsList_Params.StartingAt = optionalStartingAt;
	memcpy_s(&GetFriendsList_Params.Friends, sizeof(GetFriendsList_Params.Friends), &outFriends, sizeof(outFriends));

	auto native_GetFriendsList = uFnGetFriendsList->iNative;
	uFnGetFriendsList->iNative = 0;
	this->ProcessEvent(uFnGetFriendsList, &GetFriendsList_Params, nullptr);
	uFnGetFriendsList->iNative = native_GetFriendsList;

	memcpy_s(&outFriends, sizeof(outFriends), &GetFriendsList_Params.Friends, sizeof(GetFriendsList_Params.Friends));

	return static_cast<EOnlineEnumerationReadState>(GetFriendsList_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static UFunction* uFnClearReadFriendsCompleteDelegate = nullptr;

	if (!uFnClearReadFriendsCompleteDelegate)
	{
		uFnClearReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params ClearReadFriendsCompleteDelegate_Params;
	memset(&ClearReadFriendsCompleteDelegate_Params, 0, sizeof(ClearReadFriendsCompleteDelegate_Params));
	if (!uFnClearReadFriendsCompleteDelegate)
	{
		return;
	}

	ClearReadFriendsCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, sizeof(ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate), &ReadFriendsCompleteDelegate, sizeof(ReadFriendsCompleteDelegate));

	this->ProcessEvent(uFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static UFunction* uFnAddReadFriendsCompleteDelegate = nullptr;

	if (!uFnAddReadFriendsCompleteDelegate)
	{
		uFnAddReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params AddReadFriendsCompleteDelegate_Params;
	memset(&AddReadFriendsCompleteDelegate_Params, 0, sizeof(AddReadFriendsCompleteDelegate_Params));
	if (!uFnAddReadFriendsCompleteDelegate)
	{
		return;
	}

	AddReadFriendsCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, sizeof(AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate), &ReadFriendsCompleteDelegate, sizeof(ReadFriendsCompleteDelegate));

	this->ProcessEvent(uFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadFriendsComplete = nullptr;

	if (!uFnOnReadFriendsComplete)
	{
		uFnOnReadFriendsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params OnReadFriendsComplete_Params;
	memset(&OnReadFriendsComplete_Params, 0, sizeof(OnReadFriendsComplete_Params));
	if (!uFnOnReadFriendsComplete)
	{
		return;
	}

	OnReadFriendsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadFriendsComplete, &OnReadFriendsComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt)
{
	static UFunction* uFnReadFriendsList = nullptr;

	if (!uFnReadFriendsList)
	{
		uFnReadFriendsList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList");
	}

	UOnlineSubsystemSteamworks_execReadFriendsList_Params ReadFriendsList_Params;
	memset(&ReadFriendsList_Params, 0, sizeof(ReadFriendsList_Params));
	if (!uFnReadFriendsList)
	{
		return {};
	}

	ReadFriendsList_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadFriendsList_Params.Count = optionalCount;
	ReadFriendsList_Params.StartingAt = optionalStartingAt;

	auto native_ReadFriendsList = uFnReadFriendsList->iNative;
	uFnReadFriendsList->iNative = 0;
	this->ProcessEvent(uFnReadFriendsList, &ReadFriendsList_Params, nullptr);
	uFnReadFriendsList->iNative = native_ReadFriendsList;

	return ReadFriendsList_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static UFunction* uFnClearWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearWritePlayerStorageCompleteDelegate)
	{
		uFnClearWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params ClearWritePlayerStorageCompleteDelegate_Params;
	memset(&ClearWritePlayerStorageCompleteDelegate_Params, 0, sizeof(ClearWritePlayerStorageCompleteDelegate_Params));
	if (!uFnClearWritePlayerStorageCompleteDelegate)
	{
		return;
	}

	ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate, sizeof(ClearWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate), &WritePlayerStorageCompleteDelegate, sizeof(WritePlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static UFunction* uFnAddWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddWritePlayerStorageCompleteDelegate)
	{
		uFnAddWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params AddWritePlayerStorageCompleteDelegate_Params;
	memset(&AddWritePlayerStorageCompleteDelegate_Params, 0, sizeof(AddWritePlayerStorageCompleteDelegate_Params));
	if (!uFnAddWritePlayerStorageCompleteDelegate)
	{
		return;
	}

	AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate, sizeof(AddWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate), &WritePlayerStorageCompleteDelegate, sizeof(WritePlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnWritePlayerStorageComplete = nullptr;

	if (!uFnOnWritePlayerStorageComplete)
	{
		uFnOnWritePlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete");
	}

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params OnWritePlayerStorageComplete_Params;
	memset(&OnWritePlayerStorageComplete_Params, 0, sizeof(OnWritePlayerStorageComplete_Params));
	if (!uFnOnWritePlayerStorageComplete)
	{
		return;
	}

	OnWritePlayerStorageComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	OnWritePlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] (FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID)
{
	static UFunction* uFnWritePlayerStorage = nullptr;

	if (!uFnWritePlayerStorage)
	{
		uFnWritePlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage");
	}

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Params WritePlayerStorage_Params;
	memset(&WritePlayerStorage_Params, 0, sizeof(WritePlayerStorage_Params));
	if (!uFnWritePlayerStorage)
	{
		return {};
	}

	WritePlayerStorage_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	WritePlayerStorage_Params.PlayerStorage = PlayerStorage;
	WritePlayerStorage_Params.DeviceID = optionalDeviceID;

	this->ProcessEvent(uFnWritePlayerStorage, &WritePlayerStorage_Params, nullptr);

	return WritePlayerStorage_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlinePlayerStorage*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerStorage = nullptr;

	if (!uFnGetPlayerStorage)
	{
		uFnGetPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage");
	}

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Params GetPlayerStorage_Params;
	memset(&GetPlayerStorage_Params, 0, sizeof(GetPlayerStorage_Params));
	if (!uFnGetPlayerStorage)
	{
		return {};
	}

	GetPlayerStorage_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnGetPlayerStorage, &GetPlayerStorage_Params, nullptr);

	return GetPlayerStorage_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* uFnClearReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnClearReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params ClearReadPlayerStorageForNetIdCompleteDelegate_Params;
	memset(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params, 0, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params));
	if (!uFnClearReadPlayerStorageForNetIdCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate), &ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ReadPlayerStorageForNetIdCompleteDelegate));

	this->ProcessEvent(uFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* uFnAddReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnAddReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params AddReadPlayerStorageForNetIdCompleteDelegate_Params;
	memset(&AddReadPlayerStorageForNetIdCompleteDelegate_Params, 0, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params));
	if (!uFnAddReadPlayerStorageForNetIdCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate), &ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ReadPlayerStorageForNetIdCompleteDelegate));

	this->ProcessEvent(uFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageForNetIdComplete = nullptr;

	if (!uFnOnReadPlayerStorageForNetIdComplete)
	{
		uFnOnReadPlayerStorageForNetIdComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params OnReadPlayerStorageForNetIdComplete_Params;
	memset(&OnReadPlayerStorageForNetIdComplete_Params, 0, sizeof(OnReadPlayerStorageForNetIdComplete_Params));
	if (!uFnOnReadPlayerStorageForNetIdComplete)
	{
		return;
	}

	memcpy_s(&OnReadPlayerStorageForNetIdComplete_Params.NetId, sizeof(OnReadPlayerStorageForNetIdComplete_Params.NetId), &NetId, sizeof(NetId));
	OnReadPlayerStorageForNetIdComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(uint8_t LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* uFnReadPlayerStorageForNetId = nullptr;

	if (!uFnReadPlayerStorageForNetId)
	{
		uFnReadPlayerStorageForNetId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId");
	}

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params ReadPlayerStorageForNetId_Params;
	memset(&ReadPlayerStorageForNetId_Params, 0, sizeof(ReadPlayerStorageForNetId_Params));
	if (!uFnReadPlayerStorageForNetId)
	{
		return {};
	}

	ReadPlayerStorageForNetId_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ReadPlayerStorageForNetId_Params.NetId, sizeof(ReadPlayerStorageForNetId_Params.NetId), &NetId, sizeof(NetId));
	ReadPlayerStorageForNetId_Params.PlayerStorage = PlayerStorage;

	this->ProcessEvent(uFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Params, nullptr);

	return ReadPlayerStorageForNetId_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static UFunction* uFnClearReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageCompleteDelegate)
	{
		uFnClearReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params ClearReadPlayerStorageCompleteDelegate_Params;
	memset(&ClearReadPlayerStorageCompleteDelegate_Params, 0, sizeof(ClearReadPlayerStorageCompleteDelegate_Params));
	if (!uFnClearReadPlayerStorageCompleteDelegate)
	{
		return;
	}

	ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate, sizeof(ClearReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate), &ReadPlayerStorageCompleteDelegate, sizeof(ReadPlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static UFunction* uFnAddReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageCompleteDelegate)
	{
		uFnAddReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params AddReadPlayerStorageCompleteDelegate_Params;
	memset(&AddReadPlayerStorageCompleteDelegate_Params, 0, sizeof(AddReadPlayerStorageCompleteDelegate_Params));
	if (!uFnAddReadPlayerStorageCompleteDelegate)
	{
		return;
	}

	AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate, sizeof(AddReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate), &ReadPlayerStorageCompleteDelegate, sizeof(ReadPlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageComplete = nullptr;

	if (!uFnOnReadPlayerStorageComplete)
	{
		uFnOnReadPlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params OnReadPlayerStorageComplete_Params;
	memset(&OnReadPlayerStorageComplete_Params, 0, sizeof(OnReadPlayerStorageComplete_Params));
	if (!uFnOnReadPlayerStorageComplete)
	{
		return;
	}

	OnReadPlayerStorageComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	OnReadPlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] (FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID)
{
	static UFunction* uFnReadPlayerStorage = nullptr;

	if (!uFnReadPlayerStorage)
	{
		uFnReadPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage");
	}

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Params ReadPlayerStorage_Params;
	memset(&ReadPlayerStorage_Params, 0, sizeof(ReadPlayerStorage_Params));
	if (!uFnReadPlayerStorage)
	{
		return {};
	}

	ReadPlayerStorage_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadPlayerStorage_Params.PlayerStorage = PlayerStorage;
	ReadPlayerStorage_Params.DeviceID = optionalDeviceID;

	this->ProcessEvent(uFnReadPlayerStorage, &ReadPlayerStorage_Params, nullptr);

	return ReadPlayerStorage_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            FriendUID                      (CPF_Parm)
// class FString                  ServerURL                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  ServerUID                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetFriendJoinURL(const struct FUniqueNetId& FriendUID, class FString& outServerURL, class FString& outServerUID)
{
	static UFunction* uFnGetFriendJoinURL = nullptr;

	if (!uFnGetFriendJoinURL)
	{
		uFnGetFriendJoinURL = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL");
	}

	UOnlineSubsystemSteamworks_execGetFriendJoinURL_Params GetFriendJoinURL_Params;
	memset(&GetFriendJoinURL_Params, 0, sizeof(GetFriendJoinURL_Params));
	if (!uFnGetFriendJoinURL)
	{
		return {};
	}

	memcpy_s(&GetFriendJoinURL_Params.FriendUID, sizeof(GetFriendJoinURL_Params.FriendUID), &FriendUID, sizeof(FriendUID));
	memcpy_s(&GetFriendJoinURL_Params.ServerURL, sizeof(GetFriendJoinURL_Params.ServerURL), &outServerURL, sizeof(outServerURL));
	memcpy_s(&GetFriendJoinURL_Params.ServerUID, sizeof(GetFriendJoinURL_Params.ServerUID), &outServerUID, sizeof(outServerUID));

	auto native_GetFriendJoinURL = uFnGetFriendJoinURL->iNative;
	uFnGetFriendJoinURL->iNative = 0;
	this->ProcessEvent(uFnGetFriendJoinURL, &GetFriendJoinURL_Params, nullptr);
	uFnGetFriendJoinURL->iNative = native_GetFriendJoinURL;

	memcpy_s(&outServerURL, sizeof(outServerURL), &GetFriendJoinURL_Params.ServerURL, sizeof(GetFriendJoinURL_Params.ServerURL));
	memcpy_s(&outServerUID, sizeof(outServerUID), &GetFriendJoinURL_Params.ServerUID, sizeof(GetFriendJoinURL_Params.ServerUID));

	return GetFriendJoinURL_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bMarkAsJoined                  (CPF_Parm)
// class FString                  ServerURL                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  ServerUID                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL(bool bMarkAsJoined, class FString& outServerURL, class FString& outServerUID)
{
	static UFunction* uFnGetCommandlineJoinURL = nullptr;

	if (!uFnGetCommandlineJoinURL)
	{
		uFnGetCommandlineJoinURL = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL");
	}

	UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Params GetCommandlineJoinURL_Params;
	memset(&GetCommandlineJoinURL_Params, 0, sizeof(GetCommandlineJoinURL_Params));
	if (!uFnGetCommandlineJoinURL)
	{
		return {};
	}

	GetCommandlineJoinURL_Params.bMarkAsJoined = bMarkAsJoined;
	memcpy_s(&GetCommandlineJoinURL_Params.ServerURL, sizeof(GetCommandlineJoinURL_Params.ServerURL), &outServerURL, sizeof(outServerURL));
	memcpy_s(&GetCommandlineJoinURL_Params.ServerUID, sizeof(GetCommandlineJoinURL_Params.ServerUID), &outServerUID, sizeof(outServerUID));

	auto native_GetCommandlineJoinURL = uFnGetCommandlineJoinURL->iNative;
	uFnGetCommandlineJoinURL->iNative = 0;
	this->ProcessEvent(uFnGetCommandlineJoinURL, &GetCommandlineJoinURL_Params, nullptr);
	uFnGetCommandlineJoinURL->iNative = native_GetCommandlineJoinURL;

	memcpy_s(&outServerURL, sizeof(outServerURL), &GetCommandlineJoinURL_Params.ServerURL, sizeof(GetCommandlineJoinURL_Params.ServerURL));
	memcpy_s(&outServerUID, sizeof(outServerUID), &GetCommandlineJoinURL_Params.ServerUID, sizeof(GetCommandlineJoinURL_Params.ServerUID));

	return GetCommandlineJoinURL_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UIDString                      (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            OutUID                         (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId(const class FString& UIDString, struct FUniqueNetId& outOutUID)
{
	static UFunction* uFnInt64ToUniqueNetId = nullptr;

	if (!uFnInt64ToUniqueNetId)
	{
		uFnInt64ToUniqueNetId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId");
	}

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params Int64ToUniqueNetId_Params;
	memset(&Int64ToUniqueNetId_Params, 0, sizeof(Int64ToUniqueNetId_Params));
	if (!uFnInt64ToUniqueNetId)
	{
		return {};
	}

	memcpy_s(&Int64ToUniqueNetId_Params.UIDString, sizeof(Int64ToUniqueNetId_Params.UIDString), &UIDString, sizeof(UIDString));
	memcpy_s(&Int64ToUniqueNetId_Params.OutUID, sizeof(Int64ToUniqueNetId_Params.OutUID), &outOutUID, sizeof(outOutUID));

	auto native_Int64ToUniqueNetId = uFnInt64ToUniqueNetId->iNative;
	uFnInt64ToUniqueNetId->iNative = 0;
	this->ProcessEvent(uFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Params, nullptr);
	uFnInt64ToUniqueNetId->iNative = native_Int64ToUniqueNetId;

	memcpy_s(&outOutUID, sizeof(outOutUID), &Int64ToUniqueNetId_Params.OutUID, sizeof(Int64ToUniqueNetId_Params.OutUID));

	return Int64ToUniqueNetId_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm)

class FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64(struct FUniqueNetId& outUid)
{
	static UFunction* uFnUniqueNetIdToInt64 = nullptr;

	if (!uFnUniqueNetIdToInt64)
	{
		uFnUniqueNetIdToInt64 = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64");
	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params UniqueNetIdToInt64_Params;
	memset(&UniqueNetIdToInt64_Params, 0, sizeof(UniqueNetIdToInt64_Params));
	if (!uFnUniqueNetIdToInt64)
	{
		return {};
	}

	memcpy_s(&UniqueNetIdToInt64_Params.Uid, sizeof(UniqueNetIdToInt64_Params.Uid), &outUid, sizeof(outUid));

	auto native_UniqueNetIdToInt64 = uFnUniqueNetIdToInt64->iNative;
	uFnUniqueNetIdToInt64->iNative = 0;
	this->ProcessEvent(uFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Params, nullptr);
	uFnUniqueNetIdToInt64->iNative = native_UniqueNetIdToInt64;

	memcpy_s(&outUid, sizeof(outUid), &UniqueNetIdToInt64_Params.Uid, sizeof(UniqueNetIdToInt64_Params.Uid));

	return UniqueNetIdToInt64_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  SubURL                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerUID                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowProfileUI(uint8_t LocalUserNum, const class FString& optionalSubURL, const struct FUniqueNetId& optionalPlayerUID)
{
	static UFunction* uFnShowProfileUI = nullptr;

	if (!uFnShowProfileUI)
	{
		uFnShowProfileUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI");
	}

	UOnlineSubsystemSteamworks_execShowProfileUI_Params ShowProfileUI_Params;
	memset(&ShowProfileUI_Params, 0, sizeof(ShowProfileUI_Params));
	if (!uFnShowProfileUI)
	{
		return {};
	}

	ShowProfileUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ShowProfileUI_Params.SubURL, sizeof(ShowProfileUI_Params.SubURL), &optionalSubURL, sizeof(optionalSubURL));
	memcpy_s(&ShowProfileUI_Params.PlayerUID, sizeof(ShowProfileUI_Params.PlayerUID), &optionalPlayerUID, sizeof(optionalPlayerUID));

	auto native_ShowProfileUI = uFnShowProfileUI->iNative;
	uFnShowProfileUI->iNative = 0;
	this->ProcessEvent(uFnShowProfileUI, &ShowProfileUI_Params, nullptr);
	uFnShowProfileUI->iNative = native_ShowProfileUI;

	return ShowProfileUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm)

class FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName(struct FUniqueNetId& outUid)
{
	static UFunction* uFnUniqueNetIdToPlayerName = nullptr;

	if (!uFnUniqueNetIdToPlayerName)
	{
		uFnUniqueNetIdToPlayerName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName");
	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params UniqueNetIdToPlayerName_Params;
	memset(&UniqueNetIdToPlayerName_Params, 0, sizeof(UniqueNetIdToPlayerName_Params));
	if (!uFnUniqueNetIdToPlayerName)
	{
		return {};
	}

	memcpy_s(&UniqueNetIdToPlayerName_Params.Uid, sizeof(UniqueNetIdToPlayerName_Params.Uid), &outUid, sizeof(outUid));

	auto native_UniqueNetIdToPlayerName = uFnUniqueNetIdToPlayerName->iNative;
	uFnUniqueNetIdToPlayerName->iNative = 0;
	this->ProcessEvent(uFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Params, nullptr);
	uFnUniqueNetIdToPlayerName->iNative = native_UniqueNetIdToPlayerName;

	memcpy_s(&outUid, sizeof(outUid), &UniqueNetIdToPlayerName_Params.Uid, sizeof(UniqueNetIdToPlayerName_Params.Uid));

	return UniqueNetIdToPlayerName_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FSteamPlayerClanData> Results                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetSteamClanData(class TArray<struct FSteamPlayerClanData>& outResults)
{
	static UFunction* uFnGetSteamClanData = nullptr;

	if (!uFnGetSteamClanData)
	{
		uFnGetSteamClanData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData");
	}

	UOnlineSubsystemSteamworks_execGetSteamClanData_Params GetSteamClanData_Params;
	memset(&GetSteamClanData_Params, 0, sizeof(GetSteamClanData_Params));
	if (!uFnGetSteamClanData)
	{
		return;
	}

	memcpy_s(&GetSteamClanData_Params.Results, sizeof(GetSteamClanData_Params.Results), &outResults, sizeof(outResults));

	auto native_GetSteamClanData = uFnGetSteamClanData->iNative;
	uFnGetSteamClanData->iNative = 0;
	this->ProcessEvent(uFnGetSteamClanData, &GetSteamClanData_Params, nullptr);
	uFnGetSteamClanData->iNative = native_GetSteamClanData;

	memcpy_s(&outResults, sizeof(outResults), &GetSteamClanData_Params.Results, sizeof(GetSteamClanData_Params.Results));
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* uFnClearGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!uFnClearGetNumberOfCurrentPlayersCompleteDelegate)
	{
		uFnClearGetNumberOfCurrentPlayersCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params ClearGetNumberOfCurrentPlayersCompleteDelegate_Params;
	memset(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Params, 0, sizeof(ClearGetNumberOfCurrentPlayersCompleteDelegate_Params));
	if (!uFnClearGetNumberOfCurrentPlayersCompleteDelegate)
	{
		return;
	}

	memcpy_s(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate, sizeof(ClearGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate), &GetNumberOfCurrentPlayersCompleteDelegate, sizeof(GetNumberOfCurrentPlayersCompleteDelegate));

	this->ProcessEvent(uFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* uFnAddGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!uFnAddGetNumberOfCurrentPlayersCompleteDelegate)
	{
		uFnAddGetNumberOfCurrentPlayersCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params AddGetNumberOfCurrentPlayersCompleteDelegate_Params;
	memset(&AddGetNumberOfCurrentPlayersCompleteDelegate_Params, 0, sizeof(AddGetNumberOfCurrentPlayersCompleteDelegate_Params));
	if (!uFnAddGetNumberOfCurrentPlayersCompleteDelegate)
	{
		return;
	}

	memcpy_s(&AddGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate, sizeof(AddGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate), &GetNumberOfCurrentPlayersCompleteDelegate, sizeof(GetNumberOfCurrentPlayersCompleteDelegate));

	this->ProcessEvent(uFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        TotalPlayers                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete(int32_t TotalPlayers)
{
	static UFunction* uFnOnGetNumberOfCurrentPlayersComplete = nullptr;

	if (!uFnOnGetNumberOfCurrentPlayersComplete)
	{
		uFnOnGetNumberOfCurrentPlayersComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete");
	}

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Params OnGetNumberOfCurrentPlayersComplete_Params;
	memset(&OnGetNumberOfCurrentPlayersComplete_Params, 0, sizeof(OnGetNumberOfCurrentPlayersComplete_Params));
	if (!uFnOnGetNumberOfCurrentPlayersComplete)
	{
		return;
	}

	OnGetNumberOfCurrentPlayersComplete_Params.TotalPlayers = TotalPlayers;

	this->ProcessEvent(uFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers()
{
	static UFunction* uFnGetNumberOfCurrentPlayers = nullptr;

	if (!uFnGetNumberOfCurrentPlayers)
	{
		uFnGetNumberOfCurrentPlayers = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers");
	}

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Params GetNumberOfCurrentPlayers_Params;
	memset(&GetNumberOfCurrentPlayers_Params, 0, sizeof(GetNumberOfCurrentPlayers_Params));
	if (!uFnGetNumberOfCurrentPlayers)
	{
		return {};
	}


	auto native_GetNumberOfCurrentPlayers = uFnGetNumberOfCurrentPlayers->iNative;
	uFnGetNumberOfCurrentPlayers->iNative = 0;
	this->ProcessEvent(uFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Params, nullptr);
	uFnGetNumberOfCurrentPlayers->iNative = native_GetNumberOfCurrentPlayers;

	return GetNumberOfCurrentPlayers_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearWriteProfileSettingsCompleteDelegate)
	{
		uFnClearWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params ClearWriteProfileSettingsCompleteDelegate_Params;
	memset(&ClearWriteProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params));
	if (!uFnClearWriteProfileSettingsCompleteDelegate)
	{
		return;
	}

	ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddWriteProfileSettingsCompleteDelegate)
	{
		uFnAddWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params AddWriteProfileSettingsCompleteDelegate_Params;
	memset(&AddWriteProfileSettingsCompleteDelegate_Params, 0, sizeof(AddWriteProfileSettingsCompleteDelegate_Params));
	if (!uFnAddWriteProfileSettingsCompleteDelegate)
	{
		return;
	}

	AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnWriteProfileSettingsComplete = nullptr;

	if (!uFnOnWriteProfileSettingsComplete)
	{
		uFnOnWriteProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params OnWriteProfileSettingsComplete_Params;
	memset(&OnWriteProfileSettingsComplete_Params, 0, sizeof(OnWriteProfileSettingsComplete_Params));
	if (!uFnOnWriteProfileSettingsComplete)
	{
		return;
	}

	OnWriteProfileSettingsComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	OnWriteProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnWriteProfileSettings = nullptr;

	if (!uFnWriteProfileSettings)
	{
		uFnWriteProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings");
	}

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Params WriteProfileSettings_Params;
	memset(&WriteProfileSettings_Params, 0, sizeof(WriteProfileSettings_Params));
	if (!uFnWriteProfileSettings)
	{
		return {};
	}

	WriteProfileSettings_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	WriteProfileSettings_Params.ProfileSettings = ProfileSettings;

	auto native_WriteProfileSettings = uFnWriteProfileSettings->iNative;
	uFnWriteProfileSettings->iNative = 0;
	this->ProcessEvent(uFnWriteProfileSettings, &WriteProfileSettings_Params, nullptr);
	uFnWriteProfileSettings->iNative = native_WriteProfileSettings;

	return WriteProfileSettings_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings(uint8_t LocalUserNum)
{
	static UFunction* uFnGetProfileSettings = nullptr;

	if (!uFnGetProfileSettings)
	{
		uFnGetProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings");
	}

	UOnlineSubsystemSteamworks_execGetProfileSettings_Params GetProfileSettings_Params;
	memset(&GetProfileSettings_Params, 0, sizeof(GetProfileSettings_Params));
	if (!uFnGetProfileSettings)
	{
		return {};
	}

	GetProfileSettings_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnGetProfileSettings, &GetProfileSettings_Params, nullptr);

	return GetProfileSettings_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadProfileSettingsCompleteDelegate)
	{
		uFnClearReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params ClearReadProfileSettingsCompleteDelegate_Params;
	memset(&ClearReadProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearReadProfileSettingsCompleteDelegate_Params));
	if (!uFnClearReadProfileSettingsCompleteDelegate)
	{
		return;
	}

	ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadProfileSettingsCompleteDelegate)
	{
		uFnAddReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params AddReadProfileSettingsCompleteDelegate_Params;
	memset(&AddReadProfileSettingsCompleteDelegate_Params, 0, sizeof(AddReadProfileSettingsCompleteDelegate_Params));
	if (!uFnAddReadProfileSettingsCompleteDelegate)
	{
		return;
	}

	AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnReadProfileSettingsComplete = nullptr;

	if (!uFnOnReadProfileSettingsComplete)
	{
		uFnOnReadProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params OnReadProfileSettingsComplete_Params;
	memset(&OnReadProfileSettingsComplete_Params, 0, sizeof(OnReadProfileSettingsComplete_Params));
	if (!uFnOnReadProfileSettingsComplete)
	{
		return;
	}

	OnReadProfileSettingsComplete_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	OnReadProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadProfileSettings = nullptr;

	if (!uFnReadProfileSettings)
	{
		uFnReadProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings");
	}

	UOnlineSubsystemSteamworks_execReadProfileSettings_Params ReadProfileSettings_Params;
	memset(&ReadProfileSettings_Params, 0, sizeof(ReadProfileSettings_Params));
	if (!uFnReadProfileSettings)
	{
		return {};
	}

	ReadProfileSettings_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	ReadProfileSettings_Params.ProfileSettings = ProfileSettings;

	auto native_ReadProfileSettings = uFnReadProfileSettings->iNative;
	uFnReadProfileSettings->iNative = 0;
	this->ProcessEvent(uFnReadProfileSettings, &ReadProfileSettings_Params, nullptr);
	uFnReadProfileSettings->iNative = native_ReadProfileSettings;

	return ReadProfileSettings_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static UFunction* uFnClearFriendsChangeDelegate = nullptr;

	if (!uFnClearFriendsChangeDelegate)
	{
		uFnClearFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Params ClearFriendsChangeDelegate_Params;
	memset(&ClearFriendsChangeDelegate_Params, 0, sizeof(ClearFriendsChangeDelegate_Params));
	if (!uFnClearFriendsChangeDelegate)
	{
		return;
	}

	ClearFriendsChangeDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearFriendsChangeDelegate_Params.FriendsDelegate, sizeof(ClearFriendsChangeDelegate_Params.FriendsDelegate), &FriendsDelegate, sizeof(FriendsDelegate));

	this->ProcessEvent(uFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static UFunction* uFnAddFriendsChangeDelegate = nullptr;

	if (!uFnAddFriendsChangeDelegate)
	{
		uFnAddFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Params AddFriendsChangeDelegate_Params;
	memset(&AddFriendsChangeDelegate_Params, 0, sizeof(AddFriendsChangeDelegate_Params));
	if (!uFnAddFriendsChangeDelegate)
	{
		return;
	}

	AddFriendsChangeDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddFriendsChangeDelegate_Params.FriendsDelegate, sizeof(AddFriendsChangeDelegate_Params.FriendsDelegate), &FriendsDelegate, sizeof(FriendsDelegate));

	this->ProcessEvent(uFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static UFunction* uFnClearMutingChangeDelegate = nullptr;

	if (!uFnClearMutingChangeDelegate)
	{
		uFnClearMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Params ClearMutingChangeDelegate_Params;
	memset(&ClearMutingChangeDelegate_Params, 0, sizeof(ClearMutingChangeDelegate_Params));
	if (!uFnClearMutingChangeDelegate)
	{
		return;
	}

	memcpy_s(&ClearMutingChangeDelegate_Params.MutingDelegate, sizeof(ClearMutingChangeDelegate_Params.MutingDelegate), &MutingDelegate, sizeof(MutingDelegate));

	this->ProcessEvent(uFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static UFunction* uFnAddMutingChangeDelegate = nullptr;

	if (!uFnAddMutingChangeDelegate)
	{
		uFnAddMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Params AddMutingChangeDelegate_Params;
	memset(&AddMutingChangeDelegate_Params, 0, sizeof(AddMutingChangeDelegate_Params));
	if (!uFnAddMutingChangeDelegate)
	{
		return;
	}

	memcpy_s(&AddMutingChangeDelegate_Params.MutingDelegate, sizeof(AddMutingChangeDelegate_Params.MutingDelegate), &MutingDelegate, sizeof(MutingDelegate));

	this->ProcessEvent(uFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static UFunction* uFnClearLoginCancelledDelegate = nullptr;

	if (!uFnClearLoginCancelledDelegate)
	{
		uFnClearLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params ClearLoginCancelledDelegate_Params;
	memset(&ClearLoginCancelledDelegate_Params, 0, sizeof(ClearLoginCancelledDelegate_Params));
	if (!uFnClearLoginCancelledDelegate)
	{
		return;
	}

	memcpy_s(&ClearLoginCancelledDelegate_Params.CancelledDelegate, sizeof(ClearLoginCancelledDelegate_Params.CancelledDelegate), &CancelledDelegate, sizeof(CancelledDelegate));

	this->ProcessEvent(uFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static UFunction* uFnAddLoginCancelledDelegate = nullptr;

	if (!uFnAddLoginCancelledDelegate)
	{
		uFnAddLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params AddLoginCancelledDelegate_Params;
	memset(&AddLoginCancelledDelegate_Params, 0, sizeof(AddLoginCancelledDelegate_Params));
	if (!uFnAddLoginCancelledDelegate)
	{
		return;
	}

	memcpy_s(&AddLoginCancelledDelegate_Params.CancelledDelegate, sizeof(AddLoginCancelledDelegate_Params.CancelledDelegate), &CancelledDelegate, sizeof(CancelledDelegate));

	this->ProcessEvent(uFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnClearLoginStatusChangeDelegate = nullptr;

	if (!uFnClearLoginStatusChangeDelegate)
	{
		uFnClearLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params ClearLoginStatusChangeDelegate_Params;
	memset(&ClearLoginStatusChangeDelegate_Params, 0, sizeof(ClearLoginStatusChangeDelegate_Params));
	if (!uFnClearLoginStatusChangeDelegate)
	{
		return;
	}

	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LoginStatusDelegate, sizeof(ClearLoginStatusChangeDelegate_Params.LoginStatusDelegate), &LoginStatusDelegate, sizeof(LoginStatusDelegate));
	ClearLoginStatusChangeDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnAddLoginStatusChangeDelegate = nullptr;

	if (!uFnAddLoginStatusChangeDelegate)
	{
		uFnAddLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params AddLoginStatusChangeDelegate_Params;
	memset(&AddLoginStatusChangeDelegate_Params, 0, sizeof(AddLoginStatusChangeDelegate_Params));
	if (!uFnAddLoginStatusChangeDelegate)
	{
		return;
	}

	memcpy_s(&AddLoginStatusChangeDelegate_Params.LoginStatusDelegate, sizeof(AddLoginStatusChangeDelegate_Params.LoginStatusDelegate), &LoginStatusDelegate, sizeof(LoginStatusDelegate));
	AddLoginStatusChangeDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// ELoginStatus                   NewStatus                      (CPF_Parm)
// struct FUniqueNetId            NewId                          (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginStatusChange(ELoginStatus NewStatus, const struct FUniqueNetId& NewId)
{
	static UFunction* uFnOnLoginStatusChange = nullptr;

	if (!uFnOnLoginStatusChange)
	{
		uFnOnLoginStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params OnLoginStatusChange_Params;
	memset(&OnLoginStatusChange_Params, 0, sizeof(OnLoginStatusChange_Params));
	if (!uFnOnLoginStatusChange)
	{
		return;
	}

	OnLoginStatusChange_Params.NewStatus = static_cast<uint8_t>(NewStatus);
	memcpy_s(&OnLoginStatusChange_Params.NewId, sizeof(OnLoginStatusChange_Params.NewId), &NewId, sizeof(NewId));

	this->ProcessEvent(uFnOnLoginStatusChange, &OnLoginStatusChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static UFunction* uFnClearLoginChangeDelegate = nullptr;

	if (!uFnClearLoginChangeDelegate)
	{
		uFnClearLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params ClearLoginChangeDelegate_Params;
	memset(&ClearLoginChangeDelegate_Params, 0, sizeof(ClearLoginChangeDelegate_Params));
	if (!uFnClearLoginChangeDelegate)
	{
		return;
	}

	memcpy_s(&ClearLoginChangeDelegate_Params.LoginDelegate, sizeof(ClearLoginChangeDelegate_Params.LoginDelegate), &LoginDelegate, sizeof(LoginDelegate));

	this->ProcessEvent(uFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static UFunction* uFnAddLoginChangeDelegate = nullptr;

	if (!uFnAddLoginChangeDelegate)
	{
		uFnAddLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params AddLoginChangeDelegate_Params;
	memset(&AddLoginChangeDelegate_Params, 0, sizeof(AddLoginChangeDelegate_Params));
	if (!uFnAddLoginChangeDelegate)
	{
		return;
	}

	memcpy_s(&AddLoginChangeDelegate_Params.LoginDelegate, sizeof(AddLoginChangeDelegate_Params.LoginDelegate), &LoginDelegate, sizeof(LoginDelegate));

	this->ProcessEvent(uFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFriendsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowFriendsUI = nullptr;

	if (!uFnShowFriendsUI)
	{
		uFnShowFriendsUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI");
	}

	UOnlineSubsystemSteamworks_execShowFriendsUI_Params ShowFriendsUI_Params;
	memset(&ShowFriendsUI_Params, 0, sizeof(ShowFriendsUI_Params));
	if (!uFnShowFriendsUI)
	{
		return {};
	}

	ShowFriendsUI_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_ShowFriendsUI = uFnShowFriendsUI->iNative;
	uFnShowFriendsUI->iNative = 0;
	this->ProcessEvent(uFnShowFriendsUI, &ShowFriendsUI_Params, nullptr);
	uFnShowFriendsUI->iNative = native_ShowFriendsUI;

	return ShowFriendsUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsMuted(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsMuted = nullptr;

	if (!uFnIsMuted)
	{
		uFnIsMuted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted");
	}

	UOnlineSubsystemSteamworks_execIsMuted_Params IsMuted_Params;
	memset(&IsMuted_Params, 0, sizeof(IsMuted_Params));
	if (!uFnIsMuted)
	{
		return {};
	}

	IsMuted_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&IsMuted_Params.PlayerID, sizeof(IsMuted_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnIsMuted, &IsMuted_Params, nullptr);

	return IsMuted_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<struct FFriendsQuery> Query                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AreAnyFriends(uint8_t LocalUserNum, class TArray<struct FFriendsQuery>& outQuery)
{
	static UFunction* uFnAreAnyFriends = nullptr;

	if (!uFnAreAnyFriends)
	{
		uFnAreAnyFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends");
	}

	UOnlineSubsystemSteamworks_execAreAnyFriends_Params AreAnyFriends_Params;
	memset(&AreAnyFriends_Params, 0, sizeof(AreAnyFriends_Params));
	if (!uFnAreAnyFriends)
	{
		return {};
	}

	AreAnyFriends_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AreAnyFriends_Params.Query, sizeof(AreAnyFriends_Params.Query), &outQuery, sizeof(outQuery));

	auto native_AreAnyFriends = uFnAreAnyFriends->iNative;
	uFnAreAnyFriends->iNative = 0;
	this->ProcessEvent(uFnAreAnyFriends, &AreAnyFriends_Params, nullptr);
	uFnAreAnyFriends->iNative = native_AreAnyFriends;

	memcpy_s(&outQuery, sizeof(outQuery), &AreAnyFriends_Params.Query, sizeof(AreAnyFriends_Params.Query));

	return AreAnyFriends_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsFriend(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsFriend = nullptr;

	if (!uFnIsFriend)
	{
		uFnIsFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend");
	}

	UOnlineSubsystemSteamworks_execIsFriend_Params IsFriend_Params;
	memset(&IsFriend_Params, 0, sizeof(IsFriend_Params));
	if (!uFnIsFriend)
	{
		return {};
	}

	IsFriend_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&IsFriend_Params.PlayerID, sizeof(IsFriend_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	auto native_IsFriend = uFnIsFriend->iNative;
	uFnIsFriend->iNative = 0;
	this->ProcessEvent(uFnIsFriend, &IsFriend_Params, nullptr);
	uFnIsFriend->iNative = native_IsFriend;

	return IsFriend_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanShowPresenceInformation(uint8_t LocalUserNum)
{
	static UFunction* uFnCanShowPresenceInformation = nullptr;

	if (!uFnCanShowPresenceInformation)
	{
		uFnCanShowPresenceInformation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation");
	}

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params CanShowPresenceInformation_Params;
	memset(&CanShowPresenceInformation_Params, 0, sizeof(CanShowPresenceInformation_Params));
	if (!uFnCanShowPresenceInformation)
	{
		return {};
	}

	CanShowPresenceInformation_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnCanShowPresenceInformation, &CanShowPresenceInformation_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanShowPresenceInformation_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanViewPlayerProfiles(uint8_t LocalUserNum)
{
	static UFunction* uFnCanViewPlayerProfiles = nullptr;

	if (!uFnCanViewPlayerProfiles)
	{
		uFnCanViewPlayerProfiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles");
	}

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params CanViewPlayerProfiles_Params;
	memset(&CanViewPlayerProfiles_Params, 0, sizeof(CanViewPlayerProfiles_Params));
	if (!uFnCanViewPlayerProfiles)
	{
		return {};
	}

	CanViewPlayerProfiles_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanViewPlayerProfiles_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanPurchaseContent(uint8_t LocalUserNum)
{
	static UFunction* uFnCanPurchaseContent = nullptr;

	if (!uFnCanPurchaseContent)
	{
		uFnCanPurchaseContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent");
	}

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Params CanPurchaseContent_Params;
	memset(&CanPurchaseContent_Params, 0, sizeof(CanPurchaseContent_Params));
	if (!uFnCanPurchaseContent)
	{
		return {};
	}

	CanPurchaseContent_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnCanPurchaseContent, &CanPurchaseContent_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanPurchaseContent_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanDownloadUserContent(uint8_t LocalUserNum)
{
	static UFunction* uFnCanDownloadUserContent = nullptr;

	if (!uFnCanDownloadUserContent)
	{
		uFnCanDownloadUserContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent");
	}

	UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params CanDownloadUserContent_Params;
	memset(&CanDownloadUserContent_Params, 0, sizeof(CanDownloadUserContent_Params));
	if (!uFnCanDownloadUserContent)
	{
		return {};
	}

	CanDownloadUserContent_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnCanDownloadUserContent, &CanDownloadUserContent_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanDownloadUserContent_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanCommunicate(uint8_t LocalUserNum)
{
	static UFunction* uFnCanCommunicate = nullptr;

	if (!uFnCanCommunicate)
	{
		uFnCanCommunicate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate");
	}

	UOnlineSubsystemSteamworks_execCanCommunicate_Params CanCommunicate_Params;
	memset(&CanCommunicate_Params, 0, sizeof(CanCommunicate_Params));
	if (!uFnCanCommunicate)
	{
		return {};
	}

	CanCommunicate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_CanCommunicate = uFnCanCommunicate->iNative;
	uFnCanCommunicate->iNative = 0;
	this->ProcessEvent(uFnCanCommunicate, &CanCommunicate_Params, nullptr);
	uFnCanCommunicate->iNative = native_CanCommunicate;

	return static_cast<EFeaturePrivilegeLevel>(CanCommunicate_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanPlayOnline(uint8_t LocalUserNum)
{
	static UFunction* uFnCanPlayOnline = nullptr;

	if (!uFnCanPlayOnline)
	{
		uFnCanPlayOnline = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline");
	}

	UOnlineSubsystemSteamworks_execCanPlayOnline_Params CanPlayOnline_Params;
	memset(&CanPlayOnline_Params, 0, sizeof(CanPlayOnline_Params));
	if (!uFnCanPlayOnline)
	{
		return {};
	}

	CanPlayOnline_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_CanPlayOnline = uFnCanPlayOnline->iNative;
	uFnCanPlayOnline->iNative = 0;
	this->ProcessEvent(uFnCanPlayOnline, &CanPlayOnline_Params, nullptr);
	uFnCanPlayOnline->iNative = native_CanPlayOnline;

	return static_cast<EFeaturePrivilegeLevel>(CanPlayOnline_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOnlineAccount
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsOnlineAccount(uint8_t LocalUserNum)
{
	static UFunction* uFnIsOnlineAccount = nullptr;

	if (!uFnIsOnlineAccount)
	{
		uFnIsOnlineAccount = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOnlineAccount");
	}

	UOnlineSubsystemSteamworks_execIsOnlineAccount_Params IsOnlineAccount_Params;
	memset(&IsOnlineAccount_Params, 0, sizeof(IsOnlineAccount_Params));
	if (!uFnIsOnlineAccount)
	{
		return {};
	}

	IsOnlineAccount_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnIsOnlineAccount, &IsOnlineAccount_Params, nullptr);

	return IsOnlineAccount_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsLocalLogin(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalLogin = nullptr;

	if (!uFnIsLocalLogin)
	{
		uFnIsLocalLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin");
	}

	UOnlineSubsystemSteamworks_execIsLocalLogin_Params IsLocalLogin_Params;
	memset(&IsLocalLogin_Params, 0, sizeof(IsLocalLogin_Params));
	if (!uFnIsLocalLogin)
	{
		return {};
	}

	IsLocalLogin_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnIsLocalLogin, &IsLocalLogin_Params, nullptr);

	return IsLocalLogin_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsGuestLogin(uint8_t LocalUserNum)
{
	static UFunction* uFnIsGuestLogin = nullptr;

	if (!uFnIsGuestLogin)
	{
		uFnIsGuestLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin");
	}

	UOnlineSubsystemSteamworks_execIsGuestLogin_Params IsGuestLogin_Params;
	memset(&IsGuestLogin_Params, 0, sizeof(IsGuestLogin_Params));
	if (!uFnIsGuestLogin)
	{
		return {};
	}

	IsGuestLogin_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnIsGuestLogin, &IsGuestLogin_Params, nullptr);

	return IsGuestLogin_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerDisplayName
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlineSubsystemSteamworks::GetPlayerDisplayName(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerDisplayName = nullptr;

	if (!uFnGetPlayerDisplayName)
	{
		uFnGetPlayerDisplayName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerDisplayName");
	}

	UOnlineSubsystemSteamworks_execGetPlayerDisplayName_Params GetPlayerDisplayName_Params;
	memset(&GetPlayerDisplayName_Params, 0, sizeof(GetPlayerDisplayName_Params));
	if (!uFnGetPlayerDisplayName)
	{
		return {};
	}

	GetPlayerDisplayName_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnGetPlayerDisplayName, &GetPlayerDisplayName_Params, nullptr);

	return GetPlayerDisplayName_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlineSubsystemSteamworks::GetPlayerNickname(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerNickname = nullptr;

	if (!uFnGetPlayerNickname)
	{
		uFnGetPlayerNickname = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname");
	}

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Params GetPlayerNickname_Params;
	memset(&GetPlayerNickname_Params, 0, sizeof(GetPlayerNickname_Params));
	if (!uFnGetPlayerNickname)
	{
		return {};
	}

	GetPlayerNickname_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnGetPlayerNickname, &GetPlayerNickname_Params, nullptr);

	return GetPlayerNickname_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& outPlayerID)
{
	static UFunction* uFnGetUniquePlayerId = nullptr;

	if (!uFnGetUniquePlayerId)
	{
		uFnGetUniquePlayerId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId");
	}

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params GetUniquePlayerId_Params;
	memset(&GetUniquePlayerId_Params, 0, sizeof(GetUniquePlayerId_Params));
	if (!uFnGetUniquePlayerId)
	{
		return {};
	}

	GetUniquePlayerId_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID), &outPlayerID, sizeof(outPlayerID));

	this->ProcessEvent(uFnGetUniquePlayerId, &GetUniquePlayerId_Params, nullptr);

	memcpy_s(&outPlayerID, sizeof(outPlayerID), &GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID));

	return GetUniquePlayerId_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ELoginStatus                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

ELoginStatus UOnlineSubsystemSteamworks::GetLoginStatus(uint8_t LocalUserNum)
{
	static UFunction* uFnGetLoginStatus = nullptr;

	if (!uFnGetLoginStatus)
	{
		uFnGetLoginStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus");
	}

	UOnlineSubsystemSteamworks_execGetLoginStatus_Params GetLoginStatus_Params;
	memset(&GetLoginStatus_Params, 0, sizeof(GetLoginStatus_Params));
	if (!uFnGetLoginStatus)
	{
		return {};
	}

	GetLoginStatus_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_GetLoginStatus = uFnGetLoginStatus->iNative;
	uFnGetLoginStatus->iNative = 0;
	this->ProcessEvent(uFnGetLoginStatus, &GetLoginStatus_Params, nullptr);
	uFnGetLoginStatus->iNative = native_GetLoginStatus;

	return static_cast<ELoginStatus>(GetLoginStatus_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static UFunction* uFnClearLogoutCompletedDelegate = nullptr;

	if (!uFnClearLogoutCompletedDelegate)
	{
		uFnClearLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params ClearLogoutCompletedDelegate_Params;
	memset(&ClearLogoutCompletedDelegate_Params, 0, sizeof(ClearLogoutCompletedDelegate_Params));
	if (!uFnClearLogoutCompletedDelegate)
	{
		return;
	}

	ClearLogoutCompletedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LogoutDelegate, sizeof(ClearLogoutCompletedDelegate_Params.LogoutDelegate), &LogoutDelegate, sizeof(LogoutDelegate));

	this->ProcessEvent(uFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static UFunction* uFnAddLogoutCompletedDelegate = nullptr;

	if (!uFnAddLogoutCompletedDelegate)
	{
		uFnAddLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params AddLogoutCompletedDelegate_Params;
	memset(&AddLogoutCompletedDelegate_Params, 0, sizeof(AddLogoutCompletedDelegate_Params));
	if (!uFnAddLogoutCompletedDelegate)
	{
		return;
	}

	AddLogoutCompletedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddLogoutCompletedDelegate_Params.LogoutDelegate, sizeof(AddLogoutCompletedDelegate_Params.LogoutDelegate), &LogoutDelegate, sizeof(LogoutDelegate));

	this->ProcessEvent(uFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLogoutCompleted(bool bWasSuccessful)
{
	static UFunction* uFnOnLogoutCompleted = nullptr;

	if (!uFnOnLogoutCompleted)
	{
		uFnOnLogoutCompleted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted");
	}

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params OnLogoutCompleted_Params;
	memset(&OnLogoutCompleted_Params, 0, sizeof(OnLogoutCompleted_Params));
	if (!uFnOnLogoutCompleted)
	{
		return;
	}

	OnLogoutCompleted_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnLogoutCompleted, &OnLogoutCompleted_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::Logout(uint8_t LocalUserNum)
{
	static UFunction* uFnLogout = nullptr;

	if (!uFnLogout)
	{
		uFnLogout = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout");
	}

	UOnlineSubsystemSteamworks_execLogout_Params Logout_Params;
	memset(&Logout_Params, 0, sizeof(Logout_Params));
	if (!uFnLogout)
	{
		return {};
	}

	Logout_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	auto native_Logout = uFnLogout->iNative;
	uFnLogout->iNative = 0;
	this->ProcessEvent(uFnLogout, &Logout_Params, nullptr);
	uFnLogout->iNative = native_Logout;

	return Logout_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static UFunction* uFnClearLoginFailedDelegate = nullptr;

	if (!uFnClearLoginFailedDelegate)
	{
		uFnClearLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params ClearLoginFailedDelegate_Params;
	memset(&ClearLoginFailedDelegate_Params, 0, sizeof(ClearLoginFailedDelegate_Params));
	if (!uFnClearLoginFailedDelegate)
	{
		return;
	}

	ClearLoginFailedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&ClearLoginFailedDelegate_Params.LoginFailedDelegate, sizeof(ClearLoginFailedDelegate_Params.LoginFailedDelegate), &LoginFailedDelegate, sizeof(LoginFailedDelegate));

	this->ProcessEvent(uFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static UFunction* uFnAddLoginFailedDelegate = nullptr;

	if (!uFnAddLoginFailedDelegate)
	{
		uFnAddLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params AddLoginFailedDelegate_Params;
	memset(&AddLoginFailedDelegate_Params, 0, sizeof(AddLoginFailedDelegate_Params));
	if (!uFnAddLoginFailedDelegate)
	{
		return;
	}

	AddLoginFailedDelegate_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&AddLoginFailedDelegate_Params.LoginFailedDelegate, sizeof(AddLoginFailedDelegate_Params.LoginFailedDelegate), &LoginFailedDelegate, sizeof(LoginFailedDelegate));

	this->ProcessEvent(uFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineServerConnectionStatus  ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode)
{
	static UFunction* uFnOnLoginFailed = nullptr;

	if (!uFnOnLoginFailed)
	{
		uFnOnLoginFailed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed");
	}

	UOnlineSubsystemSteamworks_execOnLoginFailed_Params OnLoginFailed_Params;
	memset(&OnLoginFailed_Params, 0, sizeof(OnLoginFailed_Params));
	if (!uFnOnLoginFailed)
	{
		return;
	}

	OnLoginFailed_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	OnLoginFailed_Params.ErrorCode = static_cast<uint8_t>(ErrorCode);

	this->ProcessEvent(uFnOnLoginFailed, &OnLoginFailed_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static UFunction* uFnAutoLogin = nullptr;

	if (!uFnAutoLogin)
	{
		uFnAutoLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin");
	}

	UOnlineSubsystemSteamworks_execAutoLogin_Params AutoLogin_Params;
	memset(&AutoLogin_Params, 0, sizeof(AutoLogin_Params));
	if (!uFnAutoLogin)
	{
		return {};
	}


	auto native_AutoLogin = uFnAutoLogin->iNative;
	uFnAutoLogin->iNative = 0;
	this->ProcessEvent(uFnAutoLogin, &AutoLogin_Params, nullptr);
	uFnAutoLogin->iNative = native_AutoLogin;

	return AutoLogin_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  LoginName                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWantsLocalOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::Login(uint8_t LocalUserNum, const class FString& LoginName, const class FString& Password, bool optionalBWantsLocalOnly)
{
	static UFunction* uFnLogin = nullptr;

	if (!uFnLogin)
	{
		uFnLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login");
	}

	UOnlineSubsystemSteamworks_execLogin_Params Login_Params;
	memset(&Login_Params, 0, sizeof(Login_Params));
	if (!uFnLogin)
	{
		return {};
	}

	Login_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);
	memcpy_s(&Login_Params.LoginName, sizeof(Login_Params.LoginName), &LoginName, sizeof(LoginName));
	memcpy_s(&Login_Params.Password, sizeof(Login_Params.Password), &Password, sizeof(Password));
	Login_Params.bWantsLocalOnly = optionalBWantsLocalOnly;

	auto native_Login = uFnLogin->iNative;
	uFnLogin->iNative = 0;
	this->ProcessEvent(uFnLogin, &Login_Params, nullptr);
	uFnLogin->iNative = native_Login;

	return Login_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bShowOnlineOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowLoginUI(bool optionalBShowOnlineOnly)
{
	static UFunction* uFnShowLoginUI = nullptr;

	if (!uFnShowLoginUI)
	{
		uFnShowLoginUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI");
	}

	UOnlineSubsystemSteamworks_execShowLoginUI_Params ShowLoginUI_Params;
	memset(&ShowLoginUI_Params, 0, sizeof(ShowLoginUI_Params));
	if (!uFnShowLoginUI)
	{
		return {};
	}

	ShowLoginUI_Params.bShowOnlineOnly = optionalBShowOnlineOnly;

	auto native_ShowLoginUI = uFnShowLoginUI->iNative;
	uFnShowLoginUI->iNative = 0;
	this->ProcessEvent(uFnShowLoginUI, &ShowLoginUI_Params, nullptr);
	uFnShowLoginUI->iNative = native_ShowLoginUI;

	return ShowLoginUI_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static UFunction* uFnOnFriendsChange = nullptr;

	if (!uFnOnFriendsChange)
	{
		uFnOnFriendsChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange");
	}

	UOnlineSubsystemSteamworks_execOnFriendsChange_Params OnFriendsChange_Params;
	memset(&OnFriendsChange_Params, 0, sizeof(OnFriendsChange_Params));
	if (!uFnOnFriendsChange)
	{
		return;
	}


	this->ProcessEvent(uFnOnFriendsChange, &OnFriendsChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static UFunction* uFnOnMutingChange = nullptr;

	if (!uFnOnMutingChange)
	{
		uFnOnMutingChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange");
	}

	UOnlineSubsystemSteamworks_execOnMutingChange_Params OnMutingChange_Params;
	memset(&OnMutingChange_Params, 0, sizeof(OnMutingChange_Params));
	if (!uFnOnMutingChange)
	{
		return;
	}


	this->ProcessEvent(uFnOnMutingChange, &OnMutingChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnLoginCancelled()
{
	static UFunction* uFnOnLoginCancelled = nullptr;

	if (!uFnOnLoginCancelled)
	{
		uFnOnLoginCancelled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled");
	}

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Params OnLoginCancelled_Params;
	memset(&OnLoginCancelled_Params, 0, sizeof(OnLoginCancelled_Params));
	if (!uFnOnLoginCancelled)
	{
		return;
	}


	this->ProcessEvent(uFnOnLoginCancelled, &OnLoginCancelled_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginChange(uint8_t LocalUserNum)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange");
	}

	UOnlineSubsystemSteamworks_execOnLoginChange_Params OnLoginChange_Params;
	memset(&OnLoginChange_Params, 0, sizeof(OnLoginChange_Params));
	if (!uFnOnLoginChange)
	{
		return;
	}

	OnLoginChange_Params.LocalUserNum = static_cast<uint8_t>(LocalUserNum);

	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOnlineSubsystemSteamworks::GetLocale()
{
	static UFunction* uFnGetLocale = nullptr;

	if (!uFnGetLocale)
	{
		uFnGetLocale = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale");
	}

	UOnlineSubsystemSteamworks_execGetLocale_Params GetLocale_Params;
	memset(&GetLocale_Params, 0, sizeof(GetLocale_Params));
	if (!uFnGetLocale)
	{
		return {};
	}


	this->ProcessEvent(uFnGetLocale, &GetLocale_Params, nullptr);

	return GetLocale_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static UFunction* uFnClearStorageDeviceChangeDelegate = nullptr;

	if (!uFnClearStorageDeviceChangeDelegate)
	{
		uFnClearStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params ClearStorageDeviceChangeDelegate_Params;
	memset(&ClearStorageDeviceChangeDelegate_Params, 0, sizeof(ClearStorageDeviceChangeDelegate_Params));
	if (!uFnClearStorageDeviceChangeDelegate)
	{
		return;
	}

	memcpy_s(&ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, sizeof(ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate), &StorageDeviceChangeDelegate, sizeof(StorageDeviceChangeDelegate));

	this->ProcessEvent(uFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static UFunction* uFnAddStorageDeviceChangeDelegate = nullptr;

	if (!uFnAddStorageDeviceChangeDelegate)
	{
		uFnAddStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params AddStorageDeviceChangeDelegate_Params;
	memset(&AddStorageDeviceChangeDelegate_Params, 0, sizeof(AddStorageDeviceChangeDelegate_Params));
	if (!uFnAddStorageDeviceChangeDelegate)
	{
		return;
	}

	memcpy_s(&AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, sizeof(AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate), &StorageDeviceChangeDelegate, sizeof(StorageDeviceChangeDelegate));

	this->ProcessEvent(uFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange()
{
	static UFunction* uFnOnStorageDeviceChange = nullptr;

	if (!uFnOnStorageDeviceChange)
	{
		uFnOnStorageDeviceChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange");
	}

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Params OnStorageDeviceChange_Params;
	memset(&OnStorageDeviceChange_Params, 0, sizeof(OnStorageDeviceChange_Params));
	if (!uFnOnStorageDeviceChange)
	{
		return;
	}


	this->ProcessEvent(uFnOnStorageDeviceChange, &OnStorageDeviceChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENATType                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

ENATType UOnlineSubsystemSteamworks::GetNATType()
{
	static UFunction* uFnGetNATType = nullptr;

	if (!uFnGetNATType)
	{
		uFnGetNATType = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType");
	}

	UOnlineSubsystemSteamworks_execGetNATType_Params GetNATType_Params;
	memset(&GetNATType_Params, 0, sizeof(GetNATType_Params));
	if (!uFnGetNATType)
	{
		return {};
	}


	auto native_GetNATType = uFnGetNATType->iNative;
	uFnGetNATType->iNative = 0;
	this->ProcessEvent(uFnGetNATType, &GetNATType_Params, nullptr);
	uFnGetNATType->iNative = native_GetNATType;

	return static_cast<ENATType>(GetNATType_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static UFunction* uFnClearConnectionStatusChangeDelegate = nullptr;

	if (!uFnClearConnectionStatusChangeDelegate)
	{
		uFnClearConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params ClearConnectionStatusChangeDelegate_Params;
	memset(&ClearConnectionStatusChangeDelegate_Params, 0, sizeof(ClearConnectionStatusChangeDelegate_Params));
	if (!uFnClearConnectionStatusChangeDelegate)
	{
		return;
	}

	memcpy_s(&ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, sizeof(ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate), &ConnectionStatusDelegate, sizeof(ConnectionStatusDelegate));

	this->ProcessEvent(uFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static UFunction* uFnAddConnectionStatusChangeDelegate = nullptr;

	if (!uFnAddConnectionStatusChangeDelegate)
	{
		uFnAddConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params AddConnectionStatusChangeDelegate_Params;
	memset(&AddConnectionStatusChangeDelegate_Params, 0, sizeof(AddConnectionStatusChangeDelegate_Params));
	if (!uFnAddConnectionStatusChangeDelegate)
	{
		return;
	}

	memcpy_s(&AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, sizeof(AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate), &ConnectionStatusDelegate, sizeof(ConnectionStatusDelegate));

	this->ProcessEvent(uFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EOnlineServerConnectionStatus  ConnectionStatus               (CPF_Parm)

void UOnlineSubsystemSteamworks::OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus)
{
	static UFunction* uFnOnConnectionStatusChange = nullptr;

	if (!uFnOnConnectionStatusChange)
	{
		uFnOnConnectionStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params OnConnectionStatusChange_Params;
	memset(&OnConnectionStatusChange_Params, 0, sizeof(OnConnectionStatusChange_Params));
	if (!uFnOnConnectionStatusChange)
	{
		return;
	}

	OnConnectionStatusChange_Params.ConnectionStatus = static_cast<uint8_t>(ConnectionStatus);

	this->ProcessEvent(uFnOnConnectionStatusChange, &OnConnectionStatusChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsControllerConnected(int32_t ControllerId)
{
	static UFunction* uFnIsControllerConnected = nullptr;

	if (!uFnIsControllerConnected)
	{
		uFnIsControllerConnected = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected");
	}

	UOnlineSubsystemSteamworks_execIsControllerConnected_Params IsControllerConnected_Params;
	memset(&IsControllerConnected_Params, 0, sizeof(IsControllerConnected_Params));
	if (!uFnIsControllerConnected)
	{
		return {};
	}

	IsControllerConnected_Params.ControllerId = ControllerId;

	auto native_IsControllerConnected = uFnIsControllerConnected->iNative;
	uFnIsControllerConnected->iNative = 0;
	this->ProcessEvent(uFnIsControllerConnected, &IsControllerConnected_Params, nullptr);
	uFnIsControllerConnected->iNative = native_IsControllerConnected;

	return IsControllerConnected_Params.ReturnValue;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static UFunction* uFnClearControllerChangeDelegate = nullptr;

	if (!uFnClearControllerChangeDelegate)
	{
		uFnClearControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params ClearControllerChangeDelegate_Params;
	memset(&ClearControllerChangeDelegate_Params, 0, sizeof(ClearControllerChangeDelegate_Params));
	if (!uFnClearControllerChangeDelegate)
	{
		return;
	}

	memcpy_s(&ClearControllerChangeDelegate_Params.ControllerChangeDelegate, sizeof(ClearControllerChangeDelegate_Params.ControllerChangeDelegate), &ControllerChangeDelegate, sizeof(ControllerChangeDelegate));

	this->ProcessEvent(uFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static UFunction* uFnAddControllerChangeDelegate = nullptr;

	if (!uFnAddControllerChangeDelegate)
	{
		uFnAddControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params AddControllerChangeDelegate_Params;
	memset(&AddControllerChangeDelegate_Params, 0, sizeof(AddControllerChangeDelegate_Params));
	if (!uFnAddControllerChangeDelegate)
	{
		return;
	}

	memcpy_s(&AddControllerChangeDelegate_Params.ControllerChangeDelegate, sizeof(AddControllerChangeDelegate_Params.ControllerChangeDelegate), &ControllerChangeDelegate, sizeof(ControllerChangeDelegate));

	this->ProcessEvent(uFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// uint32_t                       bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerChange(int32_t ControllerId, bool bIsConnected)
{
	static UFunction* uFnOnControllerChange = nullptr;

	if (!uFnOnControllerChange)
	{
		uFnOnControllerChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange");
	}

	UOnlineSubsystemSteamworks_execOnControllerChange_Params OnControllerChange_Params;
	memset(&OnControllerChange_Params, 0, sizeof(OnControllerChange_Params));
	if (!uFnOnControllerChange)
	{
		return;
	}

	OnControllerChange_Params.ControllerId = ControllerId;
	OnControllerChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChange, &OnControllerChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENetworkNotificationPosition   NewPos                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos)
{
	static UFunction* uFnSetNetworkNotificationPosition = nullptr;

	if (!uFnSetNetworkNotificationPosition)
	{
		uFnSetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition");
	}

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params SetNetworkNotificationPosition_Params;
	memset(&SetNetworkNotificationPosition_Params, 0, sizeof(SetNetworkNotificationPosition_Params));
	if (!uFnSetNetworkNotificationPosition)
	{
		return;
	}

	SetNetworkNotificationPosition_Params.NewPos = static_cast<uint8_t>(NewPos);

	auto native_SetNetworkNotificationPosition = uFnSetNetworkNotificationPosition->iNative;
	uFnSetNetworkNotificationPosition->iNative = 0;
	this->ProcessEvent(uFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Params, nullptr);
	uFnSetNetworkNotificationPosition->iNative = native_SetNetworkNotificationPosition;
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENetworkNotificationPosition   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

ENetworkNotificationPosition UOnlineSubsystemSteamworks::GetNetworkNotificationPosition()
{
	static UFunction* uFnGetNetworkNotificationPosition = nullptr;

	if (!uFnGetNetworkNotificationPosition)
	{
		uFnGetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition");
	}

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params GetNetworkNotificationPosition_Params;
	memset(&GetNetworkNotificationPosition_Params, 0, sizeof(GetNetworkNotificationPosition_Params));
	if (!uFnGetNetworkNotificationPosition)
	{
		return {};
	}


	this->ProcessEvent(uFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Params, nullptr);

	return static_cast<ENetworkNotificationPosition>(GetNetworkNotificationPosition_Params.ReturnValue);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static UFunction* uFnClearExternalUIChangeDelegate = nullptr;

	if (!uFnClearExternalUIChangeDelegate)
	{
		uFnClearExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params ClearExternalUIChangeDelegate_Params;
	memset(&ClearExternalUIChangeDelegate_Params, 0, sizeof(ClearExternalUIChangeDelegate_Params));
	if (!uFnClearExternalUIChangeDelegate)
	{
		return;
	}

	memcpy_s(&ClearExternalUIChangeDelegate_Params.ExternalUIDelegate, sizeof(ClearExternalUIChangeDelegate_Params.ExternalUIDelegate), &ExternalUIDelegate, sizeof(ExternalUIDelegate));

	this->ProcessEvent(uFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static UFunction* uFnAddExternalUIChangeDelegate = nullptr;

	if (!uFnAddExternalUIChangeDelegate)
	{
		uFnAddExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params AddExternalUIChangeDelegate_Params;
	memset(&AddExternalUIChangeDelegate_Params, 0, sizeof(AddExternalUIChangeDelegate_Params));
	if (!uFnAddExternalUIChangeDelegate)
	{
		return;
	}

	memcpy_s(&AddExternalUIChangeDelegate_Params.ExternalUIDelegate, sizeof(AddExternalUIChangeDelegate_Params.ExternalUIDelegate), &ExternalUIDelegate, sizeof(ExternalUIDelegate));

	this->ProcessEvent(uFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bIsOpening                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnExternalUIChange(bool bIsOpening)
{
	static UFunction* uFnOnExternalUIChange = nullptr;

	if (!uFnOnExternalUIChange)
	{
		uFnOnExternalUIChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange");
	}

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Params OnExternalUIChange_Params;
	memset(&OnExternalUIChange_Params, 0, sizeof(OnExternalUIChange_Params));
	if (!uFnOnExternalUIChange)
	{
		return;
	}

	OnExternalUIChange_Params.bIsOpening = bIsOpening;

	this->ProcessEvent(uFnOnExternalUIChange, &OnExternalUIChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static UFunction* uFnClearLinkStatusChangeDelegate = nullptr;

	if (!uFnClearLinkStatusChangeDelegate)
	{
		uFnClearLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params ClearLinkStatusChangeDelegate_Params;
	memset(&ClearLinkStatusChangeDelegate_Params, 0, sizeof(ClearLinkStatusChangeDelegate_Params));
	if (!uFnClearLinkStatusChangeDelegate)
	{
		return;
	}

	memcpy_s(&ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate, sizeof(ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate), &LinkStatusDelegate, sizeof(LinkStatusDelegate));

	this->ProcessEvent(uFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static UFunction* uFnAddLinkStatusChangeDelegate = nullptr;

	if (!uFnAddLinkStatusChangeDelegate)
	{
		uFnAddLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params AddLinkStatusChangeDelegate_Params;
	memset(&AddLinkStatusChangeDelegate_Params, 0, sizeof(AddLinkStatusChangeDelegate_Params));
	if (!uFnAddLinkStatusChangeDelegate)
	{
		return;
	}

	memcpy_s(&AddLinkStatusChangeDelegate_Params.LinkStatusDelegate, sizeof(AddLinkStatusChangeDelegate_Params.LinkStatusDelegate), &LinkStatusDelegate, sizeof(LinkStatusDelegate));

	this->ProcessEvent(uFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLinkStatusChange(bool bIsConnected)
{
	static UFunction* uFnOnLinkStatusChange = nullptr;

	if (!uFnOnLinkStatusChange)
	{
		uFnOnLinkStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params OnLinkStatusChange_Params;
	memset(&OnLinkStatusChange_Params, 0, sizeof(OnLinkStatusChange_Params));
	if (!uFnOnLinkStatusChange)
	{
		return;
	}

	OnLinkStatusChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnLinkStatusChange, &OnLinkStatusChange_Params, nullptr);
}

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static UFunction* uFnHasLinkConnection = nullptr;

	if (!uFnHasLinkConnection)
	{
		uFnHasLinkConnection = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection");
	}

	UOnlineSubsystemSteamworks_execHasLinkConnection_Params HasLinkConnection_Params;
	memset(&HasLinkConnection_Params, 0, sizeof(HasLinkConnection_Params));
	if (!uFnHasLinkConnection)
	{
		return {};
	}


	auto native_HasLinkConnection = uFnHasLinkConnection->iNative;
	uFnHasLinkConnection->iNative = 0;
	this->ProcessEvent(uFnHasLinkConnection, &HasLinkConnection_Params, nullptr);
	uFnHasLinkConnection->iNative = native_HasLinkConnection;

	return HasLinkConnection_Params.ReturnValue;
}

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
