/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: AkAudio_classes.cpp
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

// Function AkAudio.AkAudioSpline.GetAudioSpatial
// [0x00424400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 caller                         (CPF_OptionalParm | CPF_Parm)
// struct FVector                 sndPosition                    (CPF_Parm | CPF_OutParm)
// struct FRotator                sndOrientation                 (CPF_Parm | CPF_OutParm)

void AAkAudioSpline::GetAudioSpatial(class UObject* optionalCaller, struct FVector& outSndPosition, struct FRotator& outSndOrientation)
{
	static UFunction* uFnGetAudioSpatial = nullptr;

	if (!uFnGetAudioSpatial)
	{
		uFnGetAudioSpatial = UFunction::FindFunction("Function AkAudio.AkAudioSpline.GetAudioSpatial");
	}

	AAkAudioSpline_execGetAudioSpatial_Params GetAudioSpatial_Params;
	memset(&GetAudioSpatial_Params, 0, sizeof(GetAudioSpatial_Params));
	if (!uFnGetAudioSpatial)
	{
		return;
	}

	GetAudioSpatial_Params.caller = optionalCaller;
	memcpy_s(&GetAudioSpatial_Params.sndPosition, sizeof(GetAudioSpatial_Params.sndPosition), &outSndPosition, sizeof(outSndPosition));
	memcpy_s(&GetAudioSpatial_Params.sndOrientation, sizeof(GetAudioSpatial_Params.sndOrientation), &outSndOrientation, sizeof(outSndOrientation));

	auto native_GetAudioSpatial = uFnGetAudioSpatial->iNative;
	uFnGetAudioSpatial->iNative = 0;
	this->ProcessEvent(uFnGetAudioSpatial, &GetAudioSpatial_Params, nullptr);
	uFnGetAudioSpatial->iNative = native_GetAudioSpatial;

	memcpy_s(&outSndPosition, sizeof(outSndPosition), &GetAudioSpatial_Params.sndPosition, sizeof(GetAudioSpatial_Params.sndPosition));
	memcpy_s(&outSndOrientation, sizeof(outSndOrientation), &GetAudioSpatial_Params.sndOrientation, sizeof(GetAudioSpatial_Params.sndOrientation));
}

// Function AkAudio.AkAudioVolume.HandleUnlink
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Target                         (CPF_Parm)

bool AAkAudioVolume::HandleUnlink(class AActor* Target)
{
	static UFunction* uFnHandleUnlink = nullptr;

	if (!uFnHandleUnlink)
	{
		uFnHandleUnlink = UFunction::FindFunction("Function AkAudio.AkAudioVolume.HandleUnlink");
	}

	AAkAudioVolume_execHandleUnlink_Params HandleUnlink_Params;
	memset(&HandleUnlink_Params, 0, sizeof(HandleUnlink_Params));
	if (!uFnHandleUnlink)
	{
		return {};
	}

	HandleUnlink_Params.Target = Target;

	auto native_HandleUnlink = uFnHandleUnlink->iNative;
	uFnHandleUnlink->iNative = 0;
	this->ProcessEvent(uFnHandleUnlink, &HandleUnlink_Params, nullptr);
	uFnHandleUnlink->iNative = native_HandleUnlink;

	return HandleUnlink_Params.ReturnValue;
}

// Function AkAudio.AkAudioVolume.HandleLink
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Target                         (CPF_Parm)

bool AAkAudioVolume::HandleLink(class AActor* Target)
{
	static UFunction* uFnHandleLink = nullptr;

	if (!uFnHandleLink)
	{
		uFnHandleLink = UFunction::FindFunction("Function AkAudio.AkAudioVolume.HandleLink");
	}

	AAkAudioVolume_execHandleLink_Params HandleLink_Params;
	memset(&HandleLink_Params, 0, sizeof(HandleLink_Params));
	if (!uFnHandleLink)
	{
		return {};
	}

	HandleLink_Params.Target = Target;

	auto native_HandleLink = uFnHandleLink->iNative;
	uFnHandleLink->iNative = 0;
	this->ProcessEvent(uFnHandleLink, &HandleLink_Params, nullptr);
	uFnHandleLink->iNative = native_HandleLink;

	return HandleLink_Params.ReturnValue;
}

// Function AkAudio.AkAudioVolume.RefreshTouching
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkAudioVolume::RefreshTouching()
{
	static UFunction* uFnRefreshTouching = nullptr;

	if (!uFnRefreshTouching)
	{
		uFnRefreshTouching = UFunction::FindFunction("Function AkAudio.AkAudioVolume.RefreshTouching");
	}

	AAkAudioVolume_execRefreshTouching_Params RefreshTouching_Params;
	memset(&RefreshTouching_Params, 0, sizeof(RefreshTouching_Params));
	if (!uFnRefreshTouching)
	{
		return;
	}


	auto native_RefreshTouching = uFnRefreshTouching->iNative;
	uFnRefreshTouching->iNative = 0;
	this->ProcessEvent(uFnRefreshTouching, &RefreshTouching_Params, nullptr);
	uFnRefreshTouching->iNative = native_RefreshTouching;
}

// Function AkAudio.AkAudioVolume.HandleTouchInOut
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)
// uint32_t                       otherIsTouching                (CPF_Parm)

void AAkAudioVolume::HandleTouchInOut(class AActor* Other, bool otherIsTouching)
{
	static UFunction* uFnHandleTouchInOut = nullptr;

	if (!uFnHandleTouchInOut)
	{
		uFnHandleTouchInOut = UFunction::FindFunction("Function AkAudio.AkAudioVolume.HandleTouchInOut");
	}

	AAkAudioVolume_execHandleTouchInOut_Params HandleTouchInOut_Params;
	memset(&HandleTouchInOut_Params, 0, sizeof(HandleTouchInOut_Params));
	if (!uFnHandleTouchInOut)
	{
		return;
	}

	HandleTouchInOut_Params.Other = Other;
	HandleTouchInOut_Params.otherIsTouching = otherIsTouching;

	auto native_HandleTouchInOut = uFnHandleTouchInOut->iNative;
	uFnHandleTouchInOut->iNative = 0;
	this->ProcessEvent(uFnHandleTouchInOut, &HandleTouchInOut_Params, nullptr);
	uFnHandleTouchInOut->iNative = native_HandleTouchInOut;
}

// Function AkAudio.AkAudioVolume.GetAudioSpatial
// [0x00424400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 caller                         (CPF_OptionalParm | CPF_Parm)
// struct FVector                 sndPosition                    (CPF_Parm | CPF_OutParm)
// struct FRotator                sndOrientation                 (CPF_Parm | CPF_OutParm)

void AAkAudioVolume::GetAudioSpatial(class UObject* optionalCaller, struct FVector& outSndPosition, struct FRotator& outSndOrientation)
{
	static UFunction* uFnGetAudioSpatial = nullptr;

	if (!uFnGetAudioSpatial)
	{
		uFnGetAudioSpatial = UFunction::FindFunction("Function AkAudio.AkAudioVolume.GetAudioSpatial");
	}

	AAkAudioVolume_execGetAudioSpatial_Params GetAudioSpatial_Params;
	memset(&GetAudioSpatial_Params, 0, sizeof(GetAudioSpatial_Params));
	if (!uFnGetAudioSpatial)
	{
		return;
	}

	GetAudioSpatial_Params.caller = optionalCaller;
	memcpy_s(&GetAudioSpatial_Params.sndPosition, sizeof(GetAudioSpatial_Params.sndPosition), &outSndPosition, sizeof(outSndPosition));
	memcpy_s(&GetAudioSpatial_Params.sndOrientation, sizeof(GetAudioSpatial_Params.sndOrientation), &outSndOrientation, sizeof(outSndOrientation));

	auto native_GetAudioSpatial = uFnGetAudioSpatial->iNative;
	uFnGetAudioSpatial->iNative = 0;
	this->ProcessEvent(uFnGetAudioSpatial, &GetAudioSpatial_Params, nullptr);
	uFnGetAudioSpatial->iNative = native_GetAudioSpatial;

	memcpy_s(&outSndPosition, sizeof(outSndPosition), &GetAudioSpatial_Params.sndPosition, sizeof(GetAudioSpatial_Params.sndPosition));
	memcpy_s(&outSndOrientation, sizeof(outSndOrientation), &GetAudioSpatial_Params.sndOrientation, sizeof(GetAudioSpatial_Params.sndOrientation));
}

// Function AkAudio.AkAudioVolume.UnlinkToActor
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  LinkTarget                     (CPF_Parm)

bool AAkAudioVolume::UnlinkToActor(class AActor* LinkTarget)
{
	static UFunction* uFnUnlinkToActor = nullptr;

	if (!uFnUnlinkToActor)
	{
		uFnUnlinkToActor = UFunction::FindFunction("Function AkAudio.AkAudioVolume.UnlinkToActor");
	}

	AAkAudioVolume_execUnlinkToActor_Params UnlinkToActor_Params;
	memset(&UnlinkToActor_Params, 0, sizeof(UnlinkToActor_Params));
	if (!uFnUnlinkToActor)
	{
		return {};
	}

	UnlinkToActor_Params.LinkTarget = LinkTarget;

	auto native_UnlinkToActor = uFnUnlinkToActor->iNative;
	uFnUnlinkToActor->iNative = 0;
	this->ProcessEvent(uFnUnlinkToActor, &UnlinkToActor_Params, nullptr);
	uFnUnlinkToActor->iNative = native_UnlinkToActor;

	return UnlinkToActor_Params.ReturnValue;
}

// Function AkAudio.AkAudioVolume.LinkToActor
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  LinkTarget                     (CPF_Parm)

bool AAkAudioVolume::eventLinkToActor(class AActor* LinkTarget)
{
	static UFunction* uFnLinkToActor = nullptr;

	if (!uFnLinkToActor)
	{
		uFnLinkToActor = UFunction::FindFunction("Function AkAudio.AkAudioVolume.LinkToActor");
	}

	AAkAudioVolume_eventLinkToActor_Params LinkToActor_Params;
	memset(&LinkToActor_Params, 0, sizeof(LinkToActor_Params));
	if (!uFnLinkToActor)
	{
		return {};
	}

	LinkToActor_Params.LinkTarget = LinkTarget;

	this->ProcessEvent(uFnLinkToActor, &LinkToActor_Params, nullptr);

	return LinkToActor_Params.ReturnValue;
}

// Function AkAudio.AkAudioVolume.OverrideDefaultAkAudibleSetup
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class URAkAudible*             akAud                          (CPF_Parm)

void AAkAudioVolume::eventOverrideDefaultAkAudibleSetup(class URAkAudible* akAud)
{
	static UFunction* uFnOverrideDefaultAkAudibleSetup = nullptr;

	if (!uFnOverrideDefaultAkAudibleSetup)
	{
		uFnOverrideDefaultAkAudibleSetup = UFunction::FindFunction("Function AkAudio.AkAudioVolume.OverrideDefaultAkAudibleSetup");
	}

	AAkAudioVolume_eventOverrideDefaultAkAudibleSetup_Params OverrideDefaultAkAudibleSetup_Params;
	memset(&OverrideDefaultAkAudibleSetup_Params, 0, sizeof(OverrideDefaultAkAudibleSetup_Params));
	if (!uFnOverrideDefaultAkAudibleSetup)
	{
		return;
	}

	OverrideDefaultAkAudibleSetup_Params.akAud = akAud;

	this->ProcessEvent(uFnOverrideDefaultAkAudibleSetup, &OverrideDefaultAkAudibleSetup_Params, nullptr);
}

// Function AkAudio.AkAudioVolume.UnTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void AAkAudioVolume::eventUnTouch(class AActor* Other)
{
	static UFunction* uFnUnTouch = nullptr;

	if (!uFnUnTouch)
	{
		uFnUnTouch = UFunction::FindFunction("Function AkAudio.AkAudioVolume.UnTouch");
	}

	AAkAudioVolume_eventUnTouch_Params UnTouch_Params;
	memset(&UnTouch_Params, 0, sizeof(UnTouch_Params));
	if (!uFnUnTouch)
	{
		return;
	}

	UnTouch_Params.Other = Other;

	this->ProcessEvent(uFnUnTouch, &UnTouch_Params, nullptr);
}

// Function AkAudio.AkAudioVolume.Touch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AAkAudioVolume::eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* uFnTouch = nullptr;

	if (!uFnTouch)
	{
		uFnTouch = UFunction::FindFunction("Function AkAudio.AkAudioVolume.Touch");
	}

	AAkAudioVolume_eventTouch_Params Touch_Params;
	memset(&Touch_Params, 0, sizeof(Touch_Params));
	if (!uFnTouch)
	{
		return;
	}

	Touch_Params.Other = Other;
	Touch_Params.OtherComp = OtherComp;
	memcpy_s(&Touch_Params.HitLocation, sizeof(Touch_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&Touch_Params.HitNormal, sizeof(Touch_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnTouch, &Touch_Params, nullptr);
}

// Function AkAudio.AkDialogueTape.Stop
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAkDialogueTape*         dlgTape                        (CPF_Parm)

void UAkDialogueTape::Stop(class UAkDialogueTape* dlgTape)
{
	static UFunction* uFnStop = nullptr;

	if (!uFnStop)
	{
		uFnStop = UFunction::FindFunction("Function AkAudio.AkDialogueTape.Stop");
	}

	UAkDialogueTape_execStop_Params Stop_Params;
	memset(&Stop_Params, 0, sizeof(Stop_Params));
	if (!uFnStop)
	{
		return;
	}

	Stop_Params.dlgTape = dlgTape;

	auto native_Stop = uFnStop->iNative;
	uFnStop->iNative = 0;
	UAkDialogueTape::StaticClass()->ProcessEvent(uFnStop, &Stop_Params, nullptr);
	uFnStop->iNative = native_Stop;
}

// Function AkAudio.AkDialogueTape.Start
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAkDialogueTape*         dlgTape                        (CPF_Parm)
// struct FAkSpeechOptions        dlgCallbacks                   (CPF_Parm | CPF_NeedCtorLink)

int32_t UAkDialogueTape::Start(class UAkDialogueTape* dlgTape, const struct FAkSpeechOptions& dlgCallbacks)
{
	static UFunction* uFnStart = nullptr;

	if (!uFnStart)
	{
		uFnStart = UFunction::FindFunction("Function AkAudio.AkDialogueTape.Start");
	}

	UAkDialogueTape_execStart_Params Start_Params;
	memset(&Start_Params, 0, sizeof(Start_Params));
	if (!uFnStart)
	{
		return {};
	}

	Start_Params.dlgTape = dlgTape;
	memcpy_s(&Start_Params.dlgCallbacks, sizeof(Start_Params.dlgCallbacks), &dlgCallbacks, sizeof(dlgCallbacks));

	auto native_Start = uFnStart->iNative;
	uFnStart->iNative = 0;
	UAkDialogueTape::StaticClass()->ProcessEvent(uFnStart, &Start_Params, nullptr);
	uFnStart->iNative = native_Start;

	return Start_Params.ReturnValue;
}

// Function AkAudio.AkEmitter.ApplyEmitterSpatial
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkEmitter::ApplyEmitterSpatial()
{
	static UFunction* uFnApplyEmitterSpatial = nullptr;

	if (!uFnApplyEmitterSpatial)
	{
		uFnApplyEmitterSpatial = UFunction::FindFunction("Function AkAudio.AkEmitter.ApplyEmitterSpatial");
	}

	AAkEmitter_execApplyEmitterSpatial_Params ApplyEmitterSpatial_Params;
	memset(&ApplyEmitterSpatial_Params, 0, sizeof(ApplyEmitterSpatial_Params));
	if (!uFnApplyEmitterSpatial)
	{
		return;
	}


	auto native_ApplyEmitterSpatial = uFnApplyEmitterSpatial->iNative;
	uFnApplyEmitterSpatial->iNative = 0;
	this->ProcessEvent(uFnApplyEmitterSpatial, &ApplyEmitterSpatial_Params, nullptr);
	uFnApplyEmitterSpatial->iNative = native_ApplyEmitterSpatial;
}

// Function AkAudio.AkEmitter.DisableEmitter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkEmitter::DisableEmitter()
{
	static UFunction* uFnDisableEmitter = nullptr;

	if (!uFnDisableEmitter)
	{
		uFnDisableEmitter = UFunction::FindFunction("Function AkAudio.AkEmitter.DisableEmitter");
	}

	AAkEmitter_execDisableEmitter_Params DisableEmitter_Params;
	memset(&DisableEmitter_Params, 0, sizeof(DisableEmitter_Params));
	if (!uFnDisableEmitter)
	{
		return;
	}


	auto native_DisableEmitter = uFnDisableEmitter->iNative;
	uFnDisableEmitter->iNative = 0;
	this->ProcessEvent(uFnDisableEmitter, &DisableEmitter_Params, nullptr);
	uFnDisableEmitter->iNative = native_DisableEmitter;
}

// Function AkAudio.AkEmitter.EnableEmitter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkEmitter::EnableEmitter()
{
	static UFunction* uFnEnableEmitter = nullptr;

	if (!uFnEnableEmitter)
	{
		uFnEnableEmitter = UFunction::FindFunction("Function AkAudio.AkEmitter.EnableEmitter");
	}

	AAkEmitter_execEnableEmitter_Params EnableEmitter_Params;
	memset(&EnableEmitter_Params, 0, sizeof(EnableEmitter_Params));
	if (!uFnEnableEmitter)
	{
		return;
	}


	auto native_EnableEmitter = uFnEnableEmitter->iNative;
	uFnEnableEmitter->iNative = 0;
	this->ProcessEvent(uFnEnableEmitter, &EnableEmitter_Params, nullptr);
	uFnEnableEmitter->iNative = native_EnableEmitter;
}

// Function AkAudio.AkEmitter.OnToggleHidden
// [0x40020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_Lambda | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_ToggleHidden*    Action                         (CPF_Parm)

void AAkEmitter::OnToggleHidden(class USeqAct_ToggleHidden* Action)
{
	static UFunction* uFnOnToggleHidden = nullptr;

	if (!uFnOnToggleHidden)
	{
		uFnOnToggleHidden = UFunction::FindFunction("Function AkAudio.AkEmitter.OnToggleHidden");
	}

	AAkEmitter_execOnToggleHidden_Params OnToggleHidden_Params;
	memset(&OnToggleHidden_Params, 0, sizeof(OnToggleHidden_Params));
	if (!uFnOnToggleHidden)
	{
		return;
	}

	OnToggleHidden_Params.Action = Action;

	this->ProcessEvent(uFnOnToggleHidden, &OnToggleHidden_Params, nullptr);
}

// Function AkAudio.AkEmitter.OnToggle
// [0x00020103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          ToggleAction                   (CPF_Parm)

void AAkEmitter::OnToggle(class USeqAct_Toggle* ToggleAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function AkAudio.AkEmitter.OnToggle");
	}

	AAkEmitter_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	if (!uFnOnToggle)
	{
		return;
	}

	OnToggle_Params.ToggleAction = ToggleAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
}

// Function AkAudio.AkLightEmitter.HandleUnlink
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Target                         (CPF_Parm)

bool AAkLightEmitter::HandleUnlink(class AActor* Target)
{
	static UFunction* uFnHandleUnlink = nullptr;

	if (!uFnHandleUnlink)
	{
		uFnHandleUnlink = UFunction::FindFunction("Function AkAudio.AkLightEmitter.HandleUnlink");
	}

	AAkLightEmitter_execHandleUnlink_Params HandleUnlink_Params;
	memset(&HandleUnlink_Params, 0, sizeof(HandleUnlink_Params));
	if (!uFnHandleUnlink)
	{
		return {};
	}

	HandleUnlink_Params.Target = Target;

	auto native_HandleUnlink = uFnHandleUnlink->iNative;
	uFnHandleUnlink->iNative = 0;
	this->ProcessEvent(uFnHandleUnlink, &HandleUnlink_Params, nullptr);
	uFnHandleUnlink->iNative = native_HandleUnlink;

	return HandleUnlink_Params.ReturnValue;
}

// Function AkAudio.AkLightEmitter.HandleLink
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Target                         (CPF_Parm)

bool AAkLightEmitter::HandleLink(class AActor* Target)
{
	static UFunction* uFnHandleLink = nullptr;

	if (!uFnHandleLink)
	{
		uFnHandleLink = UFunction::FindFunction("Function AkAudio.AkLightEmitter.HandleLink");
	}

	AAkLightEmitter_execHandleLink_Params HandleLink_Params;
	memset(&HandleLink_Params, 0, sizeof(HandleLink_Params));
	if (!uFnHandleLink)
	{
		return {};
	}

	HandleLink_Params.Target = Target;

	auto native_HandleLink = uFnHandleLink->iNative;
	uFnHandleLink->iNative = 0;
	this->ProcessEvent(uFnHandleLink, &HandleLink_Params, nullptr);
	uFnHandleLink->iNative = native_HandleLink;

	return HandleLink_Params.ReturnValue;
}

// Function AkAudio.AkLightEmitter.UnlinkToActor
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  LinkTarget                     (CPF_Parm)

bool AAkLightEmitter::eventUnlinkToActor(class AActor* LinkTarget)
{
	static UFunction* uFnUnlinkToActor = nullptr;

	if (!uFnUnlinkToActor)
	{
		uFnUnlinkToActor = UFunction::FindFunction("Function AkAudio.AkLightEmitter.UnlinkToActor");
	}

	AAkLightEmitter_eventUnlinkToActor_Params UnlinkToActor_Params;
	memset(&UnlinkToActor_Params, 0, sizeof(UnlinkToActor_Params));
	if (!uFnUnlinkToActor)
	{
		return {};
	}

	UnlinkToActor_Params.LinkTarget = LinkTarget;

	this->ProcessEvent(uFnUnlinkToActor, &UnlinkToActor_Params, nullptr);

	return UnlinkToActor_Params.ReturnValue;
}

// Function AkAudio.AkLightEmitter.LinkToActor
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  LinkTarget                     (CPF_Parm)

bool AAkLightEmitter::eventLinkToActor(class AActor* LinkTarget)
{
	static UFunction* uFnLinkToActor = nullptr;

	if (!uFnLinkToActor)
	{
		uFnLinkToActor = UFunction::FindFunction("Function AkAudio.AkLightEmitter.LinkToActor");
	}

	AAkLightEmitter_eventLinkToActor_Params LinkToActor_Params;
	memset(&LinkToActor_Params, 0, sizeof(LinkToActor_Params));
	if (!uFnLinkToActor)
	{
		return {};
	}

	LinkToActor_Params.LinkTarget = LinkTarget;

	this->ProcessEvent(uFnLinkToActor, &LinkToActor_Params, nullptr);

	return LinkToActor_Params.ReturnValue;
}

// Function AkAudio.AkMultipointEmitter.HandleUnlinkAll
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkMultipointEmitter::HandleUnlinkAll()
{
	static UFunction* uFnHandleUnlinkAll = nullptr;

	if (!uFnHandleUnlinkAll)
	{
		uFnHandleUnlinkAll = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.HandleUnlinkAll");
	}

	AAkMultipointEmitter_execHandleUnlinkAll_Params HandleUnlinkAll_Params;
	memset(&HandleUnlinkAll_Params, 0, sizeof(HandleUnlinkAll_Params));
	if (!uFnHandleUnlinkAll)
	{
		return;
	}


	auto native_HandleUnlinkAll = uFnHandleUnlinkAll->iNative;
	uFnHandleUnlinkAll->iNative = 0;
	this->ProcessEvent(uFnHandleUnlinkAll, &HandleUnlinkAll_Params, nullptr);
	uFnHandleUnlinkAll->iNative = native_HandleUnlinkAll;
}

// Function AkAudio.AkMultipointEmitter.HandleUnlink
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Target                         (CPF_Parm)

bool AAkMultipointEmitter::HandleUnlink(class AActor* Target)
{
	static UFunction* uFnHandleUnlink = nullptr;

	if (!uFnHandleUnlink)
	{
		uFnHandleUnlink = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.HandleUnlink");
	}

	AAkMultipointEmitter_execHandleUnlink_Params HandleUnlink_Params;
	memset(&HandleUnlink_Params, 0, sizeof(HandleUnlink_Params));
	if (!uFnHandleUnlink)
	{
		return {};
	}

	HandleUnlink_Params.Target = Target;

	auto native_HandleUnlink = uFnHandleUnlink->iNative;
	uFnHandleUnlink->iNative = 0;
	this->ProcessEvent(uFnHandleUnlink, &HandleUnlink_Params, nullptr);
	uFnHandleUnlink->iNative = native_HandleUnlink;

	return HandleUnlink_Params.ReturnValue;
}

// Function AkAudio.AkMultipointEmitter.HandleLink
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Target                         (CPF_Parm)

bool AAkMultipointEmitter::HandleLink(class AActor* Target)
{
	static UFunction* uFnHandleLink = nullptr;

	if (!uFnHandleLink)
	{
		uFnHandleLink = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.HandleLink");
	}

	AAkMultipointEmitter_execHandleLink_Params HandleLink_Params;
	memset(&HandleLink_Params, 0, sizeof(HandleLink_Params));
	if (!uFnHandleLink)
	{
		return {};
	}

	HandleLink_Params.Target = Target;

	auto native_HandleLink = uFnHandleLink->iNative;
	uFnHandleLink->iNative = 0;
	this->ProcessEvent(uFnHandleLink, &HandleLink_Params, nullptr);
	uFnHandleLink->iNative = native_HandleLink;

	return HandleLink_Params.ReturnValue;
}

// Function AkAudio.AkMultipointEmitter.ApplyEmitterSpatial
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkMultipointEmitter::ApplyEmitterSpatial()
{
	static UFunction* uFnApplyEmitterSpatial = nullptr;

	if (!uFnApplyEmitterSpatial)
	{
		uFnApplyEmitterSpatial = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.ApplyEmitterSpatial");
	}

	AAkMultipointEmitter_execApplyEmitterSpatial_Params ApplyEmitterSpatial_Params;
	memset(&ApplyEmitterSpatial_Params, 0, sizeof(ApplyEmitterSpatial_Params));
	if (!uFnApplyEmitterSpatial)
	{
		return;
	}


	auto native_ApplyEmitterSpatial = uFnApplyEmitterSpatial->iNative;
	uFnApplyEmitterSpatial->iNative = 0;
	this->ProcessEvent(uFnApplyEmitterSpatial, &ApplyEmitterSpatial_Params, nullptr);
	uFnApplyEmitterSpatial->iNative = native_ApplyEmitterSpatial;
}

// Function AkAudio.AkMultipointEmitter.DisableEmitter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkMultipointEmitter::DisableEmitter()
{
	static UFunction* uFnDisableEmitter = nullptr;

	if (!uFnDisableEmitter)
	{
		uFnDisableEmitter = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.DisableEmitter");
	}

	AAkMultipointEmitter_execDisableEmitter_Params DisableEmitter_Params;
	memset(&DisableEmitter_Params, 0, sizeof(DisableEmitter_Params));
	if (!uFnDisableEmitter)
	{
		return;
	}


	auto native_DisableEmitter = uFnDisableEmitter->iNative;
	uFnDisableEmitter->iNative = 0;
	this->ProcessEvent(uFnDisableEmitter, &DisableEmitter_Params, nullptr);
	uFnDisableEmitter->iNative = native_DisableEmitter;
}

// Function AkAudio.AkMultipointEmitter.EnableEmitter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkMultipointEmitter::EnableEmitter()
{
	static UFunction* uFnEnableEmitter = nullptr;

	if (!uFnEnableEmitter)
	{
		uFnEnableEmitter = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.EnableEmitter");
	}

	AAkMultipointEmitter_execEnableEmitter_Params EnableEmitter_Params;
	memset(&EnableEmitter_Params, 0, sizeof(EnableEmitter_Params));
	if (!uFnEnableEmitter)
	{
		return;
	}


	auto native_EnableEmitter = uFnEnableEmitter->iNative;
	uFnEnableEmitter->iNative = 0;
	this->ProcessEvent(uFnEnableEmitter, &EnableEmitter_Params, nullptr);
	uFnEnableEmitter->iNative = native_EnableEmitter;
}

// Function AkAudio.AkMultipointEmitter.GetAudioSpatial
// [0x00424400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 caller                         (CPF_OptionalParm | CPF_Parm)
// struct FVector                 sndPosition                    (CPF_Parm | CPF_OutParm)
// struct FRotator                sndOrientation                 (CPF_Parm | CPF_OutParm)

void AAkMultipointEmitter::GetAudioSpatial(class UObject* optionalCaller, struct FVector& outSndPosition, struct FRotator& outSndOrientation)
{
	static UFunction* uFnGetAudioSpatial = nullptr;

	if (!uFnGetAudioSpatial)
	{
		uFnGetAudioSpatial = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.GetAudioSpatial");
	}

	AAkMultipointEmitter_execGetAudioSpatial_Params GetAudioSpatial_Params;
	memset(&GetAudioSpatial_Params, 0, sizeof(GetAudioSpatial_Params));
	if (!uFnGetAudioSpatial)
	{
		return;
	}

	GetAudioSpatial_Params.caller = optionalCaller;
	memcpy_s(&GetAudioSpatial_Params.sndPosition, sizeof(GetAudioSpatial_Params.sndPosition), &outSndPosition, sizeof(outSndPosition));
	memcpy_s(&GetAudioSpatial_Params.sndOrientation, sizeof(GetAudioSpatial_Params.sndOrientation), &outSndOrientation, sizeof(outSndOrientation));

	auto native_GetAudioSpatial = uFnGetAudioSpatial->iNative;
	uFnGetAudioSpatial->iNative = 0;
	this->ProcessEvent(uFnGetAudioSpatial, &GetAudioSpatial_Params, nullptr);
	uFnGetAudioSpatial->iNative = native_GetAudioSpatial;

	memcpy_s(&outSndPosition, sizeof(outSndPosition), &GetAudioSpatial_Params.sndPosition, sizeof(GetAudioSpatial_Params.sndPosition));
	memcpy_s(&outSndOrientation, sizeof(outSndOrientation), &GetAudioSpatial_Params.sndOrientation, sizeof(GetAudioSpatial_Params.sndOrientation));
}

// Function AkAudio.AkMultipointEmitter.GetAkAudible
// [0x00024400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class URAkAudible*             ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       allowCreate                    (CPF_OptionalParm | CPF_Parm)

class URAkAudible* AAkMultipointEmitter::GetAkAudible(bool optionalAllowCreate)
{
	static UFunction* uFnGetAkAudible = nullptr;

	if (!uFnGetAkAudible)
	{
		uFnGetAkAudible = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.GetAkAudible");
	}

	AAkMultipointEmitter_execGetAkAudible_Params GetAkAudible_Params;
	memset(&GetAkAudible_Params, 0, sizeof(GetAkAudible_Params));
	if (!uFnGetAkAudible)
	{
		return {};
	}

	GetAkAudible_Params.allowCreate = optionalAllowCreate;

	auto native_GetAkAudible = uFnGetAkAudible->iNative;
	uFnGetAkAudible->iNative = 0;
	this->ProcessEvent(uFnGetAkAudible, &GetAkAudible_Params, nullptr);
	uFnGetAkAudible->iNative = native_GetAkAudible;

	return GetAkAudible_Params.ReturnValue;
}

// Function AkAudio.AkMultipointEmitter.AudibleUpdateSourceCallback
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class URAkAudible*             akAud                          (CPF_Parm)
// uint32_t                       hasSource                      (CPF_Parm)

void AAkMultipointEmitter::AudibleUpdateSourceCallback(class URAkAudible* akAud, bool hasSource)
{
	static UFunction* uFnAudibleUpdateSourceCallback = nullptr;

	if (!uFnAudibleUpdateSourceCallback)
	{
		uFnAudibleUpdateSourceCallback = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.AudibleUpdateSourceCallback");
	}

	AAkMultipointEmitter_execAudibleUpdateSourceCallback_Params AudibleUpdateSourceCallback_Params;
	memset(&AudibleUpdateSourceCallback_Params, 0, sizeof(AudibleUpdateSourceCallback_Params));
	if (!uFnAudibleUpdateSourceCallback)
	{
		return;
	}

	AudibleUpdateSourceCallback_Params.akAud = akAud;
	AudibleUpdateSourceCallback_Params.hasSource = hasSource;

	auto native_AudibleUpdateSourceCallback = uFnAudibleUpdateSourceCallback->iNative;
	uFnAudibleUpdateSourceCallback->iNative = 0;
	this->ProcessEvent(uFnAudibleUpdateSourceCallback, &AudibleUpdateSourceCallback_Params, nullptr);
	uFnAudibleUpdateSourceCallback->iNative = native_AudibleUpdateSourceCallback;
}

// Function AkAudio.AkMultipointEmitter.UnlinkToActor
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  LinkTarget                     (CPF_Parm)

bool AAkMultipointEmitter::eventUnlinkToActor(class AActor* LinkTarget)
{
	static UFunction* uFnUnlinkToActor = nullptr;

	if (!uFnUnlinkToActor)
	{
		uFnUnlinkToActor = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.UnlinkToActor");
	}

	AAkMultipointEmitter_eventUnlinkToActor_Params UnlinkToActor_Params;
	memset(&UnlinkToActor_Params, 0, sizeof(UnlinkToActor_Params));
	if (!uFnUnlinkToActor)
	{
		return {};
	}

	UnlinkToActor_Params.LinkTarget = LinkTarget;

	this->ProcessEvent(uFnUnlinkToActor, &UnlinkToActor_Params, nullptr);

	return UnlinkToActor_Params.ReturnValue;
}

// Function AkAudio.AkMultipointEmitter.LinkToActor
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  LinkTarget                     (CPF_Parm)

bool AAkMultipointEmitter::eventLinkToActor(class AActor* LinkTarget)
{
	static UFunction* uFnLinkToActor = nullptr;

	if (!uFnLinkToActor)
	{
		uFnLinkToActor = UFunction::FindFunction("Function AkAudio.AkMultipointEmitter.LinkToActor");
	}

	AAkMultipointEmitter_eventLinkToActor_Params LinkToActor_Params;
	memset(&LinkToActor_Params, 0, sizeof(LinkToActor_Params));
	if (!uFnLinkToActor)
	{
		return {};
	}

	LinkToActor_Params.LinkTarget = LinkTarget;

	this->ProcessEvent(uFnLinkToActor, &LinkToActor_Params, nullptr);

	return LinkToActor_Params.ReturnValue;
}

// Function AkAudio.AkRattleEmitter.HandleUnlink
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Target                         (CPF_Parm)

bool AAkRattleEmitter::HandleUnlink(class AActor* Target)
{
	static UFunction* uFnHandleUnlink = nullptr;

	if (!uFnHandleUnlink)
	{
		uFnHandleUnlink = UFunction::FindFunction("Function AkAudio.AkRattleEmitter.HandleUnlink");
	}

	AAkRattleEmitter_execHandleUnlink_Params HandleUnlink_Params;
	memset(&HandleUnlink_Params, 0, sizeof(HandleUnlink_Params));
	if (!uFnHandleUnlink)
	{
		return {};
	}

	HandleUnlink_Params.Target = Target;

	auto native_HandleUnlink = uFnHandleUnlink->iNative;
	uFnHandleUnlink->iNative = 0;
	this->ProcessEvent(uFnHandleUnlink, &HandleUnlink_Params, nullptr);
	uFnHandleUnlink->iNative = native_HandleUnlink;

	return HandleUnlink_Params.ReturnValue;
}

// Function AkAudio.AkRattleEmitter.HandleLink
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Target                         (CPF_Parm)

bool AAkRattleEmitter::HandleLink(class AActor* Target)
{
	static UFunction* uFnHandleLink = nullptr;

	if (!uFnHandleLink)
	{
		uFnHandleLink = UFunction::FindFunction("Function AkAudio.AkRattleEmitter.HandleLink");
	}

	AAkRattleEmitter_execHandleLink_Params HandleLink_Params;
	memset(&HandleLink_Params, 0, sizeof(HandleLink_Params));
	if (!uFnHandleLink)
	{
		return {};
	}

	HandleLink_Params.Target = Target;

	auto native_HandleLink = uFnHandleLink->iNative;
	uFnHandleLink->iNative = 0;
	this->ProcessEvent(uFnHandleLink, &HandleLink_Params, nullptr);
	uFnHandleLink->iNative = native_HandleLink;

	return HandleLink_Params.ReturnValue;
}

// Function AkAudio.AkRattleEmitter.ApplyEmitterSpatial
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkRattleEmitter::ApplyEmitterSpatial()
{
	static UFunction* uFnApplyEmitterSpatial = nullptr;

	if (!uFnApplyEmitterSpatial)
	{
		uFnApplyEmitterSpatial = UFunction::FindFunction("Function AkAudio.AkRattleEmitter.ApplyEmitterSpatial");
	}

	AAkRattleEmitter_execApplyEmitterSpatial_Params ApplyEmitterSpatial_Params;
	memset(&ApplyEmitterSpatial_Params, 0, sizeof(ApplyEmitterSpatial_Params));
	if (!uFnApplyEmitterSpatial)
	{
		return;
	}


	auto native_ApplyEmitterSpatial = uFnApplyEmitterSpatial->iNative;
	uFnApplyEmitterSpatial->iNative = 0;
	this->ProcessEvent(uFnApplyEmitterSpatial, &ApplyEmitterSpatial_Params, nullptr);
	uFnApplyEmitterSpatial->iNative = native_ApplyEmitterSpatial;
}

// Function AkAudio.AkRattleEmitter.GetAudioSpatial
// [0x00424400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 caller                         (CPF_OptionalParm | CPF_Parm)
// struct FVector                 sndPosition                    (CPF_Parm | CPF_OutParm)
// struct FRotator                sndOrientation                 (CPF_Parm | CPF_OutParm)

void AAkRattleEmitter::GetAudioSpatial(class UObject* optionalCaller, struct FVector& outSndPosition, struct FRotator& outSndOrientation)
{
	static UFunction* uFnGetAudioSpatial = nullptr;

	if (!uFnGetAudioSpatial)
	{
		uFnGetAudioSpatial = UFunction::FindFunction("Function AkAudio.AkRattleEmitter.GetAudioSpatial");
	}

	AAkRattleEmitter_execGetAudioSpatial_Params GetAudioSpatial_Params;
	memset(&GetAudioSpatial_Params, 0, sizeof(GetAudioSpatial_Params));
	if (!uFnGetAudioSpatial)
	{
		return;
	}

	GetAudioSpatial_Params.caller = optionalCaller;
	memcpy_s(&GetAudioSpatial_Params.sndPosition, sizeof(GetAudioSpatial_Params.sndPosition), &outSndPosition, sizeof(outSndPosition));
	memcpy_s(&GetAudioSpatial_Params.sndOrientation, sizeof(GetAudioSpatial_Params.sndOrientation), &outSndOrientation, sizeof(outSndOrientation));

	auto native_GetAudioSpatial = uFnGetAudioSpatial->iNative;
	uFnGetAudioSpatial->iNative = 0;
	this->ProcessEvent(uFnGetAudioSpatial, &GetAudioSpatial_Params, nullptr);
	uFnGetAudioSpatial->iNative = native_GetAudioSpatial;

	memcpy_s(&outSndPosition, sizeof(outSndPosition), &GetAudioSpatial_Params.sndPosition, sizeof(GetAudioSpatial_Params.sndPosition));
	memcpy_s(&outSndOrientation, sizeof(outSndOrientation), &GetAudioSpatial_Params.sndOrientation, sizeof(GetAudioSpatial_Params.sndOrientation));
}

// Function AkAudio.AkRattleEmitter.UnlinkToActor
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  LinkTarget                     (CPF_Parm)

bool AAkRattleEmitter::eventUnlinkToActor(class AActor* LinkTarget)
{
	static UFunction* uFnUnlinkToActor = nullptr;

	if (!uFnUnlinkToActor)
	{
		uFnUnlinkToActor = UFunction::FindFunction("Function AkAudio.AkRattleEmitter.UnlinkToActor");
	}

	AAkRattleEmitter_eventUnlinkToActor_Params UnlinkToActor_Params;
	memset(&UnlinkToActor_Params, 0, sizeof(UnlinkToActor_Params));
	if (!uFnUnlinkToActor)
	{
		return {};
	}

	UnlinkToActor_Params.LinkTarget = LinkTarget;

	this->ProcessEvent(uFnUnlinkToActor, &UnlinkToActor_Params, nullptr);

	return UnlinkToActor_Params.ReturnValue;
}

// Function AkAudio.AkRattleEmitter.LinkToActor
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  LinkTarget                     (CPF_Parm)

bool AAkRattleEmitter::eventLinkToActor(class AActor* LinkTarget)
{
	static UFunction* uFnLinkToActor = nullptr;

	if (!uFnLinkToActor)
	{
		uFnLinkToActor = UFunction::FindFunction("Function AkAudio.AkRattleEmitter.LinkToActor");
	}

	AAkRattleEmitter_eventLinkToActor_Params LinkToActor_Params;
	memset(&LinkToActor_Params, 0, sizeof(LinkToActor_Params));
	if (!uFnLinkToActor)
	{
		return {};
	}

	LinkToActor_Params.LinkTarget = LinkTarget;

	this->ProcessEvent(uFnLinkToActor, &LinkToActor_Params, nullptr);

	return LinkToActor_Params.ReturnValue;
}

// Function AkAudio.AkManagedEmitter.DisableEmitter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkManagedEmitter::DisableEmitter()
{
	static UFunction* uFnDisableEmitter = nullptr;

	if (!uFnDisableEmitter)
	{
		uFnDisableEmitter = UFunction::FindFunction("Function AkAudio.AkManagedEmitter.DisableEmitter");
	}

	AAkManagedEmitter_execDisableEmitter_Params DisableEmitter_Params;
	memset(&DisableEmitter_Params, 0, sizeof(DisableEmitter_Params));
	if (!uFnDisableEmitter)
	{
		return;
	}


	auto native_DisableEmitter = uFnDisableEmitter->iNative;
	uFnDisableEmitter->iNative = 0;
	this->ProcessEvent(uFnDisableEmitter, &DisableEmitter_Params, nullptr);
	uFnDisableEmitter->iNative = native_DisableEmitter;
}

// Function AkAudio.AkManagedEmitter.EnableEmitter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkManagedEmitter::EnableEmitter()
{
	static UFunction* uFnEnableEmitter = nullptr;

	if (!uFnEnableEmitter)
	{
		uFnEnableEmitter = UFunction::FindFunction("Function AkAudio.AkManagedEmitter.EnableEmitter");
	}

	AAkManagedEmitter_execEnableEmitter_Params EnableEmitter_Params;
	memset(&EnableEmitter_Params, 0, sizeof(EnableEmitter_Params));
	if (!uFnEnableEmitter)
	{
		return;
	}


	auto native_EnableEmitter = uFnEnableEmitter->iNative;
	uFnEnableEmitter->iNative = 0;
	this->ProcessEvent(uFnEnableEmitter, &EnableEmitter_Params, nullptr);
	uFnEnableEmitter->iNative = native_EnableEmitter;
}

// Function AkAudio.AkManagedEmitter.OnToggleHidden
// [0x40020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_Lambda | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_ToggleHidden*    Action                         (CPF_Parm)

void AAkManagedEmitter::OnToggleHidden(class USeqAct_ToggleHidden* Action)
{
	static UFunction* uFnOnToggleHidden = nullptr;

	if (!uFnOnToggleHidden)
	{
		uFnOnToggleHidden = UFunction::FindFunction("Function AkAudio.AkManagedEmitter.OnToggleHidden");
	}

	AAkManagedEmitter_execOnToggleHidden_Params OnToggleHidden_Params;
	memset(&OnToggleHidden_Params, 0, sizeof(OnToggleHidden_Params));
	if (!uFnOnToggleHidden)
	{
		return;
	}

	OnToggleHidden_Params.Action = Action;

	this->ProcessEvent(uFnOnToggleHidden, &OnToggleHidden_Params, nullptr);
}

// Function AkAudio.AkManagedEmitter.OnToggle
// [0x00020103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          ToggleAction                   (CPF_Parm)

void AAkManagedEmitter::OnToggle(class USeqAct_Toggle* ToggleAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function AkAudio.AkManagedEmitter.OnToggle");
	}

	AAkManagedEmitter_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	if (!uFnOnToggle)
	{
		return;
	}

	OnToggle_Params.ToggleAction = ToggleAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
}

// Function AkAudio.AkProximityTracker.OnToggle
// [0x00020103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          ToggleAction                   (CPF_Parm)

void AAkProximityTracker::OnToggle(class USeqAct_Toggle* ToggleAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function AkAudio.AkProximityTracker.OnToggle");
	}

	AAkProximityTracker_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	if (!uFnOnToggle)
	{
		return;
	}

	OnToggle_Params.ToggleAction = ToggleAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
}

// Function AkAudio.AkRandomVolume.DisableRandomVolume
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkRandomVolume::DisableRandomVolume()
{
	static UFunction* uFnDisableRandomVolume = nullptr;

	if (!uFnDisableRandomVolume)
	{
		uFnDisableRandomVolume = UFunction::FindFunction("Function AkAudio.AkRandomVolume.DisableRandomVolume");
	}

	AAkRandomVolume_execDisableRandomVolume_Params DisableRandomVolume_Params;
	memset(&DisableRandomVolume_Params, 0, sizeof(DisableRandomVolume_Params));
	if (!uFnDisableRandomVolume)
	{
		return;
	}


	auto native_DisableRandomVolume = uFnDisableRandomVolume->iNative;
	uFnDisableRandomVolume->iNative = 0;
	this->ProcessEvent(uFnDisableRandomVolume, &DisableRandomVolume_Params, nullptr);
	uFnDisableRandomVolume->iNative = native_DisableRandomVolume;
}

// Function AkAudio.AkRandomVolume.EnableRandomVolume
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkRandomVolume::EnableRandomVolume()
{
	static UFunction* uFnEnableRandomVolume = nullptr;

	if (!uFnEnableRandomVolume)
	{
		uFnEnableRandomVolume = UFunction::FindFunction("Function AkAudio.AkRandomVolume.EnableRandomVolume");
	}

	AAkRandomVolume_execEnableRandomVolume_Params EnableRandomVolume_Params;
	memset(&EnableRandomVolume_Params, 0, sizeof(EnableRandomVolume_Params));
	if (!uFnEnableRandomVolume)
	{
		return;
	}


	auto native_EnableRandomVolume = uFnEnableRandomVolume->iNative;
	uFnEnableRandomVolume->iNative = 0;
	this->ProcessEvent(uFnEnableRandomVolume, &EnableRandomVolume_Params, nullptr);
	uFnEnableRandomVolume->iNative = native_EnableRandomVolume;
}

// Function AkAudio.AkRandomVolume.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          ToggleAction                   (CPF_Parm)

void AAkRandomVolume::OnToggle(class USeqAct_Toggle* ToggleAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function AkAudio.AkRandomVolume.OnToggle");
	}

	AAkRandomVolume_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	if (!uFnOnToggle)
	{
		return;
	}

	OnToggle_Params.ToggleAction = ToggleAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
}

// Function AkAudio.AkSDEntity.GetVariableName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UAkSDEntity::GetVariableName()
{
	static UFunction* uFnGetVariableName = nullptr;

	if (!uFnGetVariableName)
	{
		uFnGetVariableName = UFunction::FindFunction("Function AkAudio.AkSDEntity.GetVariableName");
	}

	UAkSDEntity_execGetVariableName_Params GetVariableName_Params;
	memset(&GetVariableName_Params, 0, sizeof(GetVariableName_Params));
	if (!uFnGetVariableName)
	{
		return {};
	}


	auto native_GetVariableName = uFnGetVariableName->iNative;
	uFnGetVariableName->iNative = 0;
	this->ProcessEvent(uFnGetVariableName, &GetVariableName_Params, nullptr);
	uFnGetVariableName->iNative = native_GetVariableName;

	return GetVariableName_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationship.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationship::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationship.Evaluate");
	}

	UAkSDRelationship_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipAlways.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipAlways::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipAlways.Evaluate");
	}

	UAkSDRelationshipAlways_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipEqual.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipEqual::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipEqual.Evaluate");
	}

	UAkSDRelationshipEqual_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipEvery.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipEvery::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipEvery.Evaluate");
	}

	UAkSDRelationshipEvery_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipGreaterThan.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipGreaterThan::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipGreaterThan.Evaluate");
	}

	UAkSDRelationshipGreaterThan_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipGreaterThanEqual.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipGreaterThanEqual::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipGreaterThanEqual.Evaluate");
	}

	UAkSDRelationshipGreaterThanEqual_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipHasChanged.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipHasChanged::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipHasChanged.Evaluate");
	}

	UAkSDRelationshipHasChanged_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipIn.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipIn::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipIn.Evaluate");
	}

	UAkSDRelationshipIn_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipIsFalse.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipIsFalse::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipIsFalse.Evaluate");
	}

	UAkSDRelationshipIsFalse_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipIsTrue.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipIsTrue::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipIsTrue.Evaluate");
	}

	UAkSDRelationshipIsTrue_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipLessThan.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipLessThan::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipLessThan.Evaluate");
	}

	UAkSDRelationshipLessThan_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipLessThanEqual.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipLessThanEqual::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipLessThanEqual.Evaluate");
	}

	UAkSDRelationshipLessThanEqual_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipNotEqual.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipNotEqual::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipNotEqual.Evaluate");
	}

	UAkSDRelationshipNotEqual_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipOnce.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipOnce::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipOnce.Evaluate");
	}

	UAkSDRelationshipOnce_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipSymbolEqual.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipSymbolEqual::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipSymbolEqual.Evaluate");
	}

	UAkSDRelationshipSymbolEqual_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipSymbolNotEqual.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipSymbolNotEqual::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipSymbolNotEqual.Evaluate");
	}

	UAkSDRelationshipSymbolNotEqual_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkSDRelationshipSymbolValid.Evaluate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UAkSDRelationshipSymbolValid::Evaluate()
{
	static UFunction* uFnEvaluate = nullptr;

	if (!uFnEvaluate)
	{
		uFnEvaluate = UFunction::FindFunction("Function AkAudio.AkSDRelationshipSymbolValid.Evaluate");
	}

	UAkSDRelationshipSymbolValid_execEvaluate_Params Evaluate_Params;
	memset(&Evaluate_Params, 0, sizeof(Evaluate_Params));
	if (!uFnEvaluate)
	{
		return {};
	}


	auto native_Evaluate = uFnEvaluate->iNative;
	uFnEvaluate->iNative = 0;
	this->ProcessEvent(uFnEvaluate, &Evaluate_Params, nullptr);
	uFnEvaluate->iNative = native_Evaluate;

	return Evaluate_Params.ReturnValue;
}

// Function AkAudio.AkWhoosh.DisableWhoosh
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkWhoosh::DisableWhoosh()
{
	static UFunction* uFnDisableWhoosh = nullptr;

	if (!uFnDisableWhoosh)
	{
		uFnDisableWhoosh = UFunction::FindFunction("Function AkAudio.AkWhoosh.DisableWhoosh");
	}

	AAkWhoosh_execDisableWhoosh_Params DisableWhoosh_Params;
	memset(&DisableWhoosh_Params, 0, sizeof(DisableWhoosh_Params));
	if (!uFnDisableWhoosh)
	{
		return;
	}


	auto native_DisableWhoosh = uFnDisableWhoosh->iNative;
	uFnDisableWhoosh->iNative = 0;
	this->ProcessEvent(uFnDisableWhoosh, &DisableWhoosh_Params, nullptr);
	uFnDisableWhoosh->iNative = native_DisableWhoosh;
}

// Function AkAudio.AkWhoosh.EnableWhoosh
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AAkWhoosh::EnableWhoosh()
{
	static UFunction* uFnEnableWhoosh = nullptr;

	if (!uFnEnableWhoosh)
	{
		uFnEnableWhoosh = UFunction::FindFunction("Function AkAudio.AkWhoosh.EnableWhoosh");
	}

	AAkWhoosh_execEnableWhoosh_Params EnableWhoosh_Params;
	memset(&EnableWhoosh_Params, 0, sizeof(EnableWhoosh_Params));
	if (!uFnEnableWhoosh)
	{
		return;
	}


	auto native_EnableWhoosh = uFnEnableWhoosh->iNative;
	uFnEnableWhoosh->iNative = 0;
	this->ProcessEvent(uFnEnableWhoosh, &EnableWhoosh_Params, nullptr);
	uFnEnableWhoosh->iNative = native_EnableWhoosh;
}

// Function AkAudio.AkWhoosh.OnToggle
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          ToggleAction                   (CPF_Parm)

void AAkWhoosh::OnToggle(class USeqAct_Toggle* ToggleAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function AkAudio.AkWhoosh.OnToggle");
	}

	AAkWhoosh_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	if (!uFnOnToggle)
	{
		return;
	}

	OnToggle_Params.ToggleAction = ToggleAction;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
}

// Function AkAudio.AkWhooshVolume.UnTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void AAkWhooshVolume::eventUnTouch(class AActor* Other)
{
	static UFunction* uFnUnTouch = nullptr;

	if (!uFnUnTouch)
	{
		uFnUnTouch = UFunction::FindFunction("Function AkAudio.AkWhooshVolume.UnTouch");
	}

	AAkWhooshVolume_eventUnTouch_Params UnTouch_Params;
	memset(&UnTouch_Params, 0, sizeof(UnTouch_Params));
	if (!uFnUnTouch)
	{
		return;
	}

	UnTouch_Params.Other = Other;

	this->ProcessEvent(uFnUnTouch, &UnTouch_Params, nullptr);
}

// Function AkAudio.AkWhooshVolume.Touch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AAkWhooshVolume::eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* uFnTouch = nullptr;

	if (!uFnTouch)
	{
		uFnTouch = UFunction::FindFunction("Function AkAudio.AkWhooshVolume.Touch");
	}

	AAkWhooshVolume_eventTouch_Params Touch_Params;
	memset(&Touch_Params, 0, sizeof(Touch_Params));
	if (!uFnTouch)
	{
		return;
	}

	Touch_Params.Other = Other;
	Touch_Params.OtherComp = OtherComp;
	memcpy_s(&Touch_Params.HitLocation, sizeof(Touch_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&Touch_Params.HitNormal, sizeof(Touch_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnTouch, &Touch_Params, nullptr);
}

// Function AkAudio.AkWhooshVolume.HandleTouchInOut
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)
// uint32_t                       otherIsTouching                (CPF_Parm)

void AAkWhooshVolume::HandleTouchInOut(class AActor* Other, bool otherIsTouching)
{
	static UFunction* uFnHandleTouchInOut = nullptr;

	if (!uFnHandleTouchInOut)
	{
		uFnHandleTouchInOut = UFunction::FindFunction("Function AkAudio.AkWhooshVolume.HandleTouchInOut");
	}

	AAkWhooshVolume_execHandleTouchInOut_Params HandleTouchInOut_Params;
	memset(&HandleTouchInOut_Params, 0, sizeof(HandleTouchInOut_Params));
	if (!uFnHandleTouchInOut)
	{
		return;
	}

	HandleTouchInOut_Params.Other = Other;
	HandleTouchInOut_Params.otherIsTouching = otherIsTouching;

	auto native_HandleTouchInOut = uFnHandleTouchInOut->iNative;
	uFnHandleTouchInOut->iNative = 0;
	this->ProcessEvent(uFnHandleTouchInOut, &HandleTouchInOut_Params, nullptr);
	uFnHandleTouchInOut->iNative = native_HandleTouchInOut;
}

// Function AkAudio.SeqAct_AkAudioEvent.SoundCallback
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        CallbackFlags                  (CPF_Parm)
// struct FAkSoundHandle          SoundHandle                    (CPF_Parm)
// int32_t                        MarkerID                       (CPF_Parm)
// float                          Duration                       (CPF_Parm)

void USeqAct_AkAudioEvent::SoundCallback(int32_t CallbackFlags, const struct FAkSoundHandle& SoundHandle, int32_t MarkerID, float Duration)
{
	static UFunction* uFnSoundCallback = nullptr;

	if (!uFnSoundCallback)
	{
		uFnSoundCallback = UFunction::FindFunction("Function AkAudio.SeqAct_AkAudioEvent.SoundCallback");
	}

	USeqAct_AkAudioEvent_execSoundCallback_Params SoundCallback_Params;
	memset(&SoundCallback_Params, 0, sizeof(SoundCallback_Params));
	if (!uFnSoundCallback)
	{
		return;
	}

	SoundCallback_Params.CallbackFlags = CallbackFlags;
	memcpy_s(&SoundCallback_Params.SoundHandle, sizeof(SoundCallback_Params.SoundHandle), &SoundHandle, sizeof(SoundHandle));
	SoundCallback_Params.MarkerID = MarkerID;
	SoundCallback_Params.Duration = Duration;

	this->ProcessEvent(uFnSoundCallback, &SoundCallback_Params, nullptr);
}

// Function AkAudio.SeqAct_AkAudioEventLoop.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkAudioEventLoop::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkAudioEventLoop.GetObjClassVersion");
	}

	USeqAct_AkAudioEventLoop_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkAudioEventLoop::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function AkAudio.SeqAct_AkAudioParameter.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkAudioParameter::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkAudioParameter.GetObjClassVersion");
	}

	USeqAct_AkAudioParameter_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkAudioParameter::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function AkAudio.SeqAct_AkDialogueGetSpeechDuration.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkDialogueGetSpeechDuration::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkDialogueGetSpeechDuration.GetObjClassVersion");
	}

	USeqAct_AkDialogueGetSpeechDuration_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkDialogueGetSpeechDuration::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function AkAudio.SeqAct_AkDialogueLockType.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkDialogueLockType::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkDialogueLockType.GetObjClassVersion");
	}

	USeqAct_AkDialogueLockType_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkDialogueLockType::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function AkAudio.SeqAct_AkDialogueLockVoice.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkDialogueLockVoice::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkDialogueLockVoice.GetObjClassVersion");
	}

	USeqAct_AkDialogueLockVoice_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkDialogueLockVoice::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function AkAudio.SeqAct_AkDialogueSetVoice.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkDialogueSetVoice::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkDialogueSetVoice.GetObjClassVersion");
	}

	USeqAct_AkDialogueSetVoice_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkDialogueSetVoice::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function AkAudio.SeqAct_AkDialogueSetVoiceSubtitle.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkDialogueSetVoiceSubtitle::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkDialogueSetVoiceSubtitle.GetObjClassVersion");
	}

	USeqAct_AkDialogueSetVoiceSubtitle_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkDialogueSetVoiceSubtitle::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function AkAudio.SeqAct_AkDialogueStartSpeech.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkDialogueStartSpeech::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkDialogueStartSpeech.GetObjClassVersion");
	}

	USeqAct_AkDialogueStartSpeech_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkDialogueStartSpeech::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function AkAudio.SeqAct_AkComponentSettings.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkComponentSettings::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkComponentSettings.GetObjClassVersion");
	}

	USeqAct_AkComponentSettings_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkComponentSettings::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function AkAudio.SeqAct_AkMusicReplace.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkMusicReplace::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkMusicReplace.GetObjClassVersion");
	}

	USeqAct_AkMusicReplace_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkMusicReplace::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function AkAudio.SeqAct_AkSetFact.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_AkSetFact::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function AkAudio.SeqAct_AkSetFact.GetObjClassVersion");
	}

	USeqAct_AkSetFact_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	USeqAct_AkSetFact::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
