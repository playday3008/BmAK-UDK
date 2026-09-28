/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: IpDrv_structs.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct IpDrv.InternetLink.IpAddr
// 0x0008
struct FIpAddr
{
	int32_t                                            Addr;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Port;                                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// 0x001C
struct FEventUploadConfig
{
	uint8_t                                            UploadType;                                    // 0x0000 (0x0001) [0x0000000000000001] (CPF_Const)   
	class FString                                      UploadUrl;                                     // 0x0004 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	float                                              TimeOut;                                       // 0x0014 (0x0004) [0x0000000000000001] (CPF_Const)   
	uint32_t                                           bUseCompression : 1;                           // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)
};

// ScriptStruct IpDrv.OnlineImageDownloaderWeb.OnlineImageDownload
// 0x0028
struct FOnlineImageDownload
{
	class FString                                      URL;                                           // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                   // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            State;                                         // 0x0018 (0x0001) [0x0000000000000000]               
	uint32_t                                           bPendingRemoval : 1;                           // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture2DDynamic*                           Texture;                                       // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineSubsystemCommonImpl.Steam_PriceInfo
// 0x0060
struct FSteam_PriceInfo
{
	class FString                                      ProductId;                                     // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      Currency;                                      // 0x0010 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      Discount_Percent;                              // 0x0020 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      Final_Price;                                   // 0x0030 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      Initial_Price;                                 // 0x0040 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      PackageId;                                     // 0x0050 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.ROnlineCustomContentCacheManager.RegistryEntry
// 0x001C
struct FRegistryEntry
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Size;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            CRC;                                           // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           Obsolete : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct IpDrv.ROnlineCustomContentCacheManager.RegistryFolder
// 0x0024
struct FRegistryFolder
{
	class FString                                      FolderName;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FRegistryEntry>                Entries;                                       // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Version;                                       // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.ROnlineCustomContentCacheManager.CacheActivityEntry
// 0x001C
struct FCacheActivityEntry
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            OpType;                                        // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            Status;                                        // 0x0011 (0x0001) [0x0000000000000000]               
	int32_t                                            bytesTransferred;                              // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              timeTaken;                                     // 0x0018 (0x0004) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
