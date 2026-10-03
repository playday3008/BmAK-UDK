/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: AkAudio_parameters.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#include "AkAudio_structs.hpp"

#include "Engine_parameters.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Parameters
# ========================================================================================= #
*/

// Function AkAudio.AkAudioSpline.GetAudioSpatial
// [0x00424400] 
struct AAkAudioSpline_execGetAudioSpatial_Params
{
	struct FVector                                     sndPosition;                                      // 0x0000 (0x000C) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    sndOrientation;                                   // 0x000C (0x000C) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	class UObject*                                     caller;                                           // 0x0018 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(AAkAudioSpline_execGetAudioSpatial_Params, caller) == 0x0018);
static_assert(sizeof(AAkAudioSpline_execGetAudioSpatial_Params) >= 0x0020);

// Function AkAudio.AkAudioVolume.HandleUnlink
// [0x00020401] 
struct AAkAudioVolume_execHandleUnlink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkAudioVolume_execHandleUnlink_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkAudioVolume_execHandleUnlink_Params) >= 0x000C);

// Function AkAudio.AkAudioVolume.HandleLink
// [0x00020401] 
struct AAkAudioVolume_execHandleLink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkAudioVolume_execHandleLink_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkAudioVolume_execHandleLink_Params) >= 0x000C);

// Function AkAudio.AkAudioVolume.RefreshTouching
// [0x00020400] 
struct AAkAudioVolume_execRefreshTouching_Params
{
};

// Function AkAudio.AkAudioVolume.HandleTouchInOut
// [0x00020401] 
struct AAkAudioVolume_execHandleTouchInOut_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           otherIsTouching;                                  // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(AAkAudioVolume_execHandleTouchInOut_Params, otherIsTouching) == 0x0008);
static_assert(sizeof(AAkAudioVolume_execHandleTouchInOut_Params) >= 0x000C);

// Function AkAudio.AkAudioVolume.GetAudioSpatial
// [0x00424400] 
struct AAkAudioVolume_execGetAudioSpatial_Params
{
	struct FVector                                     sndPosition;                                      // 0x0000 (0x000C) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    sndOrientation;                                   // 0x000C (0x000C) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	class UObject*                                     caller;                                           // 0x0018 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(AAkAudioVolume_execGetAudioSpatial_Params, caller) == 0x0018);
static_assert(sizeof(AAkAudioVolume_execGetAudioSpatial_Params) >= 0x0020);

// Function AkAudio.AkAudioVolume.UnlinkToActor
// [0x00020400] 
struct AAkAudioVolume_execUnlinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkAudioVolume_execUnlinkToActor_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkAudioVolume_execUnlinkToActor_Params) >= 0x000C);

// Function AkAudio.AkAudioVolume.LinkToActor
// [0x00020802] 
struct AAkAudioVolume_eventLinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkAudioVolume_eventLinkToActor_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkAudioVolume_eventLinkToActor_Params) >= 0x000C);

// Function AkAudio.AkAudioVolume.OverrideDefaultAkAudibleSetup
// [0x00020802] 
struct AAkAudioVolume_eventOverrideDefaultAkAudibleSetup_Params
{
	class URAkAudible*                                 akAud;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkAudioVolume_eventOverrideDefaultAkAudibleSetup_Params, akAud) == 0x0000);
static_assert(sizeof(AAkAudioVolume_eventOverrideDefaultAkAudibleSetup_Params) >= 0x0008);

// Function AkAudio.AkAudioVolume.UnTouch
// [0x00020802] 
struct AAkAudioVolume_eventUnTouch_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkAudioVolume_eventUnTouch_Params, Other) == 0x0000);
static_assert(sizeof(AAkAudioVolume_eventUnTouch_Params) >= 0x0008);

// Function AkAudio.AkAudioVolume.Touch
// [0x00020802] 
struct AAkAudioVolume_eventTouch_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        // 0x0008 (0x0008) [0x0000004000000008] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      // 0x0010 (0x000C) [0x0000000000000008] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        // 0x001C (0x000C) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkAudioVolume_eventTouch_Params, HitNormal) == 0x001C);
static_assert(sizeof(AAkAudioVolume_eventTouch_Params) >= 0x0028);

// Function AkAudio.AkDialogueTape.Stop
// [0x00022401] 
struct UAkDialogueTape_execStop_Params
{
	class UAkDialogueTape*                             dlgTape;                                          // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UAkDialogueTape_execStop_Params, dlgTape) == 0x0000);
static_assert(sizeof(UAkDialogueTape_execStop_Params) >= 0x0008);

// Function AkAudio.AkDialogueTape.Start
// [0x00022401] 
struct UAkDialogueTape_execStart_Params
{
	class UAkDialogueTape*                             dlgTape;                                          // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FAkSpeechOptions                            dlgCallbacks;                                     // 0x0008 (0x0074) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x007C (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkDialogueTape_execStart_Params, ReturnValue) == 0x007C);
static_assert(sizeof(UAkDialogueTape_execStart_Params) >= 0x0080);

// Function AkAudio.AkEmitter.ApplyEmitterSpatial
// [0x00020400] 
struct AAkEmitter_execApplyEmitterSpatial_Params
{
};

// Function AkAudio.AkEmitter.DisableEmitter
// [0x00020400] 
struct AAkEmitter_execDisableEmitter_Params
{
};

// Function AkAudio.AkEmitter.EnableEmitter
// [0x00020400] 
struct AAkEmitter_execEnableEmitter_Params
{
};

// Function AkAudio.AkEmitter.OnToggleHidden
// [0x40020102] 
struct AAkEmitter_execOnToggleHidden_Params
{
	class USeqAct_ToggleHidden*                        Action;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkEmitter_execOnToggleHidden_Params, Action) == 0x0000);
static_assert(sizeof(AAkEmitter_execOnToggleHidden_Params) >= 0x0008);

// Function AkAudio.AkEmitter.OnToggle
// [0x00020103] 
struct AAkEmitter_execOnToggle_Params
{
	class USeqAct_Toggle*                              ToggleAction;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkEmitter_execOnToggle_Params, ToggleAction) == 0x0000);
static_assert(sizeof(AAkEmitter_execOnToggle_Params) >= 0x0008);

// Function AkAudio.AkLightEmitter.HandleUnlink
// [0x00020401] 
struct AAkLightEmitter_execHandleUnlink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkLightEmitter_execHandleUnlink_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkLightEmitter_execHandleUnlink_Params) >= 0x000C);

// Function AkAudio.AkLightEmitter.HandleLink
// [0x00020401] 
struct AAkLightEmitter_execHandleLink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkLightEmitter_execHandleLink_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkLightEmitter_execHandleLink_Params) >= 0x000C);

// Function AkAudio.AkLightEmitter.UnlinkToActor
// [0x00020802] 
struct AAkLightEmitter_eventUnlinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkLightEmitter_eventUnlinkToActor_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkLightEmitter_eventUnlinkToActor_Params) >= 0x000C);

// Function AkAudio.AkLightEmitter.LinkToActor
// [0x00020802] 
struct AAkLightEmitter_eventLinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkLightEmitter_eventLinkToActor_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkLightEmitter_eventLinkToActor_Params) >= 0x000C);

// Function AkAudio.AkMultipointEmitter.HandleUnlinkAll
// [0x00020401] 
struct AAkMultipointEmitter_execHandleUnlinkAll_Params
{
};

// Function AkAudio.AkMultipointEmitter.HandleUnlink
// [0x00020401] 
struct AAkMultipointEmitter_execHandleUnlink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkMultipointEmitter_execHandleUnlink_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkMultipointEmitter_execHandleUnlink_Params) >= 0x000C);

// Function AkAudio.AkMultipointEmitter.HandleLink
// [0x00020401] 
struct AAkMultipointEmitter_execHandleLink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkMultipointEmitter_execHandleLink_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkMultipointEmitter_execHandleLink_Params) >= 0x000C);

// Function AkAudio.AkMultipointEmitter.ApplyEmitterSpatial
// [0x00020400] 
struct AAkMultipointEmitter_execApplyEmitterSpatial_Params
{
};

// Function AkAudio.AkMultipointEmitter.DisableEmitter
// [0x00020400] 
struct AAkMultipointEmitter_execDisableEmitter_Params
{
};

// Function AkAudio.AkMultipointEmitter.EnableEmitter
// [0x00020400] 
struct AAkMultipointEmitter_execEnableEmitter_Params
{
};

// Function AkAudio.AkMultipointEmitter.GetAudioSpatial
// [0x00424400] 
struct AAkMultipointEmitter_execGetAudioSpatial_Params
{
	struct FVector                                     sndPosition;                                      // 0x0000 (0x000C) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    sndOrientation;                                   // 0x000C (0x000C) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	class UObject*                                     caller;                                           // 0x0018 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(AAkMultipointEmitter_execGetAudioSpatial_Params, caller) == 0x0018);
static_assert(sizeof(AAkMultipointEmitter_execGetAudioSpatial_Params) >= 0x0020);

// Function AkAudio.AkMultipointEmitter.GetAkAudible
// [0x00024400] 
struct AAkMultipointEmitter_execGetAkAudible_Params
{
	uint32_t                                           allowCreate;                                      // 0x0000 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class URAkAudible*                                 ReturnValue;                                      // 0x0004 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkMultipointEmitter_execGetAkAudible_Params, ReturnValue) == 0x0004);
static_assert(sizeof(AAkMultipointEmitter_execGetAkAudible_Params) >= 0x000C);

// Function AkAudio.AkMultipointEmitter.AudibleUpdateSourceCallback
// [0x00020400] 
struct AAkMultipointEmitter_execAudibleUpdateSourceCallback_Params
{
	class URAkAudible*                                 akAud;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           hasSource;                                        // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(AAkMultipointEmitter_execAudibleUpdateSourceCallback_Params, hasSource) == 0x0008);
static_assert(sizeof(AAkMultipointEmitter_execAudibleUpdateSourceCallback_Params) >= 0x000C);

// Function AkAudio.AkMultipointEmitter.UnlinkToActor
// [0x00020802] 
struct AAkMultipointEmitter_eventUnlinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkMultipointEmitter_eventUnlinkToActor_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkMultipointEmitter_eventUnlinkToActor_Params) >= 0x000C);

// Function AkAudio.AkMultipointEmitter.LinkToActor
// [0x00020802] 
struct AAkMultipointEmitter_eventLinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkMultipointEmitter_eventLinkToActor_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkMultipointEmitter_eventLinkToActor_Params) >= 0x000C);

// Function AkAudio.AkRattleEmitter.HandleUnlink
// [0x00020401] 
struct AAkRattleEmitter_execHandleUnlink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkRattleEmitter_execHandleUnlink_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkRattleEmitter_execHandleUnlink_Params) >= 0x000C);

// Function AkAudio.AkRattleEmitter.HandleLink
// [0x00020401] 
struct AAkRattleEmitter_execHandleLink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkRattleEmitter_execHandleLink_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkRattleEmitter_execHandleLink_Params) >= 0x000C);

// Function AkAudio.AkRattleEmitter.ApplyEmitterSpatial
// [0x00020400] 
struct AAkRattleEmitter_execApplyEmitterSpatial_Params
{
};

// Function AkAudio.AkRattleEmitter.GetAudioSpatial
// [0x00424400] 
struct AAkRattleEmitter_execGetAudioSpatial_Params
{
	struct FVector                                     sndPosition;                                      // 0x0000 (0x000C) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    sndOrientation;                                   // 0x000C (0x000C) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	class UObject*                                     caller;                                           // 0x0018 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(AAkRattleEmitter_execGetAudioSpatial_Params, caller) == 0x0018);
static_assert(sizeof(AAkRattleEmitter_execGetAudioSpatial_Params) >= 0x0020);

// Function AkAudio.AkRattleEmitter.UnlinkToActor
// [0x00020802] 
struct AAkRattleEmitter_eventUnlinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkRattleEmitter_eventUnlinkToActor_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkRattleEmitter_eventUnlinkToActor_Params) >= 0x000C);

// Function AkAudio.AkRattleEmitter.LinkToActor
// [0x00020802] 
struct AAkRattleEmitter_eventLinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(AAkRattleEmitter_eventLinkToActor_Params, ReturnValue) == 0x0008);
static_assert(sizeof(AAkRattleEmitter_eventLinkToActor_Params) >= 0x000C);

// Function AkAudio.AkManagedEmitter.DisableEmitter
// [0x00020401] 
struct AAkManagedEmitter_execDisableEmitter_Params
{
};

// Function AkAudio.AkManagedEmitter.EnableEmitter
// [0x00020401] 
struct AAkManagedEmitter_execEnableEmitter_Params
{
};

// Function AkAudio.AkManagedEmitter.OnToggleHidden
// [0x40020102] 
struct AAkManagedEmitter_execOnToggleHidden_Params
{
	class USeqAct_ToggleHidden*                        Action;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkManagedEmitter_execOnToggleHidden_Params, Action) == 0x0000);
static_assert(sizeof(AAkManagedEmitter_execOnToggleHidden_Params) >= 0x0008);

// Function AkAudio.AkManagedEmitter.OnToggle
// [0x00020103] 
struct AAkManagedEmitter_execOnToggle_Params
{
	class USeqAct_Toggle*                              ToggleAction;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkManagedEmitter_execOnToggle_Params, ToggleAction) == 0x0000);
static_assert(sizeof(AAkManagedEmitter_execOnToggle_Params) >= 0x0008);

// Function AkAudio.AkProximityTracker.OnToggle
// [0x00020103] 
struct AAkProximityTracker_execOnToggle_Params
{
	class USeqAct_Toggle*                              ToggleAction;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkProximityTracker_execOnToggle_Params, ToggleAction) == 0x0000);
static_assert(sizeof(AAkProximityTracker_execOnToggle_Params) >= 0x0008);

// Function AkAudio.AkRandomVolume.DisableRandomVolume
// [0x00020401] 
struct AAkRandomVolume_execDisableRandomVolume_Params
{
};

// Function AkAudio.AkRandomVolume.EnableRandomVolume
// [0x00020401] 
struct AAkRandomVolume_execEnableRandomVolume_Params
{
};

// Function AkAudio.AkRandomVolume.OnToggle
// [0x00020102] 
struct AAkRandomVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              ToggleAction;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkRandomVolume_execOnToggle_Params, ToggleAction) == 0x0000);
static_assert(sizeof(AAkRandomVolume_execOnToggle_Params) >= 0x0008);

// Function AkAudio.AkSDEntity.GetVariableName
// [0x00020401] 
struct UAkSDEntity_execGetVariableName_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UAkSDEntity_execGetVariableName_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDEntity_execGetVariableName_Params) >= 0x0010);

// Function AkAudio.AkSDRelationship.Evaluate
// [0x00020400] 
struct UAkSDRelationship_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationship_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationship_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipAlways.Evaluate
// [0x00020400] 
struct UAkSDRelationshipAlways_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipAlways_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipAlways_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipEqual_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipEqual_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipEvery.Evaluate
// [0x00020400] 
struct UAkSDRelationshipEvery_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipEvery_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipEvery_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipGreaterThan.Evaluate
// [0x00020400] 
struct UAkSDRelationshipGreaterThan_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipGreaterThan_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipGreaterThan_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipGreaterThanEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipGreaterThanEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipGreaterThanEqual_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipGreaterThanEqual_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipHasChanged.Evaluate
// [0x00020400] 
struct UAkSDRelationshipHasChanged_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipHasChanged_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipHasChanged_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipIn.Evaluate
// [0x00020400] 
struct UAkSDRelationshipIn_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipIn_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipIn_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipIsFalse.Evaluate
// [0x00020400] 
struct UAkSDRelationshipIsFalse_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipIsFalse_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipIsFalse_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipIsTrue.Evaluate
// [0x00020400] 
struct UAkSDRelationshipIsTrue_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipIsTrue_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipIsTrue_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipLessThan.Evaluate
// [0x00020400] 
struct UAkSDRelationshipLessThan_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipLessThan_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipLessThan_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipLessThanEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipLessThanEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipLessThanEqual_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipLessThanEqual_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipNotEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipNotEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipNotEqual_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipNotEqual_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipOnce.Evaluate
// [0x00020400] 
struct UAkSDRelationshipOnce_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipOnce_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipOnce_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipSymbolEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipSymbolEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipSymbolEqual_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipSymbolEqual_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipSymbolNotEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipSymbolNotEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipSymbolNotEqual_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipSymbolNotEqual_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkSDRelationshipSymbolValid.Evaluate
// [0x00020400] 
struct UAkSDRelationshipSymbolValid_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UAkSDRelationshipSymbolValid_execEvaluate_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UAkSDRelationshipSymbolValid_execEvaluate_Params) >= 0x0004);

// Function AkAudio.AkWhoosh.DisableWhoosh
// [0x00020400] 
struct AAkWhoosh_execDisableWhoosh_Params
{
};

// Function AkAudio.AkWhoosh.EnableWhoosh
// [0x00020400] 
struct AAkWhoosh_execEnableWhoosh_Params
{
};

// Function AkAudio.AkWhoosh.OnToggle
// [0x00020102] 
struct AAkWhoosh_execOnToggle_Params
{
	class USeqAct_Toggle*                              ToggleAction;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkWhoosh_execOnToggle_Params, ToggleAction) == 0x0000);
static_assert(sizeof(AAkWhoosh_execOnToggle_Params) >= 0x0008);

// Function AkAudio.AkWhooshVolume.UnTouch
// [0x00020802] 
struct AAkWhooshVolume_eventUnTouch_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkWhooshVolume_eventUnTouch_Params, Other) == 0x0000);
static_assert(sizeof(AAkWhooshVolume_eventUnTouch_Params) >= 0x0008);

// Function AkAudio.AkWhooshVolume.Touch
// [0x00020802] 
struct AAkWhooshVolume_eventTouch_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        // 0x0008 (0x0008) [0x0000004000000008] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      // 0x0010 (0x000C) [0x0000000000000008] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        // 0x001C (0x000C) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(AAkWhooshVolume_eventTouch_Params, HitNormal) == 0x001C);
static_assert(sizeof(AAkWhooshVolume_eventTouch_Params) >= 0x0028);

// Function AkAudio.AkWhooshVolume.HandleTouchInOut
// [0x00020401] 
struct AAkWhooshVolume_execHandleTouchInOut_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           otherIsTouching;                                  // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(AAkWhooshVolume_execHandleTouchInOut_Params, otherIsTouching) == 0x0008);
static_assert(sizeof(AAkWhooshVolume_execHandleTouchInOut_Params) >= 0x000C);

// Function AkAudio.SeqAct_AkAudioEvent.SoundCallback
// [0x00020003] 
struct USeqAct_AkAudioEvent_execSoundCallback_Params
{
	int32_t                                            CallbackFlags;                                    // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	struct FAkSoundHandle                              SoundHandle;                                      // 0x0004 (0x0010) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            MarkerID;                                         // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              Duration;                                         // 0x0018 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(USeqAct_AkAudioEvent_execSoundCallback_Params, Duration) == 0x0018);
static_assert(sizeof(USeqAct_AkAudioEvent_execSoundCallback_Params) >= 0x001C);

// Function AkAudio.SeqAct_AkAudioEventLoop.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkAudioEventLoop_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkAudioEventLoop_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkAudioEventLoop_eventGetObjClassVersion_Params) >= 0x0004);

// Function AkAudio.SeqAct_AkAudioParameter.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkAudioParameter_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkAudioParameter_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkAudioParameter_eventGetObjClassVersion_Params) >= 0x0004);

// Function AkAudio.SeqAct_AkDialogueGetSpeechDuration.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueGetSpeechDuration_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkDialogueGetSpeechDuration_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkDialogueGetSpeechDuration_eventGetObjClassVersion_Params) >= 0x0004);

// Function AkAudio.SeqAct_AkDialogueLockType.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueLockType_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkDialogueLockType_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkDialogueLockType_eventGetObjClassVersion_Params) >= 0x0004);

// Function AkAudio.SeqAct_AkDialogueLockVoice.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueLockVoice_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkDialogueLockVoice_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkDialogueLockVoice_eventGetObjClassVersion_Params) >= 0x0004);

// Function AkAudio.SeqAct_AkDialogueSetVoice.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueSetVoice_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkDialogueSetVoice_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkDialogueSetVoice_eventGetObjClassVersion_Params) >= 0x0004);

// Function AkAudio.SeqAct_AkDialogueSetVoiceSubtitle.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueSetVoiceSubtitle_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkDialogueSetVoiceSubtitle_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkDialogueSetVoiceSubtitle_eventGetObjClassVersion_Params) >= 0x0004);

// Function AkAudio.SeqAct_AkDialogueStartSpeech.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueStartSpeech_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkDialogueStartSpeech_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkDialogueStartSpeech_eventGetObjClassVersion_Params) >= 0x0004);

// Function AkAudio.SeqAct_AkComponentSettings.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkComponentSettings_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkComponentSettings_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkComponentSettings_eventGetObjClassVersion_Params) >= 0x0004);

// Function AkAudio.SeqAct_AkMusicReplace.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkMusicReplace_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkMusicReplace_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkMusicReplace_eventGetObjClassVersion_Params) >= 0x0004);

// Function AkAudio.SeqAct_AkSetFact.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkSetFact_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(USeqAct_AkSetFact_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(USeqAct_AkSetFact_eventGetObjClassVersion_Params) >= 0x0004);

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
