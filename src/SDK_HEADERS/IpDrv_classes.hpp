/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: IpDrv_classes.hpp
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

// Enum IpDrv.InternetLink.ELinkMode
enum class ELinkMode : uint8_t
{
	MODE_Text                                          = 0,
	MODE_Line                                          = 1,
	MODE_Binary                                        = 2,
	MODE_END                                           = 3
};

// Enum IpDrv.InternetLink.EReceiveMode
enum class EReceiveMode : uint8_t
{
	RMODE_Manual                                       = 0,
	RMODE_Event                                        = 1,
	RMODE_END                                          = 2
};

// Enum IpDrv.InternetLink.ELineMode
enum class ELineMode : uint8_t
{
	LMODE_auto                                         = 0,
	LMODE_DOS                                          = 1,
	LMODE_UNIX                                         = 2,
	LMODE_MAC                                          = 3,
	LMODE_END                                          = 4
};

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
enum class EEventUploadType : uint8_t
{
	EUT_GenericStats                                   = 0,
	EUT_ProfileData                                    = 1,
	EUT_MatchmakingData                                = 2,
	EUT_PlaylistPopulation                             = 3,
	EUT_END                                            = 4
};

// Enum IpDrv.OnlineImageDownloaderWeb.EOnlineImageDownloadState
enum class EOnlineImageDownloadState : uint8_t
{
	PIDS_NotStarted                                    = 0,
	PIDS_Downloading                                   = 1,
	PIDS_Succeeded                                     = 2,
	PIDS_Failed                                        = 3,
	PIDS_END                                           = 4
};

// Enum IpDrv.ROnlineCustomContentCacheManager.CacheActivityType
enum class ECacheActivityType : uint8_t
{
	ActivityRead                                       = 0,
	ActivityWrite                                      = 1,
	ActivityDelete                                     = 2,
	CacheActivityType_END                              = 3
};

// Enum IpDrv.ROnlineCustomContentCacheManager.CacheActivityStatus
enum class ECacheActivityStatus : uint8_t
{
	ActivitySuccessful                                 = 0,
	ActivityFailed                                     = 1,
	CacheActivityStatus_END                            = 2
};

// Enum IpDrv.ROnlineCustomContentCacheManager.CacheFileStatus
enum class ECacheFileStatus : uint8_t
{
	FileOK                                             = 0,
	FileObsolete                                       = 1,
	FileNonexistent                                    = 2,
	CacheFileStatus_END                                = 3
};

// Enum IpDrv.ROnlineCustomContentCacheManager.QueuePriorityState
enum class EQueuePriorityState : uint8_t
{
	StandbyState                                       = 0,
	ReadState                                          = 1,
	WriteState                                         = 2,
	DeleteState                                        = 3,
	QueuePriorityState_END                             = 4
};

// Enum IpDrv.TitleFileCacheEntry.ETitleFileFileOp
enum class ETitleFileFileOp : uint8_t
{
	TitleFile_None                                     = 0,
	TitleFile_Save                                     = 1,
	TitleFile_Load                                     = 2,
	TitleFile_Delete                                   = 3,
	TitleFile_END                                      = 4
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0054 - 0x0060)
class UClientBeaconAddressResolver : public UObject
{
public:
	int32_t                                            BeaconPort;                                    // 0x0054 (0x0004) [0x0000000000000000]               
	class FName                                        BeaconName;                                    // 0x0058 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		}

		return uClassPointer;
	};

};
// Class IpDrv.InternetLink
// 0x0024 (0x029C - 0x02C0)
class AInternetLink : public AInfo
{
public:
	ELinkMode                                          LinkMode;                                      // 0x029C (0x0001) [0x0000000000000000]               
	ELineMode                                          InLineMode;                                    // 0x029D (0x0001) [0x0000000000000000]               
	ELineMode                                          OutLineMode;                                   // 0x029E (0x0001) [0x0000000000000000]               
	EReceiveMode                                       ReceiveMode;                                   // 0x029F (0x0001) [0x0000000000000000]               
	struct FPointer                                    Socket;                                        // 0x02A0 (0x0008) [0x0000000000000001] (CPF_Const)   
	int32_t                                            Port;                                          // 0x02A8 (0x0004) [0x0000000000000001] (CPF_Const)   
	struct FPointer                                    RemoteSocket;                                  // 0x02AC (0x0008) [0x0000000000000001] (CPF_Const)   
	struct FPointer                                    PrivateResolveInfo;                            // 0x02B4 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
	int32_t                                            DataPending;                                   // 0x02BC (0x0004) [0x0000000000000001] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.InternetLink");
		}

		return uClassPointer;
	};


	void eventResolveFailed();
	void eventResolved(const struct FIpAddr& Addr);
	void GetLocalIP(struct FIpAddr& outArg);
	bool StringToIpAddr(const class FString& Str, struct FIpAddr& outAddr);
	class FString IpAddrToString(const struct FIpAddr& Arg);
	int32_t GetLastError();
	void Resolve(const class FString& Domain);
	bool ParseURL(const class FString& URL, class FString& outAddr, int32_t& outPortNum, class FString& outLevelName, class FString& outEntryName);
	bool IsDataPending();
};
// Class IpDrv.McpServiceBase
// 0x0018 (0x0054 - 0x006C)
class UMcpServiceBase : public UObject
{
public:
	class FString                                      McpConfigClassName;                            // 0x0054 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class UMcpServiceConfig*                           McpConfig;                                     // 0x0064 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServiceBase");
		}

		return uClassPointer;
	};


	class FString GetAppAccessURL();
	class FString GetBaseURL();
	void eventInit();
};
// Class IpDrv.MCPBase
// 0x0008 (0x006C - 0x0074)
class UMCPBase : public UMcpServiceBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x006C (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MCPBase");
		}

		return uClassPointer;
	};

};
// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0034 (0x0074 - 0x00A8)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	class TArray<struct FEventUploadConfig>            EventUploadConfigs;                            // 0x0074 (0x0010) [0x0000000000010801] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FPointer>                      MCPEventPostObjects;                           // 0x0084 (0x0010) [0x0000000000000201] (CPF_Const | CPF_Native)
	class TArray<EEventUploadType>                     DisabledUploadTypes;                           // 0x0094 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           bBinaryStats : 1;                              // 0x00A4 (0x0004) [0x0000000000000801] [0x00000001] (CPF_Const | CPF_Config)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineEventsInterfaceMcp");
		}

		return uClassPointer;
	};


	bool UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats);
	bool UpdatePlaylistPopulation(int32_t PlaylistId, int32_t NumPlayers);
	bool UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, class TArray<uint8_t>& outPayload);
	bool UploadPlayerData(const struct FUniqueNetId& UniqueId, const class FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage);
};
// Class IpDrv.TitleFileDownloadCache
// 0x0078 (0x0074 - 0x00EC)
class UTitleFileDownloadCache : public UMCPBase
{
public:
	class UOnlineSubsystem*                            OnlineSub;                                     // 0x0074 (0x0008) [0x0000000000000000]               
	class TArray<class UTitleFileCacheEntry*>          TitleFiles;                                    // 0x007C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LoadCompleteDelegates;                         // 0x008C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               SaveCompleteDelegates;                         // 0x009C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DeleteCompleteDelegates;                       // 0x00AC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoadTitleFileComplete__Delegate;           // 0x00BC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveTitleFileComplete__Delegate;           // 0x00CC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteTitleFileComplete__Delegate;         // 0x00DC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TitleFileDownloadCache");
		}

		return uClassPointer;
	};


	void eventCancelIO();
	bool eventAttemptDeleteDownloadFile(const class FString& Filename);
	bool OnDeleteDownloadFileCompleteInternal(bool bWasSuccessful, const class FString& Filename);
	void OnDeleteDownloadFileComplete(bool bWasSuccessful, const class FString& Filename);
	bool eventAttemptReadDownloadFile(const class FString& Filename);
	bool OnReadDownloadFileCompleteInternal(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed);
	void OnReadDownloadFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed);
	bool eventAttemptWriteDownloadFile(const class FString& Filename, const class TArray<uint8_t>& FileContents, const class FString& FileCRC);
	bool OnWriteDownloadFileCompleteInternal(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed);
	void OnWriteDownloadFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed);
	int32_t eventAttemptGetDownloadFileSize(const class FString& Filename, bool optionalKeepHandle);
	void FindFolders(class TArray<class FString>& outResults);
	void FindFiles(const class FString& Subfolder, class TArray<class FString>& outResults);
	bool DeleteTitleFile(const class FString& Filename);
	bool DeleteTitleFiles(float MaxAgeSeconds);
	bool ClearCachedFile(const class FString& Filename);
	bool ClearCachedFiles();
	class FString GetTitleFileLogicalName(const class FString& Filename);
	class FString GetTitleFileHash(const class FString& Filename);
	EOnlineEnumerationReadState GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void ClearDeleteTitleFileCompleteDelegate(const struct FScriptDelegate& DeleteCompleteDelegate);
	void AddDeleteTitleFileCompleteDelegate(const struct FScriptDelegate& DeleteCompleteDelegate);
	void OnDeleteTitleFileComplete(bool bWasSuccessful, const class FString& Filename, float timeTaken);
	void ClearSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void AddSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void OnSaveTitleFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesTransferred, float timeTaken);
	bool SaveTitleFile(const class FString& Filename, const class FString& LogicalName, const class TArray<uint8_t>& FileContents);
	void ClearLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void AddLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void OnLoadTitleFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesTransferred, float timeTaken);
	bool LoadTitleFile(const class FString& Filename);
};
// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0048 (0x0230 - 0x0278)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                   // 0x0230 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            MaxLocalTalkers;                               // 0x0238 (0x0004) [0x0000000000000800] (CPF_Config)  
	int32_t                                            MaxRemoteTalkers;                              // 0x023C (0x0004) [0x0000000000000800] (CPF_Config)  
	uint32_t                                           bIsUsingSpeechRecognition : 1;                 // 0x0240 (0x0004) [0x0000000000000800] [0x00000001] (CPF_Config)
	uint32_t                                           bOverrideCustomContentAccessMode : 1;          // 0x0240 (0x0004) [0x0000000000000000] [0x00000002] 
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                             // 0x0244 (0x0008) [0x0000000000000000]               
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                             // 0x024C (0x0008) [0x0000000000000000]               
	class UTitleFileDownloadCache*                     TitleFileDownloadCache;                        // 0x0254 (0x0008) [0x0000000000000000]               
	class UROnlineCustomContentCacheManager*           CustomContentCacheManager;                     // 0x025C (0x0008) [0x0000000000000000]               
	ECustomContentAccessMode                           CustomContentAccessModeOverride;               // 0x0264 (0x0001) [0x0000000000000000]               
	class TArray<class UOnlineCustomContentRequest*>   OnlineCustomContentRequests;                   // 0x0268 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		}

		return uClassPointer;
	};


	void Tick(float DeltaTime);
	void CancelCustomContentRequest(const class FString& sCustomId);
	void GetCustomContentAsString(const class FString& sCustomId, class FString& outContentData);
	void GetCustomContent(const class FString& sCustomId, class TArray<uint8_t>& outContentData);
	void StartCustomContentRequest(const class FString& sContentName, const class FString& sCustomId, const struct FScriptDelegate& dReadCustomContentComplete, ECustomContentAccessMode optionalECCAM, const class FString& optionalCategory);
	bool IsCustomContentAccessModeAvailable(ECustomContentAccessMode eCCAM);
	bool IsCustomContentTypeAvailable(ECustomContentType CustomContentType);
	bool IsCustomContentAvailable();
	void GetRegisteredPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outOutRegisteredPlayers);
	bool IsPlayerInSession(const class FName& SessionName, const struct FUniqueNetId& PlayerID);
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
};
// Class IpDrv.OnlineAuthInterfaceImpl
// 0x02C4 (0x0054 - 0x0318)
class UOnlineAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineAuthInterface;                  // 0x0054 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x005C (0x0008) [0x0000000000000000]               
	uint32_t                                           bAuthReady : 1;                                // 0x0064 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)
	struct FSparseArray_Mirror                         ClientAuthSessions;                            // 0x0068 (0x0038) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         ServerAuthSessions;                            // 0x00A0 (0x0038) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         PeerAuthSessions;                              // 0x00D8 (0x0038) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalClientAuthSessions;                       // 0x0110 (0x0038) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalServerAuthSessions;                       // 0x0148 (0x0038) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalPeerAuthSessions;                         // 0x0180 (0x0038) [0x0000000000000201] (CPF_Const | CPF_Native)
	class TArray<struct FScriptDelegate>               AuthReadyDelegates;                            // 0x01B8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthRequestDelegates;                    // 0x01C8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthRequestDelegates;                    // 0x01D8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthResponseDelegates;                   // 0x01E8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthResponseDelegates;                   // 0x01F8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthCompleteDelegates;                   // 0x0208 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthCompleteDelegates;                   // 0x0218 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthEndSessionRequestDelegates;          // 0x0228 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthRetryRequestDelegates;               // 0x0238 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientConnectionCloseDelegates;                // 0x0248 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerConnectionCloseDelegates;                // 0x0258 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAuthReady__Delegate;                       // 0x0268 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthRequest__Delegate;               // 0x0278 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRequest__Delegate;               // 0x0288 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthResponse__Delegate;              // 0x0298 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthResponse__Delegate;              // 0x02A8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthComplete__Delegate;              // 0x02B8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthComplete__Delegate;              // 0x02C8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthEndSessionRequest__Delegate;     // 0x02D8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRetryRequest__Delegate;          // 0x02E8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientConnectionClose__Delegate;           // 0x02F8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerConnectionClose__Delegate;           // 0x0308 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineAuthInterfaceImpl");
		}

		return uClassPointer;
	};


	bool GetServerAddr(int32_t& outOutServerIP, int32_t& outOutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId& outOutServerUID);
	bool FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession& outOutSessionInfo);
	bool FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession& outOutSessionInfo);
	bool FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession& outOutSessionInfo);
	bool FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession& outOutSessionInfo);
	void AllLocalServerAuthSessions(struct FLocalAuthSession& outOutSessionInfo);
	void AllServerAuthSessions(struct FAuthSession& outOutSessionInfo);
	void AllLocalClientAuthSessions(struct FLocalAuthSession& outOutSessionInfo);
	void AllClientAuthSessions(struct FAuthSession& outOutSessionInfo);
	void EndAllRemoteServerAuthSessions();
	void EndAllLocalServerAuthSessions();
	void EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP);
	void EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP);
	bool VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t AuthTicketUID);
	bool CreateServerAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t& outOutAuthTicketUID);
	void EndAllRemoteClientAuthSessions();
	void EndAllLocalClientAuthSessions();
	void EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP);
	void EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort);
	bool VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t AuthTicketUID);
	bool CreateClientAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort, bool bSecure, int32_t& outOutAuthTicketUID);
	bool SendServerAuthRetryRequest();
	bool SendClientAuthEndSessionRequest(class UPlayer* ClientConnection);
	bool SendServerAuthResponse(class UPlayer* ClientConnection, int32_t AuthTicketUID);
	bool SendClientAuthResponse(int32_t AuthTicketUID);
	bool SendServerAuthRequest(const struct FUniqueNetId& ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID);
	void ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void OnServerConnectionClose(class UPlayer* ServerConnection);
	void ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void OnClientConnectionClose(class UPlayer* ClientConnection);
	void ClearServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void AddServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void OnServerAuthRetryRequest(class UPlayer* ClientConnection);
	void ClearClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void AddClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void OnClientAuthEndSessionRequest(class UPlayer* ServerConnection);
	void ClearServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void AddServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void OnServerAuthComplete(bool bSuccess, const struct FUniqueNetId& ServerUID, class UPlayer* ServerConnection, const class FString& ExtraInfo);
	void ClearClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void AddClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void OnClientAuthComplete(bool bSuccess, const struct FUniqueNetId& ClientUID, class UPlayer* ClientConnection, const class FString& ExtraInfo);
	void ClearServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void AddServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void OnServerAuthResponse(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t AuthTicketUID);
	void ClearClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void AddClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void OnClientAuthResponse(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t AuthTicketUID);
	void ClearServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void AddServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void OnServerAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort);
	void ClearClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void AddClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void OnClientAuthRequest(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort, bool bSecure);
	void ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void OnAuthReady();
	bool IsReady();
};
// Class IpDrv.OnlineGameInterfaceImpl
// 0x01F8 (0x0054 - 0x024C)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0054 (0x0008) [0x0000000000000000]               
	class UOnlineGameSettings*                         GameSettings;                                  // 0x005C (0x0008) [0x0000000000000001] (CPF_Const)   
	class UOnlineGameSearch*                           GameSearch;                                    // 0x0064 (0x0008) [0x0000000000000001] (CPF_Const)   
	class TArray<struct FScriptDelegate>               CreateOnlineGameCompleteDelegates;             // 0x006C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UpdateOnlineGameCompleteDelegates;             // 0x007C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DestroyOnlineGameCompleteDelegates;            // 0x008C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               JoinOnlineGameCompleteDelegates;               // 0x009C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               MigrateOnlineGameCompleteDelegates;            // 0x00AC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               JoinMigratedOnlineGameCompleteDelegates;       // 0x00BC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               RecalculateSkillRatingCompleteDelegates;       // 0x00CC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               StartOnlineGameCompleteDelegates;              // 0x00DC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               EndOnlineGameCompleteDelegates;                // 0x00EC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FindOnlineGamesCompleteDelegates;              // 0x00FC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               CancelFindOnlineGamesCompleteDelegates;        // 0x010C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	ELanBeaconState                                    LanBeaconState;                                // 0x011C (0x0001) [0x0000000000000001] (CPF_Const)   
	uint8_t                                            LanNonce[8];                                   // 0x011D (0x0008) [0x0000000000000001] (CPF_Const)   
	int32_t                                            LanAnnouncePort;                               // 0x0128 (0x0004) [0x0000000000000801] (CPF_Const | CPF_Config)
	int32_t                                            LanGameUniqueId;                               // 0x012C (0x0004) [0x0000000000000801] (CPF_Const | CPF_Config)
	int32_t                                            LanPacketPlatformMask;                         // 0x0130 (0x0004) [0x0000000000000801] (CPF_Const | CPF_Config)
	float                                              LanQueryTimeLeft;                              // 0x0134 (0x0004) [0x0000000000000000]               
	float                                              LanQueryTimeout;                               // 0x0138 (0x0004) [0x0000000000000800] (CPF_Config)  
	struct FPointer                                    LanBeacon;                                     // 0x013C (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    SessionInfo;                                   // 0x0144 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;         // 0x014C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;        // 0x015C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;        // 0x016C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;       // 0x017C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;   // 0x018C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;          // 0x019C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;          // 0x01AC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;        // 0x01BC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;         // 0x01CC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;           // 0x01DC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate; // 0x01EC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;              // 0x01FC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;  // 0x020C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;       // 0x021C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;  // 0x022C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                // 0x023C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		}

		return uClassPointer;
	};


	void ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void OnQosStatusChanged(int32_t NumComplete, int32_t NumTotal);
	bool BindPlatformSpecificSessionToSearch(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, uint8_t PlatformSpecificInfo[80]);
	bool ReadPlatformSpecificSessionInfoBySessionName(const class FName& SessionName, uint8_t* outPlatformSpecificInfo_80);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult& outDesiredGame, uint8_t* outPlatformSpecificInfo_80);
	bool QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery);
	void ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void OnJoinMigratedOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool JoinMigratedOnlineGame(uint8_t PlayerNum, const class FName& SessionName, struct FOnlineGameSearchResult& outDesiredGame);
	void ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void OnMigrateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool MigrateOnlineGame(uint8_t HostingPlayerNum, const class FName& SessionName);
	void ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate);
	void AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate);
	void OnRecalculateSkillRatingComplete(const class FName& SessionName, bool bWasSuccessful);
	bool RecalculateSkillRating(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers);
	bool AcceptGameInvite(uint8_t LocalUserNum, const class FName& SessionName);
	void ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult& outInviteResult);
	class TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(const class FName& SessionName);
	void ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(const class FName& SessionName, bool bWasSuccessful);
	bool RegisterForArbitration(const class FName& SessionName);
	void ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool EndOnlineGame(const class FName& SessionName);
	void ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool StartOnlineGame(const class FName& SessionName);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers);
	bool UnregisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers);
	bool RegisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool GetResolvedConnectString(const class FName& SessionName, class FString& outConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool JoinOnlineGame(uint8_t PlayerNum, const class FName& SessionName, struct FOnlineGameSearchResult& outDesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool DestroyOnlineGame(const class FName& SessionName);
	void ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool UpdateOnlineGame(const class FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData);
	void ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool CreateOnlineGame(uint8_t HostingPlayerNum, const class FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(const class FName& SessionName);
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
};
// Class IpDrv.ROnlineCustomContentCacheManager
// 0x00A8 (0x0054 - 0x00FC)
class UROnlineCustomContentCacheManager : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OnlineSub;                                     // 0x0054 (0x0008) [0x0000000000000000]               
	class UOnlineCustomContentRequestCacheableHydra*   RequestInProgress;                             // 0x005C (0x0008) [0x0000000000000000]               
	EQueuePriorityState                                CurrentState;                                  // 0x0064 (0x0001) [0x0000000000000000]               
	uint32_t                                           FileSystemBusy : 1;                            // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<class UOnlineCustomContentRequestCacheableHydra*> ReadQueue;                                     // 0x006C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class UOnlineCustomContentRequestCacheableHydra*> WriteQueue;                                    // 0x007C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class UOnlineCustomContentRequestCacheableHydra*> DeleteQueue;                                   // 0x008C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FRegistryFolder>               Registries;                                    // 0x009C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FCacheActivityEntry>           ActivityLog;                                   // 0x00AC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCacheLoadComplete__Delegate;               // 0x00BC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCacheSaveComplete__Delegate;               // 0x00CC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCacheDeleteComplete__Delegate;             // 0x00DC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCleanupObsoleteInternal__Delegate;         // 0x00EC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ROnlineCustomContentCacheManager");
		}

		return uClassPointer;
	};


	void CheckStateChange();
	void Tick(float DeltaTime);
	void eventGetActivityLogAsList(class TArray<class FString>& outOutList);
	void eventUpdateActivity(const class FString& Filename, ECacheActivityType Type, ECacheActivityStatus Status, int32_t bytesTransferred, float timeTaken);
	void OnCleanupObsoleteInternal(bool bWasSuccessful, const class FString& sCustomId);
	void eventOnCrcDownloadComplete(class UOnlineCustomContentRequestHydra* SubRequest, const class FString& Category);
	void eventGetRegistryAsFileNames(class TArray<class FString>& outOutList);
	int32_t eventGetRegistryAsList(class TArray<class FString>& outOutList);
	int32_t GetIndexOfFolderInRegistry(const class FString& Subfolder, struct FRegistryFolder& outFolderCopy);
	int32_t GetIndexOfEntryInFolder(const struct FRegistryFolder& folderCopy, const class FString& Filename, struct FRegistryEntry& outEntryCopy);
	bool eventGetCopyOfEntryInRegistry(const class FString& Filename, const class FString& Subfolder, struct FRegistryEntry& outEntryCopy);
	bool eventFlagObsoleteInRegistry(const class FString& Filename, const class FString& Subfolder);
	bool eventRemoveFromRegistry(const class FString& Filename, const class FString& Subfolder);
	void eventUpdateRegistry(const class FString& Filename, const class FString& Subfolder, int32_t Crc32, int32_t Size, bool bObsolete);
	int32_t GetFileCacheSize(const class FString& Filename, const class FString& Subfolder);
	ECacheFileStatus GetFileCacheStatus(const class FString& Filename, const class FString& Subfolder, int32_t ExpectedCrc32);
	void eventInitializeCacheRegistry();
	void OnCacheDeleteComplete(bool bWasSuccessful, const class FString& Filename, float timeTaken);
	void eventOnCacheDeleteBegin();
	void OnCacheSaveComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesTransferred, float timeTaken);
	void eventOnCacheSaveBegin();
	void OnCacheLoadComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesTransferred, float timeTaken);
	void eventOnCacheLoadBegin();
	void eventAddToDeleteQueue(class UOnlineCustomContentRequestCacheableHydra* Request);
	void eventAddToWriteQueue(class UOnlineCustomContentRequestCacheableHydra* Request);
	void eventRemoveFromReadQueue(class UOnlineCustomContentRequestCacheableHydra* Request);
	void eventAddToReadQueue(class UOnlineCustomContentRequestCacheableHydra* Request);
};
// Class IpDrv.TcpipConnection
// 0x0024 (0xAEF8 - 0xAF1C)
class UTcpipConnection : public UNetConnection
{
public:
	uint8_t                                            UnknownData00[0x24];                            // 0xAEF8 (0x0024) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpipConnection");
		}

		return uClassPointer;
	};

};
// Class IpDrv.TcpNetDriver
// 0x0020 (0x018C - 0x01AC)
class UTcpNetDriver : public UNetDriver
{
public:
	uint32_t                                           AllowPlayerPortUnreach : 1;                    // 0x018C (0x0004) [0x0000000000000800] [0x00000001] (CPF_Config)
	uint32_t                                           LogPortUnreach : 1;                            // 0x0190 (0x0004) [0x0000000000000800] [0x00000001] (CPF_Config)
	uint8_t                                            UnknownData00[0x18];                            // 0x0194 (0x0018) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpNetDriver");
		}

		return uClassPointer;
	};

};
// Class IpDrv.TitleFileCacheEntry
// 0x0036 (0x0054 - 0x008A)
class UTitleFileCacheEntry : public UObject
{
public:
	class FString                                      Filename;                                      // 0x0054 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              Data;                                          // 0x0064 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      LogicalName;                                   // 0x0074 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Hash;                                          // 0x0084 (0x0004) [0x0000000000000000]               
	ETitleFileFileOp                                   FileOp;                                        // 0x0088 (0x0001) [0x0000000000000000]               
	EOnlineEnumerationReadState                        AsyncState;                                    // 0x0089 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TitleFileCacheEntry");
		}

		return uClassPointer;
	};

};
// Class IpDrv.McpServiceConfig
// 0x0050 (0x0054 - 0x00A4)
class UMcpServiceConfig : public UObject
{
public:
	class FString                                      Protocol;                                      // 0x0054 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Domain;                                        // 0x0064 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      TitleId;                                       // 0x0074 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AppKey;                                        // 0x0084 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      AppSecret;                                     // 0x0094 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServiceConfig");
		}

		return uClassPointer;
	};

};
// Class IpDrv.OnlineImageDownloaderWeb
// 0x0024 (0x0054 - 0x0078)
class UOnlineImageDownloaderWeb : public UObject
{
public:
	class TArray<struct FOnlineImageDownload>          DownloadImages;                                // 0x0054 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            MaxSimultaneousDownloads;                      // 0x0064 (0x0004) [0x0000000000000800] (CPF_Config)  
	struct FScriptDelegate                             __OnOnlineImageDownloaded__Delegate;           // 0x0068 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineImageDownloaderWeb");
		}

		return uClassPointer;
	};


	void DebugDraw(class UCanvas* Canvas);
	void OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void DownloadNextImage();
	void ClearAllDownloads();
	void ClearDownloads(const class TArray<class FString>& URLs);
	int32_t GetNumPendingDownloads();
	void RequestOnlineImages(const class TArray<class FString>& URLs);
	class UTexture* GetOnlineImageTexture(const class FString& URL);
	void OnOnlineImageDownloaded(const struct FOnlineImageDownload& CachedEntry);
};
/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
