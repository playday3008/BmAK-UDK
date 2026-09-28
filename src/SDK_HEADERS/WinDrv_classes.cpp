/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: WinDrv_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#include "WinDrv_classes.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete
// [0x00840003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bDidSucceed                    (CPF_Parm)

void UFacebookWindows::OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnOnFacebookFriendsRequestComplete = nullptr;

	if (!uFnOnFacebookFriendsRequestComplete)
	{
		uFnOnFacebookFriendsRequestComplete = UFunction::FindFunction("Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete");
	}

	UFacebookWindows_execOnFacebookFriendsRequestComplete_Params OnFacebookFriendsRequestComplete_Params;
	memset(&OnFacebookFriendsRequestComplete_Params, 0, sizeof(OnFacebookFriendsRequestComplete_Params));
	if (!uFnOnFacebookFriendsRequestComplete)
	{
		return;
	}

	OnFacebookFriendsRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnFacebookFriendsRequestComplete_Params.Response = Response;
	OnFacebookFriendsRequestComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnFacebookFriendsRequestComplete, &OnFacebookFriendsRequestComplete_Params, nullptr);
}

// Function WinDrv.FacebookWindows.RequestFacebookFriends
// [0x00040803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UFacebookWindows::eventRequestFacebookFriends()
{
	static UFunction* uFnRequestFacebookFriends = nullptr;

	if (!uFnRequestFacebookFriends)
	{
		uFnRequestFacebookFriends = UFunction::FindFunction("Function WinDrv.FacebookWindows.RequestFacebookFriends");
	}

	UFacebookWindows_eventRequestFacebookFriends_Params RequestFacebookFriends_Params;
	memset(&RequestFacebookFriends_Params, 0, sizeof(RequestFacebookFriends_Params));
	if (!uFnRequestFacebookFriends)
	{
		return;
	}


	this->ProcessEvent(uFnRequestFacebookFriends, &RequestFacebookFriends_Params, nullptr);
}

// Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete
// [0x00840003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bDidSucceed                    (CPF_Parm)

void UFacebookWindows::OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnOnFacebookMeRequestComplete = nullptr;

	if (!uFnOnFacebookMeRequestComplete)
	{
		uFnOnFacebookMeRequestComplete = UFunction::FindFunction("Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete");
	}

	UFacebookWindows_execOnFacebookMeRequestComplete_Params OnFacebookMeRequestComplete_Params;
	memset(&OnFacebookMeRequestComplete_Params, 0, sizeof(OnFacebookMeRequestComplete_Params));
	if (!uFnOnFacebookMeRequestComplete)
	{
		return;
	}

	OnFacebookMeRequestComplete_Params.OriginalRequest = OriginalRequest;
	OnFacebookMeRequestComplete_Params.Response = Response;
	OnFacebookMeRequestComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnFacebookMeRequestComplete, &OnFacebookMeRequestComplete_Params, nullptr);
}

// Function WinDrv.FacebookWindows.RequestFacebookMeInfo
// [0x00040803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UFacebookWindows::eventRequestFacebookMeInfo()
{
	static UFunction* uFnRequestFacebookMeInfo = nullptr;

	if (!uFnRequestFacebookMeInfo)
	{
		uFnRequestFacebookMeInfo = UFunction::FindFunction("Function WinDrv.FacebookWindows.RequestFacebookMeInfo");
	}

	UFacebookWindows_eventRequestFacebookMeInfo_Params RequestFacebookMeInfo_Params;
	memset(&RequestFacebookMeInfo_Params, 0, sizeof(RequestFacebookMeInfo_Params));
	if (!uFnRequestFacebookMeInfo)
	{
		return;
	}


	this->ProcessEvent(uFnRequestFacebookMeInfo, &RequestFacebookMeInfo_Params, nullptr);
}

// Function WinDrv.FacebookWindows.FacebookRequestCallback
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// uint32_t                       bDidSucceed                    (CPF_Parm)

void UFacebookWindows::FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static UFunction* uFnFacebookRequestCallback = nullptr;

	if (!uFnFacebookRequestCallback)
	{
		uFnFacebookRequestCallback = UFunction::FindFunction("Function WinDrv.FacebookWindows.FacebookRequestCallback");
	}

	UFacebookWindows_execFacebookRequestCallback_Params FacebookRequestCallback_Params;
	memset(&FacebookRequestCallback_Params, 0, sizeof(FacebookRequestCallback_Params));
	if (!uFnFacebookRequestCallback)
	{
		return;
	}

	FacebookRequestCallback_Params.OriginalRequest = OriginalRequest;
	FacebookRequestCallback_Params.Response = Response;
	FacebookRequestCallback_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnFacebookRequestCallback, &FacebookRequestCallback_Params, nullptr);
}

// Function WinDrv.FacebookWindows.ProcessFacebookRequest
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Payload                        (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        ResponseCode                   (CPF_Parm)

void UFacebookWindows::ProcessFacebookRequest(const class FString& Payload, int32_t ResponseCode)
{
	static UFunction* uFnProcessFacebookRequest = nullptr;

	if (!uFnProcessFacebookRequest)
	{
		uFnProcessFacebookRequest = UFunction::FindFunction("Function WinDrv.FacebookWindows.ProcessFacebookRequest");
	}

	UFacebookWindows_execProcessFacebookRequest_Params ProcessFacebookRequest_Params;
	memset(&ProcessFacebookRequest_Params, 0, sizeof(ProcessFacebookRequest_Params));
	if (!uFnProcessFacebookRequest)
	{
		return;
	}

	memcpy_s(&ProcessFacebookRequest_Params.Payload, sizeof(ProcessFacebookRequest_Params.Payload), &Payload, sizeof(Payload));
	ProcessFacebookRequest_Params.ResponseCode = ResponseCode;

	auto native_ProcessFacebookRequest = uFnProcessFacebookRequest->iNative;
	uFnProcessFacebookRequest->iNative = 0;
	this->ProcessEvent(uFnProcessFacebookRequest, &ProcessFacebookRequest_Params, nullptr);
	uFnProcessFacebookRequest->iNative = native_ProcessFacebookRequest;
}

// Function WinDrv.FacebookWindows.FacebookRequest
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  GraphRequest                   (CPF_Parm | CPF_NeedCtorLink)

void UFacebookWindows::FacebookRequest(const class FString& GraphRequest)
{
	static UFunction* uFnFacebookRequest = nullptr;

	if (!uFnFacebookRequest)
	{
		uFnFacebookRequest = UFunction::FindFunction("Function WinDrv.FacebookWindows.FacebookRequest");
	}

	UFacebookWindows_execFacebookRequest_Params FacebookRequest_Params;
	memset(&FacebookRequest_Params, 0, sizeof(FacebookRequest_Params));
	if (!uFnFacebookRequest)
	{
		return;
	}

	memcpy_s(&FacebookRequest_Params.GraphRequest, sizeof(FacebookRequest_Params.GraphRequest), &GraphRequest, sizeof(GraphRequest));

	this->ProcessEvent(uFnFacebookRequest, &FacebookRequest_Params, nullptr);
}

// Function WinDrv.FacebookWindows.Disconnect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UFacebookWindows::Disconnect()
{
	static UFunction* uFnDisconnect = nullptr;

	if (!uFnDisconnect)
	{
		uFnDisconnect = UFunction::FindFunction("Function WinDrv.FacebookWindows.Disconnect");
	}

	UFacebookWindows_execDisconnect_Params Disconnect_Params;
	memset(&Disconnect_Params, 0, sizeof(Disconnect_Params));
	if (!uFnDisconnect)
	{
		return;
	}


	auto native_Disconnect = uFnDisconnect->iNative;
	uFnDisconnect->iNative = 0;
	this->ProcessEvent(uFnDisconnect, &Disconnect_Params, nullptr);
	uFnDisconnect->iNative = native_Disconnect;
}

// Function WinDrv.FacebookWindows.IsAuthorized
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UFacebookWindows::IsAuthorized()
{
	static UFunction* uFnIsAuthorized = nullptr;

	if (!uFnIsAuthorized)
	{
		uFnIsAuthorized = UFunction::FindFunction("Function WinDrv.FacebookWindows.IsAuthorized");
	}

	UFacebookWindows_execIsAuthorized_Params IsAuthorized_Params;
	memset(&IsAuthorized_Params, 0, sizeof(IsAuthorized_Params));
	if (!uFnIsAuthorized)
	{
		return {};
	}


	auto native_IsAuthorized = uFnIsAuthorized->iNative;
	uFnIsAuthorized->iNative = 0;
	this->ProcessEvent(uFnIsAuthorized, &IsAuthorized_Params, nullptr);
	uFnIsAuthorized->iNative = native_IsAuthorized;

	return IsAuthorized_Params.ReturnValue;
}

// Function WinDrv.FacebookWindows.Authorize
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UFacebookWindows::Authorize()
{
	static UFunction* uFnAuthorize = nullptr;

	if (!uFnAuthorize)
	{
		uFnAuthorize = UFunction::FindFunction("Function WinDrv.FacebookWindows.Authorize");
	}

	UFacebookWindows_execAuthorize_Params Authorize_Params;
	memset(&Authorize_Params, 0, sizeof(Authorize_Params));
	if (!uFnAuthorize)
	{
		return {};
	}


	auto native_Authorize = uFnAuthorize->iNative;
	uFnAuthorize->iNative = 0;
	this->ProcessEvent(uFnAuthorize, &Authorize_Params, nullptr);
	uFnAuthorize->iNative = native_Authorize;

	return Authorize_Params.ReturnValue;
}

// Function WinDrv.FacebookWindows.Init
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UFacebookWindows::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function WinDrv.FacebookWindows.Init");
	}

	UFacebookWindows_execInit_Params Init_Params;
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

// Function WinDrv.HttpRequestWindows.ProcessRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UHttpRequestWindows::ProcessRequest()
{
	static UFunction* uFnProcessRequest = nullptr;

	if (!uFnProcessRequest)
	{
		uFnProcessRequest = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.ProcessRequest");
	}

	UHttpRequestWindows_execProcessRequest_Params ProcessRequest_Params;
	memset(&ProcessRequest_Params, 0, sizeof(ProcessRequest_Params));
	if (!uFnProcessRequest)
	{
		return {};
	}


	auto native_ProcessRequest = uFnProcessRequest->iNative;
	uFnProcessRequest->iNative = 0;
	this->ProcessEvent(uFnProcessRequest, &ProcessRequest_Params, nullptr);
	uFnProcessRequest->iNative = native_ProcessRequest;

	return ProcessRequest_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.SetHeader
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  HeaderValue                    (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetHeader(const class FString& HeaderName, const class FString& HeaderValue)
{
	static UFunction* uFnSetHeader = nullptr;

	if (!uFnSetHeader)
	{
		uFnSetHeader = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.SetHeader");
	}

	UHttpRequestWindows_execSetHeader_Params SetHeader_Params;
	memset(&SetHeader_Params, 0, sizeof(SetHeader_Params));
	if (!uFnSetHeader)
	{
		return {};
	}

	memcpy_s(&SetHeader_Params.HeaderName, sizeof(SetHeader_Params.HeaderName), &HeaderName, sizeof(HeaderName));
	memcpy_s(&SetHeader_Params.HeaderValue, sizeof(SetHeader_Params.HeaderValue), &HeaderValue, sizeof(HeaderValue));

	auto native_SetHeader = uFnSetHeader->iNative;
	uFnSetHeader->iNative = 0;
	this->ProcessEvent(uFnSetHeader, &SetHeader_Params, nullptr);
	uFnSetHeader->iNative = native_SetHeader;

	return SetHeader_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.SetContentAsString
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ContentString                  (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetContentAsString(const class FString& ContentString)
{
	static UFunction* uFnSetContentAsString = nullptr;

	if (!uFnSetContentAsString)
	{
		uFnSetContentAsString = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.SetContentAsString");
	}

	UHttpRequestWindows_execSetContentAsString_Params SetContentAsString_Params;
	memset(&SetContentAsString_Params, 0, sizeof(SetContentAsString_Params));
	if (!uFnSetContentAsString)
	{
		return {};
	}

	memcpy_s(&SetContentAsString_Params.ContentString, sizeof(SetContentAsString_Params.ContentString), &ContentString, sizeof(ContentString));

	auto native_SetContentAsString = uFnSetContentAsString->iNative;
	uFnSetContentAsString->iNative = 0;
	this->ProcessEvent(uFnSetContentAsString, &SetContentAsString_Params, nullptr);
	uFnSetContentAsString->iNative = native_SetContentAsString;

	return SetContentAsString_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.SetContent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class TArray<uint8_t>          ContentPayload                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetContent(class TArray<uint8_t>& outContentPayload)
{
	static UFunction* uFnSetContent = nullptr;

	if (!uFnSetContent)
	{
		uFnSetContent = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.SetContent");
	}

	UHttpRequestWindows_execSetContent_Params SetContent_Params;
	memset(&SetContent_Params, 0, sizeof(SetContent_Params));
	if (!uFnSetContent)
	{
		return {};
	}

	memcpy_s(&SetContent_Params.ContentPayload, sizeof(SetContent_Params.ContentPayload), &outContentPayload, sizeof(outContentPayload));

	auto native_SetContent = uFnSetContent->iNative;
	uFnSetContent->iNative = 0;
	this->ProcessEvent(uFnSetContent, &SetContent_Params, nullptr);
	uFnSetContent->iNative = native_SetContent;

	memcpy_s(&outContentPayload, sizeof(outContentPayload), &SetContent_Params.ContentPayload, sizeof(SetContent_Params.ContentPayload));

	return SetContent_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.SetURL
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetURL(const class FString& URL)
{
	static UFunction* uFnSetURL = nullptr;

	if (!uFnSetURL)
	{
		uFnSetURL = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.SetURL");
	}

	UHttpRequestWindows_execSetURL_Params SetURL_Params;
	memset(&SetURL_Params, 0, sizeof(SetURL_Params));
	if (!uFnSetURL)
	{
		return {};
	}

	memcpy_s(&SetURL_Params.URL, sizeof(SetURL_Params.URL), &URL, sizeof(URL));

	auto native_SetURL = uFnSetURL->iNative;
	uFnSetURL->iNative = 0;
	this->ProcessEvent(uFnSetURL, &SetURL_Params, nullptr);
	uFnSetURL->iNative = native_SetURL;

	return SetURL_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.SetVerb
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Verb                           (CPF_Parm | CPF_NeedCtorLink)

class UHttpRequestInterface* UHttpRequestWindows::SetVerb(const class FString& Verb)
{
	static UFunction* uFnSetVerb = nullptr;

	if (!uFnSetVerb)
	{
		uFnSetVerb = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.SetVerb");
	}

	UHttpRequestWindows_execSetVerb_Params SetVerb_Params;
	memset(&SetVerb_Params, 0, sizeof(SetVerb_Params));
	if (!uFnSetVerb)
	{
		return {};
	}

	memcpy_s(&SetVerb_Params.Verb, sizeof(SetVerb_Params.Verb), &Verb, sizeof(Verb));

	auto native_SetVerb = uFnSetVerb->iNative;
	uFnSetVerb->iNative = 0;
	this->ProcessEvent(uFnSetVerb, &SetVerb_Params, nullptr);
	uFnSetVerb->iNative = native_SetVerb;

	return SetVerb_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.GetVerb
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpRequestWindows::GetVerb()
{
	static UFunction* uFnGetVerb = nullptr;

	if (!uFnGetVerb)
	{
		uFnGetVerb = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetVerb");
	}

	UHttpRequestWindows_execGetVerb_Params GetVerb_Params;
	memset(&GetVerb_Params, 0, sizeof(GetVerb_Params));
	if (!uFnGetVerb)
	{
		return {};
	}


	auto native_GetVerb = uFnGetVerb->iNative;
	uFnGetVerb->iNative = 0;
	this->ProcessEvent(uFnGetVerb, &GetVerb_Params, nullptr);
	uFnGetVerb->iNative = native_GetVerb;

	return GetVerb_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.GetContent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<uint8_t>          Content                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UHttpRequestWindows::GetContent(class TArray<uint8_t>& outContent)
{
	static UFunction* uFnGetContent = nullptr;

	if (!uFnGetContent)
	{
		uFnGetContent = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetContent");
	}

	UHttpRequestWindows_execGetContent_Params GetContent_Params;
	memset(&GetContent_Params, 0, sizeof(GetContent_Params));
	if (!uFnGetContent)
	{
		return;
	}

	memcpy_s(&GetContent_Params.Content, sizeof(GetContent_Params.Content), &outContent, sizeof(outContent));

	auto native_GetContent = uFnGetContent->iNative;
	uFnGetContent->iNative = 0;
	this->ProcessEvent(uFnGetContent, &GetContent_Params, nullptr);
	uFnGetContent->iNative = native_GetContent;

	memcpy_s(&outContent, sizeof(outContent), &GetContent_Params.Content, sizeof(GetContent_Params.Content));
}

// Function WinDrv.HttpRequestWindows.GetURL
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpRequestWindows::GetURL()
{
	static UFunction* uFnGetURL = nullptr;

	if (!uFnGetURL)
	{
		uFnGetURL = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetURL");
	}

	UHttpRequestWindows_execGetURL_Params GetURL_Params;
	memset(&GetURL_Params, 0, sizeof(GetURL_Params));
	if (!uFnGetURL)
	{
		return {};
	}


	auto native_GetURL = uFnGetURL->iNative;
	uFnGetURL->iNative = 0;
	this->ProcessEvent(uFnGetURL, &GetURL_Params, nullptr);
	uFnGetURL->iNative = native_GetURL;

	return GetURL_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.GetContentLength
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UHttpRequestWindows::GetContentLength()
{
	static UFunction* uFnGetContentLength = nullptr;

	if (!uFnGetContentLength)
	{
		uFnGetContentLength = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetContentLength");
	}

	UHttpRequestWindows_execGetContentLength_Params GetContentLength_Params;
	memset(&GetContentLength_Params, 0, sizeof(GetContentLength_Params));
	if (!uFnGetContentLength)
	{
		return {};
	}


	auto native_GetContentLength = uFnGetContentLength->iNative;
	uFnGetContentLength->iNative = 0;
	this->ProcessEvent(uFnGetContentLength, &GetContentLength_Params, nullptr);
	uFnGetContentLength->iNative = native_GetContentLength;

	return GetContentLength_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.GetContentType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpRequestWindows::GetContentType()
{
	static UFunction* uFnGetContentType = nullptr;

	if (!uFnGetContentType)
	{
		uFnGetContentType = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetContentType");
	}

	UHttpRequestWindows_execGetContentType_Params GetContentType_Params;
	memset(&GetContentType_Params, 0, sizeof(GetContentType_Params));
	if (!uFnGetContentType)
	{
		return {};
	}


	auto native_GetContentType = uFnGetContentType->iNative;
	uFnGetContentType->iNative = 0;
	this->ProcessEvent(uFnGetContentType, &GetContentType_Params, nullptr);
	uFnGetContentType->iNative = native_GetContentType;

	return GetContentType_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.GetURLParameter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  ParameterName                  (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpRequestWindows::GetURLParameter(const class FString& ParameterName)
{
	static UFunction* uFnGetURLParameter = nullptr;

	if (!uFnGetURLParameter)
	{
		uFnGetURLParameter = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetURLParameter");
	}

	UHttpRequestWindows_execGetURLParameter_Params GetURLParameter_Params;
	memset(&GetURLParameter_Params, 0, sizeof(GetURLParameter_Params));
	if (!uFnGetURLParameter)
	{
		return {};
	}

	memcpy_s(&GetURLParameter_Params.ParameterName, sizeof(GetURLParameter_Params.ParameterName), &ParameterName, sizeof(ParameterName));

	auto native_GetURLParameter = uFnGetURLParameter->iNative;
	uFnGetURLParameter->iNative = 0;
	this->ProcessEvent(uFnGetURLParameter, &GetURLParameter_Params, nullptr);
	uFnGetURLParameter->iNative = native_GetURLParameter;

	return GetURLParameter_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.GetHeaders
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class TArray<class FString> UHttpRequestWindows::GetHeaders()
{
	static UFunction* uFnGetHeaders = nullptr;

	if (!uFnGetHeaders)
	{
		uFnGetHeaders = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetHeaders");
	}

	UHttpRequestWindows_execGetHeaders_Params GetHeaders_Params;
	memset(&GetHeaders_Params, 0, sizeof(GetHeaders_Params));
	if (!uFnGetHeaders)
	{
		return {};
	}


	auto native_GetHeaders = uFnGetHeaders->iNative;
	uFnGetHeaders->iNative = 0;
	this->ProcessEvent(uFnGetHeaders, &GetHeaders_Params, nullptr);
	uFnGetHeaders->iNative = native_GetHeaders;

	return GetHeaders_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindows.GetHeader
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpRequestWindows::GetHeader(const class FString& HeaderName)
{
	static UFunction* uFnGetHeader = nullptr;

	if (!uFnGetHeader)
	{
		uFnGetHeader = UFunction::FindFunction("Function WinDrv.HttpRequestWindows.GetHeader");
	}

	UHttpRequestWindows_execGetHeader_Params GetHeader_Params;
	memset(&GetHeader_Params, 0, sizeof(GetHeader_Params));
	if (!uFnGetHeader)
	{
		return {};
	}

	memcpy_s(&GetHeader_Params.HeaderName, sizeof(GetHeader_Params.HeaderName), &HeaderName, sizeof(HeaderName));

	auto native_GetHeader = uFnGetHeader->iNative;
	uFnGetHeader->iNative = 0;
	this->ProcessEvent(uFnGetHeader, &GetHeader_Params, nullptr);
	uFnGetHeader->iNative = native_GetHeader;

	return GetHeader_Params.ReturnValue;
}

// Function WinDrv.HttpResponseWindows.GetResponseCode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UHttpResponseWindows::GetResponseCode()
{
	static UFunction* uFnGetResponseCode = nullptr;

	if (!uFnGetResponseCode)
	{
		uFnGetResponseCode = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetResponseCode");
	}

	UHttpResponseWindows_execGetResponseCode_Params GetResponseCode_Params;
	memset(&GetResponseCode_Params, 0, sizeof(GetResponseCode_Params));
	if (!uFnGetResponseCode)
	{
		return {};
	}


	auto native_GetResponseCode = uFnGetResponseCode->iNative;
	uFnGetResponseCode->iNative = 0;
	this->ProcessEvent(uFnGetResponseCode, &GetResponseCode_Params, nullptr);
	uFnGetResponseCode->iNative = native_GetResponseCode;

	return GetResponseCode_Params.ReturnValue;
}

// Function WinDrv.HttpResponseWindows.GetContentAsString
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpResponseWindows::GetContentAsString()
{
	static UFunction* uFnGetContentAsString = nullptr;

	if (!uFnGetContentAsString)
	{
		uFnGetContentAsString = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetContentAsString");
	}

	UHttpResponseWindows_execGetContentAsString_Params GetContentAsString_Params;
	memset(&GetContentAsString_Params, 0, sizeof(GetContentAsString_Params));
	if (!uFnGetContentAsString)
	{
		return {};
	}


	auto native_GetContentAsString = uFnGetContentAsString->iNative;
	uFnGetContentAsString->iNative = 0;
	this->ProcessEvent(uFnGetContentAsString, &GetContentAsString_Params, nullptr);
	uFnGetContentAsString->iNative = native_GetContentAsString;

	return GetContentAsString_Params.ReturnValue;
}

// Function WinDrv.HttpResponseWindows.GetContent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<uint8_t>          Content                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UHttpResponseWindows::GetContent(class TArray<uint8_t>& outContent)
{
	static UFunction* uFnGetContent = nullptr;

	if (!uFnGetContent)
	{
		uFnGetContent = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetContent");
	}

	UHttpResponseWindows_execGetContent_Params GetContent_Params;
	memset(&GetContent_Params, 0, sizeof(GetContent_Params));
	if (!uFnGetContent)
	{
		return;
	}

	memcpy_s(&GetContent_Params.Content, sizeof(GetContent_Params.Content), &outContent, sizeof(outContent));

	auto native_GetContent = uFnGetContent->iNative;
	uFnGetContent->iNative = 0;
	this->ProcessEvent(uFnGetContent, &GetContent_Params, nullptr);
	uFnGetContent->iNative = native_GetContent;

	memcpy_s(&outContent, sizeof(outContent), &GetContent_Params.Content, sizeof(GetContent_Params.Content));
}

// Function WinDrv.HttpResponseWindows.GetURL
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpResponseWindows::GetURL()
{
	static UFunction* uFnGetURL = nullptr;

	if (!uFnGetURL)
	{
		uFnGetURL = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetURL");
	}

	UHttpResponseWindows_execGetURL_Params GetURL_Params;
	memset(&GetURL_Params, 0, sizeof(GetURL_Params));
	if (!uFnGetURL)
	{
		return {};
	}


	auto native_GetURL = uFnGetURL->iNative;
	uFnGetURL->iNative = 0;
	this->ProcessEvent(uFnGetURL, &GetURL_Params, nullptr);
	uFnGetURL->iNative = native_GetURL;

	return GetURL_Params.ReturnValue;
}

// Function WinDrv.HttpResponseWindows.GetContentLength
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UHttpResponseWindows::GetContentLength()
{
	static UFunction* uFnGetContentLength = nullptr;

	if (!uFnGetContentLength)
	{
		uFnGetContentLength = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetContentLength");
	}

	UHttpResponseWindows_execGetContentLength_Params GetContentLength_Params;
	memset(&GetContentLength_Params, 0, sizeof(GetContentLength_Params));
	if (!uFnGetContentLength)
	{
		return {};
	}


	auto native_GetContentLength = uFnGetContentLength->iNative;
	uFnGetContentLength->iNative = 0;
	this->ProcessEvent(uFnGetContentLength, &GetContentLength_Params, nullptr);
	uFnGetContentLength->iNative = native_GetContentLength;

	return GetContentLength_Params.ReturnValue;
}

// Function WinDrv.HttpResponseWindows.GetContentType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UHttpResponseWindows::GetContentType()
{
	static UFunction* uFnGetContentType = nullptr;

	if (!uFnGetContentType)
	{
		uFnGetContentType = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetContentType");
	}

	UHttpResponseWindows_execGetContentType_Params GetContentType_Params;
	memset(&GetContentType_Params, 0, sizeof(GetContentType_Params));
	if (!uFnGetContentType)
	{
		return {};
	}


	auto native_GetContentType = uFnGetContentType->iNative;
	uFnGetContentType->iNative = 0;
	this->ProcessEvent(uFnGetContentType, &GetContentType_Params, nullptr);
	uFnGetContentType->iNative = native_GetContentType;

	return GetContentType_Params.ReturnValue;
}

// Function WinDrv.HttpResponseWindows.GetURLParameter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  ParameterName                  (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpResponseWindows::GetURLParameter(const class FString& ParameterName)
{
	static UFunction* uFnGetURLParameter = nullptr;

	if (!uFnGetURLParameter)
	{
		uFnGetURLParameter = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetURLParameter");
	}

	UHttpResponseWindows_execGetURLParameter_Params GetURLParameter_Params;
	memset(&GetURLParameter_Params, 0, sizeof(GetURLParameter_Params));
	if (!uFnGetURLParameter)
	{
		return {};
	}

	memcpy_s(&GetURLParameter_Params.ParameterName, sizeof(GetURLParameter_Params.ParameterName), &ParameterName, sizeof(ParameterName));

	auto native_GetURLParameter = uFnGetURLParameter->iNative;
	uFnGetURLParameter->iNative = 0;
	this->ProcessEvent(uFnGetURLParameter, &GetURLParameter_Params, nullptr);
	uFnGetURLParameter->iNative = native_GetURLParameter;

	return GetURLParameter_Params.ReturnValue;
}

// Function WinDrv.HttpResponseWindows.GetHeaders
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<class FString>    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class TArray<class FString> UHttpResponseWindows::GetHeaders()
{
	static UFunction* uFnGetHeaders = nullptr;

	if (!uFnGetHeaders)
	{
		uFnGetHeaders = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetHeaders");
	}

	UHttpResponseWindows_execGetHeaders_Params GetHeaders_Params;
	memset(&GetHeaders_Params, 0, sizeof(GetHeaders_Params));
	if (!uFnGetHeaders)
	{
		return {};
	}


	auto native_GetHeaders = uFnGetHeaders->iNative;
	uFnGetHeaders->iNative = 0;
	this->ProcessEvent(uFnGetHeaders, &GetHeaders_Params, nullptr);
	uFnGetHeaders->iNative = native_GetHeaders;

	return GetHeaders_Params.ReturnValue;
}

// Function WinDrv.HttpResponseWindows.GetHeader
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  HeaderName                     (CPF_Parm | CPF_NeedCtorLink)

class FString UHttpResponseWindows::GetHeader(const class FString& HeaderName)
{
	static UFunction* uFnGetHeader = nullptr;

	if (!uFnGetHeader)
	{
		uFnGetHeader = UFunction::FindFunction("Function WinDrv.HttpResponseWindows.GetHeader");
	}

	UHttpResponseWindows_execGetHeader_Params GetHeader_Params;
	memset(&GetHeader_Params, 0, sizeof(GetHeader_Params));
	if (!uFnGetHeader)
	{
		return {};
	}

	memcpy_s(&GetHeader_Params.HeaderName, sizeof(GetHeader_Params.HeaderName), &HeaderName, sizeof(HeaderName));

	auto native_GetHeader = uFnGetHeader->iNative;
	uFnGetHeader->iNative = 0;
	this->ProcessEvent(uFnGetHeader, &GetHeader_Params, nullptr);
	uFnGetHeader->iNative = native_GetHeader;

	return GetHeader_Params.ReturnValue;
}

// Function WinDrv.HttpRequestWindowsMcp.ProcessRequest
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UHttpRequestWindowsMcp::ProcessRequest()
{
	static UFunction* uFnProcessRequest = nullptr;

	if (!uFnProcessRequest)
	{
		uFnProcessRequest = UFunction::FindFunction("Function WinDrv.HttpRequestWindowsMcp.ProcessRequest");
	}

	UHttpRequestWindowsMcp_execProcessRequest_Params ProcessRequest_Params;
	memset(&ProcessRequest_Params, 0, sizeof(ProcessRequest_Params));
	if (!uFnProcessRequest)
	{
		return {};
	}


	this->ProcessEvent(uFnProcessRequest, &ProcessRequest_Params, nullptr);

	return ProcessRequest_Params.ReturnValue;
}

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
