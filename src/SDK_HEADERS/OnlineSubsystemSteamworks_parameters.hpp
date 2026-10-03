/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_parameters.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#include "OnlineSubsystemSteamworks_structs.hpp"

#include "IpDrv_parameters.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Parameters
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.DeleteDLC
// [0x00020000] 
struct UDownloadableContentEnumeratorSteamworks_execDeleteDLC_Params
{
	class FString                                      DLCName;                                          // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UDownloadableContentEnumeratorSteamworks_execDeleteDLC_Params, DLCName) == 0x0000);
static_assert(sizeof(UDownloadableContentEnumeratorSteamworks_execDeleteDLC_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.AppendDLC
// [0x00420400] 
struct UDownloadableContentEnumeratorSteamworks_execAppendDLC_Params
{
	class TArray<struct FOnlineContent>                Bundles;                                          // 0x0000 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UDownloadableContentEnumeratorSteamworks_execAppendDLC_Params, Bundles) == 0x0000);
static_assert(sizeof(UDownloadableContentEnumeratorSteamworks_execAppendDLC_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.OnReadContentComplete
// [0x00020002] 
struct UDownloadableContentEnumeratorSteamworks_execOnReadContentComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0004 (0x0008) [0x0000000000000000]               
	// class UOnlineContentInterface*                  ContentInt;                                       // 0x000C (0x0010) [0x0000000000000000]               
	// int32_t                                         PlayerIndex;                                      // 0x001C (0x0004) [0x0000000000000000]               
	// class TArray<struct FOnlineContent>             UserBundles;                                      // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};
static_assert(offsetof(UDownloadableContentEnumeratorSteamworks_execOnReadContentComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UDownloadableContentEnumeratorSteamworks_execOnReadContentComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.ClearAllContent
// [0x00020002] 
struct UDownloadableContentEnumeratorSteamworks_execClearAllContent_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	// class UOnlineContentInterface*                  ContentInt;                                       // 0x0008 (0x0010) [0x0000000000000000]               
	// int32_t                                         PlayerIndex;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.DownloadableContentEnumeratorSteamworks.FindDLC
// [0x00020002] 
struct UDownloadableContentEnumeratorSteamworks_execFindDLC_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	// class UOnlineContentInterface*                  ContentInt;                                       // 0x0008 (0x0010) [0x0000000000000000]               
	// class UOnlinePlayerInterface*                   PlayerInt;                                        // 0x0018 (0x0010) [0x0000000000000000]               
	// int32_t                                         PlayerIndex;                                      // 0x0028 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] 
struct UOnlineAuthInterfaceSteamworks_execGetServerAddr_Params
{
	int32_t                                            OutServerIP;                                      // 0x0000 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	int32_t                                            OutServerPort;                                    // 0x0004 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineAuthInterfaceSteamworks_execGetServerAddr_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineAuthInterfaceSteamworks_execGetServerAddr_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] 
struct UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                     // 0x0000 (0x0008) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] 
struct UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] 
struct UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientPort;                                       // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            OutAuthTicketUID;                                 // 0x0010 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] 
struct UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientPort;                                       // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] 
struct UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerPort;                                       // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bSecure;                                          // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	int32_t                                            OutAuthTicketUID;                                 // 0x0014 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue;                                      // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Params) >= 0x001C);

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x00020400] 
struct UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x00020400] 
struct UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Params
{
	int32_t                                            StartAt;                                          // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            NumberToQuery;                                    // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Params, UnregisterPlayerCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Params, UnregisterPlayerCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful;                                   // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Params, bWasSuccessful) == 0x0010);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] 
struct UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Params, RegisterPlayerCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Params, RegisterPlayerCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful;                                   // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Params, bWasSuccessful) == 0x0010);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] 
struct UOnlineGameInterfaceSteamworks_execRegisterPlayer_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasInvited;                                      // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execRegisterPlayer_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execRegisterPlayer_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00020400] 
struct UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                     // 0x0000 (0x0010) [0x0000000000000029] (CPF_Const | CPF_Parm | CPF_OutParm)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Params, InviteResult) == 0x0000);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Params, GameInviteAcceptedDelegate) == 0x0004);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Params, GameInviteAcceptedDelegate) == 0x0004);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] 
struct UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UOnlineGameSettings*                         UpdatedGameSettings;                              // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bShouldRefreshOnlineData;                         // 0x0010 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CancelFetchSteamDLC
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execCancelFetchSteamDLC_Params
{
	class UObject*                                     TargetObject;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCancelFetchSteamDLC_Params, TargetObject) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCancelFetchSteamDLC_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FetchSteamDLC
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execFetchSteamDLC_Params
{
	class UObject*                                     TargetObject;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FScriptDelegate                             cback;                                            // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execFetchSteamDLC_Params, cback) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execFetchSteamDLC_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamDLCCallback
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execSteamDLCCallback_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class TArray<struct FSteam_PriceInfo>              aPrices;                                          // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSteamDLCCallback_Params, aPrices) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSteamDLCCallback_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] 
struct UOnlineSubsystemSteamworks_eventExit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] 
struct UOnlineSubsystemSteamworks_eventInit_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_eventInit_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_eventInit_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRequestComplete
// [0x00120002] 
struct UOnlineSubsystemSteamworks_execOnRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bDidSucceed;                                      // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	// class TArray<class FString>                     Headers;                                          // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class FString                                   Header;                                           // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class FString                                   Payload;                                          // 0x0034 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// int32_t                                         PayloadIndex;                                     // 0x0044 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnRequestComplete_Params, bDidSucceed) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnRequestComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WebRequest
// [0x00024002] 
struct UOnlineSubsystemSteamworks_execWebRequest_Params
{
	class FString                                      HttpMethod;                                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      URL;                                              // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Params;                                           // 0x0020 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	// class UHttpRequestInterface*                    Request;                                          // 0x0030 (0x0008) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWebRequest_Params, Params) == 0x0020);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWebRequest_Params) >= 0x0030);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamID
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execGetSteamID_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetSteamID_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetSteamID_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Params, WriteSharedFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Params, WriteSharedFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execWriteSharedFile_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              Contents;                                         // 0x0020 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWriteSharedFile_Params, ReturnValue) == 0x0030);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWriteSharedFile_Params) >= 0x0034);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SharedHandle;                                     // 0x0024 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Params, SharedHandle) == 0x0024);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Params) >= 0x0034);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Params, ReadSharedFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Params, ReadSharedFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadSharedFile_Params
{
	class FString                                      SharedHandle;                                     // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadSharedFile_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadSharedFile_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      SharedHandle;                                     // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Params, SharedHandle) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execClearSharedFile_Params
{
	class FString                                      SharedHandle;                                     // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearSharedFile_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearSharedFile_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execClearSharedFiles_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearSharedFiles_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearSharedFiles_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetSharedFileContents_Params
{
	class FString                                      SharedHandle;                                     // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0010 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetSharedFileContents_Params, ReturnValue) == 0x0020);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetSharedFileContents_Params) >= 0x0024);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteFileToScatch
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execWriteFileToScatch_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0014 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWriteFileToScatch_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWriteFileToScatch_Params) >= 0x0028);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFileFromScatch
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execReadFileFromScatch_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              OutFileContents;                                  // 0x0014 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadFileFromScatch_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadFileFromScatch_Params) >= 0x0028);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearAllDelegates_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CancelDownloadFileIO
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execCancelDownloadFileIO_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteDownloadFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearDeleteDownloadFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteDownloadFileCompleteDelegate;               // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearDeleteDownloadFileCompleteDelegate_Params, DeleteDownloadFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearDeleteDownloadFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteDownloadFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddDeleteDownloadFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteDownloadFileCompleteDelegate;               // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddDeleteDownloadFileCompleteDelegate_Params, DeleteDownloadFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddDeleteDownloadFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteDownloadFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnDeleteDownloadFileComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnDeleteDownloadFileComplete_Params, Filename) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnDeleteDownloadFileComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteDownloadFile
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execDeleteDownloadFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execDeleteDownloadFile_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execDeleteDownloadFile_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteDownloadFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWriteDownloadFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteDownloadFileCompleteDelegate;                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearWriteDownloadFileCompleteDelegate_Params, WriteDownloadFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearWriteDownloadFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteDownloadFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWriteDownloadFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteDownloadFileCompleteDelegate;                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddWriteDownloadFileCompleteDelegate_Params, WriteDownloadFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddWriteDownloadFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteDownloadFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteDownloadFileComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytesProcessed;                                   // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnWriteDownloadFileComplete_Params, bytesProcessed) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnWriteDownloadFileComplete_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteDownloadFile
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execWriteDownloadFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0010 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      FileCRC;                                          // 0x0020 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWriteDownloadFile_Params, ReturnValue) == 0x0030);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWriteDownloadFile_Params) >= 0x0034);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadDownloadFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadDownloadFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadDownloadFileCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadDownloadFileCompleteDelegate_Params, ReadDownloadFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadDownloadFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadDownloadFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadDownloadFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadDownloadFileCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadDownloadFileCompleteDelegate_Params, ReadDownloadFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadDownloadFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadDownloadFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadDownloadFileComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytesProcessed;                                   // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadDownloadFileComplete_Params, bytesProcessed) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadDownloadFileComplete_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadDownloadFile
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execReadDownloadFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              OutFileContents;                                  // 0x0010 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      OutFileCRC;                                       // 0x0020 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadDownloadFile_Params, ReturnValue) == 0x0030);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadDownloadFile_Params) >= 0x0034);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDownloadFileSize
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execGetDownloadFileSize_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           KeepHandle;                                       // 0x0010 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetDownloadFileSize_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetDownloadFileSize_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateDownloadFiles
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execEnumerateDownloadFiles_Params
{
	class TArray<class FString>                        OutFiles;                                         // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      Subfolder;                                        // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execEnumerateDownloadFiles_Params, Subfolder) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execEnumerateDownloadFiles_Params) >= 0x0020);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateDownloadFolders
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execEnumerateDownloadFolders_Params
{
	class TArray<class FString>                        OutFolders;                                       // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execEnumerateDownloadFolders_Params, OutFolders) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execEnumerateDownloadFolders_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Params, DeleteUserFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Params, DeleteUserFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execDeleteUserFile_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldCloudDelete;                               // 0x0020 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           bShouldLocallyDelete;                             // 0x0024 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0028 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execDeleteUserFile_Params, ReturnValue) == 0x0028);
static_assert(sizeof(UOnlineSubsystemSteamworks_execDeleteUserFile_Params) >= 0x002C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Params, Filename) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Params) >= 0x0024);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Params, WriteUserFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Params, WriteUserFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ManageLocalBackups
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execManageLocalBackups_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execManageLocalBackups_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execManageLocalBackups_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileLocal
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execWriteUserFileLocal_Params
{
	class FString                                      SaveName;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              Contents;                                         // 0x0010 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           isSteamBackup;                                    // 0x0020 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWriteUserFileLocal_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWriteUserFileLocal_Params) >= 0x0028);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execWriteUserFile_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0020 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWriteUserFile_Params, ReturnValue) == 0x0030);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWriteUserFile_Params) >= 0x0034);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Params, Filename) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Params) >= 0x0024);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Params, ReadUserFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Params, ReadUserFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadUserFile_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadUserFile_Params, ReturnValue) == 0x0020);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadUserFile_Params) >= 0x0024);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Params, Filename) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Params) >= 0x0024);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetUserFileList_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FEmsFile>                      UserFiles;                                        // 0x0010 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetUserFileList_Params, UserFiles) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetUserFileList_Params) >= 0x0020);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Params, EnumerateUserFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Params, EnumerateUserFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execEnumerateUserFiles_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execEnumerateUserFiles_Params, UserId) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execEnumerateUserFiles_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Params, UserId) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execClearFile_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearFile_Params, ReturnValue) == 0x0020);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearFile_Params) >= 0x0024);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execClearFiles_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearFiles_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearFiles_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetFileContents_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0020 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetFileContents_Params, ReturnValue) == 0x0030);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetFileContents_Params) >= 0x0034);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             VOIPAudioComponent;                               // 0x0000 (0x0008) [0x0000004000000008] (CPF_Parm | CPF_EditInline)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Params, VOIPAudioComponent) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             AC;                                               // 0x0000 (0x0008) [0x0000004000000008] (CPF_Parm | CPF_EditInline)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Params, AC) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execUnmuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execUnmuteAll_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execUnmuteAll_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execMuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           bAllowFriends;                                    // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execMuteAll_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execMuteAll_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class USpeechRecognition*                          SpeechRecogObj;                                   // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSelectVocabulary_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            VocabularyId;                                     // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSelectVocabulary_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSelectVocabulary_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             RecognitionDelegate;                              // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Params, RecognitionDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             RecognitionDelegate;                              // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Params, RecognitionDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnRecognitionComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetRecognitionResults_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class TArray<struct FSpeechRecognizedWord>         Words;                                            // 0x0004 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetRecognitionResults_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetRecognitionResults_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execStopSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execStopSpeechRecognition_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execStopSpeechRecognition_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execStartSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execStartSpeechRecognition_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execStartSpeechRecognition_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execStopNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execStopNetworkedVoice_Params, LocalUserNum) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execStopNetworkedVoice_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execStartNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execStartNetworkedVoice_Params, LocalUserNum) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execStartNetworkedVoice_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Params, TalkerDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         AddIndex;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Params, TalkerDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bIsTalking;                                       // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params, bIsTalking) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bIsSystemWide;                                    // 0x000C (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execMuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bIsSystemWide;                                    // 0x000C (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execMuteRemoteTalker_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execMuteRemoteTalker_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            Priority;                                         // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execIsHeadsetPresent_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsHeadsetPresent_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsHeadsetPresent_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                         // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execRegisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execRegisterLocalTalker_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execRegisterLocalTalker_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRequestTitleFileListCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearRequestTitleFileListCompleteDelegate_Params
{
	struct FScriptDelegate                             RequestTitleFileListDelegate;                     // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearRequestTitleFileListCompleteDelegate_Params, RequestTitleFileListDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearRequestTitleFileListCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRequestTitleFileListCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddRequestTitleFileListCompleteDelegate_Params
{
	struct FScriptDelegate                             RequestTitleFileListDelegate;                     // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddRequestTitleFileListCompleteDelegate_Params, RequestTitleFileListDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddRequestTitleFileListCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRequestTitleFileListComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnRequestTitleFileListComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      ResultStr;                                        // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnRequestTitleFileListComplete_Params, ResultStr) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnRequestTitleFileListComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestTitleFileList
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execRequestTitleFileList_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFile
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearDownloadedFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearDownloadedFile_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearDownloadedFile_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFiles
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearDownloadedFiles_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearDownloadedFiles_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearDownloadedFiles_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x0010 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetTitleFileState_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetTitleFileState_Params) >= 0x0011);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0010 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetTitleFileContents_Params, ReturnValue) == 0x0020);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetTitleFileContents_Params) >= 0x0024);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params, ReadTitleFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params, ReadTitleFileCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadTitleFile_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadTitleFile_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params, Filename) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveGames
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearSaveGames_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearSaveGames_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearSaveGames_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteSaveGame
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execDeleteSaveGame_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            DeviceID;                                         // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      FriendlyName;                                     // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0018 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0028 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execDeleteSaveGame_Params, ReturnValue) == 0x0028);
static_assert(sizeof(UOnlineSubsystemSteamworks_execDeleteSaveGame_Params) >= 0x002C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSaveGameDataComplete
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearWriteSaveGameDataComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             WriteSaveGameDataCompleteDelegate;                // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearWriteSaveGameDataComplete_Params, WriteSaveGameDataCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearWriteSaveGameDataComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSaveGameDataComplete
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddWriteSaveGameDataComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             WriteSaveGameDataCompleteDelegate;                // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddWriteSaveGameDataComplete_Params, WriteSaveGameDataCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddWriteSaveGameDataComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSaveGameDataComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteSaveGameDataComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint8_t                                            LocalUserNum;                                     // 0x0004 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0005 (0x0003) MISSED OFFSET
	int32_t                                            DeviceID;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      FriendlyName;                                     // 0x000C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x001C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveFileName;                                     // 0x002C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnWriteSaveGameDataComplete_Params, SaveFileName) == 0x002C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnWriteSaveGameDataComplete_Params) >= 0x003C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSaveGameData
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execWriteSaveGameData_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            DeviceID;                                         // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      FriendlyName;                                     // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0018 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveFileName;                                     // 0x0028 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              SaveGameData;                                     // 0x0038 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0048 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWriteSaveGameData_Params, ReturnValue) == 0x0048);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWriteSaveGameData_Params) >= 0x004C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGameDataComplete
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearReadSaveGameDataComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadSaveGameDataCompleteDelegate;                 // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadSaveGameDataComplete_Params, ReadSaveGameDataCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadSaveGameDataComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGameDataComplete
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddReadSaveGameDataComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadSaveGameDataCompleteDelegate;                 // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadSaveGameDataComplete_Params, ReadSaveGameDataCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadSaveGameDataComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGameDataComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadSaveGameDataComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint8_t                                            LocalUserNum;                                     // 0x0004 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0005 (0x0003) MISSED OFFSET
	int32_t                                            DeviceID;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      FriendlyName;                                     // 0x000C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x001C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveFileName;                                     // 0x002C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadSaveGameDataComplete_Params, SaveFileName) == 0x002C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadSaveGameDataComplete_Params) >= 0x003C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGameData
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetSaveGameData_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            DeviceID;                                         // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      FriendlyName;                                     // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0018 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveFileName;                                     // 0x0028 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            bIsValid;                                         // 0x0038 (0x0001) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	uint8_t                                            UnknownData01[0x3];                               // 0x0039 (0x0003) MISSED OFFSET
	class TArray<uint8_t>                              SaveGameData;                                     // 0x003C (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x004C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetSaveGameData_Params, ReturnValue) == 0x004C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetSaveGameData_Params) >= 0x0050);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGameData
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadSaveGameData_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            DeviceID;                                         // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      FriendlyName;                                     // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0018 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveFileName;                                     // 0x0028 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0038 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadSaveGameData_Params, ReturnValue) == 0x0038);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadSaveGameData_Params) >= 0x003C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts
// [0x00420002] 
struct UOnlineSubsystemSteamworks_execGetAvailableDownloadCounts_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            NewDownloads;                                     // 0x0004 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	int32_t                                            TotalDownloads;                                   // 0x0008 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetAvailableDownloadCounts_Params, TotalDownloads) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetAvailableDownloadCounts_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearQueryAvailableDownloadsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             QueryDownloadsDelegate;                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearQueryAvailableDownloadsComplete_Params, QueryDownloadsDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearQueryAvailableDownloadsComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddQueryAvailableDownloadsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             QueryDownloadsDelegate;                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddQueryAvailableDownloadsComplete_Params, QueryDownloadsDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddQueryAvailableDownloadsComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnQueryAvailableDownloadsComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnQueryAvailableDownloadsComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnQueryAvailableDownloadsComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execQueryAvailableDownloads_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            CategoryMask;                                     // 0x0004 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execQueryAvailableDownloads_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execQueryAvailableDownloads_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleSaveGames
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearCrossTitleSaveGames_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearCrossTitleSaveGames_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearCrossTitleSaveGames_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleSaveGameDataComplete
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearReadCrossTitleSaveGameDataComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadSaveGameDataCompleteDelegate;                 // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadCrossTitleSaveGameDataComplete_Params, ReadSaveGameDataCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadCrossTitleSaveGameDataComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleSaveGameDataComplete
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddReadCrossTitleSaveGameDataComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadSaveGameDataCompleteDelegate;                 // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadCrossTitleSaveGameDataComplete_Params, ReadSaveGameDataCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadCrossTitleSaveGameDataComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleSaveGameDataComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadCrossTitleSaveGameDataComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint8_t                                            LocalUserNum;                                     // 0x0004 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0005 (0x0003) MISSED OFFSET
	int32_t                                            DeviceID;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            TitleId;                                          // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      FriendlyName;                                     // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0020 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveFileName;                                     // 0x0030 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadCrossTitleSaveGameDataComplete_Params, SaveFileName) == 0x0030);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadCrossTitleSaveGameDataComplete_Params) >= 0x0040);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleSaveGameData
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetCrossTitleSaveGameData_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            DeviceID;                                         // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            TitleId;                                          // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      FriendlyName;                                     // 0x000C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x001C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveFileName;                                     // 0x002C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            bIsValid;                                         // 0x003C (0x0001) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	uint8_t                                            UnknownData01[0x3];                               // 0x003D (0x0003) MISSED OFFSET
	class TArray<uint8_t>                              SaveGameData;                                     // 0x0040 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0050 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetCrossTitleSaveGameData_Params, ReturnValue) == 0x0050);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetCrossTitleSaveGameData_Params) >= 0x0054);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleSaveGameData
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadCrossTitleSaveGameData_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            DeviceID;                                         // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            TitleId;                                          // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      FriendlyName;                                     // 0x000C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x001C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveFileName;                                     // 0x002C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x003C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadCrossTitleSaveGameData_Params, ReturnValue) == 0x003C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadCrossTitleSaveGameData_Params) >= 0x0040);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleContentCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearReadCrossTitleContentCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ContentType;                                      // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0002 (0x0002) MISSED OFFSET
	struct FScriptDelegate                             ReadContentCompleteDelegate;                      // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadCrossTitleContentCompleteDelegate_Params, ReadContentCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadCrossTitleContentCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleContentCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddReadCrossTitleContentCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ContentType;                                      // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0002 (0x0002) MISSED OFFSET
	struct FScriptDelegate                             ReadContentCompleteDelegate;                      // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadCrossTitleContentCompleteDelegate_Params, ReadContentCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadCrossTitleContentCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleContentComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadCrossTitleContentComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadCrossTitleContentComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadCrossTitleContentComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleContentList
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetCrossTitleContentList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ContentType;                                      // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0002 (0x0002) MISSED OFFSET
	class TArray<struct FOnlineCrossTitleContent>      ContentList;                                      // 0x0004 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x0014 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetCrossTitleContentList_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetCrossTitleContentList_Params) >= 0x0015);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleContentList
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearCrossTitleContentList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ContentType;                                      // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearCrossTitleContentList_Params, ContentType) == 0x0001);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearCrossTitleContentList_Params) >= 0x0002);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleContentList
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execReadCrossTitleContentList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ContentType;                                      // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0002 (0x0002) MISSED OFFSET
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            DeviceID;                                         // 0x0008 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadCrossTitleContentList_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadCrossTitleContentList_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserLanguage
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execGetUserLanguage_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetUserLanguage_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetUserLanguage_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserCountryCode
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execGetUserCountryCode_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetUserCountryCode_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetUserCountryCode_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPS4DownloadList
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execShowPS4DownloadList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowPS4DownloadList_Params, LocalUserNum) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowPS4DownloadList_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPS4StoreIcon
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execShowPS4StoreIcon_Params
{
	uint32_t                                           bShow;                                            // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	int32_t                                            Position;                                         // 0x0004 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowPS4StoreIcon_Params, Position) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowPS4StoreIcon_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.BrowseInGameStoreItem
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execBrowseInGameStoreItem_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      ItemId;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execBrowseInGameStoreItem_Params, ItemId) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execBrowseInGameStoreItem_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PurchaseInGameStoreItem
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execPurchaseInGameStoreItem_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      ItemId;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execPurchaseInGameStoreItem_Params, ItemId) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execPurchaseInGameStoreItem_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPurchaseInGameStoreContentComplete
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearPurchaseInGameStoreContentComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             PurchaseInGameStoreContentComplete;               // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearPurchaseInGameStoreContentComplete_Params, PurchaseInGameStoreContentComplete) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearPurchaseInGameStoreContentComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPurchaseInGameStoreContentComplete
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddPurchaseInGameStoreContentComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             PurchaseInGameStoreContentComplete;               // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddPurchaseInGameStoreContentComplete_Params, PurchaseInGameStoreContentComplete) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddPurchaseInGameStoreContentComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPurchaseInGameStoreContentComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnPurchaseInGameStoreContentComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnPurchaseInGameStoreContentComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnPurchaseInGameStoreContentComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetInGameStoreContentList
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execGetInGameStoreContentList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class TArray<struct FOnlineStoreContent>           ContentList;                                      // 0x0004 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetInGameStoreContentList_Params, ContentList) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetInGameStoreContentList_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadInGameStoreContentList
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execReadInGameStoreContentList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadInGameStoreContentList_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadInGameStoreContentList_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInGameStoreContentList
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execClearInGameStoreContentList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearInGameStoreContentList_Params, LocalUserNum) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearInGameStoreContentList_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadInGameStoreContentComplete
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadInGameStoreContentComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadInGameStoreContentComplete;                   // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadInGameStoreContentComplete_Params, ReadInGameStoreContentComplete) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadInGameStoreContentComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadInGameStoreContentComplete
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadInGameStoreContentComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadInGameStoreContentComplete;                   // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadInGameStoreContentComplete_Params, ReadInGameStoreContentComplete) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadInGameStoreContentComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadInGameStoreContentComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadInGameStoreContentComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadInGameStoreContentComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadInGameStoreContentComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearContentStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ContentStatusChangeDelegate;                      // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearContentStatusChangeDelegate_Params, ContentStatusChangeDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearContentStatusChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddContentStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ContentStatusChangeDelegate;                      // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddContentStatusChangeDelegate_Params, ContentStatusChangeDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddContentStatusChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnContentStatusChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList
// [0x00420002] 
struct UOnlineSubsystemSteamworks_execGetContentList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ContentType;                                      // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0002 (0x0002) MISSED OFFSET
	class TArray<struct FOnlineContent>                ContentList;                                      // 0x0004 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x0014 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetContentList_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetContentList_Params) >= 0x0015);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentList
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execClearContentList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ContentType;                                      // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearContentList_Params, ContentType) == 0x0001);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearContentList_Params) >= 0x0002);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execReadContentList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ContentType;                                      // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0002 (0x0002) MISSED OFFSET
	int32_t                                            DeviceID;                                         // 0x0004 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadContentList_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadContentList_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasContentUpdated
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execHasContentUpdated_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execHasContentUpdated_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execHasContentUpdated_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadContentComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ContentType;                                      // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0002 (0x0002) MISSED OFFSET
	struct FScriptDelegate                             ReadContentCompleteDelegate;                      // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadContentComplete_Params, ReadContentCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadContentComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadContentComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ContentType;                                      // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0002 (0x0002) MISSED OFFSET
	struct FScriptDelegate                             ReadContentCompleteDelegate;                      // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadContentComplete_Params, ReadContentCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadContentComplete_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadContentComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadContentComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadContentComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate
// [0x00024002] 
struct UOnlineSubsystemSteamworks_execClearContentChangeDelegate_Params
{
	struct FScriptDelegate                             ContentDelegate;                                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     // 0x0010 (0x0001) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearContentChangeDelegate_Params, LocalUserNum) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearContentChangeDelegate_Params) >= 0x0011);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate
// [0x00024002] 
struct UOnlineSubsystemSteamworks_execAddContentChangeDelegate_Params
{
	struct FScriptDelegate                             ContentDelegate;                                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     // 0x0010 (0x0001) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddContentChangeDelegate_Params, LocalUserNum) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddContentChangeDelegate_Params) >= 0x0011);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnContentChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execCalcAggregateSkill_Params
{
	class TArray<struct FDouble>                       Mus;                                              // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FDouble>                       Sigmas;                                           // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FDouble                                     OutAggregateMu;                                   // 0x0020 (0x0008) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	struct FDouble                                     OutAggregateSigma;                                // 0x0028 (0x0008) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCalcAggregateSkill_Params, OutAggregateSigma) == 0x0028);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCalcAggregateSkill_Params) >= 0x0030);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execRegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                         // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      ClientStatGuid;                                   // 0x0008 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execRegisterStatGuid_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UOnlineSubsystemSteamworks_execRegisterStatGuid_Params) >= 0x001C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetClientStatGuid_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetClientStatGuid_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetClientStatGuid_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params, RegisterHostStatGuidCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Params, RegisterHostStatGuidCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Params
{
	class FString                                      HostStatGuid;                                     // 0x0000 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetHostStatGuid_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetHostStatGuid_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetHostStatGuid_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            LeaderboardId;                                    // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<struct FOnlinePlayerScore>            PlayerScores;                                     // 0x000C (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x001C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Params, ReturnValue) == 0x001C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Params) >= 0x0020);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execCreateLeaderboard_Params
{
	class FString                                      LeaderboardName;                                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            SortType;                                         // 0x0010 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            DisplayFormat;                                    // 0x0011 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0012 (0x0002) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCreateLeaderboard_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCreateLeaderboard_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execResetStats_Params
{
	uint32_t                                           bResetAchievements;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execResetStats_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execResetStats_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Params, FlushOnlineStatsCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Params, FlushOnlineStatsCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful;                                   // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Params, bWasSuccessful) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execFlushOnlineStats_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execFlushOnlineStats_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execFlushOnlineStats_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execWriteOnlineStats_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                Player;                                           // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UOnlineStatsWrite*                           StatsWrite;                                       // 0x0010 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWriteOnlineStats_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWriteOnlineStats_Params) >= 0x001C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execFreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execFreeStats_Params, StatsRead) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execFreeStats_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Params, ReadOnlineStatsCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Params, ReadOnlineStatsCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class UOnlineStatsRead*                            StatsRead;                                        // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            NumRows;                                          // 0x000C (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Params
{
	class UOnlineStatsRead*                            StatsRead;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            StartIndex;                                       // 0x0008 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            NumToRead;                                        // 0x000C (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class UOnlineStatsRead*                            StatsRead;                                        // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execReadOnlineStats_Params
{
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0000 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                        // 0x0010 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadOnlineStats_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadOnlineStats_Params) >= 0x001C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DebugWriteLBForUser
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execDebugWriteLBForUser_Params
{
	class FString                                      User;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            BoardID;                                          // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            RankValue;                                        // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<int32_t>                              StatsArray;                                       // 0x0018 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execDebugWriteLBForUser_Params, StatsArray) == 0x0018);
static_assert(sizeof(UOnlineSubsystemSteamworks_execDebugWriteLBForUser_Params) >= 0x0028);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DropOnlineStatsRead
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execDropOnlineStatsRead_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetOnlineStatsForAllUsers
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execResetOnlineStatsForAllUsers_Params
{
	int32_t                                            BoardID;                                          // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execResetOnlineStatsForAllUsers_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execResetOnlineStatsForAllUsers_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetOnlineStatsForUser
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execResetOnlineStatsForUser_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            BoardID;                                          // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execResetOnlineStatsForUser_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execResetOnlineStatsForUser_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetLocalAccountNames_Params
{
	class TArray<class FString>                        Accounts;                                         // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetLocalAccountNames_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetLocalAccountNames_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execDeleteLocalAccount_Params
{
	class FString                                      UserName;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x0010 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execDeleteLocalAccount_Params, ReturnValue) == 0x0020);
static_assert(sizeof(UOnlineSubsystemSteamworks_execDeleteLocalAccount_Params) >= 0x0024);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execRenameLocalAccount_Params
{
	class FString                                      NewUserName;                                      // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      OldUserName;                                      // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x0020 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execRenameLocalAccount_Params, ReturnValue) == 0x0030);
static_assert(sizeof(UOnlineSubsystemSteamworks_execRenameLocalAccount_Params) >= 0x0034);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execCreateLocalAccount_Params
{
	class FString                                      UserName;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x0010 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCreateLocalAccount_Params, ReturnValue) == 0x0020);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCreateLocalAccount_Params) >= 0x0024);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                            // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Params, AccountCreateDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                            // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Params, AccountCreateDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Params
{
	uint8_t                                            ErrorStatus;                                      // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Params, ErrorStatus) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execCreateOnlineAccount_Params
{
	class FString                                      UserName;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      EmailAddress;                                     // 0x0020 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ProductKey;                                       // 0x0030 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0040 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCreateOnlineAccount_Params, ReturnValue) == 0x0040);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCreateOnlineAccount_Params) >= 0x0044);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsExternalRemoteDevice
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execIsExternalRemoteDevice_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsExternalRemoteDevice_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsExternalRemoteDevice_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenWebBrowser
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execOpenWebBrowser_Params
{
	class FString                                      sURL;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOpenWebBrowser_Params, sURL) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOpenWebBrowser_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNpAvailabilityForUser
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetNpAvailabilityForUser_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetNpAvailabilityForUser_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetNpAvailabilityForUser_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckNpAvailabilityForUser
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execCheckNpAvailabilityForUser_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCheckNpAvailabilityForUser_Params, LocalUserNum) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCheckNpAvailabilityForUser_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StreamingInstall_Poll
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execStreamingInstall_Poll_Params
{
	int32_t                                            Percent;                                          // 0x0000 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	int32_t                                            Time;                                             // 0x0004 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execStreamingInstall_Poll_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execStreamingInstall_Poll_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StreamingInstall_CheckChunk
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execStreamingInstall_CheckChunk_Params
{
	int32_t                                            Chunk;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execStreamingInstall_CheckChunk_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execStreamingInstall_CheckChunk_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StreamingInstall_IsFinished
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execStreamingInstall_IsFinished_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execStreamingInstall_IsFinished_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execStreamingInstall_IsFinished_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetDurangoKinectState
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execSetDurangoKinectState_Params
{
	uint32_t                                           bEnabled;                                         // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSetDurangoKinectState_Params, bEnabled) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSetDurangoKinectState_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetGTCStates
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execSetGTCStates_Params
{
	uint32_t                                           bPlayEnabled;                                     // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           bPauseEnabled;                                    // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           bMenuEnabled;                                     // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           bViewEnabled;                                     // 0x000C (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           bBackEnabled;                                     // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSetGTCStates_Params, bBackEnabled) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSetGTCStates_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetGTCState
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execSetGTCState_Params
{
	uint8_t                                            Id;                                               // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           bState;                                           // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSetGTCState_Params, bState) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSetGTCState_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGTCCommandDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearGTCCommandDelegate_Params
{
	struct FScriptDelegate                             GTCCommandDelegate;                               // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearGTCCommandDelegate_Params, GTCCommandDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearGTCCommandDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGTCCommandDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddGTCCommandDelegate_Params
{
	struct FScriptDelegate                             GTCCommandDelegate;                               // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddGTCCommandDelegate_Params, GTCCommandDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddGTCCommandDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGTCCommand
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnGTCCommand_Params
{
	uint8_t                                            NewCommand;                                       // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnGTCCommand_Params, NewCommand) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnGTCCommand_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NavigateBack
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execNavigateBack_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenHelpManual
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execOpenHelpManual_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOpenHelpManual_Params, LocalUserNum) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOpenHelpManual_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordStop
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execVideoRecordStop_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            VideoId;                                          // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0002 (0x0002) MISSED OFFSET
	class FString                                      TitleStr;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execVideoRecordStop_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execVideoRecordStop_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordStart
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execVideoRecordStart_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execVideoRecordStart_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execVideoRecordStart_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecord
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execVideoRecord_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            VideoId;                                          // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x2];                               // 0x0002 (0x0002) MISSED OFFSET
	class FString                                      TitleStr;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              TimeStart;                                        // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              TimeStop;                                         // 0x0018 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execVideoRecord_Params, TimeStop) == 0x0018);
static_assert(sizeof(UOnlineSubsystemSteamworks_execVideoRecord_Params) >= 0x001C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordSetGameSectionId
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execVideoRecordSetGameSectionId_Params
{
	int32_t                                            SectionId;                                        // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execVideoRecordSetGameSectionId_Params, SectionId) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execVideoRecordSetGameSectionId_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.VideoRecordAllowed
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execVideoRecordAllowed_Params
{
	uint32_t                                           bEnabled;                                         // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execVideoRecordAllowed_Params, bEnabled) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execVideoRecordAllowed_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsVideoRecordAllowed
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execIsVideoRecordAllowed_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsVideoRecordAllowed_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsVideoRecordAllowed_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnBindAllPlayers
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUnBindAllPlayers_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnBindPlayer
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUnBindPlayer_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execUnBindPlayer_Params, ControllerId) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execUnBindPlayer_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResumePlayer
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execResumePlayer_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ControllerIndex;                                  // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execResumePlayer_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execResumePlayer_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReBindPlayer
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReBindPlayer_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ControllerIndex;                                  // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReBindPlayer_Params, ControllerIndex) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReBindPlayer_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.BindPlayer
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execBindPlayer_Params
{
	int32_t                                            ControllerIndex;                                  // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execBindPlayer_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execBindPlayer_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetBoundCount
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetBoundCount_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetBoundCount_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetBoundCount_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadOnlineAvatar_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      // 0x0000 (0x0008) [0x0000000000000009] (CPF_Const | CPF_Parm)
	int32_t                                            Size;                                             // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 // 0x000C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadOnlineAvatar_Params, ReadOnlineAvatarCompleteDelegate) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadOnlineAvatar_Params) >= 0x001C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      // 0x0000 (0x0008) [0x0000000000000009] (CPF_Const | CPF_Parm)
	class UTexture2D*                                  Avatar;                                           // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Params, Avatar) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class TArray<struct FUniqueNetId>                  Recipients;                                       // 0x0004 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageTitle;                                     // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      NonEditableMessage;                               // 0x0024 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      EditableMessage;                                  // 0x0034 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0044 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params, ReturnValue) == 0x0044);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params) >= 0x0048);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params, TitleId) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      // 0x0008 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params, ReadProfileSettingsCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params, ReadProfileSettingsCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful;                                   // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params, bWasSuccessful) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUnlockAvatarAward_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            AvatarItemId;                                     // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execUnlockAvatarAward_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execUnlockAvatarAward_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTimeSinceGuideLastClosed
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetTimeSinceGuideLastClosed_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetTimeSinceGuideLastClosed_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetTimeSinceGuideLastClosed_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateInfocastSystem
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execCreateInfocastSystem_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearNewInfocastDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearNewInfocastDelegate_Params
{
	struct FScriptDelegate                             InfocastDelegate;                                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearNewInfocastDelegate_Params, InfocastDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearNewInfocastDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddNewInfocastDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddNewInfocastDelegate_Params
{
	struct FScriptDelegate                             InfocastDelegate;                                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddNewInfocastDelegate_Params, InfocastDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddNewInfocastDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnNewInfocast
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnNewInfocast_Params
{
	class FString                                      Infocast;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnNewInfocast_Params, Infocast) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnNewInfocast_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0004 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      Title;                                            // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Description;                                      // 0x0024 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0034 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params, ReturnValue) == 0x0034);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params) >= 0x0038);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowPlayersUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowPlayersUI_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowPlayersUI_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGuideUI
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execShowGuideUI_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowGuideUI_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowGuideUI_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params, ProfileDataChangedDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params, ProfileDataChangedDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnProfileDataChanged_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            PictureId;                                        // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execIsDeviceValid_Params
{
	int32_t                                            DeviceID;                                         // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            SizeNeeded;                                       // 0x0004 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsDeviceValid_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsDeviceValid_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      DeviceName;                                       // 0x0004 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             DeviceDelegate;                                   // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params, DeviceDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             DeviceDelegate;                                   // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         AddIndex;                                         // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params, DeviceDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            SizeNeeded;                                       // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bForceShowUI;                                     // 0x0008 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bManageStorage;                                   // 0x000C (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            CategoryMask;                                     // 0x0004 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            OfferId;                                          // 0x0008 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      InviteText;                                       // 0x0004 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowInviteUI_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowInviteUI_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowAchievementsUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowAchievementsUI_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowAchievementsUI_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowMessagesUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowMessagesUI_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowMessagesUI_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowTokenRedemptionUI
// [0x00024003] 
struct UOnlineSubsystemSteamworks_execShowTokenRedemptionUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      OfferId;                                          // 0x0004 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowTokenRedemptionUI_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowTokenRedemptionUI_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAccountPickerUI
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execShowAccountPickerUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowAccountPickerUI_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowAccountPickerUI_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowGamerCardUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      NickName;                                         // 0x000C (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x001C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowGamerCardUI_Params, ReturnValue) == 0x001C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowGamerCardUI_Params) >= 0x0020);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowFeedbackUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowFeedbackUI_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowFeedbackUI_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMsgBoxUIDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearMsgBoxUIDelegate_Params
{
	struct FScriptDelegate                             MsgDelegate;                                      // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearMsgBoxUIDelegate_Params, MsgDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearMsgBoxUIDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMsgBoxUIDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddMsgBoxUIDoneDelegate_Params
{
	struct FScriptDelegate                             MsgDelegate;                                      // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddMsgBoxUIDoneDelegate_Params, MsgDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddMsgBoxUIDoneDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMsgBoxUIComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnMsgBoxUIComplete_Params
{
	int32_t                                            ButtonResult;                                     // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnMsgBoxUIComplete_Params, ButtonResult) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnMsgBoxUIComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowSystemMsgBoxUI
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execShowSystemMsgBoxUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            SysMsg;                                           // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowSystemMsgBoxUI_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowSystemMsgBoxUI_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] 
struct UOnlineSubsystemSteamworks_execWriteUserFileInternal_Params
{
	class FString                                      UserId;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0020 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWriteUserFileInternal_Params, ReturnValue) == 0x0030);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWriteUserFileInternal_Params) >= 0x0034);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] 
struct UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params
{
	int32_t                                            UserIndex;                                        // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424401] 
struct UOnlineSubsystemSteamworks_execGetAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class TArray<struct FAchievementDetails>           Achievements;                                     // 0x0004 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            TitleId;                                          // 0x0014 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            ReturnValue;                                      // 0x0018 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetAchievements_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetAchievements_Params) >= 0x0019);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params, ReadAchievementsCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params, ReadAchievementsCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params
{
	int32_t                                            TitleId;                                          // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params, TitleId) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execReadAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadText;                                  // 0x0008 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadImages;                                // 0x000C (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadAchievements_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadAchievements_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params, UnlockAchievementCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params, UnlockAchievementCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execUnlockAchievement_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            AchievementId;                                    // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              PercentComplete;                                  // 0x0008 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execUnlockAchievement_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execUnlockAchievement_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params
{
	int32_t                                            AchievementId;                                    // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ProgressCount;                                    // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            MaxProgress;                                      // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execDeleteMessage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            MessageIndex;                                     // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execDeleteMessage_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execDeleteMessage_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             MessageDelegate;                                  // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Params, MessageDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             MessageDelegate;                                  // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Params, MessageDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                SendingPlayer;                                    // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      SendingNick;                                      // 0x000C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          // 0x001C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Params, Message) == 0x001C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Params) >= 0x002C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420003] 
struct UOnlineSubsystemSteamworks_execGetFriendMessages_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class TArray<struct FOnlineFriendMessage>          FriendMessages;                                   // 0x0004 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetFriendMessages_Params, FriendMessages) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetFriendMessages_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Params, JoinFriendGameCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Params, JoinFriendGameCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execJoinFriendGame_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                Friend;                                           // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execJoinFriendGame_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execJoinFriendGame_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Params, ReceivedGameInviteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Params, ReceivedGameInviteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      InviterName;                                      // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params, InviterName) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class TArray<struct FUniqueNetId>                  Friends;                                          // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Text;                                             // 0x0014 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Params) >= 0x0028);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                Friend;                                           // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Text;                                             // 0x000C (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x001C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Params, ReturnValue) == 0x001C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Params) >= 0x0020);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSendMessageToFriendWin_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                Friend;                                           // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Message;                                          // 0x000C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x001C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSendMessageToFriendWin_Params, ReturnValue) == 0x001C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSendMessageToFriendWin_Params) >= 0x0020);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             InviteDelegate;                                   // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Params, InviteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             InviteDelegate;                                   // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Params, InviteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                RequestingPlayer;                                 // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      RequestingNick;                                   // 0x000C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          // 0x001C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Params, Message) == 0x001C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Params) >= 0x002C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execRemoveFriend_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                FormerFriend;                                     // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execRemoveFriend_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execRemoveFriend_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execDenyFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                RequestingPlayer;                                 // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execDenyFriendInvite_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execDenyFriendInvite_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execAcceptFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                RequestingPlayer;                                 // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAcceptFriendInvite_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAcceptFriendInvite_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             FriendDelegate;                                   // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Params, FriendDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             FriendDelegate;                                   // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Params, FriendDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execAddFriendByName_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      FriendName;                                       // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          // 0x0014 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddFriendByName_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddFriendByName_Params) >= 0x0028);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execAddFriend_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                NewFriend;                                        // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Message;                                          // 0x000C (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x001C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddFriend_Params, ReturnValue) == 0x001C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddFriend_Params) >= 0x0020);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420003] 
struct UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params
{
	uint8_t                                            bWasCanceled;                                     // 0x0000 (0x0001) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      ReturnValue;                                      // 0x0004 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params, InputDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params, InputDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowKeyboardUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      TitleText;                                        // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DescriptionText;                                  // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsPassword;                                      // 0x0024 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldValidate;                                  // 0x0028 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      DefaultText;                                      // 0x002C (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            MaxResultLength;                                  // 0x003C (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0040 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowKeyboardUI_Params, ReturnValue) == 0x0040);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowKeyboardUI_Params) >= 0x0044);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execSetOnlineStatus_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            StatusId;                                         // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<struct FLocalizedStringSetting>       LocalizedStringSettings;                          // 0x0008 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<struct FSettingsProperty>             Properties;                                       // 0x0018 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSetOnlineStatus_Params, Properties) == 0x0018);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSetOnlineStatus_Params) >= 0x0028);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424401] 
struct UOnlineSubsystemSteamworks_execGetFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class TArray<struct FOnlineFriend>                 Friends;                                          // 0x0004 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            Count;                                            // 0x0014 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       // 0x0018 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            ReturnValue;                                      // 0x001C (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetFriendsList_Params, ReturnValue) == 0x001C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetFriendsList_Params) >= 0x001D);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params, ReadFriendsCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params, ReadFriendsCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execReadFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	int32_t                                            Count;                                            // 0x0004 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       // 0x0008 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadFriendsList_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadFriendsList_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params, WritePlayerStorageCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params, WritePlayerStorageCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           bWasSuccessful;                                   // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params, bWasSuccessful) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execWritePlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            DeviceID;                                         // 0x000C (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWritePlayerStorage_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWritePlayerStorage_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class UOnlinePlayerStorage*                        ReturnValue;                                      // 0x0004 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetPlayerStorage_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetPlayerStorage_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params, ReadPlayerStorageForNetIdCompleteDelegate) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params, ReadPlayerStorageForNetIdCompleteDelegate) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful;                                   // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params, bWasSuccessful) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                NetId;                                            // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x000C (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params, ReadPlayerStorageCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params, ReadPlayerStorageCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           bWasSuccessful;                                   // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params, bWasSuccessful) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execReadPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            DeviceID;                                         // 0x000C (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadPlayerStorage_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadPlayerStorage_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetFriendJoinURL_Params
{
	struct FUniqueNetId                                FriendUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      ServerURL;                                        // 0x0008 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ServerUID;                                        // 0x0018 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0028 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetFriendJoinURL_Params, ReturnValue) == 0x0028);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetFriendJoinURL_Params) >= 0x002C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Params
{
	uint32_t                                           bMarkAsJoined;                                    // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      ServerURL;                                        // 0x0004 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ServerUID;                                        // 0x0014 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Params) >= 0x0028);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params
{
	class FString                                      UIDString;                                        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                OutUID;                                           // 0x0010 (0x0008) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue;                                      // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params) >= 0x001C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params
{
	struct FUniqueNetId                                Uid;                                              // 0x0000 (0x0008) [0x0000000000000029] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      // 0x0008 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowProfileUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      SubURL;                                           // 0x0004 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerUID;                                        // 0x0014 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x001C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowProfileUI_Params, ReturnValue) == 0x001C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowProfileUI_Params) >= 0x0020);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params
{
	struct FUniqueNetId                                Uid;                                              // 0x0000 (0x0008) [0x0000000000000029] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      // 0x0008 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execGetSteamClanData_Params
{
	class TArray<struct FSteamPlayerClanData>          Results;                                          // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetSteamClanData_Params, Results) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetSteamClanData_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params, GetNumberOfCurrentPlayersCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params, GetNumberOfCurrentPlayersCompleteDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Params
{
	int32_t                                            TotalPlayers;                                     // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Params, TotalPlayers) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params, WriteProfileSettingsCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params, WriteProfileSettingsCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           bWasSuccessful;                                   // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params, bWasSuccessful) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execWriteProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class UOnlineProfileSettings*                      ProfileSettings;                                  // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execWriteProfileSettings_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execWriteProfileSettings_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class UOnlineProfileSettings*                      ReturnValue;                                      // 0x0004 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetProfileSettings_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetProfileSettings_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params, ReadProfileSettingsCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params, ReadProfileSettingsCompleteDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           bWasSuccessful;                                   // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params, bWasSuccessful) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execReadProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class UOnlineProfileSettings*                      ProfileSettings;                                  // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execReadProfileSettings_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execReadProfileSettings_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             FriendsDelegate;                                  // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Params, FriendsDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             FriendsDelegate;                                  // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Params, FriendsDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Params, MutingDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Params, MutingDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params, CancelledDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params, CancelledDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                              // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     // 0x0010 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params, LocalUserNum) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params) >= 0x0011);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                              // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     // 0x0010 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params, LocalUserNum) == 0x0010);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params) >= 0x0011);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params
{
	uint8_t                                            NewStatus;                                        // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                NewId;                                            // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params, NewId) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params) >= 0x000C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params, LoginDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params, LoginDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execShowFriendsUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowFriendsUI_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowFriendsUI_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsMuted_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsMuted_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsMuted_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420401] 
struct UOnlineSubsystemSteamworks_execAreAnyFriends_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class TArray<struct FFriendsQuery>                 Query;                                            // 0x0004 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAreAnyFriends_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAreAnyFriends_Params) >= 0x0018);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execIsFriend_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsFriend_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsFriend_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params, ReturnValue) == 0x0001);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params) >= 0x0002);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params, ReturnValue) == 0x0001);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params) >= 0x0002);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execCanPurchaseContent_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCanPurchaseContent_Params, ReturnValue) == 0x0001);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCanPurchaseContent_Params) >= 0x0002);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params, ReturnValue) == 0x0001);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params) >= 0x0002);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execCanCommunicate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCanCommunicate_Params, ReturnValue) == 0x0001);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCanCommunicate_Params) >= 0x0002);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execCanPlayOnline_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execCanPlayOnline_Params, ReturnValue) == 0x0001);
static_assert(sizeof(UOnlineSubsystemSteamworks_execCanPlayOnline_Params) >= 0x0002);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOnlineAccount
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execIsOnlineAccount_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsOnlineAccount_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsOnlineAccount_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsLocalLogin_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsLocalLogin_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsLocalLogin_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsGuestLogin_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsGuestLogin_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsGuestLogin_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerDisplayName
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetPlayerDisplayName_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      ReturnValue;                                      // 0x0004 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetPlayerDisplayName_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetPlayerDisplayName_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetPlayerNickname_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      ReturnValue;                                      // 0x0004 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetPlayerNickname_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetPlayerNickname_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420003] 
struct UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue;                                      // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetLoginStatus_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetLoginStatus_Params, ReturnValue) == 0x0001);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetLoginStatus_Params) >= 0x0002);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             LogoutDelegate;                                   // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params, LogoutDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             LogoutDelegate;                                   // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params, LogoutDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params
{
	uint32_t                                           bWasSuccessful;                                   // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params, bWasSuccessful) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execLogout_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execLogout_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execLogout_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             LoginFailedDelegate;                              // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params, LoginFailedDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             LoginFailedDelegate;                              // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params, LoginFailedDelegate) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params) >= 0x0014);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginFailed_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ErrorCode;                                        // 0x0001 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnLoginFailed_Params, ErrorCode) == 0x0001);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnLoginFailed_Params) >= 0x0002);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execAutoLogin_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAutoLogin_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAutoLogin_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execLogin_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x0001 (0x0003) MISSED OFFSET
	class FString                                      LoginName;                                        // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWantsLocalOnly;                                  // 0x0024 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0028 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execLogin_Params, ReturnValue) == 0x0028);
static_assert(sizeof(UOnlineSubsystemSteamworks_execLogin_Params) >= 0x002C);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024401] 
struct UOnlineSubsystemSteamworks_execShowLoginUI_Params
{
	uint32_t                                           bShowOnlineOnly;                                  // 0x0000 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execShowLoginUI_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execShowLoginUI_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendsChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnMutingChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginCancelled_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginChange_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnLoginChange_Params, LocalUserNum) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnLoginChange_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetLocale_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetLocale_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetLocale_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params, StorageDeviceChangeDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params, StorageDeviceChangeDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execGetNATType_Params
{
	uint8_t                                            ReturnValue;                                      // 0x0000 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetNATType_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetNATType_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params, ConnectionStatusDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params, ConnectionStatusDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params
{
	uint8_t                                            ConnectionStatus;                                 // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params, ConnectionStatus) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execIsControllerConnected_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execIsControllerConnected_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execIsControllerConnected_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params, ControllerChangeDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params, ControllerChangeDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnControllerChange_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bIsConnected;                                     // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnControllerChange_Params, bIsConnected) == 0x0004);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnControllerChange_Params) >= 0x0008);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params
{
	uint8_t                                            NewPos;                                           // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params, NewPos) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params
{
	uint8_t                                            ReturnValue;                                      // 0x0000 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params) >= 0x0001);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                               // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params, ExternalUIDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                               // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params, ExternalUIDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnExternalUIChange_Params
{
	uint32_t                                           bIsOpening;                                       // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnExternalUIChange_Params, bIsOpening) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnExternalUIChange_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params, LinkStatusDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020003] 
struct UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params, LinkStatusDelegate) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params) >= 0x0010);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params
{
	uint32_t                                           bIsConnected;                                     // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params, bIsConnected) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params) >= 0x0004);

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020401] 
struct UOnlineSubsystemSteamworks_execHasLinkConnection_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UOnlineSubsystemSteamworks_execHasLinkConnection_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UOnlineSubsystemSteamworks_execHasLinkConnection_Params) >= 0x0004);

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
