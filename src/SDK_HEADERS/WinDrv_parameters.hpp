/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: WinDrv_parameters.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#include "WinDrv_structs.hpp"

#include "Engine_parameters.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Parameters
# ========================================================================================= #
*/

// Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete
// [0x00840003] 
struct UFacebookWindows_execOnFacebookFriendsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bDidSucceed;                                      // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	// class FString                                   JsonPayload;                                      // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       // 0x0024 (0x0008) [0x0000000000000000]               
	// class UJsonObject*                              FriendsJson;                                      // 0x002C (0x0008) [0x0000000000000000]               
	// int32_t                                         JsonIndex;                                        // 0x0034 (0x0004) [0x0000000000000000]               
	// struct FPlatformInterfaceDelegateResult         DelegateResult;                                   // 0x0038 (0x0030) [0x0000000000010000] (CPF_NeedCtorLink)
	// struct FFacebookFriend                          Friend;                                           // 0x0068 (0x0020) [0x0000000000010000] (CPF_NeedCtorLink)
};
static_assert(offsetof(UFacebookWindows_execOnFacebookFriendsRequestComplete_Params, bDidSucceed) == 0x0010);
static_assert(sizeof(UFacebookWindows_execOnFacebookFriendsRequestComplete_Params) >= 0x0014);

// Function WinDrv.FacebookWindows.RequestFacebookFriends
// [0x00040803] 
struct UFacebookWindows_eventRequestFacebookFriends_Params
{
};

// Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete
// [0x00840003] 
struct UFacebookWindows_execOnFacebookMeRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bDidSucceed;                                      // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	// class FString                                   JsonPayload;                                      // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	// class UJsonObject*                              ParsedJson;                                       // 0x0024 (0x0008) [0x0000000000000000]               
	// struct FPlatformInterfaceDelegateResult         DelegateResult;                                   // 0x002C (0x0030) [0x0000000000010000] (CPF_NeedCtorLink)
};
static_assert(offsetof(UFacebookWindows_execOnFacebookMeRequestComplete_Params, bDidSucceed) == 0x0010);
static_assert(sizeof(UFacebookWindows_execOnFacebookMeRequestComplete_Params) >= 0x0014);

// Function WinDrv.FacebookWindows.RequestFacebookMeInfo
// [0x00040803] 
struct UFacebookWindows_eventRequestFacebookMeInfo_Params
{
};

// Function WinDrv.FacebookWindows.FacebookRequestCallback
// [0x00020003] 
struct UFacebookWindows_execFacebookRequestCallback_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           bDidSucceed;                                      // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	// class FString                                   Payload;                                          // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};
static_assert(offsetof(UFacebookWindows_execFacebookRequestCallback_Params, bDidSucceed) == 0x0010);
static_assert(sizeof(UFacebookWindows_execFacebookRequestCallback_Params) >= 0x0014);

// Function WinDrv.FacebookWindows.ProcessFacebookRequest
// [0x00020401] 
struct UFacebookWindows_execProcessFacebookRequest_Params
{
	class FString                                      Payload;                                          // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ResponseCode;                                     // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UFacebookWindows_execProcessFacebookRequest_Params, ResponseCode) == 0x0010);
static_assert(sizeof(UFacebookWindows_execProcessFacebookRequest_Params) >= 0x0014);

// Function WinDrv.FacebookWindows.FacebookRequest
// [0x00020002] 
struct UFacebookWindows_execFacebookRequest_Params
{
	class FString                                      GraphRequest;                                     // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UFacebookWindows_execFacebookRequest_Params, GraphRequest) == 0x0000);
static_assert(sizeof(UFacebookWindows_execFacebookRequest_Params) >= 0x0010);

// Function WinDrv.FacebookWindows.Disconnect
// [0x00020400] 
struct UFacebookWindows_execDisconnect_Params
{
};

// Function WinDrv.FacebookWindows.IsAuthorized
// [0x00020400] 
struct UFacebookWindows_execIsAuthorized_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UFacebookWindows_execIsAuthorized_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UFacebookWindows_execIsAuthorized_Params) >= 0x0004);

// Function WinDrv.FacebookWindows.Authorize
// [0x00020400] 
struct UFacebookWindows_execAuthorize_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UFacebookWindows_execAuthorize_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UFacebookWindows_execAuthorize_Params) >= 0x0004);

// Function WinDrv.FacebookWindows.Init
// [0x00020400] 
struct UFacebookWindows_execInit_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UFacebookWindows_execInit_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UFacebookWindows_execInit_Params) >= 0x0004);

// Function WinDrv.HttpRequestWindows.ProcessRequest
// [0x00020400] 
struct UHttpRequestWindows_execProcessRequest_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UHttpRequestWindows_execProcessRequest_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpRequestWindows_execProcessRequest_Params) >= 0x0004);

// Function WinDrv.HttpRequestWindows.SetHeader
// [0x00020400] 
struct UHttpRequestWindows_execSetHeader_Params
{
	class FString                                      HeaderName;                                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      HeaderValue;                                      // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      // 0x0020 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UHttpRequestWindows_execSetHeader_Params, ReturnValue) == 0x0020);
static_assert(sizeof(UHttpRequestWindows_execSetHeader_Params) >= 0x0028);

// Function WinDrv.HttpRequestWindows.SetContentAsString
// [0x00020400] 
struct UHttpRequestWindows_execSetContentAsString_Params
{
	class FString                                      ContentString;                                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      // 0x0010 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UHttpRequestWindows_execSetContentAsString_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UHttpRequestWindows_execSetContentAsString_Params) >= 0x0018);

// Function WinDrv.HttpRequestWindows.SetContent
// [0x00420400] 
struct UHttpRequestWindows_execSetContent_Params
{
	class TArray<uint8_t>                              ContentPayload;                                   // 0x0000 (0x0010) [0x0000000000010029] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      // 0x0010 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UHttpRequestWindows_execSetContent_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UHttpRequestWindows_execSetContent_Params) >= 0x0018);

// Function WinDrv.HttpRequestWindows.SetURL
// [0x00020400] 
struct UHttpRequestWindows_execSetURL_Params
{
	class FString                                      URL;                                              // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      // 0x0010 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UHttpRequestWindows_execSetURL_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UHttpRequestWindows_execSetURL_Params) >= 0x0018);

// Function WinDrv.HttpRequestWindows.SetVerb
// [0x00020400] 
struct UHttpRequestWindows_execSetVerb_Params
{
	class FString                                      Verb;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      // 0x0010 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UHttpRequestWindows_execSetVerb_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UHttpRequestWindows_execSetVerb_Params) >= 0x0018);

// Function WinDrv.HttpRequestWindows.GetVerb
// [0x00020400] 
struct UHttpRequestWindows_execGetVerb_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpRequestWindows_execGetVerb_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpRequestWindows_execGetVerb_Params) >= 0x0010);

// Function WinDrv.HttpRequestWindows.GetContent
// [0x00420400] 
struct UHttpRequestWindows_execGetContent_Params
{
	class TArray<uint8_t>                              Content;                                          // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpRequestWindows_execGetContent_Params, Content) == 0x0000);
static_assert(sizeof(UHttpRequestWindows_execGetContent_Params) >= 0x0010);

// Function WinDrv.HttpRequestWindows.GetURL
// [0x00020400] 
struct UHttpRequestWindows_execGetURL_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpRequestWindows_execGetURL_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpRequestWindows_execGetURL_Params) >= 0x0010);

// Function WinDrv.HttpRequestWindows.GetContentLength
// [0x00020400] 
struct UHttpRequestWindows_execGetContentLength_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UHttpRequestWindows_execGetContentLength_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpRequestWindows_execGetContentLength_Params) >= 0x0004);

// Function WinDrv.HttpRequestWindows.GetContentType
// [0x00020400] 
struct UHttpRequestWindows_execGetContentType_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpRequestWindows_execGetContentType_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpRequestWindows_execGetContentType_Params) >= 0x0010);

// Function WinDrv.HttpRequestWindows.GetURLParameter
// [0x00020400] 
struct UHttpRequestWindows_execGetURLParameter_Params
{
	class FString                                      ParameterName;                                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpRequestWindows_execGetURLParameter_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UHttpRequestWindows_execGetURLParameter_Params) >= 0x0020);

// Function WinDrv.HttpRequestWindows.GetHeaders
// [0x00020400] 
struct UHttpRequestWindows_execGetHeaders_Params
{
	class TArray<class FString>                        ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpRequestWindows_execGetHeaders_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpRequestWindows_execGetHeaders_Params) >= 0x0010);

// Function WinDrv.HttpRequestWindows.GetHeader
// [0x00020400] 
struct UHttpRequestWindows_execGetHeader_Params
{
	class FString                                      HeaderName;                                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpRequestWindows_execGetHeader_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UHttpRequestWindows_execGetHeader_Params) >= 0x0020);

// Function WinDrv.HttpResponseWindows.GetResponseCode
// [0x00020400] 
struct UHttpResponseWindows_execGetResponseCode_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UHttpResponseWindows_execGetResponseCode_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpResponseWindows_execGetResponseCode_Params) >= 0x0004);

// Function WinDrv.HttpResponseWindows.GetContentAsString
// [0x00020400] 
struct UHttpResponseWindows_execGetContentAsString_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpResponseWindows_execGetContentAsString_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpResponseWindows_execGetContentAsString_Params) >= 0x0010);

// Function WinDrv.HttpResponseWindows.GetContent
// [0x00420400] 
struct UHttpResponseWindows_execGetContent_Params
{
	class TArray<uint8_t>                              Content;                                          // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpResponseWindows_execGetContent_Params, Content) == 0x0000);
static_assert(sizeof(UHttpResponseWindows_execGetContent_Params) >= 0x0010);

// Function WinDrv.HttpResponseWindows.GetURL
// [0x00020400] 
struct UHttpResponseWindows_execGetURL_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpResponseWindows_execGetURL_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpResponseWindows_execGetURL_Params) >= 0x0010);

// Function WinDrv.HttpResponseWindows.GetContentLength
// [0x00020400] 
struct UHttpResponseWindows_execGetContentLength_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UHttpResponseWindows_execGetContentLength_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpResponseWindows_execGetContentLength_Params) >= 0x0004);

// Function WinDrv.HttpResponseWindows.GetContentType
// [0x00020400] 
struct UHttpResponseWindows_execGetContentType_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpResponseWindows_execGetContentType_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpResponseWindows_execGetContentType_Params) >= 0x0010);

// Function WinDrv.HttpResponseWindows.GetURLParameter
// [0x00020400] 
struct UHttpResponseWindows_execGetURLParameter_Params
{
	class FString                                      ParameterName;                                    // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpResponseWindows_execGetURLParameter_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UHttpResponseWindows_execGetURLParameter_Params) >= 0x0020);

// Function WinDrv.HttpResponseWindows.GetHeaders
// [0x00020400] 
struct UHttpResponseWindows_execGetHeaders_Params
{
	class TArray<class FString>                        ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpResponseWindows_execGetHeaders_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpResponseWindows_execGetHeaders_Params) >= 0x0010);

// Function WinDrv.HttpResponseWindows.GetHeader
// [0x00020400] 
struct UHttpResponseWindows_execGetHeader_Params
{
	class FString                                      HeaderName;                                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpResponseWindows_execGetHeader_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UHttpResponseWindows_execGetHeader_Params) >= 0x0020);

// Function WinDrv.HttpRequestWindowsMcp.ProcessRequest
// [0x00020002] 
struct UHttpRequestWindowsMcp_execProcessRequest_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class FString                                   URL;                                              // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};
static_assert(offsetof(UHttpRequestWindowsMcp_execProcessRequest_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UHttpRequestWindowsMcp_execProcessRequest_Params) >= 0x0004);

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
