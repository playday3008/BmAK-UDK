/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: BmScript_structs.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#include "../GameDefines.hpp"

#include "BmGame_structs.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct BmScript.RGFxMovieBackScreen_Normal.SubMapDefault
// 0x001C
struct FSubMapDefault
{
	class FString                                      MapName;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              Rotation;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Elevation;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmScript.RGFxMovieBackScreen_Normal.DialogEntry
// 0x002C
struct FDialogEntry
{
	class FString                                      RefName;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UAkHash*                                     AkLineRef;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	class FString                                      Who;                                           // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           KillOnClose : 1;                               // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmScript.RGFxMovieBackScreen_Normal.PromptEntry
// 0x0014
struct FPromptEntry
{
	uint8_t                                            Id;                                            // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Label;                                         // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmScript.RHelicopterIntermediate.HelicopterHighPriorityTarget
// 0x0010
struct FHelicopterHighPriorityTarget
{
	class AActor*                                      ActorTarget;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              HorizontalRadiusSqrd;                          // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           IgnoreLineOfSight : 1;                         // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmScript.RProjectile_Grenade_Incendiary.chargeInfo
// 0x0060
struct FchargeInfo
{
	int32_t                                            Depth;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bValid : 1;                                    // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	class ARIncendiaryGrenadeCharge*                   spawnedCharge;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     SpawnLoc;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	class ARTunnelGrateBase*                           Grate;                                         // 0x001C (0x0008) [0x0000000000000000]               
	struct FVector                                     prevLoc;                                       // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     toNeighbourOffsets[4];                         // 0x0030 (0x0030) [0x0000000000000000]               
};

// ScriptStruct BmScript.RSpecialMoveConfig_HangOnHelicopter.GlideOutAnim
// 0x005C
struct FGlideOutAnim
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FCapeStateChangeData                        CapeState;                                     // 0x0008 (0x004C) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxYaw;                                        // 0x0054 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MinYaw;                                        // 0x0058 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmScript.RPresurePad.PressurePadMICList
// 0x0010
struct FPressurePadMICList
{
	class UMaterialInstanceConstant*                   WaitingForInputMIC;                            // 0x0000 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   TriggeredMIC;                                  // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmScript.RSeqAct_GetZoneWithMostSecretsLeft.BestCountArray
// 0x0008
struct FBestCountArray
{
	int32_t                                            OutputLink;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmScript.RSeqAct_PenguinCarChase.droppedBoxInfo
// 0x000C
struct FdroppedBoxInfo
{
	class ARKActorSpawnable*                           Box;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              SpawnTime;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmScript.RSeqAct_SideStory_IconControl.SS_IconEntry
// 0x0014
struct FSS_IconEntry
{
	class FString                                      IconName;                                      // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bAddToAutoPan : 1;                             // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmScript.RSpecialMoveConfig_OpenGrate.YankStage
// 0x00B4
struct FYankStage
{
	class FName                                        YankAnim;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        IdleAnim;                                      // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FBMScreenShakeStruct                        ScreenShake;                                   // 0x0010 (0x009C) [0x0000000100000000] (CPF_Edit)    
	class UForceFeedbackWaveform*                      ControllerShake;                               // 0x00AC (0x0008) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct BmScript.RSpecialMoveConfig_OpenGrate.StruggleSequence
// 0x003C
struct FStruggleSequence
{
	class FName                                        StartAnim;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        StartIdle;                                     // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        StrainAnim;                                    // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        StrainCapeState;                               // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        FinishAnim;                                    // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        StruggleCameraAnim;                            // 0x0028 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SuccessCameraAnim;                             // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              PullAngle;                                     // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmScript.RSeqAct_Rain.RockRainMapSettings
// 0x0024
struct FRockRainMapSettings
{
	float                                              WetnessGlobalScale;                            // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinimumDampAmount;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DampThreshold;                                 // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PuddleThreshold;                               // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Darkening;                                     // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RainWakeFrequency;                             // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              RainWakeAmount;                                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              RainWakeSpeed;                                 // 0x001C (0x0004) [0x0000000000000000]               
	float                                              RainWakeVariation;                             // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmScript.RBMBehaviour_FireflyFlee.dialogueTimingInfo
// 0x0010
struct FdialogueTimingInfo
{
	float                                              lastTriggeredTime;                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              minTimeBetweenTriggers;                        // 0x0004 (0x0004) [0x0000000000000000]               
	class FName                                        EventFlag;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmScript.RSeqAct_IntegratedChallengeControl.ChallengeGoal
// 0x0008
struct FChallengeGoal
{
	int32_t                                            Time;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Score;                                         // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmScript.RSeqAct_IntegratedChallengeControl.RivalGoalData
// 0x0008
struct FRivalGoalData
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Score;                                         // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
