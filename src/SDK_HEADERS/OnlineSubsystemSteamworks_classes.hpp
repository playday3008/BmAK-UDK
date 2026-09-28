/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.hpp
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

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
enum class ESteamMatchmakingType : uint8_t
{
	SMT_Invalid                                        = 0,
	SMT_LAN                                            = 1,
	SMT_Internet                                       = 2,
	SMT_END                                            = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
enum class ELeaderboardSortType : uint8_t
{
	LST_Ascending                                      = 0,
	LST_Descending                                     = 1,
	LST_END                                            = 2
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
enum class ELeaderboardRequestType : uint8_t
{
	LBRT_Global                                        = 0,
	LBRT_Player                                        = 1,
	LBRT_Friends                                       = 2,
	LBRT_END                                           = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
enum class ELeaderboardFormat : uint8_t
{
	LF_Number                                          = 0,
	LF_Seconds                                         = 1,
	LF_Milliseconds                                    = 2,
	LF_END                                             = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
enum class EMuteType : uint8_t
{
	MUTE_None                                          = 0,
	MUTE_AllButFriends                                 = 1,
	MUTE_All                                           = 2,
	MUTE_END                                           = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
enum class ELeaderboardUpdateType : uint8_t
{
	LUT_KeepBest                                       = 0,
	LUT_Force                                          = 1,
	LUT_END                                            = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks
// 0x0004 (0x0094 - 0x0098)
class UDownloadableContentEnumeratorSteamworks : public UDownloadableContentEnumerator
{
public:
	int32_t                                            ReadsOutstanding;                              // 0x0094 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks");
		}

		return uClassPointer;
	};


	void DeleteDLC(const class FString& DLCName);
	void AppendDLC(class TArray<struct FOnlineContent>& outBundles);
	void OnReadContentComplete(bool bWasSuccessful);
	void ClearAllContent();
	void FindDLC();
};
// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0000 (0x0318 - 0x0318)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks");
		}

		return uClassPointer;
	};


	bool GetServerAddr(int32_t& outOutServerIP, int32_t& outOutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId& outOutServerUID);
	bool VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t AuthTicketUID);
	bool CreateServerAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t& outOutAuthTicketUID);
	bool VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t AuthTicketUID);
	bool CreateClientAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort, bool bSecure, int32_t& outOutAuthTicketUID);
	bool SendServerAuthRequest(const struct FUniqueNetId& ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID);
};
// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0184 (0x024C - 0x03D0)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	struct FMatchmakingQueryState                      ServerBrowserSearchQuery;                      // 0x024C (0x0074) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	struct FMatchmakingQueryState                      InviteSearchQuery;                             // 0x02C0 (0x0074) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	float                                              ServerBrowserTimeout;                          // 0x0334 (0x0004) [0x0000000000000000]               
	float                                              InviteTimeout;                                 // 0x0338 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                InviteServerUID;                               // 0x033C (0x0008) [0x0000000000000001] (CPF_Const)   
	class TArray<struct FScriptDelegate>               GameInviteAcceptedDelegates;                   // 0x0344 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UOnlineGameSearch*                           InviteGameSearch;                              // 0x0354 (0x0008) [0x0000000000000001] (CPF_Const)   
	class FString                                      InviteLocationUrl;                             // 0x035C (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               RegisterPlayerCompleteDelegates;               // 0x036C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UnregisterPlayerCompleteDelegates;             // 0x037C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bFilterEngineBuild : 1;                        // 0x038C (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FFilterKeyToSteamKeyMapping>   FilterKeyToSteamKeyMap;                        // 0x0390 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;              // 0x03A0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;          // 0x03B0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;        // 0x03C0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		}

		return uClassPointer;
	};


	bool QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool AcceptGameInvite(uint8_t LocalUserNum, const class FName& SessionName);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult& outInviteResult);
	void ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	bool UpdateOnlineGame(const class FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData);
};
// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x0000 (0x0054 - 0x0054)
class UOnlineLobbyInterfaceSteamworks : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks");
		}

		return uClassPointer;
	};

};
// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x0998 (0x0278 - 0x0C10)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    DLCAPI;                                        // 0x0278 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                 // 0x0280 (0x0008) [0x0000000000000001] (CPF_Const)   
	class UOnlineProfileSettings*                      CachedProfile;                                 // 0x0288 (0x0008) [0x0000000000000000]               
	class UOnlinePlayerStorage*                        PlayerStorageCache;                            // 0x0290 (0x0008) [0x0000000000000000]               
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                 // 0x0298 (0x0008) [0x0000000000000001] (CPF_Const)   
	class UOnlineStatsRead*                            CurrentStatsRead;                              // 0x02A0 (0x0008) [0x0000000000000001] (CPF_Const)   
	int32_t                                            GameID;                                        // 0x02A8 (0x0004) [0x0000000000000801] (CPF_Const | CPF_Config)
	class FString                                      EncryptedProductKey;                           // 0x02AC (0x0010) [0x0000000000010801] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ConnectionStatusChangeDelegates;               // 0x02BC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ControllerChangeDelegates;                     // 0x02CC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LinkStatusDelegates;                           // 0x02DC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	ENetworkNotificationPosition                       CurrentNotificationPosition;                   // 0x02EC (0x0001) [0x0000000000000800] (CPF_Config)  
	ELoginStatus                                       LoggedInStatus;                                // 0x02ED (0x0001) [0x0000000000000001] (CPF_Const)   
	uint8_t                                            bWasKeyboardInputCanceled;                     // 0x02EE (0x0001) [0x0000000000000001] (CPF_Const)   
	EOnlineEnumerationReadState                        UserStatsReceivedState;                        // 0x02EF (0x0001) [0x0000000000000000]               
	class FString                                      LocalProfileName;                              // 0x02F0 (0x0010) [0x0000000000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      LoggedInPlayerName;                            // 0x0300 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                              // 0x0310 (0x0008) [0x0000000000000001] (CPF_Const)   
	int32_t                                            LoggedInPlayerNum;                             // 0x0318 (0x0004) [0x0000000000000001] (CPF_Const)   
	class FString                                      ProfileDataDirectory;                          // 0x031C (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ProfileDataExtension;                          // 0x032C (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FriendInviteReceivedDelegates;                 // 0x033C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FriendMessageReceivedDelegates;                // 0x034C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               AddFriendByNameCompleteDelegates;              // 0x035C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FProfileSettingsCache                       ProfileCache;                                  // 0x036C (0x0038) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      CachedFriendMessage;                           // 0x03A4 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class FString>                        LocationUrlsForInvites;                        // 0x03B4 (0x0010) [0x0000000000010801] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      LocationUrl;                                   // 0x03C4 (0x0010) [0x0000000000010801] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReceivedGameInviteDelegates;                   // 0x03D4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               JoinFriendGameCompleteDelegates;               // 0x03E4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               GetNumberOfCurrentPlayersCompleteDelegates;    // 0x03F4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               RegisterHostStatGuidCompleteDelegates;         // 0x0404 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineFriendMessage>          CachedFriendMessages;                          // 0x0414 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bStoringAchievement : 1;                       // 0x0424 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLastHasConnection : 1;                        // 0x0424 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bHasSteamworksAccount : 1;                     // 0x0424 (0x0004) [0x0000000000000801] [0x00000004] (CPF_Const | CPF_Config)
	uint32_t                                           bShouldUseMcp : 1;                             // 0x0424 (0x0004) [0x0000000000000801] [0x00000008] (CPF_Const | CPF_Config)
	uint32_t                                           bNeedsKeyboardTicking : 1;                     // 0x0424 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Const)
	uint32_t                                           bVideoRecordEnabled : 1;                       // 0x0424 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bClientStatsStorePending : 1;                  // 0x0424 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bGSStatsStoresSuccess : 1;                     // 0x0424 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bIsStatsSessionOk : 1;                         // 0x0424 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           m_bReadOpComplete : 1;                         // 0x0424 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           m_bWriteOpComplete : 1;                        // 0x0424 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           m_bDeleteOpComplete : 1;                       // 0x0424 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           m_bOpSuccessful : 1;                           // 0x0424 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bHasReceivedSteamPrices : 1;                   // 0x0424 (0x0004) [0x0000000000000000] [0x00002000] 
	class TArray<struct FScriptDelegate>               AchievementDelegates;                          // 0x0428 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               AchievementReadDelegates;                      // 0x0438 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadFriendsDelegates;                          // 0x0448 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteProfileSettingsDelegates;                 // 0x0458 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FriendsChangeDelegates;                        // 0x0468 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LoginChangeDelegates;                          // 0x0478 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LoginFailedDelegates;                          // 0x0488 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LogoutCompletedDelegates;                      // 0x0498 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               MutingChangeDelegates;                         // 0x04A8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineStatusMapping>          StatusMappings;                                // 0x04B8 (0x0010) [0x0000000000010801] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      DefaultStatus;                                 // 0x04C8 (0x0010) [0x0000000000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      GameInviteMessage;                             // 0x04D8 (0x0010) [0x0000000000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FControllerConnectionState                  ControllerStates[4];                           // 0x04E8 (0x0020) [0x0000000000000000]               
	float                                              ConnectionPresenceTimeInterval;                // 0x0508 (0x0004) [0x0000000000000000]               
	float                                              ConnectionPresenceElapsedTime;                 // 0x050C (0x0004) [0x0000000000000000]               
	class TArray<struct FIpAddr>                       PendingRedirects;                              // 0x0510 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      KeyboardResultsString;                         // 0x0520 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               KeyboardInputDelegates;                        // 0x0530 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAchievementMappingInfo>       AchievementMappings;                           // 0x0540 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LocalPlayerStorageReadDelegates;               // 0x0550 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LocalPlayerStorageWriteDelegates;              // 0x0560 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               RemotePlayerStorageReadDelegates;              // 0x0570 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAchievementProgressStat>      PendingAchievementProgress;                    // 0x0580 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	struct FDeviceIdCache                              DeviceCache;                                   // 0x0590 (0x0024) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FQueuedAvatarRequest>          QueuedAvatarRequests;                          // 0x05B4 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               AccountCreateDelegates;                        // 0x05C4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            TotalGSStatsStoresPending;                     // 0x05D4 (0x0004) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               ReadOnlineStatsCompleteDelegates;              // 0x05D8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FlushOnlineStatsDelegates;                     // 0x05E8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FPendingPlayerStats>           PendingStats;                                  // 0x05F8 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FLeaderboardTemplate>          LeaderboardList;                               // 0x0608 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FDeferredLeaderboardRead>      DeferredLeaderboardReads;                      // 0x0618 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FDeferredLeaderboardWrite>     DeferredLeaderboardWrites;                     // 0x0628 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FDeferredLeaderboardWrite>     PendingLeaderboardStats;                       // 0x0638 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<int32_t>                              GameServerStatsMappings;                       // 0x0648 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	struct FContentListCache                           ContentCache;                                  // 0x0658 (0x006C) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      DLCRootDir;                                    // 0x06C4 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadTitleFileCompleteDelegates;                // 0x06D4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FTitleFile>                    SharedFileCache;                               // 0x06E4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               SpeechRecognitionCompleteDelegates;            // 0x06F4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               TalkingDelegates;                              // 0x0704 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  MuteList;                                      // 0x0714 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                            // 0x0724 (0x0008) [0x0000000000000000]               
	class TArray<struct FRemoteTalker>                 RemoteTalkers;                                 // 0x072C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               EnumerateUserFilesCompleteDelegates;           // 0x073C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadUserFileCompleteDelegates;                 // 0x074C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteUserFileCompleteDelegates;                // 0x075C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DeleteUserFileCompleteDelegates;               // 0x076C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadDownloadFileCompleteDelegates;             // 0x077C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteDownloadFileCompleteDelegates;            // 0x078C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DeleteDownloadFileCompleteDelegates;           // 0x079C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FSteamUserCloud>               UserCloudFiles;                                // 0x07AC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FSteamUserCloudMetadata>       UserCloudMetadata;                             // 0x07BC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               SharedFileReadCompleteDelegates;               // 0x07CC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               SharedFileWriteCompleteDelegates;              // 0x07DC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      m_DownloadFileName;                            // 0x07EC (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	struct FPointer                                    m_DownloadFileDescriptor;                      // 0x07FC (0x0008) [0x0000000000000000]               
	struct FPointer                                    m_DownloadFileTask;                            // 0x0804 (0x0008) [0x0000000000000000]               
	int32_t                                            m_bytesProcessed;                              // 0x080C (0x0004) [0x0000000000000000]               
	class TArray<struct FOnlineStoreContentOffering>   CachedSteamPrices;                             // 0x0810 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                // 0x0820 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                // 0x0830 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                // 0x0840 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;          // 0x0850 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;             // 0x0860 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                     // 0x0870 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                  // 0x0880 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                    // 0x0890 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                   // 0x08A0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                     // 0x08B0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                 // 0x08C0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;               // 0x08D0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;     // 0x08E0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;    // 0x08F0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;// 0x0900 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;       // 0x0910 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;// 0x0920 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;      // 0x0930 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;             // 0x0940 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;           // 0x0950 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;         // 0x0960 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;            // 0x0970 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;              // 0x0980 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;          // 0x0990 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;           // 0x09A0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;       // 0x09B0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;        // 0x09C0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMsgBoxUIComplete__Delegate;                // 0x09D0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;         // 0x09E0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;              // 0x09F0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnNewInfocast__Delegate;                     // 0x0A00 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;// 0x0A10 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;        // 0x0A20 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGTCCommand__Delegate;                      // 0x0A30 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;    // 0x0A40 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;         // 0x0A50 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;        // 0x0A60 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;    // 0x0A70 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnContentChange__Delegate;                   // 0x0A80 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadContentComplete__Delegate;             // 0x0A90 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnContentStatusChange__Delegate;             // 0x0AA0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadInGameStoreContentComplete__Delegate;  // 0x0AB0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPurchaseInGameStoreContentComplete__Delegate;// 0x0AC0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleContentComplete__Delegate;   // 0x0AD0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleSaveGameDataComplete__Delegate;// 0x0AE0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryAvailableDownloadsComplete__Delegate; // 0x0AF0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadSaveGameDataComplete__Delegate;        // 0x0B00 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteSaveGameDataComplete__Delegate;       // 0x0B10 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;           // 0x0B20 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRequestTitleFileListComplete__Delegate;    // 0x0B30 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;        // 0x0B40 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;             // 0x0B50 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;      // 0x0B60 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;            // 0x0B70 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;           // 0x0B80 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;          // 0x0B90 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadDownloadFileComplete__Delegate;        // 0x0BA0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteDownloadFileComplete__Delegate;       // 0x0BB0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteDownloadFileComplete__Delegate;      // 0x0BC0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;          // 0x0BD0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;         // 0x0BE0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRequestComplete__Delegate;                 // 0x0BF0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SteamDLCCallback__Delegate;                  // 0x0C00 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		}

		return uClassPointer;
	};


	void CancelFetchSteamDLC(class UObject* TargetObject);
	void FetchSteamDLC(class UObject* TargetObject, const struct FScriptDelegate& cback);
	void SteamDLCCallback(bool bWasSuccessful, const class TArray<struct FSteam_PriceInfo>& aPrices);
	void eventExit();
	bool eventInit();
	void OnRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void WebRequest(const class FString& HttpMethod, const class FString& URL, const class FString& optionalParams);
	class FString GetSteamID();
	void ClearWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate);
	void AddWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate);
	bool WriteSharedFile(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outContents);
	void OnWriteSharedFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename, const class FString& SharedHandle);
	void ClearReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate);
	void AddReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate);
	bool ReadSharedFile(const class FString& SharedHandle);
	void OnReadSharedFileComplete(bool bWasSuccessful, const class FString& SharedHandle);
	bool ClearSharedFile(const class FString& SharedHandle);
	bool ClearSharedFiles();
	bool GetSharedFileContents(const class FString& SharedHandle, class TArray<uint8_t>& outFileContents);
	bool WriteFileToScatch(uint8_t LocalUserNum, const class FString& Filename, class TArray<uint8_t>& outFileContents);
	bool ReadFileFromScatch(uint8_t LocalUserNum, const class FString& Filename, class TArray<uint8_t>& outOutFileContents);
	void ClearAllDelegates();
	void CancelDownloadFileIO();
	void ClearDeleteDownloadFileCompleteDelegate(const struct FScriptDelegate& DeleteDownloadFileCompleteDelegate);
	void AddDeleteDownloadFileCompleteDelegate(const struct FScriptDelegate& DeleteDownloadFileCompleteDelegate);
	void OnDeleteDownloadFileComplete(bool bWasSuccessful, const class FString& Filename);
	bool DeleteDownloadFile(const class FString& Filename);
	void ClearWriteDownloadFileCompleteDelegate(const struct FScriptDelegate& WriteDownloadFileCompleteDelegate);
	void AddWriteDownloadFileCompleteDelegate(const struct FScriptDelegate& WriteDownloadFileCompleteDelegate);
	void OnWriteDownloadFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed);
	bool WriteDownloadFile(const class FString& Filename, class TArray<uint8_t>& outFileContents, class FString& outFileCRC);
	void ClearReadDownloadFileCompleteDelegate(const struct FScriptDelegate& ReadDownloadFileCompleteDelegate);
	void AddReadDownloadFileCompleteDelegate(const struct FScriptDelegate& ReadDownloadFileCompleteDelegate);
	void OnReadDownloadFileComplete(bool bWasSuccessful, const class FString& Filename, int32_t bytesProcessed);
	bool ReadDownloadFile(const class FString& Filename, class TArray<uint8_t>& outOutFileContents, class FString& outOutFileCRC);
	int32_t GetDownloadFileSize(const class FString& Filename, bool optionalKeepHandle);
	void EnumerateDownloadFiles(const class FString& Subfolder, class TArray<class FString>& outOutFiles);
	void EnumerateDownloadFolders(class TArray<class FString>& outOutFolders);
	void ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	bool DeleteUserFile(const class FString& UserId, const class FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void OnDeleteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	bool ManageLocalBackups(const class FString& Filename);
	bool WriteUserFileLocal(const class FString& SaveName, bool isSteamBackup, class TArray<uint8_t>& outContents);
	bool WriteUserFile(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void OnWriteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	bool ReadUserFile(const class FString& UserId, const class FString& Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void GetUserFileList(const class FString& UserId, class TArray<struct FEmsFile>& outUserFiles);
	void ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void EnumerateUserFiles(const class FString& UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, const class FString& UserId);
	bool ClearFile(const class FString& UserId, const class FString& Filename);
	bool ClearFiles(const class FString& UserId);
	bool GetFileContents(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent);
	void OnVOIPPlaybackFinished(class UAudioComponent* AC);
	bool UnmuteAll(uint8_t LocalUserNum);
	bool MuteAll(uint8_t LocalUserNum, bool bAllowFriends);
	bool SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId);
	void ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void AddRecognitionCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(uint8_t LocalUserNum, class TArray<struct FSpeechRecognizedWord>& outWords);
	bool StopSpeechRecognition(uint8_t LocalUserNum);
	bool StartSpeechRecognition(uint8_t LocalUserNum);
	void StopNetworkedVoice(uint8_t LocalUserNum);
	void StartNetworkedVoice(uint8_t LocalUserNum);
	void ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	bool UnmuteRemoteTalker(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, bool optionalBIsSystemWide);
	bool MuteRemoteTalker(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, bool optionalBIsSystemWide);
	bool SetRemoteTalkerPriority(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, int32_t Priority);
	bool IsHeadsetPresent(uint8_t LocalUserNum);
	bool IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	bool IsLocalPlayerTalking(uint8_t LocalUserNum);
	bool UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool UnregisterLocalTalker(uint8_t LocalUserNum);
	bool RegisterLocalTalker(uint8_t LocalUserNum);
	void ClearRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void AddRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void OnRequestTitleFileListComplete(bool bWasSuccessful, const class FString& ResultStr);
	void RequestTitleFileList();
	bool ClearDownloadedFile(const class FString& Filename);
	bool ClearDownloadedFiles();
	EOnlineEnumerationReadState GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const class FString& FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename);
	bool ClearSaveGames(uint8_t LocalUserNum);
	bool DeleteSaveGame(uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename);
	void ClearWriteSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& WriteSaveGameDataCompleteDelegate);
	void AddWriteSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& WriteSaveGameDataCompleteDelegate);
	void OnWriteSaveGameDataComplete(bool bWasSuccessful, uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName);
	bool WriteSaveGameData(uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName, class TArray<uint8_t>& outSaveGameData);
	void ClearReadSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate);
	void AddReadSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate);
	void OnReadSaveGameDataComplete(bool bWasSuccessful, uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName);
	bool GetSaveGameData(uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName, uint8_t& outBIsValid, class TArray<uint8_t>& outSaveGameData);
	bool ReadSaveGameData(uint8_t LocalUserNum, int32_t DeviceID, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName);
	void GetAvailableDownloadCounts(uint8_t LocalUserNum, int32_t& outNewDownloads, int32_t& outTotalDownloads);
	void ClearQueryAvailableDownloadsComplete(uint8_t LocalUserNum, const struct FScriptDelegate& QueryDownloadsDelegate);
	void AddQueryAvailableDownloadsComplete(uint8_t LocalUserNum, const struct FScriptDelegate& QueryDownloadsDelegate);
	void OnQueryAvailableDownloadsComplete(bool bWasSuccessful);
	bool QueryAvailableDownloads(uint8_t LocalUserNum, int32_t optionalCategoryMask);
	bool ClearCrossTitleSaveGames(uint8_t LocalUserNum);
	void ClearReadCrossTitleSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate);
	void AddReadCrossTitleSaveGameDataComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate);
	void OnReadCrossTitleSaveGameDataComplete(bool bWasSuccessful, uint8_t LocalUserNum, int32_t DeviceID, int32_t TitleId, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName);
	bool GetCrossTitleSaveGameData(uint8_t LocalUserNum, int32_t DeviceID, int32_t TitleId, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName, uint8_t& outBIsValid, class TArray<uint8_t>& outSaveGameData);
	bool ReadCrossTitleSaveGameData(uint8_t LocalUserNum, int32_t DeviceID, int32_t TitleId, const class FString& FriendlyName, const class FString& Filename, const class FString& SaveFileName);
	void ClearReadCrossTitleContentCompleteDelegate(uint8_t LocalUserNum, EOnlineContentType ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate);
	void AddReadCrossTitleContentCompleteDelegate(uint8_t LocalUserNum, EOnlineContentType ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate);
	void OnReadCrossTitleContentComplete(bool bWasSuccessful);
	EOnlineEnumerationReadState GetCrossTitleContentList(uint8_t LocalUserNum, EOnlineContentType ContentType, class TArray<struct FOnlineCrossTitleContent>& outContentList);
	void ClearCrossTitleContentList(uint8_t LocalUserNum, EOnlineContentType ContentType);
	bool ReadCrossTitleContentList(uint8_t LocalUserNum, EOnlineContentType ContentType, int32_t optionalTitleId, int32_t optionalDeviceID);
	class FString GetUserLanguage();
	class FString GetUserCountryCode();
	void ShowPS4DownloadList(uint8_t LocalUserNum);
	void ShowPS4StoreIcon(bool bShow, int32_t optionalPosition);
	void BrowseInGameStoreItem(uint8_t LocalUserNum, const class FString& ItemId);
	void PurchaseInGameStoreItem(uint8_t LocalUserNum, const class FString& ItemId);
	void ClearPurchaseInGameStoreContentComplete(uint8_t LocalUserNum, const struct FScriptDelegate& PurchaseInGameStoreContentComplete);
	void AddPurchaseInGameStoreContentComplete(uint8_t LocalUserNum, const struct FScriptDelegate& PurchaseInGameStoreContentComplete);
	void OnPurchaseInGameStoreContentComplete(bool bWasSuccessful);
	void GetInGameStoreContentList(uint8_t LocalUserNum, class TArray<struct FOnlineStoreContent>& outContentList);
	bool ReadInGameStoreContentList(uint8_t LocalUserNum);
	void ClearInGameStoreContentList(uint8_t LocalUserNum);
	void ClearReadInGameStoreContentComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadInGameStoreContentComplete);
	void AddReadInGameStoreContentComplete(uint8_t LocalUserNum, const struct FScriptDelegate& ReadInGameStoreContentComplete);
	void OnReadInGameStoreContentComplete(bool bWasSuccessful);
	void ClearContentStatusChangeDelegate(const struct FScriptDelegate& ContentStatusChangeDelegate);
	void AddContentStatusChangeDelegate(const struct FScriptDelegate& ContentStatusChangeDelegate);
	void OnContentStatusChange();
	EOnlineEnumerationReadState GetContentList(uint8_t LocalUserNum, EOnlineContentType ContentType, class TArray<struct FOnlineContent>& outContentList);
	void ClearContentList(uint8_t LocalUserNum, EOnlineContentType ContentType);
	bool ReadContentList(uint8_t LocalUserNum, EOnlineContentType ContentType, int32_t optionalDeviceID);
	bool HasContentUpdated();
	void ClearReadContentComplete(uint8_t LocalUserNum, EOnlineContentType ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate);
	void AddReadContentComplete(uint8_t LocalUserNum, EOnlineContentType ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate);
	void OnReadContentComplete(bool bWasSuccessful);
	void ClearContentChangeDelegate(const struct FScriptDelegate& ContentDelegate, uint8_t optionalLocalUserNum);
	void AddContentChangeDelegate(const struct FScriptDelegate& ContentDelegate, uint8_t optionalLocalUserNum);
	void OnContentChange();
	void CalcAggregateSkill(const class TArray<struct FDouble>& Mus, const class TArray<struct FDouble>& Sigmas, struct FDouble& outOutAggregateMu, struct FDouble& outOutAggregateSigma);
	bool RegisterStatGuid(const struct FUniqueNetId& PlayerID, class FString& outClientStatGuid);
	class FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(class FString& outHostStatGuid);
	class FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(const class FName& SessionName, int32_t LeaderboardId, class TArray<struct FOnlinePlayerScore>& outPlayerScores);
	bool CreateLeaderboard(const class FString& LeaderboardName, ELeaderboardSortType SortType, ELeaderboardFormat DisplayFormat);
	bool ResetStats(bool bResetAchievements);
	void ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(const class FName& SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(const class FName& SessionName);
	bool WriteOnlineStats(const class FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t optionalNumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int32_t optionalStartIndex, int32_t optionalNumToRead);
	bool ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, class TArray<struct FUniqueNetId>& outPlayers);
	void DebugWriteLBForUser(const class FString& User, int32_t BoardID, int32_t RankValue, const class TArray<int32_t>& StatsArray);
	void DropOnlineStatsRead();
	bool ResetOnlineStatsForAllUsers(int32_t BoardID);
	bool ResetOnlineStatsForUser(uint8_t LocalUserNum, int32_t BoardID);
	bool GetLocalAccountNames(class TArray<class FString>& outAccounts);
	bool DeleteLocalAccount(const class FString& UserName, const class FString& optionalPassword);
	bool RenameLocalAccount(const class FString& NewUserName, const class FString& OldUserName, const class FString& optionalPassword);
	bool CreateLocalAccount(const class FString& UserName, const class FString& optionalPassword);
	void ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void OnCreateOnlineAccountCompleted(EOnlineAccountCreateStatus ErrorStatus);
	bool CreateOnlineAccount(const class FString& UserName, const class FString& Password, const class FString& EmailAddress, const class FString& optionalProductKey);
	bool IsExternalRemoteDevice();
	void OpenWebBrowser(const class FString& sURL);
	int32_t GetNpAvailabilityForUser(uint8_t LocalUserNum);
	void CheckNpAvailabilityForUser(uint8_t LocalUserNum);
	int32_t StreamingInstall_Poll(int32_t& outPercent, int32_t& outTime);
	bool StreamingInstall_CheckChunk(int32_t Chunk);
	bool StreamingInstall_IsFinished();
	void SetDurangoKinectState(bool bEnabled);
	void SetGTCStates(bool bPlayEnabled, bool bPauseEnabled, bool bMenuEnabled, bool bViewEnabled, bool bBackEnabled);
	void SetGTCState(EGTCCommand Id, bool bState);
	void ClearGTCCommandDelegate(const struct FScriptDelegate& GTCCommandDelegate);
	void AddGTCCommandDelegate(const struct FScriptDelegate& GTCCommandDelegate);
	void OnGTCCommand(EGTCCommand NewCommand);
	void NavigateBack();
	void OpenHelpManual(uint8_t LocalUserNum);
	bool VideoRecordStop(uint8_t LocalUserNum, uint8_t VideoId, const class FString& TitleStr);
	bool VideoRecordStart(uint8_t LocalUserNum);
	void VideoRecord(uint8_t LocalUserNum, uint8_t VideoId, const class FString& TitleStr, float TimeStart, float TimeStop);
	void VideoRecordSetGameSectionId(int32_t SectionId);
	void VideoRecordAllowed(bool bEnabled);
	bool IsVideoRecordAllowed();
	void UnBindAllPlayers();
	void UnBindPlayer(int32_t ControllerId);
	int32_t ResumePlayer(int32_t ControllerId, int32_t ControllerIndex);
	void ReBindPlayer(int32_t ControllerId, int32_t ControllerIndex);
	int32_t BindPlayer(int32_t ControllerIndex);
	int32_t GetBoundCount();
	void ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, int32_t Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate);
	void OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar);
	bool ShowCustomMessageUI(uint8_t LocalUserNum, const class FString& MessageTitle, const class FString& NonEditableMessage, const class FString& optionalEditableMessage, class TArray<struct FUniqueNetId>& outRecipients);
	void ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful);
	bool ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings);
	bool UnlockAvatarAward(uint8_t LocalUserNum, int32_t AvatarItemId);
	float GetTimeSinceGuideLastClosed();
	void CreateInfocastSystem();
	void ClearNewInfocastDelegate(const struct FScriptDelegate& InfocastDelegate);
	void AddNewInfocastDelegate(const struct FScriptDelegate& InfocastDelegate);
	void OnNewInfocast(const class FString& Infocast);
	bool ShowCustomPlayersUI(uint8_t LocalUserNum, const class FString& Title, const class FString& Description, class TArray<struct FUniqueNetId>& outPlayers);
	bool ShowPlayersUI(uint8_t LocalUserNum);
	bool ShowGuideUI();
	bool ShowFriendsInviteUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	void ClearProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId);
	bool IsDeviceValid(int32_t DeviceID, int32_t optionalSizeNeeded);
	int32_t GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& outDeviceName);
	void ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	bool ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool optionalBForceShowUI, bool optionalBManageStorage);
	bool ShowMembershipMarketplaceUI(uint8_t LocalUserNum);
	bool ShowContentMarketplaceUI(uint8_t LocalUserNum, int32_t optionalCategoryMask, int32_t optionalOfferId);
	bool ShowInviteUI(uint8_t LocalUserNum, const class FString& optionalInviteText);
	bool ShowAchievementsUI(uint8_t LocalUserNum);
	bool ShowMessagesUI(uint8_t LocalUserNum);
	bool ShowTokenRedemptionUI(uint8_t LocalUserNum, const class FString& optionalOfferId);
	bool ShowAccountPickerUI(uint8_t LocalUserNum);
	bool ShowGamerCardUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, const class FString& optionalNickName);
	bool ShowFeedbackUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	void ClearMsgBoxUIDelegate(const struct FScriptDelegate& MsgDelegate);
	void AddMsgBoxUIDoneDelegate(const struct FScriptDelegate& MsgDelegate);
	void OnMsgBoxUIComplete(int32_t ButtonResult);
	bool ShowSystemMsgBoxUI(uint8_t LocalUserNum, int32_t SysMsg);
	bool WriteUserFileInternal(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents);
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
	EOnlineEnumerationReadState GetAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, class TArray<struct FAchievementDetails>& outAchievements);
	void ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int32_t TitleId);
	bool ReadAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, bool optionalBShouldReadText, bool optionalBShouldReadImages);
	void ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float optionalPercentComplete);
	bool DisplayAchievementProgress(int32_t AchievementId, int32_t ProgressCount, int32_t MaxProgress);
	bool DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex);
	void ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void OnFriendMessageReceived(uint8_t LocalUserNum, const struct FUniqueNetId& SendingPlayer, const class FString& SendingNick, const class FString& Message);
	void GetFriendMessages(uint8_t LocalUserNum, class TArray<struct FOnlineFriendMessage>& outFriendMessages);
	void ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(uint8_t LocalUserNum, const struct FUniqueNetId& Friend);
	void ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(uint8_t LocalUserNum, const class FString& InviterName);
	bool SendGameInviteToFriends(uint8_t LocalUserNum, const class TArray<struct FUniqueNetId>& Friends, const class FString& optionalText);
	bool SendGameInviteToFriend(uint8_t LocalUserNum, const struct FUniqueNetId& Friend, const class FString& optionalText);
	bool SendMessageToFriendWin(uint8_t LocalUserNum, const struct FUniqueNetId& Friend, const class FString& Message);
	void ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteReceived(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const class FString& RequestingNick, const class FString& Message);
	bool RemoveFriend(uint8_t LocalUserNum, const struct FUniqueNetId& FormerFriend);
	bool DenyFriendInvite(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool AcceptFriendInvite(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	void ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendByNameComplete(bool bWasSuccessful);
	bool AddFriendByName(uint8_t LocalUserNum, const class FString& FriendName, const class FString& optionalMessage);
	bool AddFriend(uint8_t LocalUserNum, const struct FUniqueNetId& NewFriend, const class FString& optionalMessage);
	class FString GetKeyboardInputResults(uint8_t& outBWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool ShowKeyboardUI(uint8_t LocalUserNum, const class FString& TitleText, const class FString& DescriptionText, bool optionalBIsPassword, bool optionalBShouldValidate, const class FString& optionalDefaultText, int32_t optionalMaxResultLength);
	void SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, class TArray<struct FLocalizedStringSetting>& outLocalizedStringSettings, class TArray<struct FSettingsProperty>& outProperties);
	EOnlineEnumerationReadState GetFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt, class TArray<struct FOnlineFriend>& outFriends);
	void ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt);
	void ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(uint8_t LocalUserNum);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful);
	bool ReadPlayerStorageForNetId(uint8_t LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	bool GetFriendJoinURL(const struct FUniqueNetId& FriendUID, class FString& outServerURL, class FString& outServerUID);
	bool GetCommandlineJoinURL(bool bMarkAsJoined, class FString& outServerURL, class FString& outServerUID);
	bool Int64ToUniqueNetId(const class FString& UIDString, struct FUniqueNetId& outOutUID);
	class FString UniqueNetIdToInt64(struct FUniqueNetId& outUid);
	bool ShowProfileUI(uint8_t LocalUserNum, const class FString& optionalSubURL, const struct FUniqueNetId& optionalPlayerUID);
	class FString UniqueNetIdToPlayerName(struct FUniqueNetId& outUid);
	void GetSteamClanData(class TArray<struct FSteamPlayerClanData>& outResults);
	void ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void OnGetNumberOfCurrentPlayersComplete(int32_t TotalPlayers);
	bool GetNumberOfCurrentPlayers();
	void ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(uint8_t LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void AddFriendsChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, uint8_t LocalUserNum);
	void AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, uint8_t LocalUserNum);
	void OnLoginStatusChange(ELoginStatus NewStatus, const struct FUniqueNetId& NewId);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	bool ShowFriendsUI(uint8_t LocalUserNum);
	bool IsMuted(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool AreAnyFriends(uint8_t LocalUserNum, class TArray<struct FFriendsQuery>& outQuery);
	bool IsFriend(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	EFeaturePrivilegeLevel CanShowPresenceInformation(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanViewPlayerProfiles(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanPurchaseContent(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanDownloadUserContent(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanCommunicate(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanPlayOnline(uint8_t LocalUserNum);
	bool IsOnlineAccount(uint8_t LocalUserNum);
	bool IsLocalLogin(uint8_t LocalUserNum);
	bool IsGuestLogin(uint8_t LocalUserNum);
	class FString GetPlayerDisplayName(uint8_t LocalUserNum);
	class FString GetPlayerNickname(uint8_t LocalUserNum);
	bool GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& outPlayerID);
	ELoginStatus GetLoginStatus(uint8_t LocalUserNum);
	void ClearLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void AddLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(uint8_t LocalUserNum);
	void ClearLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void AddLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode);
	bool AutoLogin();
	bool Login(uint8_t LocalUserNum, const class FString& LoginName, const class FString& Password, bool optionalBWantsLocalOnly);
	bool ShowLoginUI(bool optionalBShowOnlineOnly);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(uint8_t LocalUserNum);
	int32_t GetLocale();
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	ENATType GetNATType();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus);
	bool IsControllerConnected(int32_t ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void OnControllerChange(int32_t ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos);
	ENetworkNotificationPosition GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
};
// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0000 (0x01AC - 0x01AC)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetDriverSteamworks");
		}

		return uClassPointer;
	};

};
// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0xAF1C - 0xAF1C)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks");
		}

		return uClassPointer;
	};

};
/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
