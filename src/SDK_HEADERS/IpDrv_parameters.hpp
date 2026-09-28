/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: IpDrv_parameters.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#include "IpDrv_structs.hpp"

#include "Engine_parameters.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Parameters
# ========================================================================================= #
*/

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020800] 
struct AInternetLink_eventResolveFailed_Params
{
};

// Function IpDrv.InternetLink.Resolved
// [0x00020800] 
struct AInternetLink_eventResolved_Params
{
	struct FIpAddr                                     Addr;                                             // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420401] 
struct AInternetLink_execGetLocalIP_Params
{
	struct FIpAddr                                     Arg;                                              // 0x0000 (0x0008) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420401] 
struct AInternetLink_execStringToIpAddr_Params
{
	class FString                                      Str;                                              // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     Addr;                                             // 0x0010 (0x0008) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020401] 
struct AInternetLink_execIpAddrToString_Params
{
	struct FIpAddr                                     Arg;                                              // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0008 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020401] 
struct AInternetLink_execGetLastError_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.Resolve
// [0x00020401] 
struct AInternetLink_execResolve_Params
{
	class FString                                      Domain;                                           // 0x0000 (0x0010) [0x0000000000010108] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420401] 
struct AInternetLink_execParseURL_Params
{
	class FString                                      URL;                                              // 0x0000 (0x0010) [0x0000000000010108] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      Addr;                                             // 0x0010 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            PortNum;                                          // 0x0020 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	class FString                                      LevelName;                                        // 0x0024 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      EntryName;                                        // 0x0034 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0044 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020401] 
struct AInternetLink_execIsDataPending_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.McpServiceBase.GetAppAccessURL
// [0x00020003] 
struct UMcpServiceBase_execGetAppAccessURL_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.GetBaseURL
// [0x00020003] 
struct UMcpServiceBase_execGetBaseURL_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.Init
// [0x00020803] 
struct UMcpServiceBase_eventInit_Params
{
	// class UClass*                                   McpConfigClass;                                   // 0x0000 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020401] 
struct UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Params
{
	struct FUniqueNetId                                UniqueId;                                         // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UOnlineMatchmakingStats*                     MMStats;                                          // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020401] 
struct UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Params
{
	int32_t                                            PlaylistId;                                       // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            NumPlayers;                                       // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420401] 
struct UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Params
{
	struct FUniqueNetId                                UniqueId;                                         // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class TArray<uint8_t>                              Payload;                                          // 0x0008 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020401] 
struct UOnlineEventsInterfaceMcp_execUploadPlayerData_Params
{
	struct FUniqueNetId                                UniqueId;                                         // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      PlayerNick;                                       // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      ProfileSettings;                                  // 0x0018 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x0020 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0028 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.CancelIO
// [0x00020802] 
struct UTitleFileDownloadCache_eventCancelIO_Params
{
};

// Function IpDrv.TitleFileDownloadCache.AttemptDeleteDownloadFile
// [0x00020802] 
struct UTitleFileDownloadCache_eventAttemptDeleteDownloadFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.OnDeleteDownloadFileCompleteInternal
// [0x00020400] 
struct UTitleFileDownloadCache_execOnDeleteDownloadFileCompleteInternal_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.OnDeleteDownloadFileComplete
// [0x00020002] 
struct UTitleFileDownloadCache_execOnDeleteDownloadFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.AttemptReadDownloadFile
// [0x00020802] 
struct UTitleFileDownloadCache_eventAttemptReadDownloadFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         Index;                                            // 0x0014 (0x0004) [0x0000000000000000]               
	// class UTitleFileCacheEntry*                     targetTitleFile;                                  // 0x0018 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.TitleFileDownloadCache.OnReadDownloadFileCompleteInternal
// [0x00020400] 
struct UTitleFileDownloadCache_execOnReadDownloadFileCompleteInternal_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytesProcessed;                                   // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.OnReadDownloadFileComplete
// [0x00020002] 
struct UTitleFileDownloadCache_execOnReadDownloadFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytesProcessed;                                   // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.TitleFileDownloadCache.AttemptWriteDownloadFile
// [0x00020802] 
struct UTitleFileDownloadCache_eventAttemptWriteDownloadFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      FileCRC;                                          // 0x0020 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.OnWriteDownloadFileCompleteInternal
// [0x00020400] 
struct UTitleFileDownloadCache_execOnWriteDownloadFileCompleteInternal_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytesProcessed;                                   // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.OnWriteDownloadFileComplete
// [0x00020002] 
struct UTitleFileDownloadCache_execOnWriteDownloadFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytesProcessed;                                   // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.TitleFileDownloadCache.AttemptGetDownloadFileSize
// [0x00024802] 
struct UTitleFileDownloadCache_eventAttemptGetDownloadFileSize_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           KeepHandle : 1;                                   // 0x0010 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.FindFolders
// [0x00420002] 
struct UTitleFileDownloadCache_execFindFolders_Params
{
	class TArray<class FString>                        Results;                                          // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.FindFiles
// [0x00420002] 
struct UTitleFileDownloadCache_execFindFiles_Params
{
	class TArray<class FString>                        Results;                                          // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      Subfolder;                                        // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// [0x00020400] 
struct UTitleFileDownloadCache_execDeleteTitleFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// [0x00020400] 
struct UTitleFileDownloadCache_execDeleteTitleFiles_Params
{
	float                                              MaxAgeSeconds;                                    // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// [0x00020400] 
struct UTitleFileDownloadCache_execClearCachedFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// [0x00020400] 
struct UTitleFileDownloadCache_execClearCachedFiles_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// [0x00020400] 
struct UTitleFileDownloadCache_execGetTitleFileLogicalName_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// [0x00020400] 
struct UTitleFileDownloadCache_execGetTitleFileHash_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// [0x00020400] 
struct UTitleFileDownloadCache_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x0010 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// [0x00420400] 
struct UTitleFileDownloadCache_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0010 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearDeleteTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execClearDeleteTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteCompleteDelegate;                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.TitleFileDownloadCache.AddDeleteTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execAddDeleteTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteCompleteDelegate;                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnDeleteTitleFileComplete
// [0x00120000] 
struct UTitleFileDownloadCache_execOnDeleteTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              timeTaken;                                        // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execClearSaveTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             SaveCompleteDelegate;                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execAddSaveTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             SaveCompleteDelegate;                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// [0x00120000] 
struct UTitleFileDownloadCache_execOnSaveTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytesTransferred;                                 // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              timeTaken;                                        // 0x0018 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// [0x00020400] 
struct UTitleFileDownloadCache_execSaveTitleFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      LogicalName;                                      // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0020 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execClearLoadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             LoadCompleteDelegate;                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execAddLoadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             LoadCompleteDelegate;                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// [0x00120000] 
struct UTitleFileDownloadCache_execOnLoadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytesTransferred;                                 // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              timeTaken;                                        // 0x0018 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// [0x00020400] 
struct UTitleFileDownloadCache_execLoadTitleFile_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.Tick
// [0x00020400] 
struct UOnlineSubsystemCommonImpl_execTick_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineSubsystemCommonImpl.CancelCustomContentRequest
// [0x00020400] 
struct UOnlineSubsystemCommonImpl_execCancelCustomContentRequest_Params
{
	class FString                                      sCustomId;                                        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetCustomContentAsString
// [0x00420400] 
struct UOnlineSubsystemCommonImpl_execGetCustomContentAsString_Params
{
	class FString                                      sCustomId;                                        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ContentData;                                      // 0x0010 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetCustomContent
// [0x00420400] 
struct UOnlineSubsystemCommonImpl_execGetCustomContent_Params
{
	class FString                                      sCustomId;                                        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              ContentData;                                      // 0x0010 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.StartCustomContentRequest
// [0x00024400] 
struct UOnlineSubsystemCommonImpl_execStartCustomContentRequest_Params
{
	class FString                                      sContentName;                                     // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      sCustomId;                                        // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             dReadCustomContentComplete;                       // 0x0020 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            eCCAM;                                            // 0x0030 (0x0001) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Category;                                         // 0x0034 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsCustomContentAccessModeAvailable
// [0x00020400] 
struct UOnlineSubsystemCommonImpl_execIsCustomContentAccessModeAvailable_Params
{
	uint8_t                                            eCCAM;                                            // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsCustomContentTypeAvailable
// [0x00020400] 
struct UOnlineSubsystemCommonImpl_execIsCustomContentTypeAvailable_Params
{
	uint8_t                                            CustomContentType;                                // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsCustomContentAvailable
// [0x00020400] 
struct UOnlineSubsystemCommonImpl_execIsCustomContentAvailable_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420003] 
struct UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  OutRegisteredPlayers;                             // 0x0008 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         Idx;                                              // 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                         PlayerIdx;                                        // 0x001C (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020401] 
struct UOnlineSubsystemCommonImpl_execIsPlayerInSession_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] 
struct UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Params
{
	int32_t                                            UserIndex;                                        // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execGetServerAddr_Params
{
	int32_t                                            OutServerIP;                                      // 0x0000 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	int32_t                                            OutServerPort;                                    // 0x0004 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execGetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                     // 0x0000 (0x0008) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FLocalAuthSession                           OutSessionInfo;                                   // 0x0008 (0x0014) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindServerAuthSession_Params
{
	class UPlayer*                                     ServerConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FAuthSession                                OutSessionInfo;                                   // 0x0008 (0x0018) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Params
{
	class UPlayer*                                     ServerConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FLocalAuthSession                           OutSessionInfo;                                   // 0x0008 (0x0014) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00420401] 
struct UOnlineAuthInterfaceImpl_execFindClientAuthSession_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FAuthSession                                OutSessionInfo;                                   // 0x0008 (0x0018) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllLocalServerAuthSessions_Params
{
	struct FLocalAuthSession                           OutSessionInfo;                                   // 0x0000 (0x0014) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllServerAuthSessions_Params
{
	struct FAuthSession                                OutSessionInfo;                                   // 0x0000 (0x0018) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllLocalClientAuthSessions_Params
{
	struct FLocalAuthSession                           OutSessionInfo;                                   // 0x0000 (0x0014) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// [0x00420405] 
struct UOnlineAuthInterfaceImpl_execAllClientAuthSessions_Params
{
	struct FAuthSession                                OutSessionInfo;                                   // 0x0000 (0x0018) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllRemoteServerAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllLocalServerAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndRemoteServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndLocalServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execVerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execCreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientPort;                                       // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            OutAuthTicketUID;                                 // 0x0010 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllRemoteClientAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndAllLocalClientAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndRemoteClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execEndLocalClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerPort;                                       // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execVerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientPort;                                       // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execCreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerPort;                                       // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bSecure : 1;                                      // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	int32_t                                            OutAuthTicketUID;                                 // 0x0014 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthRetryRequest_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthEndSessionRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthResponse_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// [0x00020401] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthResponse_Params
{
	int32_t                                            AuthTicketUID;                                    // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerConnectionClose_Params
{
	class UPlayer*                                     ServerConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientConnectionClose_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthRetryRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRetryRequestDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthRetryRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRetryRequestDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthRetryRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthEndSessionRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthEndSessionRequestDelegate;              // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthEndSessionRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthEndSessionRequestDelegate;              // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthEndSessionRequest_Params
{
	class UPlayer*                                     ServerConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ServerAuthCompleteDelegate;                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ServerAuthCompleteDelegate;                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthComplete_Params
{
	uint32_t                                           bSuccess : 1;                                     // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                ServerUID;                                        // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UPlayer*                                     ServerConnection;                                 // 0x000C (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      ExtraInfo;                                        // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ClientAuthCompleteDelegate;                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ClientAuthCompleteDelegate;                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthComplete_Params
{
	uint32_t                                           bSuccess : 1;                                     // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	struct FUniqueNetId                                ClientUID;                                        // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UPlayer*                                     ClientConnection;                                 // 0x000C (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      ExtraInfo;                                        // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ServerAuthResponseDelegate;                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ServerAuthResponseDelegate;                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthResponse_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ClientAuthResponseDelegate;                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ClientAuthResponseDelegate;                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthResponse_Params
{
	struct FUniqueNetId                                ClientUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRequestDelegate;                        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRequestDelegate;                        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientIP;                                         // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ClientPort;                                       // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthRequestDelegate;                        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthRequestDelegate;                        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerIP;                                         // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ServerPort;                                       // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bSecure : 1;                                      // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Params
{
	struct FScriptDelegate                             AuthReadyDelegate;                                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Params
{
	struct FScriptDelegate                             AuthReadyDelegate;                                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnAuthReady_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// [0x00020003] 
struct UOnlineAuthInterfaceImpl_execIsReady_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Params
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Params
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnQosStatusChanged_Params
{
	int32_t                                            NumComplete;                                      // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            NumTotal;                                         // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Params
{
	uint8_t                                            SearchingPlayerNum;                               // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	class UOnlineGameSearch*                           SearchSettings;                                   // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x000C (0x0050) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x005C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x0008 (0x0050) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0058 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420401] 
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Params
{
	struct FOnlineGameSearchResult                     DesiredGame;                                      // 0x0000 (0x0010) [0x0000000000000029] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            PlatformSpecificInfo[80];                         // 0x0010 (0x0050) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0060 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Params
{
	int32_t                                            StartAt;                                          // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            NumberToQuery;                                    // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Params
{
	uint8_t                                            PlayerNum;                                        // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FOnlineGameSearchResult                     DesiredGame;                                      // 0x000C (0x0010) [0x0000000000000029] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execMigrateOnlineGame_Params
{
	uint8_t                                            HostingPlayerNum;                                 // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Params
{
	struct FScriptDelegate                             RecalculateSkillRatingGameCompleteDelegate;       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Params
{
	struct FScriptDelegate                             RecalculateSkillRatingCompleteDelegate;           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execRecalculateSkillRating_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0008 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAcceptGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                     // 0x0000 (0x0010) [0x0000000000000029] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class TArray<struct FOnlineArbitrationRegistrant>  ReturnValue;                                      // 0x0008 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterForArbitration_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execEndOnlineGame_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execStartOnlineGame_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayers_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0008 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayer_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayers_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0008 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayer_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasInvited : 1;                                  // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420401] 
struct UOnlineGameInterfaceImpl_execGetResolvedConnectString_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      ConnectInfo;                                      // 0x0008 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420401] 
struct UOnlineGameInterfaceImpl_execJoinOnlineGame_Params
{
	uint8_t                                            PlayerNum;                                        // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FOnlineGameSearchResult                     DesiredGame;                                      // 0x000C (0x0010) [0x0000000000000029] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execFreeSearchResults_Params
{
	class UOnlineGameSearch*                           Search;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execFindOnlineGames_Params
{
	uint8_t                                            SearchingPlayerNum;                               // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	class UOnlineGameSearch*                           SearchSettings;                                   // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execDestroyOnlineGame_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] 
struct UOnlineGameInterfaceImpl_execUpdateOnlineGame_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UOnlineGameSettings*                         UpdatedGameSettings;                              // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bShouldRefreshOnlineData : 1;                     // 0x0010 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020401] 
struct UOnlineGameInterfaceImpl_execCreateOnlineGame_Params
{
	uint8_t                                            HostingPlayerNum;                                 // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
	class FName                                        SessionName;                                      // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UOnlineGameSettings*                         NewGameSettings;                                  // 0x000C (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execGetGameSearch_Params
{
	class UOnlineGameSearch*                           ReturnValue;                                      // 0x0000 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020003] 
struct UOnlineGameInterfaceImpl_execGetGameSettings_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UOnlineGameSettings*                         ReturnValue;                                      // 0x0008 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function IpDrv.ROnlineCustomContentCacheManager.CheckStateChange
// [0x00040401] 
struct UROnlineCustomContentCacheManager_execCheckStateChange_Params
{
};

// Function IpDrv.ROnlineCustomContentCacheManager.Tick
// [0x00020400] 
struct UROnlineCustomContentCacheManager_execTick_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.ROnlineCustomContentCacheManager.GetActivityLogAsList
// [0x00C20802] 
struct UROnlineCustomContentCacheManager_eventGetActivityLogAsList_Params
{
	class TArray<class FString>                        OutList;                                          // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FCacheActivityEntry                      entryCopy;                                        // 0x0010 (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
	// class FString                                   listEntry;                                        // 0x002C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class FString                                   OpType;                                           // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class FString                                   Status;                                           // 0x004C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// Function IpDrv.ROnlineCustomContentCacheManager.UpdateActivity
// [0x00820802] 
struct UROnlineCustomContentCacheManager_eventUpdateActivity_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            Type;                                             // 0x0010 (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            Status;                                           // 0x0011 (0x0001) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            bytesTransferred;                                 // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              timeTaken;                                        // 0x0018 (0x0004) [0x0000000000000008] (CPF_Parm)    
	// struct FCacheActivityEntry                      newEntry;                                         // 0x001C (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
};

// Function IpDrv.ROnlineCustomContentCacheManager.OnCleanupObsoleteInternal
// [0x00120002] 
struct UROnlineCustomContentCacheManager_execOnCleanupObsoleteInternal_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      sCustomId;                                        // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.ROnlineCustomContentCacheManager.OnCrcDownloadComplete
// [0x00820802] 
struct UROnlineCustomContentCacheManager_eventOnCrcDownloadComplete_Params
{
	class UOnlineCustomContentRequestHydra*            SubRequest;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Category;                                         // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   sCrcData;                                         // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class UJsonObject*                              iCrcRoot;                                         // 0x0028 (0x0008) [0x0000000000000000]               
	// class UJsonObject*                              iCrcItems;                                        // 0x0030 (0x0008) [0x0000000000000000]               
	// class FString                                   sContent;                                         // 0x0038 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// int32_t                                         CRC;                                              // 0x0048 (0x0004) [0x0000000000000000]               
	// int32_t                                         I;                                                // 0x004C (0x0004) [0x0000000000000000]               
	// int32_t                                         folderIndex;                                      // 0x0050 (0x0004) [0x0000000000000000]               
	// int32_t                                         cachedSize;                                       // 0x0054 (0x0004) [0x0000000000000000]               
	// uint8_t                                         listedFileStatus;                                 // 0x0058 (0x0001) [0x0000000000000000]               
	// struct FRegistryFolder                          folderCopy;                                       // 0x005C (0x0024) [0x0000000000010000] (CPF_NeedCtorLink)
	// class UOnlineCustomContentRequestCacheableHydra* fileToDelete;                                     // 0x0080 (0x0008) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.GetRegistryAsFileNames
// [0x00C20802] 
struct UROnlineCustomContentCacheManager_eventGetRegistryAsFileNames_Params
{
	class TArray<class FString>                        OutList;                                          // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FRegistryFolder                          folderCopy;                                       // 0x0010 (0x0024) [0x0000000000010000] (CPF_NeedCtorLink)
	// struct FRegistryEntry                           entryCopy;                                        // 0x0034 (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
	// class FString                                   listEntry;                                        // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// Function IpDrv.ROnlineCustomContentCacheManager.GetRegistryAsList
// [0x00C20802] 
struct UROnlineCustomContentCacheManager_eventGetRegistryAsList_Params
{
	class TArray<class FString>                        OutList;                                          // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FRegistryFolder                          folderCopy;                                       // 0x0014 (0x0024) [0x0000000000010000] (CPF_NeedCtorLink)
	// struct FRegistryEntry                           entryCopy;                                        // 0x0038 (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
	// class FString                                   listEntry;                                        // 0x0054 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// int32_t                                         TotalSize;                                        // 0x0064 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.GetIndexOfFolderInRegistry
// [0x00420002] 
struct UROnlineCustomContentCacheManager_execGetIndexOfFolderInRegistry_Params
{
	struct FRegistryFolder                             folderCopy;                                       // 0x0000 (0x0024) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      Subfolder;                                        // 0x0024 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0034 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         Index;                                            // 0x0038 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.GetIndexOfEntryInFolder
// [0x00420002] 
struct UROnlineCustomContentCacheManager_execGetIndexOfEntryInFolder_Params
{
	struct FRegistryEntry                              entryCopy;                                        // 0x0000 (0x001C) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FRegistryFolder                             folderCopy;                                       // 0x001C (0x0024) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x0040 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0050 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         Index;                                            // 0x0054 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.GetCopyOfEntryInRegistry
// [0x00C20802] 
struct UROnlineCustomContentCacheManager_eventGetCopyOfEntryInRegistry_Params
{
	struct FRegistryEntry                              entryCopy;                                        // 0x0000 (0x001C) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         // 0x001C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Subfolder;                                        // 0x002C (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x003C (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FRegistryFolder                          folderCopy;                                       // 0x0040 (0x0024) [0x0000000000010000] (CPF_NeedCtorLink)
};

// Function IpDrv.ROnlineCustomContentCacheManager.FlagObsoleteInRegistry
// [0x00820802] 
struct UROnlineCustomContentCacheManager_eventFlagObsoleteInRegistry_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Subfolder;                                        // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FRegistryEntry                           Entry;                                            // 0x0024 (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
	// struct FRegistryFolder                          folder;                                           // 0x0040 (0x0024) [0x0000000000010000] (CPF_NeedCtorLink)
	// int32_t                                         entryIndex;                                       // 0x0064 (0x0004) [0x0000000000000000]               
	// int32_t                                         folderIndex;                                      // 0x0068 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.RemoveFromRegistry
// [0x00820802] 
struct UROnlineCustomContentCacheManager_eventRemoveFromRegistry_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Subfolder;                                        // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FRegistryEntry                           Entry;                                            // 0x0024 (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
	// struct FRegistryFolder                          folder;                                           // 0x0040 (0x0024) [0x0000000000010000] (CPF_NeedCtorLink)
	// int32_t                                         entryIndex;                                       // 0x0064 (0x0004) [0x0000000000000000]               
	// int32_t                                         folderIndex;                                      // 0x0068 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.UpdateRegistry
// [0x00820802] 
struct UROnlineCustomContentCacheManager_eventUpdateRegistry_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Subfolder;                                        // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Crc32;                                            // 0x0020 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            Size;                                             // 0x0024 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bObsolete : 1;                                    // 0x0028 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	// struct FRegistryEntry                           newEntry;                                         // 0x002C (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
	// struct FRegistryFolder                          newFolder;                                        // 0x0048 (0x0024) [0x0000000000010000] (CPF_NeedCtorLink)
	// int32_t                                         entryIndex;                                       // 0x006C (0x0004) [0x0000000000000000]               
	// int32_t                                         folderIndex;                                      // 0x0070 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.GetFileCacheSize
// [0x00820002] 
struct UROnlineCustomContentCacheManager_execGetFileCacheSize_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Subfolder;                                        // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0020 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FRegistryEntry                           Entry;                                            // 0x0024 (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
};

// Function IpDrv.ROnlineCustomContentCacheManager.GetFileCacheStatus
// [0x00820002] 
struct UROnlineCustomContentCacheManager_execGetFileCacheStatus_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Subfolder;                                        // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ExpectedCrc32;                                    // 0x0020 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0024 (0x0001) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FRegistryEntry                           Entry;                                            // 0x0028 (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
};

// Function IpDrv.ROnlineCustomContentCacheManager.InitializeCacheRegistry
// [0x00820802] 
struct UROnlineCustomContentCacheManager_eventInitializeCacheRegistry_Params
{
	// class TArray<class FString>                     Results;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class TArray<class FString>                     folders;                                          // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class FString                                   Result;                                           // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class FString                                   Subfolder;                                        // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class FString                                   FullName;                                         // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// struct FRegistryFolder                          newFolder;                                        // 0x0050 (0x0024) [0x0000000000010000] (CPF_NeedCtorLink)
	// struct FRegistryEntry                           newEntry;                                         // 0x0074 (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
};

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheDeleteComplete
// [0x00120002] 
struct UROnlineCustomContentCacheManager_execOnCacheDeleteComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              timeTaken;                                        // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	// int32_t                                         slashIndex;                                       // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheDeleteBegin
// [0x00020802] 
struct UROnlineCustomContentCacheManager_eventOnCacheDeleteBegin_Params
{
	// class UOnlineTitleFileCacheInterface*           fileCache;                                        // 0x0000 (0x0010) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheSaveComplete
// [0x00120002] 
struct UROnlineCustomContentCacheManager_execOnCacheSaveComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytesTransferred;                                 // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              timeTaken;                                        // 0x0018 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheSaveBegin
// [0x00020802] 
struct UROnlineCustomContentCacheManager_eventOnCacheSaveBegin_Params
{
	// class UOnlineTitleFileCacheInterface*           fileCache;                                        // 0x0000 (0x0010) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheLoadComplete
// [0x00120002] 
struct UROnlineCustomContentCacheManager_execOnCacheLoadComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytesTransferred;                                 // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              timeTaken;                                        // 0x0018 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.ROnlineCustomContentCacheManager.OnCacheLoadBegin
// [0x00020802] 
struct UROnlineCustomContentCacheManager_eventOnCacheLoadBegin_Params
{
	// class UOnlineTitleFileCacheInterface*           fileCache;                                        // 0x0000 (0x0010) [0x0000000000000000]               
};

// Function IpDrv.ROnlineCustomContentCacheManager.AddToDeleteQueue
// [0x00020C00] 
struct UROnlineCustomContentCacheManager_eventAddToDeleteQueue_Params
{
	class UOnlineCustomContentRequestCacheableHydra*   Request;                                          // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.ROnlineCustomContentCacheManager.AddToWriteQueue
// [0x00020C00] 
struct UROnlineCustomContentCacheManager_eventAddToWriteQueue_Params
{
	class UOnlineCustomContentRequestCacheableHydra*   Request;                                          // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.ROnlineCustomContentCacheManager.RemoveFromReadQueue
// [0x00020C00] 
struct UROnlineCustomContentCacheManager_eventRemoveFromReadQueue_Params
{
	class UOnlineCustomContentRequestCacheableHydra*   Request;                                          // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.ROnlineCustomContentCacheManager.AddToReadQueue
// [0x00020C00] 
struct UROnlineCustomContentCacheManager_eventAddToReadQueue_Params
{
	class UOnlineCustomContentRequestCacheableHydra*   Request;                                          // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// [0x00020003] 
struct UOnlineImageDownloaderWeb_execDebugDraw_Params
{
	class UCanvas*                                     Canvas;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	// float                                           PosX;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	// float                                           PosY;                                             // 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                         Idx;                                              // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// [0x00040003] 
struct UOnlineImageDownloaderWeb_execOnDownloadComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bDidSucceed : 1;                                  // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	// int32_t                                         FoundIdx;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	// class TArray<uint8_t>                           JPEGData;                                         // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// [0x00040003] 
struct UOnlineImageDownloaderWeb_execDownloadNextImage_Params
{
	// int32_t                                         Idx;                                              // 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                         PendingDownloads;                                 // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// [0x00020003] 
struct UOnlineImageDownloaderWeb_execClearAllDownloads_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads
// [0x00020003] 
struct UOnlineImageDownloaderWeb_execClearDownloads_Params
{
	class TArray<class FString>                        URLs;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         Idx;                                              // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads
// [0x00020003] 
struct UOnlineImageDownloaderWeb_execGetNumPendingDownloads_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         Idx;                                              // 0x0004 (0x0004) [0x0000000000000000]               
	// int32_t                                         Count;                                            // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// [0x00020003] 
struct UOnlineImageDownloaderWeb_execRequestOnlineImages_Params
{
	class TArray<class FString>                        URLs;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// class FString                                   URL;                                              // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// int32_t                                         FoundIdx;                                         // 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                         Idx;                                              // 0x0024 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// [0x00020003] 
struct UOnlineImageDownloaderWeb_execGetOnlineImageTexture_Params
{
	class FString                                      URL;                                              // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    ReturnValue;                                      // 0x0010 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         FoundIdx;                                         // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded
// [0x00120000] 
struct UOnlineImageDownloaderWeb_execOnOnlineImageDownloaded_Params
{
	struct FOnlineImageDownload                        CachedEntry;                                      // 0x0000 (0x0028) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
