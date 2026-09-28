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

// Function AkAudio.AkAudioVolume.HandleUnlink
// [0x00020401] 
struct AAkAudioVolume_execHandleUnlink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkAudioVolume.HandleLink
// [0x00020401] 
struct AAkAudioVolume_execHandleLink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

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
	uint32_t                                           otherIsTouching : 1;                              // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function AkAudio.AkAudioVolume.GetAudioSpatial
// [0x00424400] 
struct AAkAudioVolume_execGetAudioSpatial_Params
{
	struct FVector                                     sndPosition;                                      // 0x0000 (0x000C) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    sndOrientation;                                   // 0x000C (0x000C) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	class UObject*                                     caller;                                           // 0x0018 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
};

// Function AkAudio.AkAudioVolume.UnlinkToActor
// [0x00020400] 
struct AAkAudioVolume_execUnlinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkAudioVolume.LinkToActor
// [0x00020802] 
struct AAkAudioVolume_eventLinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkAudioVolume.OverrideDefaultAkAudibleSetup
// [0x00020802] 
struct AAkAudioVolume_eventOverrideDefaultAkAudibleSetup_Params
{
	class URAkAudible*                                 akAud;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function AkAudio.AkAudioVolume.UnTouch
// [0x00020802] 
struct AAkAudioVolume_eventUnTouch_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function AkAudio.AkAudioVolume.Touch
// [0x00020802] 
struct AAkAudioVolume_eventTouch_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        // 0x0008 (0x0008) [0x0000004000000008] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      // 0x0010 (0x000C) [0x0000000000000008] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        // 0x001C (0x000C) [0x0000000000000008] (CPF_Parm)    
};

// Function AkAudio.AkDialogueTape.Stop
// [0x00022401] 
struct UAkDialogueTape_execStop_Params
{
	class UAkDialogueTape*                             dlgTape;                                          // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function AkAudio.AkDialogueTape.Start
// [0x00022401] 
struct UAkDialogueTape_execStart_Params
{
	class UAkDialogueTape*                             dlgTape;                                          // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	struct FAkSpeechOptions                            dlgCallbacks;                                     // 0x0008 (0x0074) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x007C (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

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

// Function AkAudio.AkEmitter.OnToggle
// [0x00020103] 
struct AAkEmitter_execOnToggle_Params
{
	class USeqAct_Toggle*                              ToggleAction;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function AkAudio.AkLightEmitter.HandleUnlink
// [0x00020401] 
struct AAkLightEmitter_execHandleUnlink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkLightEmitter.HandleLink
// [0x00020401] 
struct AAkLightEmitter_execHandleLink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkLightEmitter.UnlinkToActor
// [0x00020802] 
struct AAkLightEmitter_eventUnlinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkLightEmitter.LinkToActor
// [0x00020802] 
struct AAkLightEmitter_eventLinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

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
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkMultipointEmitter.HandleLink
// [0x00020401] 
struct AAkMultipointEmitter_execHandleLink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

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

// Function AkAudio.AkMultipointEmitter.GetAkAudible
// [0x00024400] 
struct AAkMultipointEmitter_execGetAkAudible_Params
{
	uint32_t                                           allowCreate : 1;                                  // 0x0000 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class URAkAudible*                                 ReturnValue;                                      // 0x0004 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkMultipointEmitter.AudibleUpdateSourceCallback
// [0x00020400] 
struct AAkMultipointEmitter_execAudibleUpdateSourceCallback_Params
{
	class URAkAudible*                                 akAud;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           hasSource : 1;                                    // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function AkAudio.AkMultipointEmitter.UnlinkToActor
// [0x00020802] 
struct AAkMultipointEmitter_eventUnlinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkMultipointEmitter.LinkToActor
// [0x00020802] 
struct AAkMultipointEmitter_eventLinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRattleEmitter.HandleUnlink
// [0x00020401] 
struct AAkRattleEmitter_execHandleUnlink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRattleEmitter.HandleLink
// [0x00020401] 
struct AAkRattleEmitter_execHandleLink_Params
{
	class AActor*                                      Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

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

// Function AkAudio.AkRattleEmitter.UnlinkToActor
// [0x00020802] 
struct AAkRattleEmitter_eventUnlinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkRattleEmitter.LinkToActor
// [0x00020802] 
struct AAkRattleEmitter_eventLinkToActor_Params
{
	class AActor*                                      LinkTarget;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

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

// Function AkAudio.AkManagedEmitter.OnToggle
// [0x00020103] 
struct AAkManagedEmitter_execOnToggle_Params
{
	class USeqAct_Toggle*                              ToggleAction;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function AkAudio.AkProximityTracker.OnToggle
// [0x00020103] 
struct AAkProximityTracker_execOnToggle_Params
{
	class USeqAct_Toggle*                              ToggleAction;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

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

// Function AkAudio.AkSDEntity.GetVariableName
// [0x00020401] 
struct UAkSDEntity_execGetVariableName_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function AkAudio.AkSDRelationship.Evaluate
// [0x00020400] 
struct UAkSDRelationship_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipAlways.Evaluate
// [0x00020400] 
struct UAkSDRelationshipAlways_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipEvery.Evaluate
// [0x00020400] 
struct UAkSDRelationshipEvery_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipGreaterThan.Evaluate
// [0x00020400] 
struct UAkSDRelationshipGreaterThan_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipGreaterThanEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipGreaterThanEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipHasChanged.Evaluate
// [0x00020400] 
struct UAkSDRelationshipHasChanged_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipIn.Evaluate
// [0x00020400] 
struct UAkSDRelationshipIn_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipIsFalse.Evaluate
// [0x00020400] 
struct UAkSDRelationshipIsFalse_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipIsTrue.Evaluate
// [0x00020400] 
struct UAkSDRelationshipIsTrue_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipLessThan.Evaluate
// [0x00020400] 
struct UAkSDRelationshipLessThan_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipLessThanEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipLessThanEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipNotEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipNotEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipOnce.Evaluate
// [0x00020400] 
struct UAkSDRelationshipOnce_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipSymbolEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipSymbolEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipSymbolNotEqual.Evaluate
// [0x00020400] 
struct UAkSDRelationshipSymbolNotEqual_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.AkSDRelationshipSymbolValid.Evaluate
// [0x00020400] 
struct UAkSDRelationshipSymbolValid_execEvaluate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

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

// Function AkAudio.AkWhooshVolume.UnTouch
// [0x00020802] 
struct AAkWhooshVolume_eventUnTouch_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};

// Function AkAudio.AkWhooshVolume.Touch
// [0x00020802] 
struct AAkWhooshVolume_eventTouch_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        // 0x0008 (0x0008) [0x0000004000000008] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      // 0x0010 (0x000C) [0x0000000000000008] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        // 0x001C (0x000C) [0x0000000000000008] (CPF_Parm)    
};

// Function AkAudio.AkWhooshVolume.HandleTouchInOut
// [0x00020401] 
struct AAkWhooshVolume_execHandleTouchInOut_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           otherIsTouching : 1;                              // 0x0008 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};

// Function AkAudio.SeqAct_AkAudioEvent.SoundCallback
// [0x00020003] 
struct USeqAct_AkAudioEvent_execSoundCallback_Params
{
	int32_t                                            CallbackFlags;                                    // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	struct FAkSoundHandle                              SoundHandle;                                      // 0x0004 (0x0010) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            MarkerID;                                         // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              Duration;                                         // 0x0018 (0x0004) [0x0000000000000008] (CPF_Parm)    
};

// Function AkAudio.SeqAct_AkAudioEventLoop.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkAudioEventLoop_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.SeqAct_AkAudioParameter.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkAudioParameter_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.SeqAct_AkDialogueGetSpeechDuration.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueGetSpeechDuration_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.SeqAct_AkDialogueLockType.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueLockType_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.SeqAct_AkDialogueLockVoice.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueLockVoice_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.SeqAct_AkDialogueSetVoice.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueSetVoice_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.SeqAct_AkDialogueSetVoiceSubtitle.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueSetVoiceSubtitle_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.SeqAct_AkDialogueStartSpeech.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkDialogueStartSpeech_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.SeqAct_AkComponentSettings.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkComponentSettings_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.SeqAct_AkMusicReplace.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkMusicReplace_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function AkAudio.SeqAct_AkSetFact.GetObjClassVersion
// [0x00022802] 
struct USeqAct_AkSetFact_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
