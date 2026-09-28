/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: BmGame_structs.hpp
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

// ScriptStruct BmGame.MAEC_AttractEnemiesWithSound.PossibleSpot
// 0x0014
struct FPossibleSpot
{
	class ARPawnVillain*                               Villain;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Point;                                         // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.MAEC_AttractEnemiesWithSound.PossibleSpotIndexAndNavHandle
// 0x000C
struct FPossibleSpotIndexAndNavHandle
{
	int32_t                                            SpotIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class URNavigationHandle*                          NavHandle;                                     // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.MAEC_AttractEnemiesWithSound.PathfindingController
// 0x0024
struct FPathfindingController
{
	uint32_t                                           StartedPathfinding : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class URNavigationHandle*                          PrimaryNavHandle;                              // 0x0004 (0x0008) [0x0000000000000000]               
	class TArray<struct FPossibleSpotIndexAndNavHandle> SpotAndNavPoint;                               // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class ARBMAIController*                            Controller;                                    // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.MAEC_AttractEnemiesWithSound.AttractedThugData
// 0x000C
struct FAttractedThugData
{
	uint8_t                                            ThugState;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	class ARBMAIController*                            Controller;                                    // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBarkFlagBase.BarkFlag
// 0x0014
struct FBarkFlag
{
	uint8_t                                            FlagType;                                      // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class TArray<class FName>                          FlagName;                                      // 0x0004 (0x0010) [0x0000040100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAEC_Smoke_Outsider.WatcherSearch
// 0x000C
struct FWatcherSearch
{
	uint32_t                                           bIgnoreIfPathTooLong : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class URMultiNavHandleWrapper*                     MultiNav;                                      // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RExitPoints.ExitPointPair
// 0x001C
struct FExitPointPair
{
	class TArray<struct FVector>                       TargetEdges;                                   // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     ViewEdge;                                      // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimConfig.FullyCustomAdditiveAnimConfig
// 0x0018
struct FFullyCustomAdditiveAnimConfig
{
	class UAnimSequence*                               AddAnim;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSequence*                               SubtractAnim;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            SubtractMode;                                  // 0x0010 (0x0001) [0x0000000000000000]               
	uint32_t                                           EnableModelspaceHandBlending : 1;              // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimConfig.CustomAdditiveAnimConfig
// 0x0028
struct FCustomAdditiveAnimConfig
{
	class FName                                        AddAnim;                                       // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSequence*                               CustomAddAnim;                                 // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SubtractAnim;                                  // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSequence*                               CustomSubtractAnim;                            // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            SubtractMode;                                  // 0x0020 (0x0001) [0x0000000000000000]               
	uint32_t                                           EnableModelspaceHandBlending : 1;              // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimConfig.Weight
// 0x0004
struct FWeight
{
	float                                              Value;                                         // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAnimConfig.AdditiveAnimConfig
// 0x001C
struct FAdditiveAnimConfig
{
	class FName                                        AddAnim;                                       // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SubtractAnim;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            SubtractMode;                                  // 0x0010 (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FWeight                                     Weight;                                        // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           EnableModelspaceHandBlending : 1;              // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimConfig.CustomAnimConfig
// 0x0034
struct FCustomAnimConfig
{
	class FName                                        FullBodyAnim;                                  // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSequence*                               CustomFullBodyAnim;                            // 0x0008 (0x0008) [0x0000000100000400] (CPF_Edit | CPF_Transient)
	class FName                                        UpperBodyAnim;                                 // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSequence*                               CustomUpperBodyAnim;                           // 0x0018 (0x0008) [0x0000000100000400] (CPF_Edit | CPF_Transient)
	class URAimingConfig*                              AimingConfig;                                  // 0x0020 (0x0008) [0x0000000100000400] (CPF_Edit | CPF_Transient)
	class URDirectionalAnimConfig*                     Directions;                                    // 0x0028 (0x0008) [0x0000000100000400] (CPF_Edit | CPF_Transient)
	uint32_t                                           DontConsumeAdditiveWeight : 1;                 // 0x0030 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           ModelspaceUpperBody : 1;                       // 0x0030 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct BmGame.RAnimConfig.AnimConfig
// 0x0028
struct FAnimConfig
{
	class FName                                        FullBodyAnim;                                  // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        UpperBodyAnim;                                 // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URAimingConfig*                              AimingConfig;                                  // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URDirectionalAnimConfig*                     Directions;                                    // 0x0018 (0x0008) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	uint8_t                                            AdditiveSubtractMode;                          // 0x0020 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           DontConsumeAdditiveWeight : 1;                 // 0x0024 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           ModelspaceUpperBody : 1;                       // 0x0024 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct BmGame.RPoseConfig.Transition
// 0x00A0
struct FTransition
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        MovementStanceA;                               // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        MovementStanceB;                               // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        WeaponStanceA;                                 // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        WeaponStanceB;                                 // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        IdleStanceA;                                   // 0x0028 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        IdleStanceB;                                   // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MirroredA;                                     // 0x0038 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MirroredB;                                     // 0x0039 (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FAnimConfig                                 A2B;                                           // 0x003C (0x0028) [0x0000000100000000] (CPF_Edit)    
	struct FAnimConfig                                 B2A;                                           // 0x0064 (0x0028) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           Additive : 1;                                  // 0x008C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint8_t                                            MagicGadgetBlend;                              // 0x0090 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           AllowTurningToAim : 1;                         // 0x0094 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bRenderFlipped : 1;                            // 0x0094 (0x0004) [0x0000080000000000] [0x00000002] (CPF_EditorOnly)
	int32_t                                            NodePosX;                                      // 0x0098 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	int32_t                                            NodePosY;                                      // 0x009C (0x0004) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct BmGame.RPoseConfig.OverlayDescription
// 0x0030
struct FOverlayDescription
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FAnimConfig                                 Anims;                                         // 0x0008 (0x0028) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RPoseConfig.MovementAnim
// 0x0084
struct FMovementAnim
{
	uint8_t                                            Speed;                                         // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FAnimConfig                                 Anims;                                         // 0x0004 (0x0028) [0x0000000100000000] (CPF_Edit)    
	struct FAnimConfig                                 LeftAnims;                                     // 0x002C (0x0028) [0x0000000100000000] (CPF_Edit)    
	struct FAnimConfig                                 RightAnims;                                    // 0x0054 (0x0028) [0x0000000100000000] (CPF_Edit)    
	float                                              LeftRightYawVelocity;                          // 0x007C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           Optional : 1;                                  // 0x0080 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RPoseConfig.StrafeMovementAnim
// 0x0030
struct FStrafeMovementAnim
{
	struct FAnimConfig                                 Anim;                                          // 0x0000 (0x0028) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            Speed;                                         // 0x0028 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            DirectionBlendGroup;                           // 0x0029 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           ReuseWithMirroring : 1;                        // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Optional : 1;                                  // 0x002C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Disabled : 1;                                  // 0x002C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct BmGame.RPoseConfig.Movement
// 0x0080
struct FMovement
{
	class TArray<struct FMovementAnim>                 Anims;                                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FStrafeMovementAnim>           StrafeAnims;                                   // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FAnimConfig                                 Fall;                                          // 0x0020 (0x0028) [0x0000000100000000] (CPF_Edit)    
	struct FAnimConfig                                 Land;                                          // 0x0048 (0x0028) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            Style;                                         // 0x0070 (0x0001) [0x0000000000000000]               
	uint32_t                                           ForceAllowStrafe : 1;                          // 0x0074 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class UAnimSet*                                    AnimSet;                                       // 0x0078 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RPoseConfig.AdditiveDescription
// 0x0010
struct FAdditiveDescription
{
	class FName                                        Add;                                           // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        Subtract;                                      // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RPoseConfig.RandomIdleOverlays
// 0x0018
struct FRandomIdleOverlays
{
	class UAnimSet*                                    AnimSet;                                       // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    AdditiveAnimSet;                               // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              MinTime;                                       // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxTime;                                       // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RPoseConfig.ChaserConfig
// 0x000C
struct FChaserConfig
{
	float                                              Strength;                                      // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxVelocity;                                   // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxAccel;                                      // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RPoseConfig.AimingTransitionTiming
// 0x000C
struct FAimingTransitionTiming
{
	float                                              InDuration;                                    // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OutDuration;                                   // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SpringStrength;                                // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameInfo.FloorMovementCorrectionConfig
// 0x0014
struct FFloorMovementCorrectionConfig
{
	float                                              Along;                                         // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Up;                                            // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Down;                                          // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Orientation;                                   // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OrientationPivotZ;                             // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameInfo.FloorCorrectionConfig
// 0x002C
struct FFloorCorrectionConfig
{
	struct FFloorMovementCorrectionConfig              Standing;                                      // 0x0000 (0x0014) [0x0000000100000000] (CPF_Edit)    
	struct FFloorMovementCorrectionConfig              Moving;                                        // 0x0014 (0x0014) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           OnCeiling : 1;                                 // 0x0028 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           CatwomanCrawlingHack : 1;                      // 0x0028 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct BmGame.RPoseConfig.Pose
// 0x01A4
struct FPose
{
	class FName                                        MovementStance;                                // 0x0000 (0x0008) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	class FName                                        WeaponStance;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        IdleStance;                                    // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FAnimConfig                                 Idle;                                          // 0x0018 (0x0028) [0x0000000100000000] (CPF_Edit)    
	struct FAdditiveAnimConfig                         AdditiveIdle;                                  // 0x0040 (0x001C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           AllowTurningToAim : 1;                         // 0x005C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           AllowIndependentAiming : 1;                    // 0x005C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           AllowCatchUpToAimAtWhileTurning : 1;           // 0x005C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           UseAlternativeMovementTransitionDurations : 1; // 0x005C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint8_t                                            AllowMirroring;                                // 0x0060 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            AllowAutomaticMirroring;                       // 0x0061 (0x0001) [0x0000000000080000] (CPF_Deprecated)
	class TArray<struct FOverlayDescription>           Overlays;                                      // 0x0064 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	struct FMovement                                   Movement;                                      // 0x0074 (0x0080) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FAdditiveDescription>          AdditiveAnims;                                 // 0x00F4 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	struct FRandomIdleOverlays                         RandomIdleOverlays;                            // 0x0104 (0x0018) [0x0000000100000000] (CPF_Edit)    
	struct FChaserConfig                               LegYawConfig;                                  // 0x011C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FChaserConfig                               RunLegYawConfig;                               // 0x0128 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FChaserConfig                               LegDirectionConfig;                            // 0x0134 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FAimingTransitionTiming                     AimAtTiming;                                   // 0x0140 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FAimingTransitionTiming                     LookAtTiming;                                  // 0x014C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     RootBoneTranslationOffset;                     // 0x0158 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FFloorCorrectionConfig                      FloorCorrection;                               // 0x0164 (0x002C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           IdleMirrordnessMatchesFootStepPhase : 1;       // 0x0190 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           ForceTurnsAtLowSpeedScale : 1;                 // 0x0190 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           FallAnimDoesntConsumeMotionWeight : 1;         // 0x0190 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           EnableDisruptorGadgetHacks : 1;                // 0x0190 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bVisibleInOtherPoseConfigs : 1;                // 0x0190 (0x0004) [0x0000080100000000] [0x00000010] (CPF_Edit | CPF_EditorOnly)
	class URAimingConfig*                              AimingConfig;                                  // 0x0194 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NodePosX;                                      // 0x019C (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	int32_t                                            NodePosY;                                      // 0x01A0 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct BmGame.RPoseConfig.AimingTransitionTimingOverride
// 0x0010
struct FAimingTransitionTimingOverride
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FAimingTransitionTiming                     Timing;                                        // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPoseConfig.TurnConfig
// 0x001C
struct FTurnConfig
{
	float                                              AllowedToTurnUnderSpeed;                       // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AllowedToStopOverSpeed;                        // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FaceAtTurnThreshold;                           // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AimAtTurnThreshold;                            // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TurnCancelThreshold;                           // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinAutomaticTurnDuration;                      // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxAutomaticTurnDuration;                      // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameInfo.VisibilityResult
// 0x0014
struct FVisibilityResult
{
	uint32_t                                           bPartiallyOffScreen : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsTooSmall : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsObscured : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bProjectedNotAligned : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bProjectedPartial : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	class TArray<class ARRiddleBase*>                  PartiallyScanned;                              // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPoseConfig.PoseEditorFrame
// 0x0020
struct FPoseEditorFrame
{
	class FString                                      ObjComment;                                    // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            NodePosX;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            NodePosY;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeX;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeY;                                         // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMAIAction.ActionFacingState
// 0x0010
struct FActionFacingState
{
	struct FVector                                     Loc;                                           // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil.YawPitch
// 0x0008
struct FYawPitch
{
	float                                              Yaw;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Pitch;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AimAtTransition
// 0x0030
struct FAimAtTransition
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        Description;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x000C (0x0004) [0x0000000000000000]               
	struct FYawPitch                                   Angle;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              LimitScale;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	struct FYawPitch                                   TargetAngle;                                   // 0x001C (0x0008) [0x0000000000000000]               
	struct FYawPitch                                   AngleVelocity;                                 // 0x0024 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AimAtSample
// 0x0010
struct FAimAtSample
{
	struct FYawPitch                                   Angle;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              LimitScale;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	struct FWeight                                     Weight;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AimAtState
// 0x002C
struct FAimAtState
{
	class TArray<struct FAimAtTransition>              Transitions;                                   // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<struct FAimAtSample>                  Samples;                                       // 0x0010 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	struct FYawPitch                                   ResolvedAngle;                                 // 0x0020 (0x0008) [0x0000000000000000]               
	struct FWeight                                     ResolvedWeight;                                // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.TransitionId
// 0x0004
struct FTransitionId
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.IdleSlavedToDescription
// 0x000C
struct FIdleSlavedToDescription
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FTransitionId                               Transition;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AnimSetToAnimSet
// 0x0010
struct FAnimSetToAnimSet
{
	class UAnimSet*                                    From;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    To;                                            // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.BeginEverythingSlavedToDescription
// 0x001C
struct FBeginEverythingSlavedToDescription
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FTransitionId                               Transition;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class TArray<struct FAnimSetToAnimSet>             AnimSetTable;                                  // 0x000C (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.EndEverythingSlavedToDescription
// 0x0004
struct FEndEverythingSlavedToDescription
{
	struct FTransitionId                               Transition;                                    // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.StanceChangePoseInput
// 0x00A0
struct FStanceChangePoseInput
{
	class FName                                        MovementStance;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        WeaponStance;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        IdleStance;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	class UInterpGroupInst*                            MatineeInterpGroupInst;                        // 0x0018 (0x0008) [0x0000000000000000]               
	class AInventory*                                  Weapon;                                        // 0x0020 (0x0008) [0x0000000000000000]               
	class URWeaponConfig*                              WeaponConfig;                                  // 0x0028 (0x0008) [0x0000000000000000]               
	struct FCustomAnimConfig                           CustomIdle;                                    // 0x0030 (0x0034) [0x0000000000000000]               
	struct FIdleSlavedToDescription                    IdleSlavedTo;                                  // 0x0064 (0x000C) [0x0000000000000000]               
	struct FBeginEverythingSlavedToDescription         BeginEverythingSlavedTo;                       // 0x0070 (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FEndEverythingSlavedToDescription           EndEverythingSlavedTo;                         // 0x008C (0x0004) [0x0000000000000000]               
	uint32_t                                           OverrideIdleStartTimeEnabled : 1;              // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OverrideIdleStartTime;                         // 0x0094 (0x0004) [0x0000000000000000]               
	uint8_t                                            IdleType;                                      // 0x0098 (0x0001) [0x0000000000000000]               
	uint32_t                                           Mirrored : 1;                                  // 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Falling : 1;                                   // 0x009C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RAnimUtil.ResolvedAnimConfig
// 0x0024
struct FResolvedAnimConfig
{
	class UAnimSequence*                               Parts[2];                                      // 0x0000 (0x0010) [0x0000000000000000]               
	class URAimingConfig*                              AimingConfig;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class URResolvedDirectionalAnimConfig*             DirectionalAnims;                              // 0x0018 (0x0008) [0x0000000000000000]               
	uint32_t                                           DontConsumeAdditiveWeight : 1;                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           ModelspaceUpperBody : 1;                       // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.ResolvedMovementAnim
// 0x004C
struct FResolvedMovementAnim
{
	struct FResolvedAnimConfig                         Anim;                                          // 0x0000 (0x0024) [0x0000000000000000]               
	uint8_t                                            DirectionBlendGroup;                           // 0x0024 (0x0001) [0x0000000000000000]               
	float                                              Angle;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                            Speed;                                         // 0x002C (0x0001) [0x0000000000000000]               
	float                                              ActualSpeed;                                   // 0x0030 (0x0004) [0x0000000000000000]               
	class UAnimSequence*                               LeftBankAnim;                                  // 0x0034 (0x0008) [0x0000000000000000]               
	class UAnimSequence*                               RightBankAnim;                                 // 0x003C (0x0008) [0x0000000000000000]               
	float                                              BankYawVelocity;                               // 0x0044 (0x0004) [0x0000000000000000]               
	uint32_t                                           Mirrored : 1;                                  // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsStrafe : 1;                                  // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.ResolvedMovementAnimSpeed
// 0x0008
struct FResolvedMovementAnimSpeed
{
	uint8_t                                            Speed;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            Combination;                                   // 0x0001 (0x0001) [0x0000000000000000]               
	uint32_t                                           HasStrafe : 1;                                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.ResolvedMovementAnims
// 0x0020
struct FResolvedMovementAnims
{
	class TArray<struct FResolvedMovementAnim>         Anims;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FResolvedMovementAnimSpeed>    AnimSpeeds;                                    // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.IdleAnim
// 0x0028
struct FIdleAnim
{
	struct FResolvedAnimConfig                         Anim;                                          // 0x0000 (0x0024) [0x0000000000000000]               
	uint32_t                                           Falling : 1;                                   // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil.ResolvedAdditiveAnimConfig
// 0x0018
struct FResolvedAdditiveAnimConfig
{
	class UAnimSequence*                               Add;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSequence*                               Subtract;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              SubtractTime;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           EnableModelspaceHandBlending : 1;              // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.StanceChangePose
// 0x02DC
struct FStanceChangePose
{
	struct FStanceChangePoseInput                      Input;                                         // 0x0000 (0x00A0) [0x0000000000010000] (CPF_NeedCtorLink)
	class URPoseConfig*                                PoseConfig;                                    // 0x00A0 (0x0008) [0x0000000000000000]               
	class URWeaponConfig*                              WeaponConfig;                                  // 0x00A8 (0x0008) [0x0000000000000000]               
	struct FPose                                       Pose;                                          // 0x00B0 (0x01A4) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FResolvedMovementAnims                      MovementAnims;                                 // 0x0254 (0x0020) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FIdleAnim                                   IdleAnim;                                      // 0x0274 (0x0028) [0x0000000000000000]               
	struct FResolvedAdditiveAnimConfig                 AdditiveIdleAnim;                              // 0x029C (0x0018) [0x0000000000000000]               
	struct FResolvedAnimConfig                         FallAnim;                                      // 0x02B4 (0x0024) [0x0000000000000000]               
	uint32_t                                           AllowTurningToAim : 1;                         // 0x02D8 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.StanceChangePreviousPoseInput
// 0x0060
struct FStanceChangePreviousPoseInput
{
	class FName                                        MovementStance;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        WeaponStance;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        IdleStance;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           Mirrored : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class AInventory*                                  Weapon;                                        // 0x001C (0x0008) [0x0000000000000000]               
	class URWeaponConfig*                              WeaponConfig;                                  // 0x0024 (0x0008) [0x0000000000000000]               
	struct FCustomAnimConfig                           CustomIdle;                                    // 0x002C (0x0034) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.StanceChangePreviousPose
// 0x006C
struct FStanceChangePreviousPose
{
	struct FStanceChangePreviousPoseInput              Input;                                         // 0x0000 (0x0060) [0x0000000000000000]               
	struct FVector                                     RootBoneTranslationOffset;                     // 0x0060 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.SlavedToTransitionDescription
// 0x0020
struct FSlavedToTransitionDescription
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FTransitionId                               Transition;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            TimeSync;                                      // 0x000C (0x0001) [0x0000000000000000]               
	int32_t                                            OffsetPitch;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            OffsetRoll;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              OffsetZ;                                       // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           AlwaysInferReferencePointTarget : 1;           // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           EvenIfMasterIsRagdoll : 1;                     // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AutomaticTransitionInstance
// 0x0031
struct FAutomaticTransitionInstance
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsEarlyCancel : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           Falling : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           Landing : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           AllowCheekyBlendIn : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	class UAnimSequence*                               Anim;                                          // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              BeginYaw;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              EndYaw;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            DeclaredTurnAngle;                             // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            DeclaredTurnDirection;                         // 0x0015 (0x0001) [0x0000000000000000]               
	float                                              ActualYawDelta;                                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              MinYawDelta;                                   // 0x001C (0x0004) [0x0000000000000000]               
	float                                              MaxYawDelta;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              UndershootMarginAngle;                         // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              OvershootMarginAngle;                          // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                            BeginSpeed;                                    // 0x002C (0x0001) [0x0000000000000000]               
	uint8_t                                            EndSpeed;                                      // 0x002D (0x0001) [0x0000000000000000]               
	uint8_t                                            BeginDirection;                                // 0x002E (0x0001) [0x0000000000000000]               
	uint8_t                                            EndDirection;                                  // 0x002F (0x0001) [0x0000000000000000]               
	uint8_t                                            TurnInstigator;                                // 0x0030 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0031 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.StanceChangeTransitionInput
// 0x00DC
struct FStanceChangeTransitionInput
{
	uint32_t                                           OverrideDurationEnabled : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Queued : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           ForceBlend : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           DontConsumeAdditiveWeight : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           AlwaysAdditiveBlendIn : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint8_t                                            Type;                                          // 0x0004 (0x0001) [0x0000000000000000]               
	class FName                                        Name;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              OverrideDuration;                              // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              DurationScale;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              MeetingPointBegin;                             // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              MeetingPointEnd;                               // 0x001C (0x0004) [0x0000000000000000]               
	uint8_t                                            Mirrored;                                      // 0x0020 (0x0001) [0x0000000000000000]               
	struct FSlavedToTransitionDescription              SlavedTo;                                      // 0x0024 (0x0020) [0x0000000000000000]               
	class AInventory*                                  Weapon;                                        // 0x0044 (0x0008) [0x0000000000000000]               
	class URWeaponConfig*                              WeaponConfig;                                  // 0x004C (0x0008) [0x0000000000000000]               
	struct FCustomAnimConfig                           CustomAnim;                                    // 0x0054 (0x0034) [0x0000000000000000]               
	struct FAutomaticTransitionInstance                AutomaticTransitionInstance;                   // 0x0088 (0x0034) [0x0000000000000000]               
	float                                              CanCancelBeforeHereTime;                       // 0x00BC (0x0004) [0x0000000000000000]               
	float                                              CanCancelAfterHereTime;                        // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              CanCorrectAfterHereTime;                       // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x00C8 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             OnPlayedQueuedTransition;                      // 0x00CC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil.MeetingPoints
// 0x0030
struct FMeetingPoints
{
	struct FVector                                     BeginRotation;                                 // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndRotation;                                   // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     BeginTranslation;                              // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndTranslation;                                // 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.StanceChangeTransition
// 0x017C
struct FStanceChangeTransition
{
	struct FStanceChangeTransitionInput                Input;                                         // 0x0000 (0x00DC) [0x0000000000010000] (CPF_NeedCtorLink)
	class URPoseConfig*                                PoseConfig;                                    // 0x00DC (0x0008) [0x0000000000000000]               
	class URWeaponConfig*                              WeaponConfig;                                  // 0x00E4 (0x0008) [0x0000000000000000]               
	struct FResolvedAnimConfig                         Anim;                                          // 0x00EC (0x0024) [0x0000000000000000]               
	struct FMeetingPoints                              MeetingPoints;                                 // 0x0110 (0x0030) [0x0000000000000000]               
	uint8_t                                            FootSyncPoint;                                 // 0x0140 (0x0001) [0x0000000000000000]               
	uint8_t                                            BeginSpeed;                                    // 0x0141 (0x0001) [0x0000000000000000]               
	uint8_t                                            EndSpeed;                                      // 0x0142 (0x0001) [0x0000000000000000]               
	uint8_t                                            EndDirection;                                  // 0x0143 (0x0001) [0x0000000000000000]               
	uint8_t                                            AdditiveSubtractMode;                          // 0x0144 (0x0001) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0148 (0x0004) [0x0000000000000000]               
	float                                              NormalizedStartTime;                           // 0x014C (0x0004) [0x0000000000000000]               
	uint32_t                                           Mirrored : 1;                                  // 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Additive : 1;                                  // 0x0150 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           AllowTurningToAim : 1;                         // 0x0150 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           CancelsMovement : 1;                           // 0x0150 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           CoversMovement : 1;                            // 0x0150 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           AllowCheekyBlendIn : 1;                        // 0x0150 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           AllowCheekyBlendOut : 1;                       // 0x0150 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           InterpretRelativeTransitionAsRotationOnly : 1; // 0x0150 (0x0004) [0x0000000000000000] [0x00000080] 
	uint8_t                                            MagicGadgetBlend;                              // 0x0154 (0x0001) [0x0000000000000000]               
	float                                              CanCancelBeforeHereTime;                       // 0x0158 (0x0004) [0x0000000000000000]               
	float                                              CanCancelAfterHereTime;                        // 0x015C (0x0004) [0x0000000000000000]               
	float                                              CanCorrectAfterHereTime;                       // 0x0160 (0x0004) [0x0000000000000000]               
	struct FVector                                     BeginRootBoneTranslationOffset;                // 0x0164 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndRootBoneTranslationOffset;                  // 0x0170 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil.NormalizedTimeSpan
// 0x000C
struct FNormalizedTimeSpan
{
	float                                              Current;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Previous;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Wraps;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil.RelativeTarget
// 0x0029
struct FRelativeTarget
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0018 (0x0008) [0x0000000000000000]               
	class UPrimitiveComponent*                         Component;                                     // 0x0020 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint8_t                                            AnimSource;                                    // 0x0028 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0029 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil.DirectionalAnimState
// 0x0034
struct FDirectionalAnimState
{
	struct FWeight                                     Weights[12];                                   // 0x0000 (0x0030) [0x0000000000000000]               
	uint32_t                                           InsideSetWeights : 1;                          // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Active : 1;                                    // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AdditiveState
// 0x0018
struct FAdditiveState
{
	struct FNormalizedTimeSpan                         AddTime;                                       // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              SubtractTime;                                  // 0x000C (0x0004) [0x0000000000000000]               
	struct FWeight                                     Weight;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           EnableNotifies : 1;                            // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AdditiveStates
// 0x0064
struct FAdditiveStates
{
	struct FAdditiveState                              States[4];                                     // 0x0000 (0x0060) [0x0000000000000000]               
	float                                              TotalWeight;                                   // 0x0060 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.IdleState
// 0x0018
struct FIdleState
{
	struct FNormalizedTimeSpan                         Time;                                          // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              TimeScale;                                     // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            RootBoneSubtractionMode;                       // 0x0010 (0x0001) [0x0000000000000000]               
	uint32_t                                           RootBoneExtraction : 1;                        // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IdleMirroredByFootPlacement : 1;               // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           Freeze : 1;                                    // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AdditiveIdleState
// 0x000C
struct FAdditiveIdleState
{
	struct FNormalizedTimeSpan                         Time;                                          // 0x0000 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.RandomOverlayAnimState
// 0x0014
struct FRandomOverlayAnimState
{
	struct FNormalizedTimeSpan                         Time;                                          // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           BlendOut : 1;                                  // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BlendOutNormalizedTime;                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.RandomOverlayAnim
// 0x0010
struct FRandomOverlayAnim
{
	class UAnimSequence*                               Anim;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           Additive : 1;                                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Index;                                         // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.RandomOverlayState
// 0x002C
struct FRandomOverlayState
{
	uint8_t                                            State;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	struct FRandomOverlayAnimState                     AnimState;                                     // 0x0004 (0x0014) [0x0000000000000000]               
	struct FRandomOverlayAnim                          Anim;                                          // 0x0018 (0x0010) [0x0000000000000000]               
	float                                              TimeUntilNext;                                 // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.StanceChangeMatineeAnim
// 0x0014
struct FStanceChangeMatineeAnim
{
	class UAnimSequence*                               Anim;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FNormalizedTimeSpan                         Time;                                          // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.StanceChangeMatinee
// 0x0044
struct FStanceChangeMatinee
{
	struct FStanceChangeMatineeAnim                    Body;                                          // 0x0000 (0x0014) [0x0000000000000000]               
	struct FStanceChangeMatineeAnim                    Face;                                          // 0x0014 (0x0014) [0x0000000000000000]               
	struct FVector                                     MovementTargetPosition;                        // 0x0028 (0x000C) [0x0000000000000000]               
	struct FRotator                                    MovementTargetRotation;                        // 0x0034 (0x000C) [0x0000000000000000]               
	uint32_t                                           MovementTargetValid : 1;                       // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Teleport : 1;                                  // 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           AllowAutomaticTransitionOut : 1;               // 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.StanceChange
// 0x0630
struct FStanceChange
{
	struct FStanceChangePose                           Pose;                                          // 0x0000 (0x02DC) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FStanceChangePreviousPose                   PreviousPose;                                  // 0x02DC (0x006C) [0x0000000000000000]               
	struct FStanceChangeTransition                     Transition;                                    // 0x0348 (0x017C) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FTransitionId                               Id;                                            // 0x04C4 (0x0004) [0x0000000000000000]               
	struct FNormalizedTimeSpan                         Time;                                          // 0x04C8 (0x000C) [0x0000000000000000]               
	struct FRelativeTarget                             RelativeTarget;                                // 0x04D4 (0x002C) [0x0000000000004000] (CPF_Component)
	struct FDirectionalAnimState                       DirectionalAnimState;                          // 0x0500 (0x0034) [0x0000000000000000]               
	struct FAdditiveStates                             AdditiveStates;                                // 0x0534 (0x0064) [0x0000000000000000]               
	struct FIdleState                                  IdleState;                                     // 0x0598 (0x0018) [0x0000000000000000]               
	struct FAdditiveIdleState                          AdditiveIdleState;                             // 0x05B0 (0x000C) [0x0000000000000000]               
	struct FRandomOverlayState                         RandomOverlayState;                            // 0x05BC (0x002C) [0x0000000000000000]               
	struct FStanceChangeMatinee                        Matinee;                                       // 0x05E8 (0x0044) [0x0000000000000000]               
	int32_t                                            DisableTimeAdvanceForNumFrames;                // 0x062C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil.AnimTarget
// 0x002C
struct FAnimTarget
{
	uint32_t                                           Active : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           EnableActor : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class AActor*                                      Actor;                                         // 0x0004 (0x0008) [0x0000000000000000]               
	class FName                                        ActorBoneName;                                 // 0x000C (0x0008) [0x0000000000000000]               
	struct FVector                                     Position;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	uint8_t                                            PositionSpace;                                 // 0x0020 (0x0001) [0x0000000000000000]               
	class FName                                        Description;                                   // 0x0024 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.MoveToRequest
// 0x0035
struct FMoveToRequest
{
	struct FAnimTarget                                 Target;                                        // 0x0000 (0x002C) [0x0000000000000000]               
	uint8_t                                            Speed;                                         // 0x002C (0x0001) [0x0000000000000000]               
	float                                              SpeedScale;                                    // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                            Facing;                                        // 0x0034 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0035 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.FaceAtRequest
// 0x002C
struct FFaceAtRequest
{
	struct FAnimTarget                                 Target;                                        // 0x0000 (0x002C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AimAtRequest
// 0x004C
struct FAimAtRequest
{
	struct FAnimTarget                                 Target;                                        // 0x0000 (0x002C) [0x0000000000000000]               
	uint8_t                                            AllowTurningToAim;                             // 0x002C (0x0001) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              LimitScale;                                    // 0x0034 (0x0004) [0x0000000000000000]               
	struct FAimingTransitionTimingOverride             TimingOverride;                                // 0x0038 (0x0010) [0x0000000000000000]               
	uint32_t                                           Snap : 1;                                      // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.LookAtRequest
// 0x0030
struct FLookAtRequest
{
	struct FAnimTarget                                 Target;                                        // 0x0000 (0x002C) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.MoveToTransition
// 0x0040
struct FMoveToTransition
{
	uint8_t                                            Speed;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            DirectionBlendGroup;                           // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            DirectionInterpolation;                        // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            PreviousSpeed;                                 // 0x0003 (0x0001) [0x0000000000000000]               
	uint32_t                                           CarryOver : 1;                                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SpeedScale;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MovementYaw;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              MovementYawVelocity;                           // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     MovementDirection;                             // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     MovementDirectionVelocity;                     // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              StrafeFacingYaw;                               // 0x002C (0x0004) [0x0000000000000000]               
	float                                              StrafeFacingYawVelocity;                       // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              Time;                                          // 0x0038 (0x0004) [0x0000000000000000]               
	struct FTransitionId                               MinimumTransitionId;                           // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.MoveToState
// 0x0030
struct FMoveToState
{
	class TArray<struct FMoveToTransition>             Transitions;                                   // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	float                                              TargetFacingYaw;                               // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TargetMovementYaw;                             // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FacingYaw;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              FacingYawVelocity;                             // 0x001C (0x0004) [0x0000000000000000]               
	float                                              BlendOutTimeRemaining;                         // 0x0020 (0x0004) [0x0000000000000000]               
	struct FWeight                                     Weight;                                        // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           HackHackHackFirstPerson : 1;                   // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           DeltaForMovementPlayerEnabled : 1;             // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              DeltaForMovementPlayer;                        // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.StanceChangeQueue
// 0x0010
struct FStanceChangeQueue
{
	class TArray<struct FStanceChange>                 Change;                                        // 0x0000 (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.PosePlayer
// 0x019E
struct FPosePlayer
{
	class TArray<struct FStanceChange>                 Changes;                                       // 0x0000 (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
	class AInventory*                                  CurrentWeapon;                                 // 0x0010 (0x0008) [0x0000000000000400] (CPF_Transient)
	class AInventory*                                  PreviousWeapon;                                // 0x0018 (0x0008) [0x0000000000000400] (CPF_Transient)
	struct FTransitionId                               LastTransitionId;                              // 0x0020 (0x0004) [0x0000000000000000]               
	struct FMoveToRequest                              MoveToRequest;                                 // 0x0024 (0x0038) [0x0000000000000000]               
	struct FFaceAtRequest                              FaceAtRequest;                                 // 0x005C (0x002C) [0x0000000000000000]               
	struct FAimAtRequest                               AimAtRequest;                                  // 0x0088 (0x004C) [0x0000000000000000]               
	struct FLookAtRequest                              LookAtRequest;                                 // 0x00D4 (0x0030) [0x0000000000000000]               
	struct FAimAtState                                 AimAtState;                                    // 0x0104 (0x002C) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FAimAtState                                 LookAtState;                                   // 0x0130 (0x002C) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FMoveToState                                MoveToState;                                   // 0x015C (0x0030) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FStanceChangeQueue                          Queue;                                         // 0x018C (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
	uint8_t                                            TemporaryDisableRandomOverlays;                // 0x019C (0x0001) [0x0000000000000400] (CPF_Transient)
	uint8_t                                            MoveToThreshold;                               // 0x019D (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                         // 0x019E (0x0002) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.PendingQueuedTransitionCallback
// 0x001C
struct FPendingQueuedTransitionCallback
{
	uint32_t                                           Active : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FTransitionId                               Id;                                            // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              RealTimeLeftOver;                              // 0x0008 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AngleRange
// 0x0008
struct FAngleRange
{
	float                                              Left;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Right;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil.CyclePhase
// 0x0008
struct FCyclePhase
{
	uint8_t                                            FootSyncPoint;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            LoopIndex;                                     // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil.CycleTime
// 0x000C
struct FCycleTime
{
	struct FCyclePhase                                 Phase;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil.ProportionalMotion
// 0x0044
struct FProportionalMotion
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Teleport : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     TranslationProportion;                         // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     Translation;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     RotationProportion;                            // 0x001C (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0028 (0x000C) [0x0000000000000000]               
	class AActor*                                      DrivingActor;                                  // 0x0034 (0x0008) [0x0000000000000000]               
	class UPrimitiveComponent*                         DrivingComponent;                              // 0x003C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.AimAtChange
// 0x003C
struct FAimAtChange
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        Description;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     Direction;                                     // 0x0010 (0x000C) [0x0000000000000000]               
	struct FYawPitch                                   Angle;                                         // 0x001C (0x0008) [0x0000000000000000]               
	float                                              LimitScale;                                    // 0x0024 (0x0004) [0x0000000000000000]               
	struct FAimingTransitionTimingOverride             TimingOverride;                                // 0x0028 (0x0010) [0x0000000000000000]               
	uint32_t                                           Snap : 1;                                      // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil.NotifyAnim
// 0x001C
struct FNotifyAnim
{
	class UAnimSequence*                               Sequence;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FNormalizedTimeSpan                         Time;                                          // 0x0008 (0x000C) [0x0000000000000000]               
	uint32_t                                           Mirrored : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Weight;                                        // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PosePlayer.MoveToChange
// 0x0024
struct FMoveToChange
{
	uint8_t                                            Speed;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            DirectionBlendGroup;                           // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            DirectionInterpolation;                        // 0x0002 (0x0001) [0x0000000000000000]               
	float                                              FacingYaw;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MovementYaw;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              SpeedScale;                                    // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            Instigator;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	uint32_t                                           DisableAutomaticTransitions : 1;               // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           TargetDistanceEnabled : 1;                     // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              TargetDistance;                                // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           AvoidFacingYawEnabled : 1;                     // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AvoidFacingYaw;                                // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimNode_Pose.PoseDescription
// 0x0168
struct FPoseDescription
{
	class FName                                        MovementStance;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        WeaponStance;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        IdleStance;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            TransitionType;                                // 0x0018 (0x0001) [0x0000000000000000]               
	class FName                                        TransitionName;                                // 0x001C (0x0008) [0x0000000000000000]               
	uint32_t                                           TransitionOverrideDurationEnabled : 1;         // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TransitionOverrideDuration;                    // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              TransitionDurationScale;                       // 0x002C (0x0004) [0x0000000000000000]               
	float                                              TransitionMeetingPointBegin;                   // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              TransitionMeetingPointEnd;                     // 0x0034 (0x0004) [0x0000000000000000]               
	uint8_t                                            TransitionMirrored;                            // 0x0038 (0x0001) [0x0000000000000000]               
	struct FSlavedToTransitionDescription              TransitionSlavedTo;                            // 0x003C (0x0020) [0x0000000000000000]               
	float                                              TransitionStartTime;                           // 0x005C (0x0004) [0x0000000000000000]               
	class AInventory*                                  Weapon;                                        // 0x0060 (0x0008) [0x0000000000000000]               
	class AInventory*                                  TransitionWeapon;                              // 0x0068 (0x0008) [0x0000000000000000]               
	class URWeaponConfig*                              WeaponConfig;                                  // 0x0070 (0x0008) [0x0000000000000000]               
	class URWeaponConfig*                              TransitionWeaponConfig;                        // 0x0078 (0x0008) [0x0000000000000000]               
	struct FCustomAnimConfig                           CustomIdle;                                    // 0x0080 (0x0034) [0x0000000000000000]               
	struct FCustomAnimConfig                           CustomTransition;                              // 0x00B4 (0x0034) [0x0000000000000000]               
	class UInterpGroupInst*                            MatineeInterpGroupInst;                        // 0x00E8 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             OnPlayedQueuedTransition;                      // 0x00F0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            IdleType;                                      // 0x0100 (0x0001) [0x0000000000000000]               
	struct FIdleSlavedToDescription                    IdleSlavedTo;                                  // 0x0104 (0x000C) [0x0000000000000000]               
	struct FBeginEverythingSlavedToDescription         BeginEverythingSlavedTo;                       // 0x0110 (0x001C) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FEndEverythingSlavedToDescription           EndEverythingSlavedTo;                         // 0x012C (0x0004) [0x0000000000000000]               
	uint32_t                                           OverrideIdleStartTimeEnabled : 1;              // 0x0130 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OverrideIdleStartTime;                         // 0x0134 (0x0004) [0x0000000000000000]               
	struct FRelativeTarget                             RelativeTarget;                                // 0x0138 (0x002C) [0x0000000000004000] (CPF_Component)
	uint32_t                                           TransitionDoesntConsumeAdditiveWeight : 1;     // 0x0164 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           TransitionAlwaysAdditiveBlendIn : 1;           // 0x0164 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           TransitionForceBlend : 1;                      // 0x0164 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           Mirrored : 1;                                  // 0x0164 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           ForceChange : 1;                               // 0x0164 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           WarnWhenDiscardingChanges : 1;                 // 0x0164 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           Queued : 1;                                    // 0x0164 (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct BmGame.RGameInfoBase.PersistentThought
// 0x0048
struct FPersistentThought
{
	class FName                                        SubGroup;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Text;                                          // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FDetailThought>                DetailThoughts;                                // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FColor                                      Color;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              Time;                                          // 0x002C (0x0004) [0x0000000000000000]               
	uint32_t                                           IsError : 1;                                   // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      Callstack;                                     // 0x0034 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Flags;                                         // 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfoBase.RegisteredThoughtActor
// 0x003C
struct FRegisteredThoughtActor
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      ActorName;                                     // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     LastThoughtPosition;                           // 0x0018 (0x000C) [0x0000000000000000]               
	uint8_t                                            Group;                                         // 0x0024 (0x0001) [0x0000000000000000]               
	uint32_t                                           HasErrors : 1;                                 // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           ShowActorName : 1;                             // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	class TArray<struct FPersistentThought>            PersistentThoughts;                            // 0x002C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfoBase.PendingPersistentThought
// 0x0050
struct FPendingPersistentThought
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPersistentThought                          Thought;                                       // 0x0008 (0x0048) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfoBase.DeferredSetTickIsDisabled
// 0x000C
struct FDeferredSetTickIsDisabled
{
	class ARDestructibleProp*                          Actor;                                         // 0x0000 (0x0008) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           bTickIsDisabled : 1;                           // 0x0008 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
};

// ScriptStruct BmGame.RGameInfo.ContentBeacon
// 0x00F0
struct FContentBeacon
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      DLC;                                           // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      TextPath;                                      // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     Position;                                      // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              Rotation;                                      // 0x003C (0x0004) [0x0000000000000000]               
	struct FVector4                                    Range;                                         // 0x0040 (0x0010) [0x0000000000000000]               
	int32_t                                            ParticleIndex;                                 // 0x0050 (0x0004) [0x0000000000000000]               
	class FString                                      Package;                                       // 0x0054 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Action;                                        // 0x0064 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Prerequisite;                                  // 0x0074 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           Invisible : 1;                                 // 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      Title;                                         // 0x0088 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Subtitle;                                      // 0x0098 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x00A8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Prompt;                                        // 0x00B8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Content;                                       // 0x00C8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            State;                                         // 0x00D8 (0x0001) [0x0000000000000000]               
	class AREmitter*                                   Emitter;                                       // 0x00DC (0x0008) [0x0000000000000000]               
	struct FVector                                     SpringFX;                                      // 0x00E4 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.PositionBeaconData
// 0x0028
struct FPositionBeaconData
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	class FString                                      Type;                                          // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Id;                                            // 0x001C (0x0004) [0x0000000000000000]               
	float                                              InteractRadius;                                // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.ShowcaseItem
// 0x0088
struct FShowcaseItem
{
	class FString                                      Page;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Item;                                          // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Levels;                                        // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Icon;                                          // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Prerequisite;                                  // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Camera;                                        // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Skin;                                          // 0x0060 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Condition;                                     // 0x0070 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            SortIndex;                                     // 0x0080 (0x0004) [0x0000000000000000]               
	uint32_t                                           Unlocked : 1;                                  // 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           DLC : 1;                                       // 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           WBPlay : 1;                                    // 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BmGame.RGameInfo.LevelTransitionOffset
// 0x0034
struct FLevelTransitionOffset
{
	class FName                                        Level;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      LevelAsString;                                 // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      TargetPMap;                                    // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     Offset;                                        // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.StoryDLCItem
// 0x0038
struct FStoryDLCItem
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            UISortId;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            PersistentSaveSlotId;                          // 0x0014 (0x0004) [0x0000000000000000]               
	class FString                                      BaseCharacter;                                 // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      NewGameStart;                                  // 0x0028 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfo.VehicleInitInfo
// 0x000C
struct FVehicleInitInfo
{
	class ARAbandonedVehicle*                          Abandoned;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Stage;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.WBPlayRewardInfo
// 0x0050
struct FWBPlayRewardInfo
{
	class FString                                      Page;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Item;                                          // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      RewardFlagName;                                // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      PackageName;                                   // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      RewardName;                                    // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RVisualDamageComponent.BoneToHide
// 0x0014
struct FBoneToHide
{
	class USkeletalMeshComponent*                      SkelComp;                                      // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        BoneName;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Delay;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVisualDamageComponent.VisualDamageEffect
// 0x004C
struct FVisualDamageEffect
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	uint8_t                                            Condition;                                     // 0x0008 (0x0001) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UParticleSystem*                             ParticleEffect;                                // 0x000C (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    SoundEffect;                                   // 0x0014 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    SoundEffect2;                                  // 0x001C (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	struct FVector                                     BoneRelPos;                                    // 0x0024 (0x000C) [0x0000000100000001] (CPF_Edit | CPF_Const)
	struct FRotator                                    BoneRelRot;                                    // 0x0030 (0x000C) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class FName                                        SocketName;                                    // 0x003C (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	uint8_t                                            Attachment;                                    // 0x0044 (0x0001) [0x0000000100000001] (CPF_Edit | CPF_Const)
	uint32_t                                           PersistentEffect : 1;                          // 0x0048 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct BmGame.RVehicle.LocationHistoryInfo
// 0x0010
struct FLocationHistoryInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RRoadNetwork.RoadNetworkSpan
// 0x0030
struct FRoadNetworkSpan
{
	struct FVector                                     Points[2];                                     // 0x0000 (0x0018) [0x0000000000000000]               
	int32_t                                            RouteIndex;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              MaxHeadroom;                                   // 0x001C (0x0004) [0x0000000000000000]               
	float                                              ObstacleMin;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ObstacleMax;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              FootpathMin;                                   // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              FootpathMax;                                   // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RRoadNetwork.RacingLineSeg
// 0x000E
struct FRacingLineSeg
{
	float                                              Value;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MinValue;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxValue;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            Sequence;                                      // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            Obstacle;                                      // 0x000D (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                         // 0x000E (0x0002) ADDED PADDING
};

// ScriptStruct BmGame.RRoadNetwork.RoadNetworkTightArea
// 0x0018
struct FRoadNetworkTightArea
{
	uint8_t                                            Lattice[8];                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Origin;                                        // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicle.BreadCrumb
// 0x003C
struct FBreadCrumb
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint8_t                                            NumWheelsOnGround;                             // 0x0018 (0x0001) [0x0000000000000000]               
	uint32_t                                           HasFakeRoad : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            FakeRoadMode;                                  // 0x0020 (0x0001) [0x0000000000000000]               
	struct FVector                                     FakeRoadLoc;                                   // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     FakeRoadNormal;                                // 0x0030 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicle.VehicleLight
// 0x0030
struct FVehicleLight
{
	class UPointLightComponent*                        LightSource;                                   // 0x0000 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ULensFlareComponent*                         LensFlare;                                     // 0x0008 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint8_t                                            Type;                                          // 0x0010 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FName                                        Socket;                                        // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MaterialType;                                  // 0x001C (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              LightSourceDefaultBrightness;                  // 0x0020 (0x0004) [0x0000000000000000]               
	class UPointLightComponent*                        IndoorLightSource;                             // 0x0024 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              IndoorLightSourceDefaultBrightness;            // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicle.RoadObstacleTypes
// 0x0004
struct FRoadObstacleTypes
{
	uint32_t                                           Batmobile : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Car : 1;                                       // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Humvee : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           APC : 1;                                       // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           LightTank : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           HeavyTank : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           Abandoned : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           HeavyAbandoned : 1;                            // 0x0000 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           Batman : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           MilitiaWanderers : 1;                          // 0x0000 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
};

// ScriptStruct BmGame.RRoadNetwork.OneWayLink
// 0x0008
struct FOneWayLink
{
	int32_t                                            LinkIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            StartPoint;                                    // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RRoadNetwork.CostScaleSphere
// 0x0014
struct FCostScaleSphere
{
	struct FVector                                     Origin;                                        // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              CostScale;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RRoadNetwork.RoadRouteRestriction
// 0x00A5
struct FRoadRouteRestriction
{
	class AActor*                                      RestrictActor;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bVolumeRestricted : 1;                         // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<class AVolume*>                       ValidVolumes;                                  // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bVolumesAreInvalid : 1;                        // 0x001C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bObeyExclusionZones : 1;                       // 0x001C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bRadiusRestricted : 1;                         // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bRadiusIsInvalid : 1;                          // 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     RadiusOrigin;                                  // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x002C (0x0004) [0x0000000000000000]               
	uint32_t                                           MainRoadsOnly : 1;                             // 0x0030 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           AllowArmouredRoads : 1;                        // 0x0030 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           ExcludeOpenAreas : 1;                          // 0x0030 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           ExcludeStairs : 1;                             // 0x0030 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              MinHeadroom;                                   // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MainRoadCostScale;                             // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ArmouredRoadCostScale;                         // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PreferredRoadCostScale;                        // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OpenAreaCostScale;                             // 0x0044 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TurningCostScale;                              // 0x0048 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxSearchDistance;                             // 0x004C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FindPointDistScaleZ;                           // 0x0050 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<int32_t>                              ExcludePoints;                                 // 0x0054 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FOneWayLink>                   OneWayLinks;                                   // 0x0064 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FCostScaleSphere>              CostScaleSpheres;                              // 0x0074 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            VehicleExclusionVolumesFilterIndex;            // 0x0084 (0x0004) [0x0000000000000000]               
	uint32_t                                           OverrideMaxTurnAngle : 1;                      // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CosMaxTurnAngle;                               // 0x008C (0x0004) [0x0000000000000000]               
	uint32_t                                           DontCrossDistrictBoundaries : 1;               // 0x0090 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           PreventCrossingIntoDistrictsWithTanks : 1;     // 0x0090 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           CallBatmobile : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           SatNav : 1;                                    // 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           Challenge : 1;                                 // 0x0090 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           Friendly : 1;                                  // 0x0090 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           Spawning : 1;                                  // 0x0090 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           FleeingThug : 1;                               // 0x0090 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           AllowDisabledLinks : 1;                        // 0x0090 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           Streaming : 1;                                 // 0x0090 (0x0004) [0x0000000000000000] [0x00000200] 
	float                                              InitialTurningCostScale;                       // 0x0094 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     InitialDir;                                    // 0x0098 (0x000C) [0x0000000000000000]               
	uint8_t                                            GetPointInDistrict;                            // 0x00A4 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x00A5 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RRoadNetwork.RoadNetworkJunction
// 0x001C
struct FRoadNetworkJunction
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	class TArray<int32_t>                              Points;                                        // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RRoadNetwork.RoadNetworkPoint
// 0x0018
struct FRoadNetworkPoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	int32_t                                            FirstLink;                                     // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            LastRandomLink;                                // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Junction;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RRoadLink.LaneInfo
// 0x0014
struct FLaneInfo
{
	float                                              InnerDistance;                                 // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LaneWidth;                                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FootpathWidth;                                 // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxHeadroom;                                   // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SeaWallWidth;                                  // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RRoadNetwork.RoadNetworkLane
// 0x0028
struct FRoadNetworkLane
{
	struct FLaneInfo                                   Infos[2];                                      // 0x0000 (0x0028) [0x0000000000000000]               
};

// ScriptStruct BmGame.RRoadNetwork.RoadNetworkLink
// 0x0034
struct FRoadNetworkLink
{
	int32_t                                            Points[2];                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Next[2];                                       // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            Lanes[2];                                      // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            AltLanes[2];                                   // 0x0018 (0x0008) [0x0000000000000000]               
	class FName                                        StreetName;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	uint32_t                                           IsJump : 1;                                    // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsMainRoad : 1;                                // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           IsArmouredRoad : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           IsOpenArea : 1;                                // 0x0028 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           IsOpenAreaPath : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           IsDisabled : 1;                                // 0x0028 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           IsSharpTurn : 1;                               // 0x0028 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           IsStairs : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           NoUturns : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           NoSkip : 1;                                    // 0x0028 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           CantCallBatmobile : 1;                         // 0x0028 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           CantSatNav : 1;                                // 0x0028 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           OnlySatNav : 1;                                // 0x0028 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           IsUnderGround : 1;                             // 0x0028 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           OnlyFriendly : 1;                              // 0x0028 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           ObstaclesBetweenLanes : 1;                     // 0x0028 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           SeaWall0 : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           SeaWall1 : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           IsTouched : 1;                                 // 0x0028 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           IsAlt : 1;                                     // 0x0028 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           IsActiveChallenge : 1;                         // 0x0028 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           CantSpawn : 1;                                 // 0x0028 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           ThugsCannotFlee : 1;                           // 0x0028 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           NoZBiasOnFindNearestPoint : 1;                 // 0x0028 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           IsDoor : 1;                                    // 0x0028 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           CantSpawnBatmobile : 1;                        // 0x0028 (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           OnlyStreaming : 1;                             // 0x0028 (0x0004) [0x0000000000000000] [0x04000000] 
	uint32_t                                           IsBuddy0 : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x08000000] 
	uint32_t                                           IsBuddy1 : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x10000000] 
	uint8_t                                            SatNavInLane;                                  // 0x002C (0x0001) [0x0000000000000000]               
	uint8_t                                            CityDistrict;                                  // 0x002D (0x0001) [0x0000000000000000]               
	uint8_t                                            Camber;                                        // 0x002E (0x0001) [0x0000000000000000]               
	int32_t                                            IndexInHash;                                   // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleBatmobileBase.FloatingDamageNumber
// 0x004C
struct FFloatingDamageNumber
{
	uint32_t                                           bDoneInitial : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     InitialLocation;                               // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     Position;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x001C (0x000C) [0x0000000000000000]               
	float                                              RemainingDuration;                             // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              TotalForce;                                    // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            Damage;                                        // 0x0030 (0x0004) [0x0000000000000000]               
	class AActor*                                      TargetActor;                                   // 0x0034 (0x0008) [0x0000000000000000]               
	uint32_t                                           bStrafeTarget : 1;                             // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBoostTarget : 1;                              // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           BattleModeImpact : 1;                          // 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           WeakPointNotHit : 1;                           // 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     ImpactImpulse;                                 // 0x0040 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPersistentData.TutorialInfo
// 0x0010
struct FTutorialInfo
{
	uint8_t                                            bPlayerActivated;                              // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            bAutoActivated;                                // 0x0001 (0x0001) [0x0000000000000000]               
	int32_t                                            ActionsRequired;                               // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalAchieved;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Progress;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPersistentData.TutorialInfoNew
// 0x0010
struct FTutorialInfoNew
{
	uint8_t                                            bPlayerActivated;                              // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            bAutoActivated;                                // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            bDesignActivated;                              // 0x0002 (0x0001) [0x0000000000000000]               
	int32_t                                            ActionsRequired;                               // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalAchieved;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Progress;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPersistentData.EvidenceTrail
// 0x0034
struct FEvidenceTrail
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      TrailName;                                     // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Map;                                           // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       Items;                                         // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPersistentData.MostWanted_IconData
// 0x0040
struct FMostWanted_IconData
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            bNew;                                          // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            bActive;                                       // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            bDone;                                         // 0x0003 (0x0001) [0x0000000000000000]               
	float                                              X;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Z;                                             // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      MapName;                                       // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      ReferenceName;                                 // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      TypeName;                                      // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPersistentData.MostWanted_Data
// 0x0094
struct FMostWanted_Data
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            Percentage;                                    // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            bLocked;                                       // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            bIdentityUnknown;                              // 0x0003 (0x0001) [0x0000000000000000]               
	uint8_t                                            NewFlag;                                       // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            CompleteAnimFlag;                              // 0x0005 (0x0001) [0x0000000000000000]               
	class FString                                      ReferenceName;                                 // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            SynopsisTextId;                                // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            ProgressTextId;                                // 0x001C (0x0004) [0x0000000000000000]               
	class TArray<struct FMostWanted_IconData>          Icons;                                         // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              LastUpdateTime;                                // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              LastJokerUpdateTime;                           // 0x0034 (0x0004) [0x0000000000000000]               
	class FString                                      VideoProgressName;                             // 0x0038 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      JokerVideoProgressName;                        // 0x0048 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      PointOfInterestProgressName;                   // 0x0058 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UAkDialogueSpeech*                           PointOfInterestProgressThought;                // 0x0068 (0x0008) [0x0000000000000000]               
	uint8_t                                            BoardTitleId;                                  // 0x0070 (0x0001) [0x0000000000000000]               
	uint8_t                                            BoardSynopsisId;                               // 0x0071 (0x0001) [0x0000000000000000]               
	uint8_t                                            BoardImageId;                                  // 0x0072 (0x0001) [0x0000000000000000]               
	uint8_t                                            BoardTickerId;                                 // 0x0073 (0x0001) [0x0000000000000000]               
	class FString                                      FocusTextOverride;                             // 0x0074 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              CustomData;                                    // 0x0084 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPersistentData.SideStoryMapIconEntry
// 0x001A
struct FSideStoryMapIconEntry
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      IconName;                                      // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            SideStoryIndex;                                // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            bAddToAutoPan;                                 // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            DiscoveryState;                                // 0x0019 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                         // 0x001A (0x0002) ADDED PADDING
};

// ScriptStruct BmGame.RGameInfo.VehicleScenarioInfo
// 0x001F
struct FVehicleScenarioInfo
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	class URVehicleScenario*                           Scenario;                                      // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              SpawnChance;                                   // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinTimeBetweenSpawns;                          // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              ExtendedTimeBetweenSpawns;                     // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxActiveInstances;                            // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            bUseMaxInstances;                              // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            bOnlyLimitSpawnFrequencyWhenSeen;              // 0x001D (0x0001) [0x0000000000000000]               
	uint8_t                                            ScenarioType;                                  // 0x001E (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x1];                         // 0x001F (0x0001) ADDED PADDING
};

// ScriptStruct BmGame.RPersistentData.OverrideThreatLevelInfo
// 0x0018
struct FOverrideThreatLevelInfo
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Description;                                   // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            ThreatLevel;                                   // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPersistentData.RandomPopulationDefine
// 0x02C0
struct FRandomPopulationDefine
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      CityDistrict;                                  // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            bRiotingThugs;                                 // 0x0014 (0x0001) [0x0000000000000000]               
	class TArray<struct FVehicleScenarioInfo>          ScenarioInfos;                                 // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FVehicleScenarioInfo>          DroneFormationScenarios;                       // 0x0028 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FVehicleScenarioInfo>          SideStoryScenarioInfos;                        // 0x0038 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            MaxVehicleScenarios;                           // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxDroneScenarios;                             // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxHumveeScenarios;                            // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalDronePopulation;                          // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentDronePopulation;                        // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalHumveePopulation;                         // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentHumveePopulation;                       // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxDroneThreatLevel;                           // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              ChanceThatRioterWillFlee;                      // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            PercChanceWanderersHaveAWeapon;                // 0x006C (0x0004) [0x0000000000000000]               
	uint8_t                                            bPassiveRiotingThugs;                          // 0x0070 (0x0001) [0x0000000000000000]               
	int32_t                                            MaxActiveWanderingGroups;                      // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            NumPawnsPerWanderingGroupMax;                  // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            NumPawnsPerWanderingGroupMin;                  // 0x007C (0x0004) [0x0000000000000000]               
	uint8_t                                            bWanderersActive;                              // 0x0080 (0x0001) [0x0000000000000000]               
	uint8_t                                            bIsMilitiaWanderers;                           // 0x0081 (0x0001) [0x0000000000000000]               
	int32_t                                            NumWeaponPawnsPerRiotMax;                      // 0x0084 (0x0004) [0x0000000000000000]               
	int32_t                                            NumWeaponPawnsPerRiotMin;                      // 0x0088 (0x0004) [0x0000000000000000]               
	class TArray<class UClass*>                        RiotWeapons;                                   // 0x008C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UClass*                                      MilitiaRifle;                                  // 0x009C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FString                                      Riots_Description;                             // 0x00A4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Riots_ActionName;                              // 0x00B4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Riots_ModifiedByActions;                       // 0x00C4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Vehicles_Description;                          // 0x00D4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Vehicles_ActionName;                           // 0x00E4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Vehicles_ModifiedByActions;                    // 0x00F4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Formations_Description;                        // 0x0104 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Formations_ActionName;                         // 0x0114 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Formations_ModifiedByActions;                  // 0x0124 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class URSeqAct_VehicleEnemySpawner*                HeavyTankEncounter;                            // 0x0134 (0x0008) [0x0000000000000000]               
	float                                              WarmUpTimer;                                   // 0x013C (0x0004) [0x0000000000000000]               
	float                                              WarmUpTimerMax;                                // 0x0140 (0x0004) [0x0000000000000000]               
	uint8_t                                            Pause_Drones;                                  // 0x0144 (0x0001) [0x0000000000000000]               
	class FString                                      Pause_Drones_Description;                      // 0x0148 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Pause_Drones_ActionName;                       // 0x0158 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            Pause_Humvees;                                 // 0x0168 (0x0001) [0x0000000000000000]               
	class FString                                      Pause_Humvees_Description;                     // 0x016C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Pause_Humvees_ActionName;                      // 0x017C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            Pause_ThugCars;                                // 0x018C (0x0001) [0x0000000000000000]               
	class FString                                      Pause_ThugCars_Description;                    // 0x0190 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Pause_ThugCars_ActionName;                     // 0x01A0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            Pause_Riots;                                   // 0x01B0 (0x0001) [0x0000000000000000]               
	class FString                                      Pause_Riots_Description;                       // 0x01B4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Pause_Riots_ActionName;                        // 0x01C4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Pause_Drones_Descriptions;                     // 0x01D4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Pause_Drones_ActionNames;                      // 0x01E4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Pause_Humvees_Descriptions;                    // 0x01F4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Pause_Humvees_ActionNames;                     // 0x0204 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Pause_ThugCars_Descriptions;                   // 0x0214 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Pause_ThugCars_ActionNames;                    // 0x0224 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Pause_Riots_Descriptions;                      // 0x0234 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Pause_Riots_ActionNames;                       // 0x0244 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        UniqueRefName;                                 // 0x0254 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            DisableExtraCarScenarios;                      // 0x0264 (0x0001) [0x0000000000000000]               
	class FString                                      DisableExtraCarScenarios_Description;          // 0x0268 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      DisableExtraCarScenarios_ActionName;           // 0x0278 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FOverrideThreatLevelInfo>      OverrideThreatLevel;                           // 0x0288 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            BatmobileUnavailable;                          // 0x0298 (0x0001) [0x0000000000000000]               
	int32_t                                            NumThugsWantToFightFromRiotMin;                // 0x029C (0x0004) [0x0000000000000000]               
	int32_t                                            NumThugsWantToFightFromRiotMax;                // 0x02A0 (0x0004) [0x0000000000000000]               
	int32_t                                            MaximumNonRiotThugsAllowedToFight;             // 0x02A4 (0x0004) [0x0000000000000000]               
	float                                              PostGasRiotSpawnPerc;                          // 0x02A8 (0x0004) [0x0000000000000000]               
	int32_t                                            APCsRemaining;                                 // 0x02AC (0x0004) [0x0000000000000000]               
	float                                              MilitiaWanderersWarmUpTimer;                   // 0x02B0 (0x0004) [0x0000000000000000]               
	float                                              MilitiaWanderersWarmUpTimerMax;                // 0x02B4 (0x0004) [0x0000000000000000]               
	int32_t                                            AdditionalLightDroneThreat;                    // 0x02B8 (0x0004) [0x0000000000000000]               
	int32_t                                            AdditionalHeavyDroneThreat;                    // 0x02BC (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPersistentData.APCSideStoryInfo
// 0x0090
struct FAPCSideStoryInfo
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	class TArray<struct FVehicleScenarioInfo>          APCSideStoryScenarios;                         // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVehicleScenarioInfo                        APCSideStoryScenarioInfo;                      // 0x0014 (0x0020) [0x0000000000000000]               
	int32_t                                            CurrAPCScenarioID;                             // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              TimeUntilNextAPC;                              // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              TimeUntilNextAPCForWheel;                      // 0x003C (0x0004) [0x0000000000000000]               
	float                                              TimeBetweenAPCsWhenSeen;                       // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              TimeBetweenAPCsWhenSeenForWheel;               // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              TimeBetweenAPCsWhenDestroyedForWheel;          // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              TimeBetweenAPCsWhenDestroyed;                  // 0x004C (0x0004) [0x0000000000000000]               
	class FString                                      APC_Description;                               // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      APC_ActionName;                                // 0x0060 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        APC_ModifiedByActions;                         // 0x0070 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class ARVehicle*                                   CurrentAPC;                                    // 0x0080 (0x0008) [0x0000000000000000]               
	int32_t                                            SpawnDistrict;                                 // 0x0088 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLastAPCSeen : 1;                              // 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLastAPCDestroyed : 1;                         // 0x008C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RPersistentData.BatmobilePassengerSave
// 0x0051
struct FBatmobilePassengerSave
{
	class FString                                      UI_LocalisedName;                              // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      UI_PortraitName;                               // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      PawnPathName;                                  // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      AnimSetPathName;                               // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      AnimName;                                      // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            IsVillain;                                     // 0x0050 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0051 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RPersistentData.BatmobileDriveTutorialSection
// 0x000C
struct FBatmobileDriveTutorialSection
{
	uint8_t                                            bActive;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              Timer;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeOut;                                       // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameInfo.MapElementsItem
// 0x0063
struct FMapElementsItem
{
	class FString                                      MapName;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      ItemType;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      ItemName;                                      // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      CustomFlags;                                   // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            RevealChapterNum;                              // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            X;                                             // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            Z;                                             // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            Rotation;                                      // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            FloatUpBy;                                     // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            Oxy;                                           // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            Flags;                                         // 0x005C (0x0004) [0x0000000000000000]               
	uint8_t                                            GroupArea;                                     // 0x0060 (0x0001) [0x0000000000000000]               
	uint8_t                                            GroupRange;                                    // 0x0061 (0x0001) [0x0000000000000000]               
	uint8_t                                            Filter;                                        // 0x0062 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x1];                         // 0x0063 (0x0001) ADDED PADDING
};

// ScriptStruct BmGame.REnvironmentCheckTicker.EnvironmentSpecialMoveLocator
// 0x0084
struct FEnvironmentSpecialMoveLocator
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            OverrideChosenAnim;                            // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            EdgeType;                                      // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            AnimDir;                                       // 0x0009 (0x0001) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              AnimTimeOverride;                              // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              TransitionDurationScale;                       // 0x002C (0x0004) [0x0000000000000000]               
	class AActor*                                      ActorInstance;                                 // 0x0030 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCantOverrideDirection : 1;                    // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceMirror : 1;                              // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bForceMirrorChoice : 1;                        // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCustomEdge : 1;                               // 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     ExtraVectorInfo[4];                            // 0x003C (0x0030) [0x0000000000000000]               
	float                                              ExtraFloatInfo[4];                             // 0x006C (0x0010) [0x0000000000000000]               
	class AActor*                                      SecondaryTarget;                               // 0x007C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.REnvironmentCheckTicker.PlayerEdgeColl
// 0x0014
struct FPlayerEdgeColl
{
	struct FPointer                                    LevelCollection;                               // 0x0000 (0x0008) [0x0000000000000200] (CPF_Native)  
	int32_t                                            CollectionIndex;                               // 0x0008 (0x0004) [0x0000000000000000]               
	class UObject*                                     Level;                                         // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.REnvironmentCheckTicker.CoverDescriptor
// 0x0040
struct FCoverDescriptor
{
	float                                              LeftCoverDistance;                             // 0x0000 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     LeftCoverNormal;                               // 0x0004 (0x000C) [0x0000000000000400] (CPF_Transient)
	float                                              RightCoverDistance;                            // 0x0010 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     RightCoverNormal;                              // 0x0014 (0x000C) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           bCoveredLeft : 1;                              // 0x0020 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint32_t                                           bCoveredRight : 1;                             // 0x0020 (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
	uint32_t                                           bInCover : 1;                                  // 0x0020 (0x0004) [0x0000000000000400] [0x00000004] (CPF_Transient)
	struct FRotator                                    CoverRotator;                                  // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     DesiredCoverPosition;                          // 0x0030 (0x000C) [0x0000000000000400] (CPF_Transient)
	float                                              LROffset;                                      // 0x003C (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct BmGame.REnvironmentCheckTicker.EnvironmentSpecialMoveTypesContainer
// 0x0008
struct FEnvironmentSpecialMoveTypesContainer
{
	uint32_t                                           ReservedNone : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)
	uint32_t                                           LowBarrier : 1;                                // 0x0000 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           MediumBarrier : 1;                             // 0x0000 (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           HighBarrier : 1;                               // 0x0000 (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           LowWall : 1;                                   // 0x0000 (0x0004) [0x0000000100000001] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           MediumWall : 1;                                // 0x0000 (0x0004) [0x0000000100000001] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           HighWall : 1;                                  // 0x0000 (0x0004) [0x0000000100000001] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           UnscalableWall : 1;                            // 0x0000 (0x0004) [0x0000000100000001] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           Floor : 1;                                     // 0x0000 (0x0004) [0x0000000100000001] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           JumpGap512 : 1;                                // 0x0000 (0x0004) [0x0000000100000001] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           Edge : 1;                                      // 0x0000 (0x0004) [0x0000000100000001] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           JumpGap256 : 1;                                // 0x0000 (0x0004) [0x0000000100000001] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           JumpGap384 : 1;                                // 0x0000 (0x0004) [0x0000000100000001] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           GapNoHeadRoom : 1;                             // 0x0000 (0x0004) [0x0000000100000001] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           ShimmyLedge : 1;                               // 0x0000 (0x0004) [0x0000000100000001] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           DangleLedge : 1;                               // 0x0000 (0x0004) [0x0000000100000001] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           DangleLedgeWithRailing : 1;                    // 0x0000 (0x0004) [0x0000000100000001] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           CoverCorner : 1;                               // 0x0000 (0x0004) [0x0000000100000001] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           ShimmyLedgeWithRailing : 1;                    // 0x0000 (0x0004) [0x0000000100000001] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           LowWallWithRailing : 1;                        // 0x0000 (0x0004) [0x0000000100000001] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           MediumWallWithRailing : 1;                     // 0x0000 (0x0004) [0x0000000100000001] [0x00100000] (CPF_Edit | CPF_Const)
	uint32_t                                           HighWallWithRailing : 1;                       // 0x0000 (0x0004) [0x0000000100000001] [0x00200000] (CPF_Edit | CPF_Const)
	uint32_t                                           LowBarrierWithDrop : 1;                        // 0x0000 (0x0004) [0x0000000100000001] [0x00400000] (CPF_Edit | CPF_Const)
	uint32_t                                           MediumBarrierWithDrop : 1;                     // 0x0000 (0x0004) [0x0000000100000001] [0x00800000] (CPF_Edit | CPF_Const)
	uint32_t                                           HighBarrierWithDrop : 1;                       // 0x0000 (0x0004) [0x0000000100000001] [0x01000000] (CPF_Edit | CPF_Const)
	uint32_t                                           LowRailingWithDrop : 1;                        // 0x0000 (0x0004) [0x0000000100000001] [0x02000000] (CPF_Edit | CPF_Const)
	uint32_t                                           ShimmyCrevice : 1;                             // 0x0000 (0x0004) [0x0000000100000001] [0x04000000] (CPF_Edit | CPF_Const)
	uint32_t                                           DangleCrevice : 1;                             // 0x0000 (0x0004) [0x0000000100000001] [0x08000000] (CPF_Edit | CPF_Const)
	uint32_t                                           CoverCornerLeft : 1;                           // 0x0000 (0x0004) [0x0000000100000001] [0x10000000] (CPF_Edit | CPF_Const)
	uint32_t                                           JumpGap512NoShimmy : 1;                        // 0x0000 (0x0004) [0x0000000100000001] [0x20000000] (CPF_Edit | CPF_Const)
	uint32_t                                           EdgeNoShimmy : 1;                              // 0x0000 (0x0004) [0x0000000100000001] [0x40000000] (CPF_Edit | CPF_Const)
	uint32_t                                           JumpGap256NoShimmy : 1;                        // 0x0000 (0x0004) [0x0000000100000001] [0x80000000] (CPF_Edit | CPF_Const)
	uint32_t                                           JumpGap384NoShimmy : 1;                        // 0x0004 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           JumpGap256ToRailing : 1;                       // 0x0004 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           JumpGap256ToRailingNoShimmy : 1;               // 0x0004 (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           ShimmyHangRailing : 1;                         // 0x0004 (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           ShimmyDangleRailing : 1;                       // 0x0004 (0x0004) [0x0000000100000001] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           MediumWallWithRailingNoShimmy : 1;             // 0x0004 (0x0004) [0x0000000100000001] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           LowBarrierNoVault : 1;                         // 0x0004 (0x0004) [0x0000000100000001] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           MediumBarrierNoVault : 1;                      // 0x0004 (0x0004) [0x0000000100000001] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           HighBarrierNoVault : 1;                        // 0x0004 (0x0004) [0x0000000100000001] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           ScrambleToShimmy : 1;                          // 0x0004 (0x0004) [0x0000000100000001] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           RailingEnd128 : 1;                             // 0x0004 (0x0004) [0x0000000100000001] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           Actor : 1;                                     // 0x0004 (0x0004) [0x0000000100000001] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           ClimbableWall : 1;                             // 0x0004 (0x0004) [0x0000000100000001] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           ClimbableWallCorner : 1;                       // 0x0004 (0x0004) [0x0000000100000001] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           ClimbableCeiling : 1;                          // 0x0004 (0x0004) [0x0000000100000001] [0x00004000] (CPF_Edit | CPF_Const)
};

// ScriptStruct BmGame.RVehicleBatmobileBase.TauntPosition
// 0x0014
struct FTauntPosition
{
	struct FVector                                     Offset;                                        // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	class ARPawnVillain*                               LockedBy;                                      // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMRoomAIState.GuardVolAssignmentTracker
// 0x0018
struct FGuardVolAssignmentTracker
{
	class ARGuardVolume*                               Vol;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class ARPawnVillainGunBase*>          AssigneeList;                                  // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameRI.DLCAdditionalLevel
// 0x0030
struct FDLCAdditionalLevel
{
	class FName                                        BaseLevel;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AdditionalDLCLevel;                            // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FBox                                        Bounds;                                        // 0x0010 (0x001C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMakeVisibleOnLoad : 1;                        // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RGameRI.StreamingTransitionInfo
// 0x0020
struct FStreamingTransitionInfo
{
	struct FBox                                        Bounds;                                        // 0x0000 (0x001C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bPath : 1;                                     // 0x001C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bDoorway : 1;                                  // 0x001C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bBank : 1;                                     // 0x001C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bNoEmergencyLoads : 1;                         // 0x001C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bLoadLodOnlyWhenInBatmobile : 1;               // 0x001C (0x0004) [0x0000000000000400] [0x00000010] (CPF_Transient)
	uint32_t                                           bIgnoreDistancePenaltyForNoVisibleOriginators : 1;// 0x001C (0x0004) [0x0000000000000400] [0x00000020] (CPF_Transient)
};

// ScriptStruct BmGame.RGameRI.StreamingLevelInfo
// 0x00A8
struct FStreamingLevelInfo
{
	class FName                                        Level;                                         // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FString                                      PersistentMap;                                 // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FStreamingTransitionInfo                    TransitionInfo;                                // 0x0018 (0x0020) [0x0000000000000400] (CPF_Transient)
	float                                              CurrentDistanceToPlayer;                       // 0x0038 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FVector2D                                   ClosestPointForStreaming;                      // 0x003C (0x0008) [0x0000000000000400] (CPF_Transient)
	class TArray<int32_t>                              StreamingRoadLinks;                            // 0x0044 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UObject*>                       Originators;                                   // 0x0054 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UObject*>                       VisibleOriginators;                            // 0x0064 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FString>                        OriginatorsDebug;                              // 0x0074 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FString>                        VisibleOriginatorsDebug;                       // 0x0084 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class ULevelStreaming*>               LevelStreamingObjects;                         // 0x0094 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bStartedLoad : 1;                              // 0x00A4 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint32_t                                           bLoaded : 1;                                   // 0x00A4 (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
	uint32_t                                           bStartedLoadCh : 1;                            // 0x00A4 (0x0004) [0x0000000000000400] [0x00000004] (CPF_Transient)
	uint32_t                                           bLoadedCh : 1;                                 // 0x00A4 (0x0004) [0x0000000000000400] [0x00000008] (CPF_Transient)
	uint32_t                                           bHighPriority : 1;                             // 0x00A4 (0x0004) [0x0000000000000400] [0x00000010] (CPF_Transient)
};

// ScriptStruct BmGame.RGameRI.StreamingPMapInfo
// 0x0050
struct FStreamingPMapInfo
{
	class FString                                      MapName;                                       // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class ULevelStreaming*>               LevelStreamingObjects;                         // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          ActiveLevels;                                  // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UObject*>                       VisibleOriginators;                            // 0x0030 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     Offset;                                        // 0x0040 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bStartedLoad : 1;                              // 0x004C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bLoaded : 1;                                   // 0x004C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct BmGame.RGameRI.LoadedPlayerCharacter
// 0x0054
struct FLoadedPlayerCharacter
{
	class URAddContentPlayerCharacterMesh*             MeshData;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      MeshName;                                      // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class URAddContentPlayerCharacter*                 CharacterData;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	class FName                                        CharacterName;                                 // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            DamageLevel;                                   // 0x0028 (0x0004) [0x0000000000000000]               
	class USequenceAction*                             LoadingObject;                                 // 0x002C (0x0008) [0x0000000000000000]               
	class FString                                      CharacterDataAsset;                            // 0x0034 (0x0010) [0x0000080000010000] (CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      MeshDataAsset;                                 // 0x0044 (0x0010) [0x0000080000010000] (CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct BmGame.RGameRI.LoadedPlayerBatmobile
// 0x0064
struct FLoadedPlayerBatmobile
{
	class URAddContentBatmobileMesh*                   MeshData;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      MeshName;                                      // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class URAddContentBatmobile*                       BatmobileData;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	class FString                                      BatmobileDataName;                             // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        BatmobileName;                                 // 0x0030 (0x0008) [0x0000000000000000]               
	int32_t                                            DamageLevel;                                   // 0x0038 (0x0004) [0x0000000000000000]               
	class URSeqAct_UpdateBatmobileDamageLevel*         LoadingObject;                                 // 0x003C (0x0008) [0x0000000000000000]               
	class FString                                      BatmobileDataAsset;                            // 0x0044 (0x0010) [0x0000080000010000] (CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      MeshDataAsset;                                 // 0x0054 (0x0010) [0x0000080000010000] (CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct BmGame.RGameRI.StreamingLOD2Info
// 0x004C
struct FStreamingLOD2Info
{
	class TArray<class ULevelStreaming*>               LevelStreamingObjects;                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UObject*>                       VisibleOriginators;                            // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FString>                        PMapsKeepingLOD2sVisible;                      // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     Offset;                                        // 0x0030 (0x000C) [0x0000000100000000] (CPF_Edit)    
	class FString                                      ForceHiddenLOD2;                               // 0x003C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfo.SoundSurface
// 0x0008
struct FSoundSurface
{
	class UAkSwitchName*                               SurfaceType;                                   // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameRI.BorderInfo
// 0x0010
struct FBorderInfo
{
	struct FVector2D                                   EdgeStart;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   EdgeEnd;                                       // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameRI.DebugSaveDescription
// 0x0024
struct FDebugSaveDescription
{
	class FString                                      SectionNumber;                                 // 0x0000 (0x0010) [0x0000000000090000] (CPF_NeedCtorLink | CPF_Deprecated)
	uint8_t                                            GameplayType;                                  // 0x0010 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            GameplaySecondaryType;                         // 0x0011 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FString                                      AdditionalText;                                // 0x0014 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameRI.TauntContextInfo
// 0x0014
struct FTauntContextInfo
{
	uint32_t                                           bTargetIsBelow : 1;                            // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            TauntSet;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bLooksLeft : 1;                                // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bLooksRight : 1;                               // 0x0008 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bLooksFront : 1;                               // 0x0008 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bLooksBack : 1;                                // 0x0008 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bLooksBackLeft : 1;                            // 0x0008 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bLooksBackRight : 1;                           // 0x0008 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint8_t                                            MovementHint;                                  // 0x000C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            PairedDirection;                               // 0x000D (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bAlignRotationAtEnd : 1;                       // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RGameRI.TauntAnimInfo
// 0x0040
struct FTauntAnimInfo
{
	struct FTauntContextInfo                           context;                                       // 0x0000 (0x0014) [0x0000000000000000]               
	uint32_t                                           bIsBatmobileTaunt : 1;                         // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<uint32_t>                             BatmobileInfo;                                 // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        AnimName;                                      // 0x0028 (0x0008) [0x0000000000000000]               
	class FName                                        PairedAnimName;                                // 0x0030 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    AnimSet;                                       // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameRI.TauntBatmobileInfo
// 0x0004
struct FTauntBatmobileInfo
{
	uint32_t                                           bIsBatmobileTaunt : 1;                         // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Front : 1;                                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           BACK : 1;                                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           LeftFront : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           LeftMiddle : 1;                                // 0x0000 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           LeftBack : 1;                                  // 0x0000 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           RightFront : 1;                                // 0x0000 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           RightMiddle : 1;                               // 0x0000 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           RightBack : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
};

// ScriptStruct BmGame.RGameInfo.LevelVolumeDesc
// 0x0061
struct FLevelVolumeDesc
{
	class FName                                        LevelName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      LevelNameString;                               // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            BspRoot;                                       // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            FirstTransition;                               // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           IsLoaded : 1;                                  // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsVisible : 1;                                 // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           IsCity : 1;                                    // 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           IsRcOverworld : 1;                             // 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           IsOverworld : 1;                               // 0x0024 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           CanTeleportBatmobile : 1;                      // 0x0024 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           CanTeleportBatmobileOut : 1;                   // 0x0024 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           NoVehicles : 1;                                // 0x0024 (0x0004) [0x0000000000000000] [0x00000080] 
	uint8_t                                            Standalone;                                    // 0x0028 (0x0001) [0x0000000000000000]               
	uint8_t                                            CityDistrict;                                  // 0x0029 (0x0001) [0x0000000000000000]               
	struct FSimpleBox                                  Bounds;                                        // 0x002C (0x0018) [0x0000000000000000]               
	struct FVector                                     LevelOffset;                                   // 0x0044 (0x000C) [0x0000000000000000]               
	struct FPlane                                      DistrictBoundaryPlane;                         // 0x0050 (0x0010) [0x0000000000000000]               
	uint8_t                                            DistrictBehindBoundaryPlane;                   // 0x0060 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0xF];                         // 0x0061 (0x000F) ADDED PADDING
};

// ScriptStruct BmGame.RChallengeManager.ChallengeMatch
// 0x0010
struct FChallengeMatch
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PackId;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            LeaderboardId;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPredator : 1;                                 // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RChallengeManager.LeaderboardCached
// 0x004C
struct FLeaderboardCached
{
	class TArray<int32_t>                              Ranks;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        NickNames;                                     // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              Medals;                                        // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              Scores;                                        // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            MyIndex;                                       // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            Cycle;                                         // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            ErrorCode;                                     // 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RChallengeManager.BeatenMsg
// 0x0024
struct FBeatenMsg
{
	int32_t                                            ChallengeID;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            LeaderboardId;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Medals;                                        // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      NickName;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bSent : 1;                                     // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RChallengeManager.CountsByCharacter
// 0x0030
struct FCountsByCharacter
{
	int32_t                                            Ranked;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            RankedTotal;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            RankedDLC;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            RankedDLCTotal;                                // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Custom;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            CustomTotal;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            CustomDLC;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            CustomDLCTotal;                                // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            Campaign;                                      // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            CampaignTotal;                                 // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            CampaignDLC;                                   // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            CampaignDLCTotal;                              // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMRoomAIState.GargToPoints
// 0x0028
struct FGargToPoints
{
	class ARHidePoint*                                 Garg;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            AssignID;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     RefPoint;                                      // 0x000C (0x000C) [0x0000000000000000]               
	class TArray<struct FVector>                       DestList;                                      // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBMRoomAIState.TakedownGroup
// 0x0010
struct FTakedownGroup
{
	class TArray<uint8_t>                              GroupActions;                                  // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfo.PredatorXPInfo
// 0x0048
struct FPredatorXPInfo
{
	uint32_t                                           bNeverSeenBonus : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNeverShotBonus : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bPredatorAwarenessEnabled : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            TakedownVariation;                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            FearTakedowns;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            HealthRemaining;                               // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            TotalCombatants;                               // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxCombatants;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            NumThugs;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            NumMilitia;                                    // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            NumMiniguns;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            NumMedics;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            NumCamouflage;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            NumSnipers;                                    // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            NumRedhood;                                    // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            NumDMD;                                        // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            NumMines;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            NumDrones;                                     // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            NumSentryGuns;                                 // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            NumJammers;                                    // 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMRoomAIState.LocationToAvoidMining
// 0x0011
struct FLocationToAvoidMining
{
	struct FVector                                     Loc;                                           // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              minDistToMine;                                 // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            locType;                                       // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0011 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RPawnPlayer.AIAwarenessState
// 0x0080
struct FAIAwarenessState
{
	struct FVector                                     LastSeenPos;                                   // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              LastSeenTime;                                  // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasOnRailing : 1;                             // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     WasOnRailingPointA;                            // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     WasOnRailingPointB;                            // 0x0020 (0x000C) [0x0000000000000000]               
	uint32_t                                           bWasUsingVantage : 1;                          // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	class ARHidePoint*                                 LastSeenVantage;                               // 0x0030 (0x0008) [0x0000000000000000]               
	struct FVector                                     LastOnGargLoc;                                 // 0x0038 (0x000C) [0x0000000000000000]               
	uint32_t                                           bWasVantageInverted : 1;                       // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWasDoingSpecialMovePredictable : 1;           // 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWasInAir : 1;                                 // 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWasDangling : 1;                              // 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bWasInGrate : 1;                               // 0x0044 (0x0004) [0x0000000000000000] [0x00000010] 
	class ARTunnelGrateBase*                           GrateToDestroy;                                // 0x0048 (0x0008) [0x0000000000000000]               
	struct FVector                                     CachedLedgeRefPoint;                           // 0x0050 (0x000C) [0x0000000000000000]               
	struct FVector                                     CachedLedgeRefDir;                             // 0x005C (0x000C) [0x0000000000000000]               
	struct FVector                                     AggressiveLandLoc;                             // 0x0068 (0x000C) [0x0000000000000000]               
	class FName                                        BarkAvailable;                                 // 0x0074 (0x0008) [0x0000000000000000]               
	uint32_t                                           bWasOnCeiling : 1;                             // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RBMAIManager.ControllerInfo
// 0x0028
struct FControllerInfo
{
	class ARBMAIController*                            Controller;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        ControllerName;                                // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        PawnName;                                      // 0x0010 (0x0008) [0x0000000000000000]               
	class FName                                        PawnSpawner;                                   // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              AccumulatedDelta;                              // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bForceTick : 1;                                // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceTickIfClose : 1;                         // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RGameInfo.CombatXPInfo
// 0x0064
struct FCombatXPInfo
{
	uint32_t                                           bNoHitBonus : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPerfectFreeflowBonus : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            NumCombatants;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxCombo;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxVariation;                                  // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxGadgetVariation;                            // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            HealthRemaining;                               // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            PerfectFreeflow;                               // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            NumThugs;                                      // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            NumMilitia;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            NumCombatExperts;                              // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBrutes;                                     // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            NumMedics;                                     // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            NumRobots;                                     // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            NumDollotrons;                                 // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            NumPyg;                                        // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBlackfire;                                  // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            NumJokerBoxer;                                 // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            NumRiddlerMech;                                // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBats;                                       // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            NumKnives;                                     // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            NumShields;                                    // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            NumStunSticks;                                 // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            NumGuns;                                       // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            NumCrates;                                     // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            TotalCombatantIncludingNoXP;                   // 0x0060 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawn.BodyPartMadObj
// 0x0009
struct FBodyPartMadObj
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            BodyPart;                                      // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RPawn.HistoryInfo
// 0x0034
struct FHistoryInfo
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              Time;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0014 (0x0001) [0x0000000000000000]               
	class TArray<struct FDetailThought>                Callstack;                                     // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     Location;                                      // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSeqAct_SetFaceFXRegister.SeqActFaceFXRegister
// 0x0014
struct FSeqActFaceFXRegister
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Value;                                         // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAnimUtil.RagdollParts
// 0x0004
struct FRagdollParts
{
	uint32_t                                           Spine : 1;                                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Pelvis : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Head : 1;                                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           LeftUpperArm : 1;                              // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           LeftLowerArm : 1;                              // 0x0000 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           RightUpperArm : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           RightLowerArm : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           LeftUpperLeg : 1;                              // 0x0000 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           LeftLowerLeg : 1;                              // 0x0000 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           RightUpperLeg : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           RightLowerLeg : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           Misc : 1;                                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
};

// ScriptStruct BmGame.RAnimUtil.RagdollIndices
// 0x00C0
struct FRagdollIndices
{
	class TArray<int32_t>                              Spine;                                         // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              Pelvis;                                        // 0x0010 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              Head;                                          // 0x0020 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              LeftUpperArm;                                  // 0x0030 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              LeftUpperLeg;                                  // 0x0040 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              LeftLowerArm;                                  // 0x0050 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              LeftLowerLeg;                                  // 0x0060 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              RightUpperArm;                                 // 0x0070 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              RightUpperLeg;                                 // 0x0080 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              RightLowerArm;                                 // 0x0090 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              RightLowerLeg;                                 // 0x00A0 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              Misc;                                          // 0x00B0 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil.RotationTranslation
// 0x001C
struct FRotationTranslation
{
	struct FQuat                                       Rotation;                                      // 0x0000 (0x0010) [0x0000000000000000]               
	struct FVector                                     Translation;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x4];                         // 0x001C (0x0004) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil.Chaser
// 0x000C
struct FChaser
{
	float                                              Value;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Target;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Velocity;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnCharacter.SoundTracking
// 0x0010
struct FSoundTracking
{
	class UAkEvent*                                    NameOfSound;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              PeakStrength;                                  // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnCharacter.CustomIdleConfig
// 0x0034
struct FCustomIdleConfig
{
	struct FCustomAnimConfig                           Config;                                        // 0x0000 (0x0034) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_MovementPlayer.OneShotMovementCycle
// 0x0058
struct FOneShotMovementCycle
{
	uint8_t                                            State;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	struct FResolvedAnimConfig                         Anim;                                          // 0x0004 (0x0024) [0x0000000000000000]               
	struct FTransitionId                               TransitionId;                                  // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            BeginLoopIndex;                                // 0x002C (0x0004) [0x0000000000000000]               
	uint8_t                                            BeginPoint;                                    // 0x0030 (0x0001) [0x0000000000000000]               
	float                                              BeginTime;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	uint8_t                                            BlendOutPoint;                                 // 0x0038 (0x0001) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x003C (0x0004) [0x0000000000000000]               
	float                                              EndTime;                                       // 0x0040 (0x0004) [0x0000000000000000]               
	class FName                                        Description;                                   // 0x0044 (0x0008) [0x0000000000000000]               
	struct FNormalizedTimeSpan                         Time;                                          // 0x004C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_MovementPlayer.MovementPlayer
// 0x0070
struct FMovementPlayer
{
	struct FCycleTime                                  CurrentCycleTime;                              // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           HackHackHackFirstPerson : 1;                   // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FOneShotMovementCycle                       OneShotMovementCycle;                          // 0x0010 (0x0058) [0x0000000000000000]               
	float                                              BankWeight;                                    // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              BankWeightVelocity;                            // 0x006C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorInputAnim
// 0x0074
struct FAnimAccumulatorInputAnim
{
	class UAnimSequence*                               FullBodyAnim;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSequence*                               UpperBodyAnim;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	class UAnimSequence*                               RootBoneSubtractionAnim;                       // 0x0010 (0x0008) [0x0000000000000000]               
	class URAimingConfig*                              AimingConfig;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	struct FNormalizedTimeSpan                         Time;                                          // 0x0020 (0x000C) [0x0000000000000000]               
	uint32_t                                           Mirrored : 1;                                  // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FWeight                                     Weight;                                        // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           ShowsAdditiveIdle : 1;                         // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            RootBoneSubtractionMode;                       // 0x0038 (0x0001) [0x0000000000000000]               
	struct FVector                                     BeginRootBoneTranslationOffset;                // 0x003C (0x000C) [0x0000000000000000]               
	struct FVector                                     EndRootBoneTranslationOffset;                  // 0x0048 (0x000C) [0x0000000000000000]               
	uint32_t                                           RootMotionBasisEnabled : 1;                    // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            UnknownData00[0x8];                              // 0x0058 (0x0008) MISSED OFFSET
	struct FQuat                                       RootMotionBasis;                               // 0x0060 (0x0010) [0x0000000000000000]               
	float                                              RootMotionScale;                               // 0x0070 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0xC];                         // 0x0074 (0x000C) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorInputAdditiveAnim
// 0x005C
struct FAnimAccumulatorInputAdditiveAnim
{
	class UAnimSequence*                               AddAnim;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSequence*                               SubtractAnim;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	struct FNormalizedTimeSpan                         Time;                                          // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              SubtractTime;                                  // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           Mirrored : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FWeight                                     Weight;                                        // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           EnableNotifies : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           EnableMotionExtraction : 1;                    // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           EnableFaceFX : 1;                              // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                            RootBoneSubtractionMode;                       // 0x002C (0x0001) [0x0000000000000000]               
	uint32_t                                           RootMotionBasisEnabled : 1;                    // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            UnknownData00[0xC];                              // 0x0034 (0x000C) MISSED OFFSET
	struct FQuat                                       RootMotionBasis;                               // 0x0040 (0x0010) [0x0000000000000000]               
	float                                              RootMotionScale;                               // 0x0050 (0x0004) [0x0000000000000000]               
	uint8_t                                            MagicGadgetBlend;                              // 0x0054 (0x0001) [0x0000000000000000]               
	uint32_t                                           EnableModelspaceHandBlending : 1;              // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            MinStructAlignment[0x4];                         // 0x005C (0x0004) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorInputPartialAnim
// 0x0026
struct FAnimAccumulatorInputPartialAnim
{
	class UAnimSequence*                               Anim;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class URAimingConfig*                              AimingConfig;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	struct FNormalizedTimeSpan                         Time;                                          // 0x0010 (0x000C) [0x0000000000000000]               
	uint32_t                                           Mirrored : 1;                                  // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FWeight                                     Weight;                                        // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0024 (0x0001) [0x0000000000000000]               
	uint8_t                                            MagicGadgetBlend;                              // 0x0025 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                         // 0x0026 (0x0002) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorInputLayer
// 0x0078
struct FAnimAccumulatorInputLayer
{
	int32_t                                            LayerIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FAnimAccumulatorInputAnim>     Anims;                                         // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAnimAccumulatorInputAdditiveAnim> AdditiveAnims;                                 // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAnimAccumulatorInputPartialAnim> PartialAnims;                                  // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FProportionalMotion                         ProportionalMotion;                            // 0x0034 (0x0044) [0x0000000000004000] (CPF_Component)
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorInputLayerStack
// 0x0010
struct FAnimAccumulatorInputLayerStack
{
	class TArray<struct FAnimAccumulatorInputLayer>    Stack;                                         // 0x0000 (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorInputPose
// 0x0090
struct FAnimAccumulatorInputPose
{
	struct FAnimAccumulatorInputLayer                  Transition;                                    // 0x0000 (0x0078) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
	struct FAnimAccumulatorInputLayerStack             Pose;                                          // 0x0078 (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
	struct FWeight                                     PoseWeight;                                    // 0x0088 (0x0004) [0x0000000000000000]               
	struct FTransitionId                               Id;                                            // 0x008C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorInputSlavedPoses
// 0x0058
struct FAnimAccumulatorInputSlavedPoses
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FAnimAccumulatorInputPose>     Poses;                                         // 0x0004 (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
	struct FProportionalMotion                         ProportionalMotion;                            // 0x0014 (0x0044) [0x0000000000004000] (CPF_Component)
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorInput
// 0x009C
struct FAnimAccumulatorInput
{
	struct FAnimAccumulatorInputLayer                  Global;                                        // 0x0000 (0x0078) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FAnimAccumulatorInputPose>     Poses;                                         // 0x0078 (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FAnimAccumulatorInputSlavedPoses> SlavedPoses;                                   // 0x0088 (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
	float                                              AddYaw;                                        // 0x0098 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.BodyWeight
// 0x0008
struct FBodyWeight
{
	struct FWeight                                     UpperBody;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FWeight                                     LowerBody;                                     // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorWeightedAnim
// 0x0090
struct FAnimAccumulatorWeightedAnim
{
	struct FBodyWeight                                 Weight;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x8];                              // 0x0008 (0x0008) MISSED OFFSET
	struct FAnimAccumulatorInputAnim                   Anim;                                          // 0x0010 (0x0080) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorWeightedUpperBodyAnim
// 0x002C
struct FAnimAccumulatorWeightedUpperBodyAnim
{
	struct FWeight                                     Weight;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	struct FAnimAccumulatorInputPartialAnim            Anim;                                          // 0x0004 (0x0028) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorWeightedAdditiveAnim
// 0x0070
struct FAnimAccumulatorWeightedAdditiveAnim
{
	struct FBodyWeight                                 Weight;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x8];                              // 0x0008 (0x0008) MISSED OFFSET
	struct FAnimAccumulatorInputAdditiveAnim           Anim;                                          // 0x0010 (0x0060) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorIntermediate
// 0x0034
struct FAnimAccumulatorIntermediate
{
	class TArray<struct FAnimAccumulatorWeightedAnim>  Anims;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAnimAccumulatorWeightedUpperBodyAnim> UpperBodyAnims;                                // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAnimAccumulatorWeightedAdditiveAnim> AdditiveAnims;                                 // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              AddYaw;                                        // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorMotionAnim
// 0x0054
struct FAnimAccumulatorMotionAnim
{
	class UAnimSequence*                               Anim;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FNormalizedTimeSpan                         Time;                                          // 0x0008 (0x000C) [0x0000000000000000]               
	uint32_t                                           Mirrored : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FWeight                                     Weight;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            RootBoneSubtractionMode;                       // 0x001C (0x0001) [0x0000000000000000]               
	struct FVector                                     BeginRootBoneTranslationOffset;                // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndRootBoneTranslationOffset;                  // 0x002C (0x000C) [0x0000000000000000]               
	uint32_t                                           RootMotionBasisEnabled : 1;                    // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            UnknownData00[0x4];                              // 0x003C (0x0004) MISSED OFFSET
	struct FQuat                                       RootMotionBasis;                               // 0x0040 (0x0010) [0x0000000000000000]               
	float                                              RootMotionScale;                               // 0x0050 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0xC];                         // 0x0054 (0x000C) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorMotion
// 0x0010
struct FAnimAccumulatorMotion
{
	class TArray<struct FAnimAccumulatorMotionAnim>    Anims;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorOutputNotifyAnims
// 0x0058
struct FAnimAccumulatorOutputNotifyAnims
{
	struct FNotifyAnim                                 FullBody;                                      // 0x0000 (0x001C) [0x0000000000000000]               
	struct FNotifyAnim                                 UpperBody;                                     // 0x001C (0x001C) [0x0000000000000000]               
	class TArray<struct FNotifyAnim>                   Additive;                                      // 0x0038 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FAnimCollisionOptions                       CollisionOptions;                              // 0x0048 (0x0008) [0x0000000000000000]               
	class URAnimNotify_SwitchWeaponBone*               SwitchWeaponBoneNotify;                        // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorSkeleton
// 0x0020
struct FAnimAccumulatorSkeleton
{
	class TArray<struct FBoneAtom>                     Skeleton;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FBoneAtom>                     Special;                                       // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.IntArray
// 0x0010
struct FIntArray
{
	class TArray<int32_t>                              Array;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorSkeletonConstants
// 0x007C
struct FAnimAccumulatorSkeletonConstants
{
	class TArray<struct FIntArray>                     SpecialIndexChains;                            // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           DisableAiming : 1;                             // 0x0010 (0x0004) [0x0000080000000000] [0x00000001] (CPF_EditorOnly)
	uint32_t                                           DisableAdditive : 1;                           // 0x0010 (0x0004) [0x0000080000000000] [0x00000002] (CPF_EditorOnly)
	class TArray<int32_t>                              LeftHandIndexChain;                            // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              RightHandIndexChain;                           // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              LeftGundummyIndexChain;                        // 0x0034 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              RightGundummyIndexChain;                       // 0x0044 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              LeftFootIndexChain;                            // 0x0054 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              RightFootIndexChain;                           // 0x0064 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            LeftGundummyBoneIndex;                         // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            RightGundummyBoneIndex;                        // 0x0078 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AimingBoneConstants
// 0x0040
struct FAimingBoneConstants
{
	struct FQuat                                       RefPose;                                       // 0x0000 (0x0010) [0x0000000000000000]               
	uint32_t                                           EnableLimit : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     OneOverPositiveLimit;                          // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     OneOverNegativeLimit;                          // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     Proportion;                                    // 0x002C (0x000C) [0x0000000000000000]               
	int32_t                                            BoneIndex;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            ParentAimingBoneIndex;                         // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AimingGroupBone
// 0x0008
struct FAimingGroupBone
{
	int32_t                                            AimingBoneIndex;                               // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           Active : 1;                                    // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AimingGroupConstants
// 0x0014
struct FAimingGroupConstants
{
	class TArray<struct FAimingGroupBone>              Bones;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           IsLeaf : 1;                                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AimingReferenceBoneIndexChains
// 0x0030
struct FAimingReferenceBoneIndexChains
{
	class TArray<int32_t>                              Head;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              Gundummy;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              Gundummy02;                                    // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AimingOutput
// 0x0080
struct FAimingOutput
{
	class TArray<struct FAimingBoneConstants>          AimingBoneConstants;                           // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAimingGroupConstants>         AimAtAimingGroupConstants;                     // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAimingGroupConstants>         LookAtAimingGroupConstants;                    // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FAimingReferenceBoneIndexChains             ReferenceBoneIndexChains;                      // 0x0030 (0x0030) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAimAtSample>                  AimAtSamples;                                  // 0x0060 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAimAtSample>                  LookAtSamples;                                 // 0x0070 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorCachedOutput
// 0x0040
struct FAnimAccumulatorCachedOutput
{
	struct FBoneAtom                                   ModelspaceHeadTransformWithoutAiming;          // 0x0000 (0x0020) [0x0000000000000000]               
	struct FBoneAtom                                   ModelspaceHeadTransformWithAiming;             // 0x0020 (0x0020) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulatorAsyncData.AnimAccumulatorOutput
// 0x0100
struct FAnimAccumulatorOutput
{
	struct FRotationTranslation                        Motion;                                        // 0x0000 (0x0020) [0x0000000000000000]               
	struct FProportionalMotion                         ProportionalMotion;                            // 0x0020 (0x0044) [0x0000000000004000] (CPF_Component)
	struct FAnimAccumulatorOutputNotifyAnims           NotifyAnims;                                   // 0x0064 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            UnknownData00[0x4];                              // 0x00BC (0x0004) MISSED OFFSET
	struct FBoneAtom                                   ModelspaceHeadTransformWithoutAiming;          // 0x00C0 (0x0020) [0x0000000000000000]               
	struct FBoneAtom                                   ModelspaceHeadTransformWithAiming;             // 0x00E0 (0x0020) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PhysicsOutput.RagdollConstants
// 0x0190
struct FRagdollConstants
{
	struct FRagdollIndices                             BodyIndices;                                   // 0x0000 (0x00C0) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FRagdollIndices                             ConstraintIndices;                             // 0x00C0 (0x00C0) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              RagdollSoundTypes;                             // 0x0180 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPawnCharacter.CustomTransitionConfig
// 0x0034
struct FCustomTransitionConfig
{
	struct FCustomAnimConfig                           Config;                                        // 0x0000 (0x0034) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_MovementOutput.ProceduralMovement
// 0x003C
struct FProceduralMovement
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     AddTranslationVelocity;                        // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     AddTranslation;                                // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              AddYaw;                                        // 0x001C (0x0004) [0x0000000000000000]               
	float                                              AddYawVelocity;                                // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           OverrideTranslationVelocityEnabled : 1;        // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     OverrideTranslationVelocity;                   // 0x0028 (0x000C) [0x0000000000000000]               
	uint32_t                                           OverrideYawVelocityEnabled : 1;                // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OverrideYawVelocity;                           // 0x0038 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_MovementOutput.MovementOutput
// 0x0078
struct FMovementOutput
{
	float                                              RagdollFacing;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              YawVelocity;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	struct FProceduralMovement                         ProceduralMovement;                            // 0x0008 (0x003C) [0x0000000000000000]               
	struct FVector                                     TranslationError;                              // 0x0044 (0x000C) [0x0000000000000000]               
	uint32_t                                           CheatsEnabled : 1;                             // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           PreAnimUpdateHandledFalling : 1;               // 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUpdatedRagdollLastFrame : 1;                  // 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     DesiredLocation;                               // 0x0054 (0x000C) [0x0000000000000000]               
	struct FQuat                                       DesiredRotation;                               // 0x0060 (0x0010) [0x0000000000000000]               
	uint8_t                                            DesiredPhysics;                                // 0x0070 (0x0001) [0x0000000000000000]               
	int32_t                                            StuckCounter;                                  // 0x0074 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	uint8_t                                            MinStructAlignment[0x8];                         // 0x0078 (0x0008) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil_OverlayPlayer.PlayingOverlayState
// 0x0014
struct FPlayingOverlayState
{
	struct FNormalizedTimeSpan                         Time;                                          // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           Stopping : 1;                                  // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NormalizedStoppingTime;                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_OverlayPlayer.OverlayId
// 0x0008
struct FOverlayId
{
	int32_t                                            PlayerID;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            AnimId;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_OverlayPlayer.PlayingOverlay
// 0x0058
struct FPlayingOverlay
{
	struct FPlayingOverlayState                        State;                                         // 0x0000 (0x0014) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x0014 (0x0004) [0x0000000000000000]               
	class FName                                        Name;                                          // 0x0018 (0x0008) [0x0000000000000000]               
	struct FCustomAnimConfig                           CustomAnim;                                    // 0x0020 (0x0034) [0x0000000000000000]               
	struct FTransitionId                               PoseId;                                        // 0x0054 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_OverlayPlayer.OverlayPlayer
// 0x0019
struct FOverlayPlayer
{
	class TArray<struct FPlayingOverlay>               PlayingOverlays;                               // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            PlayerID;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            NextAnimId;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            Layer;                                         // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0019 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RAnimUtil_OverlayPlayer.PlayingAdditiveOverlay
// 0x0044
struct FPlayingAdditiveOverlay
{
	struct FPlayingOverlayState                        State;                                         // 0x0000 (0x0014) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x0014 (0x0004) [0x0000000000000000]               
	struct FCustomAdditiveAnimConfig                   Anim;                                          // 0x0018 (0x0028) [0x0000000000000000]               
	struct FTransitionId                               PoseId;                                        // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_OverlayPlayer.AdditiveOverlayPlayer
// 0x0018
struct FAdditiveOverlayPlayer
{
	class TArray<struct FPlayingAdditiveOverlay>       PlayingOverlays;                               // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            PlayerID;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            NextAnimId;                                    // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_OverlayPlayer.PlayingGlobalAdditiveOverlay
// 0x0030
struct FPlayingGlobalAdditiveOverlay
{
	struct FPlayingOverlayState                        State;                                         // 0x0000 (0x0014) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x0014 (0x0004) [0x0000000000000000]               
	struct FFullyCustomAdditiveAnimConfig              Anim;                                          // 0x0018 (0x0018) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_OverlayPlayer.GlobalAdditiveOverlayPlayer
// 0x0018
struct FGlobalAdditiveOverlayPlayer
{
	class TArray<struct FPlayingGlobalAdditiveOverlay> PlayingOverlays;                               // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            PlayerID;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            NextAnimId;                                    // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_AnimAccumulator.AnimAccumulator
// 0x0058
struct FAnimAccumulator
{
	class URAnimUtil_AnimAccumulatorAsyncData*         AsyncData;                                     // 0x0000 (0x0008) [0x0000000000000400] (CPF_Transient)
	struct FPointer                                    AsyncJob;                                      // 0x0008 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FAnimAccumulatorCachedOutput                CachedOutput;                                  // 0x0010 (0x0040) [0x0000000000000000]               
	class URAimingBoneConfig*                          CachedAimingBoneConfig;                        // 0x0050 (0x0008) [0x0000080000000000] (CPF_EditorOnly)
	uint8_t                                            MinStructAlignment[0x8];                         // 0x0058 (0x0008) ADDED PADDING
};

// ScriptStruct BmGame.RAnimNode_Pose.GlobalAdditiveAnimState
// 0x0020
struct FGlobalAdditiveAnimState
{
	class FName                                        Slot;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSequence*                               AddAnim;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class UAnimSequence*                               SubtractAnim;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              NormalizedTime;                                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              Weight;                                        // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimNode_Pose.GlobalGundummyAnimState
// 0x0010
struct FGlobalGundummyAnimState
{
	class UAnimSequence*                               Anim;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              NormalizedTime;                                // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Weight;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimNode_Pose.BreathingState
// 0x000C
struct FBreathingState
{
	uint32_t                                           Allowed : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           PreviousUnconscious : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              Time;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeScale;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimNode_Pose.CurveFloat
// 0x000C
struct FCurveFloat
{
	class FName                                        FloatName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              FloatValue;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimNode_Pose.CurveFloatState
// 0x0010
struct FCurveFloatState
{
	class TArray<struct FCurveFloat>                   CurrentValues;                                 // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimNode_Pose.EditorNonsense
// 0x0078
struct FEditorNonsense
{
	struct FAnimConfig                                 Idle;                                          // 0x0000 (0x0028) [0x0000000100000000] (CPF_Edit)    
	struct FAdditiveAnimConfig                         AdditiveIdle;                                  // 0x0028 (0x001C) [0x0000000100000000] (CPF_Edit)    
	float                                              AimAtYaw;                                      // 0x0044 (0x0004) [0x0000000100000400] (CPF_Edit | CPF_Transient)
	float                                              AimAtPitch;                                    // 0x0048 (0x0004) [0x0000000100000400] (CPF_Edit | CPF_Transient)
	float                                              LookAtYaw;                                     // 0x004C (0x0004) [0x0000000100000400] (CPF_Edit | CPF_Transient)
	float                                              LookAtPitch;                                   // 0x0050 (0x0004) [0x0000000100000400] (CPF_Edit | CPF_Transient)
	class URAimingConfig*                              AimingConfig;                                  // 0x0054 (0x0008) [0x0000004100010004] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	struct FAimingTransitionTiming                     AimAtTiming;                                   // 0x005C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FAimingTransitionTiming                     LookAtTiming;                                  // 0x0068 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           AimAtEnabled : 1;                              // 0x0074 (0x0004) [0x0000000100000400] [0x00000001] (CPF_Edit | CPF_Transient)
	uint32_t                                           LookAtEnabled : 1;                             // 0x0074 (0x0004) [0x0000000100000400] [0x00000002] (CPF_Edit | CPF_Transient)
	uint32_t                                           Mirrored : 1;                                  // 0x0074 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct BmGame.RAnimNode_Pose.PreviousPoseDescription
// 0x0068
struct FPreviousPoseDescription
{
	class FName                                        MovementStance;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        WeaponStance;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        IdleStance;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	class AInventory*                                  Weapon;                                        // 0x0018 (0x0008) [0x0000000000000000]               
	class URWeaponConfig*                              WeaponConfig;                                  // 0x0020 (0x0008) [0x0000000000000000]               
	uint32_t                                           Mirrored : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	class UInterpGroupInst*                            MatineeInterpGroupInst;                        // 0x002C (0x0008) [0x0000000000000000]               
	struct FCustomAnimConfig                           CustomIdle;                                    // 0x0034 (0x0034) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnCharacter.RagdollNavMeshCollisionTrackingInfo
// 0x0014
struct FRagdollNavMeshCollisionTrackingInfo
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     PrevPosition;                                  // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnCharacter.TweakFaceFXRegister
// 0x0014
struct FTweakFaceFXRegister
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Value;                                         // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RPawnCombat.WrithePhaseDesc
// 0x001C
struct FWrithePhaseDesc
{
	class FName                                        FaceUpAnimName;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        FaceDownAnimName;                              // 0x0008 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    AnimSet;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           bMirrored : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RPawnCombat.WritheDescription
// 0x0050
struct FWritheDescription
{
	class TArray<struct FWrithePhaseDesc>              InitialWrithe;                                 // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FWrithePhaseDesc>              InitialWritheBack;                             // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FWrithePhaseDesc>              InitialWritheSide;                             // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FWrithePhaseDesc>              HitWallWrithe;                                 // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FWrithePhaseDesc>              HitWallWritheBack;                             // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPawnCombat.DamageInfo
// 0x00F8
struct FDamageInfo
{
	class AActor*                                      Attacker;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        BoneName;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     Impulse;                                       // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              DamageAmount;                                  // 0x001C (0x0004) [0x0000000000000000]               
	float                                              StunTime;                                      // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              fKnockOverPawnsExtraRadius;                    // 0x0024 (0x0004) [0x0000000000000000]               
	class UClass*                                      DamageType;                                    // 0x0028 (0x0008) [0x0000000000000000]               
	class FName                                        WritheAnim;                                    // 0x0030 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHeavyHit : 1;                                 // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCritical : 1;                                 // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCanBeBlocked : 1;                             // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWillKnockOverOtherPawns : 1;                  // 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bForceStumbleBackwards : 1;                    // 0x0038 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bForceQuickMotor : 1;                          // 0x0038 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bIgnoreBatmanAttackMove : 1;                   // 0x0038 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bHitReactionMirrored : 1;                      // 0x0038 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bUseWeaponHitReactionAnimSet : 1;              // 0x0038 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bDontAlignHitReactionAnim : 1;                 // 0x0038 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bSmoothlyAlignHitReactionAnim : 1;             // 0x0038 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bHitReactionDropsWeapon : 1;                   // 0x0038 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bForceKeepWeapon : 1;                          // 0x0038 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bIgnorePreHitWallWrithe : 1;                   // 0x0038 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bCanForceIntoCombat : 1;                       // 0x0038 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bHitReactionIgnoresBase : 1;                   // 0x0038 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bDampRagdollOnTakedown : 1;                    // 0x0038 (0x0004) [0x0000000000000000] [0x00010000] 
	uint8_t                                            ARF;                                           // 0x003C (0x0001) [0x0000000000000000]               
	class FName                                        HitReactionAnimName;                           // 0x0040 (0x0008) [0x0000000000000000]               
	class FName                                        HitReactionRecoverAnimName;                    // 0x0048 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    HitReactionAnimSet;                            // 0x0050 (0x0008) [0x0000000000000000]               
	struct FVector                                     HitReactionHeading;                            // 0x0058 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitReactionWeaponSwitchThrowImpulse;           // 0x0064 (0x000C) [0x0000000000000000]               
	struct FVector                                     ForceHitReactionHeading;                       // 0x0070 (0x000C) [0x0000000000000000]               
	struct FVector                                     ForceHitReactionLocation;                      // 0x007C (0x000C) [0x0000000000000000]               
	float                                              TransitionDurationScale;                       // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              SlideHitReactionAmount;                        // 0x008C (0x0004) [0x0000000000000000]               
	class UClass*                                      HitReactionClass;                              // 0x0090 (0x0008) [0x0000000000000000]               
	float                                              RagdollForceDuration;                          // 0x0098 (0x0004) [0x0000000000000000]               
	struct FVector                                     RagdollForce;                                  // 0x009C (0x000C) [0x0000000000000000]               
	struct FWritheDescription                          WritheDescription;                             // 0x00A8 (0x0050) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCharacterDefine.MatOverrides
// 0x0010
struct FMatOverrides
{
	class TArray<class UMaterialInterface*>            Materials;                                     // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCharacterDefine.MainMeshArray
// 0x0024
struct FMainMeshArray
{
	class TArray<class USkeletalMesh*>                 Meshes;                                        // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bIsPlaceholder : 1;                            // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class TArray<struct FMatOverrides>                 ThugMakerMaterialSwaps;                        // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCharacterDefine.PerMeshMatOverride
// 0x0018
struct FPerMeshMatOverride
{
	class USkeletalMesh*                               Mesh;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UMaterialInterface*>            Materials;                                     // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCharacterDefine.MultiStaticProp
// 0x0028
struct FMultiStaticProp
{
	class UStaticMesh*                                 Prop;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UMaterialInstance*>             OverrideMaterials;                             // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UMaterialInstance*                           OverrideXrayMaterial;                          // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInstance*                           OverrideThermalMaterial;                       // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RCharacterDefine.CharacterStaticPropsDef
// 0x003C
struct FCharacterStaticPropsDef
{
	class TArray<struct FMultiStaticProp>              Props;                                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              PercentOfSpawnsThatHaveThisProp;               // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SocketToAttachPropTo;                          // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        BoneToAttachPropTo;                            // 0x001C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        FlagCheck;                                     // 0x0024 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FString                                      MeshFlagMatch;                                 // 0x002C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCharacterDefine.MultiSkeletonProp
// 0x0038
struct FMultiSkeletonProp
{
	class USkeletalMesh*                               Prop;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      DroppedPropClass;                              // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UMaterialInstance*>             OverrideMaterials;                             // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UMaterialInstance*                           OverrideXrayMaterial;                          // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInstance*                           OverrideThermalMaterial;                       // 0x0028 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UPhysicsAsset*                               PropPhys;                                      // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RCharacterDefine.CharacterSkeletalPropsDef
// 0x0068
struct FCharacterSkeletalPropsDef
{
	class TArray<struct FMultiSkeletonProp>            Props;                                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              PercentOfSpawnsThatHaveThisProp;               // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SocketToAttachPropTo;                          // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        BoneToAttachPropTo;                            // 0x001C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        FlagCheck;                                     // 0x0024 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bDropPropOnStrike : 1;                         // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bDropPropOnDeath : 1;                          // 0x002C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bUsesParentAnim : 1;                           // 0x002C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint8_t                                            ParentAnimComponentMode;                       // 0x0030 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class UAnimTree*                                   AnimTree;                                      // 0x0034 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UAnimSet*>                      AnimSets;                                      // 0x003C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      MeshFlagMatch;                                 // 0x004C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bIsThugMaker : 1;                              // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	class UAkEvent*                                    CustomDetatchedImpactEvent;                    // 0x0060 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RCharacterDefine.AlwaysOnParticlesDef
// 0x0010
struct FAlwaysOnParticlesDef
{
	class UParticleSystem*                             Part;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AttachBone;                                    // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RCharacterDefine.BoneTrackingCharDefine
// 0x0044
struct FBoneTrackingCharDefine
{
	class TArray<class FName>                          Bones;                                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UAkEvent*>                      Events;                                        // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UAkParameterName*>              RTPCToSet;                                     // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UAkEvent*                                    EventToTrigger;                                // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              TriggerAtValue;                                // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ResetAtValue;                                  // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Ratio;                                         // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBMPawnAI.CharacterStaticProps
// 0x008C
struct FCharacterStaticProps
{
	class UStaticMesh*                                 Prop;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UStaticMeshComponent*                        PropComp;                                      // 0x0008 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        PropGlobalFlagCheck;                           // 0x0010 (0x0008) [0x0000000000000000]               
	class FString                                      MeshFlagMatch;                                 // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        SocketToAttachPropTo;                          // 0x0028 (0x0008) [0x0000000000000000]               
	class FName                                        BoneToAttachPropTo;                            // 0x0030 (0x0008) [0x0000000000000000]               
	class TArray<class UMaterialInstance*>             OverrideMaterials;                             // 0x0038 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class UMaterialInstanceConstant*>     OverrideMaterialsIC;                           // 0x0048 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UMaterialInstance*                           OverrideXrayMaterial;                          // 0x0058 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   OverrideXrayMaterialIC;                        // 0x0060 (0x0008) [0x0000000000000000]               
	class UMaterialInstance*                           OverrideThermalMaterial;                       // 0x0068 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   OverrideThermalMaterialIC;                     // 0x0070 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDisruptableEquipment : 1;                     // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bExplosiveWhenDisrupted : 1;                   // 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      sDisruptorHUDDescription;                      // 0x007C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBMPawnAI.CharacterSkeletalProps
// 0x00B8
struct FCharacterSkeletalProps
{
	class USkeletalMesh*                               Prop;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      PropComp;                                      // 0x0008 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class UMaterialInstance*>             OverrideMaterials;                             // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UMaterialInstance*                           OverrideXrayMaterial;                          // 0x0020 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   OverrideXrayMaterialIC;                        // 0x0028 (0x0008) [0x0000000000000000]               
	class UMaterialInstance*                           OverrideThermalMaterial;                       // 0x0030 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   OverrideThermalMaterialIC;                     // 0x0038 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDontAllowColorChange : 1;                     // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	class UPhysicsAsset*                               PropPhys;                                      // 0x0044 (0x0008) [0x0000000000000000]               
	class FName                                        SocketToAttachPropTo;                          // 0x004C (0x0008) [0x0000000000000000]               
	class FName                                        BoneToAttachPropTo;                            // 0x0054 (0x0008) [0x0000000000000000]               
	class FName                                        PropGlobalFlagCheck;                           // 0x005C (0x0008) [0x0000000000000000]               
	class FString                                      MeshFlagMatch;                                 // 0x0064 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bRemovePropOnStrike : 1;                       // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRemovePropOnDeath : 1;                        // 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bRemovedProp : 1;                              // 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bUsesParentAnim : 1;                           // 0x0074 (0x0004) [0x0000000000000000] [0x00000008] 
	uint8_t                                            ParentAnimComponentMode;                       // 0x0078 (0x0001) [0x0000000000000000]               
	class UAnimTree*                                   AnimTree;                                      // 0x007C (0x0008) [0x0000000000000000]               
	class TArray<class UAnimSet*>                      AnimSets;                                      // 0x0084 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UClass*                                      RemovedPropClass;                              // 0x0094 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    CustomDetatchedImpactEvent;                    // 0x009C (0x0008) [0x0000000000000000]               
	uint32_t                                           bDisruptableEquipment : 1;                     // 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bExplosiveWhenDisrupted : 1;                   // 0x00A4 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      sDisruptorHUDDescription;                      // 0x00A8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfo.GameActionToAAITakedownMapping
// 0x0011
struct FGameActionToAAITakedownMapping
{
	class TArray<uint8_t>                              Actions;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            takedownType;                                  // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0011 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RBM2Behaviour_IdleConfig.CombatAndSpOptions
// 0x0008
struct FCombatAndSpOptions
{
	float                                              OffsetFromOriginDistance;                      // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bCanBeGrabbed : 1;                             // 0x0004 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowInstantExitViaExitCon : 1;               // 0x0004 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bCanBeHitInCombat : 1;                         // 0x0004 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bCanBeHitInCombatLocal : 1;                    // 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bPlayReactionBeforeJoiningCombat : 1;          // 0x0004 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bCombatTriggered : 1;                          // 0x0004 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bStallBeforeSilentPredator : 1;                // 0x0004 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bStallBeforePredRegistersAEC : 1;              // 0x0004 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           bStartCombatOnLOS : 1;                         // 0x0004 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           bPlayingSpStartle : 1;                         // 0x0004 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bCantRespondToAECAlerts : 1;                   // 0x0004 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           bPlayExitBeforeJoiningCombat : 1;              // 0x0004 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           bEnterCombatIfFiringJammedGun : 1;             // 0x0004 (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
};

// ScriptStruct BmGame.RInventoryGadget.HighlightedMesh
// 0x0058
struct FHighlightedMesh
{
	class AActor*                                      TargetActor;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      OriginalSkelMesh;                              // 0x0008 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      HighlightSkelMesh;                             // 0x0010 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        OriginalStaticMesh;                            // 0x0018 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        HighlightStaticMesh;                           // 0x0020 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     CentreForTargetBounds;                         // 0x0028 (0x000C) [0x0000000000000000]               
	class FName                                        nHitBoneName;                                  // 0x0034 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHasAmmoLeft : 1;                              // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            Type;                                          // 0x0040 (0x0001) [0x0000000000000000]               
	uint32_t                                           Tagged : 1;                                    // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanStillBeShot : 1;                           // 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bExplosive : 1;                                // 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bNeedsUpgrade : 1;                             // 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bNormalViewMode : 1;                           // 0x0044 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bForCamouflageThug : 1;                        // 0x0044 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bSpecialTrackerTarget : 1;                     // 0x0044 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bCurrentTarget : 1;                            // 0x0044 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bHidden : 1;                                   // 0x0044 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           StillRelevant : 1;                             // 0x0044 (0x0004) [0x0000000000000000] [0x00000200] 
	class FString                                      HUDDescription;                                // 0x0048 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RInventoryGadget.GlideGadgetTargetContainer
// 0x001C
struct FGlideGadgetTargetContainer
{
	class FString                                      IconAnimName;                                  // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class AActor*                                      TargetActor;                                   // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleBatmobileBase.BatmobileWeaponWarning
// 0x0038
struct FBatmobileWeaponWarning
{
	struct FVector                                     SourceLocation;                                // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetLocation;                                // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            AttackType;                                    // 0x001C (0x0001) [0x0000000000000000]               
	class UParticleSystemComponent*                    ThisComponent;                                 // 0x0020 (0x0008) [0x0000004000004005] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bAttackBlocked : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAttackBlockedChecked : 1;                     // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     BlockedHitLocation;                            // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleBatmobileBase.BatmobileWeaponWarningContainer
// 0x0020
struct FBatmobileWeaponWarningContainer
{
	class AActor*                                      AttackingActor;                                // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           StillRelevant : 1;                             // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)
	class TArray<struct FBatmobileWeaponWarning>       WeaponWarning;                                 // 0x000C (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
	uint32_t                                           VisibleInPursuitMode : 1;                      // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOnlyShowIfCloseToBatmobile : 1;               // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RBMScreenShakeModifier.BMAdvancedScreenShakeStruct
// 0x0018
struct FBMAdvancedScreenShakeStruct
{
	uint32_t                                           bAmplitudeXShowsInitialDirection : 1;          // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAmplitudeYShowsInitialDirection : 1;          // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bAmplitudeZShowsInitialDirection : 1;          // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	float                                              FrequencyDropPower;                            // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FrequencyDropFactor;                           // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FalloffMinRange;                               // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FalloffMaxRange;                               // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FallOffMinValue;                               // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBMScreenShakeModifier.BMScreenShakeStruct
// 0x009C
struct FBMScreenShakeStruct
{
	float                                              Progress;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TimeDuration;                                  // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     LocAmplitude;                                  // 0x0008 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     LocFrequency;                                  // 0x0014 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     LocSinOffset;                                  // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     LocOffset;                                     // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     RotAmplitude;                                  // 0x0038 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     RotFrequency;                                  // 0x0044 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     RotSinOffset;                                  // 0x0050 (0x000C) [0x0000000000000000]               
	struct FVector                                     RotOffset;                                     // 0x005C (0x000C) [0x0000000000000000]               
	float                                              FOVMultiplier;                                 // 0x0068 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FOVAmplitude;                                  // 0x006C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FOVFrequency;                                  // 0x0070 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FOVSinOffset;                                  // 0x0074 (0x0004) [0x0000000000000000]               
	struct FBMAdvancedScreenShakeStruct                AdvancedOptions;                               // 0x0078 (0x0018) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bSmoothLoc : 1;                                // 0x0090 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bSmoothRot : 1;                                // 0x0090 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	int32_t                                            ShakeId;                                       // 0x0094 (0x0004) [0x0000000000000000]               
	float                                              OverrideStrength;                              // 0x0098 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleBatmobileBase.BatmobilePassengerNoise
// 0x0014
struct FBatmobilePassengerNoise
{
	float                                              MinDelay;                                      // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxDelay;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    AudioEvent;                                    // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              BatmobileShake;                                // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RVehicleBatmobileBase.BatmobileOnFireInfo
// 0x0010
struct FBatmobileOnFireInfo
{
	float                                              PosX;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              PosY;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DecayDelay;                                    // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleBatmobileBase.BatmobilePassenger
// 0x003C
struct FBatmobilePassenger
{
	class FString                                      UI_LocalisedName;                              // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      UI_PortraitName;                               // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class ARBMPawnAI*                                  Pawn;                                          // 0x0020 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    PawnAnimSet;                                   // 0x0028 (0x0008) [0x0000000000000000]               
	class FName                                        PawnAnimName;                                  // 0x0030 (0x0008) [0x0000000000000000]               
	uint32_t                                           IsVillain : 1;                                 // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RVehicleBatmobileBase.QueuedVehicleImpactDamage
// 0x0018
struct FQueuedVehicleImpactDamage
{
	class ARVehicle*                                   TargetVehicle;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     ImpactVelocity;                                // 0x0008 (0x000C) [0x0000000000000000]               
	int32_t                                            NumContanctsReported;                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleBatmobileBase.OffScreenThreat
// 0x001C
struct FOffScreenThreat
{
	struct FVector2D                                   ScreenPos;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Orientation;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x000C (0x0008) [0x0000000000000000]               
	class URVehicleThreatComponent*                    Threat;                                        // 0x0014 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct BmGame.RSeqAct_VehicleEnemySpawner.SpawnedVehicleInstance
// 0x0014
struct FSpawnedVehicleInstance
{
	class ARVehicle*                                   SpawnedEnemy;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            SpawnedEnemyIndex;                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              SpawnedTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bInCombat : 1;                                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RGameInfo.RWindState
// 0x0044
struct FRWindState
{
	struct FVector                                     WindVelocity;                                  // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     SourceVelocity;                                // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     SourceAcceleration;                            // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetVelocity;                                // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetAcceleration;                            // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              TotalInterpolationTime;                        // 0x003C (0x0004) [0x0000000000000000]               
	float                                              RemainingInterpolationTime;                    // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleCustomisation.CarCustomisationMaterialParam
// 0x0020
struct FCarCustomisationMaterialParam
{
	class TArray<class UMaterialInstance*>             OverrideMaterials;                             // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UMaterialInstance*>             DeadMaterials;                                 // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RVehicleCustomisation.CarCustomisationObject
// 0x0028
struct FCarCustomisationObject
{
	class UStaticMesh*                                 RoofRackObject;                                // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FCarCustomisationMaterialParam> RoofRackMaterials;                             // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FCarCustomisationMaterialParam> Materials;                                     // 0x0018 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSeqAct_VehicleEnemySpawner.SpawnedVehicleEnemyDesc
// 0x0058
struct FSpawnedVehicleEnemyDesc
{
	class ARVehicleNPC*                                Archetype;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NumEnemies;                                    // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverrideDefaultSettings : 1;                  // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class FString                                      EnemyName;                                     // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MinRangeToSpawn;                               // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           DropToGround : 1;                              // 0x0024 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              MinTimeBetweenRespawn;                         // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      OverrideCombatBehaviour;                       // 0x002C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      OverrideGuardBehaviour;                        // 0x0034 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<float>                                LastDestroyedTime;                             // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           UseIndoorVision : 1;                           // 0x004C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           SpawnPassengers : 1;                           // 0x004C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	class ARVehicleNPCWeapon*                          PassengerWeaponArchetype;                      // 0x0050 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RVehicleNPC.WalkerWeaponContainer
// 0x005C
struct FWalkerWeaponContainer
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class ARProjectile*                                ProjectileArchetype;                           // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    FireSound;                                     // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        FiringSocketName;                              // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              WeaponCountdown;                               // 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     AttackLocation;                                // 0x0020 (0x000C) [0x0000000000000000]               
	class AActor*                                      AttackTarget;                                  // 0x002C (0x0008) [0x0000000000000000]               
	uint32_t                                           bPreparingToFiring : 1;                        // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLeftArmWeapon : 1;                            // 0x0034 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bRightArmWeapon : 1;                           // 0x0034 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	int32_t                                            NumAttacksToGo;                                // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            Health;                                        // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             ExplodeParticle;                               // 0x0040 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ExplodeSound;                                  // 0x0048 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bCanTargetBatman : 1;                          // 0x0050 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bCantDoSimultaneousAttack : 1;                 // 0x0050 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              WarningTimeMultiplier;                         // 0x0054 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinRoadClearanceToAttack;                      // 0x0058 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RVehicleNPC.VehicleVisionCone
// 0x0018
struct FVehicleVisionCone
{
	float                                              AlwaysSeeRange;                                // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              VisionRange;                                   // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ConeHorizontalHalfAngle;                       // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ConeVerticalHalfAngle;                         // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxZVisionRange;                               // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ViewConePitchOffset;                           // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RVehicleNPC.VehicleVisionSet
// 0x0030
struct FVehicleVisionSet
{
	struct FVehicleVisionCone                          BatmobileVisionCone;                           // 0x0000 (0x0018) [0x0000000100000000] (CPF_Edit)    
	struct FVehicleVisionCone                          BatmanVisionCone;                              // 0x0018 (0x0018) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RVehicleNPC.VehiclePassengerIdleInfo
// 0x0020
struct FVehiclePassengerIdleInfo
{
	class TArray<class FName>                          AnimNames;                                     // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MinInterval;                                   // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxInterval;                                   // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CurInterval;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	struct FTransitionId                               CurTransition;                                 // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.EnterVehicleAnimInfo
// 0x002C
struct FEnterVehicleAnimInfo
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimNameDoor;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    AnimSet;                                       // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMirrored : 1;                                 // 0x0018 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class FName                                        AnimSocket;                                    // 0x001C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        ActualSocket;                                  // 0x0024 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameInfo.ExitVehicleAnimationInfo
// 0x0038
struct FExitVehicleAnimationInfo
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimNameDoor;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    AnimSet;                                       // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMirrored : 1;                                 // 0x0018 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class FName                                        AnimSocket;                                    // 0x001C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        ActualSocket;                                  // 0x0024 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bNoStarsOnRagdoll : 1;                         // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class FName                                        UnconsciousAnim;                               // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameInfo.ExitVehicleSlotInfo
// 0x004C
struct FExitVehicleSlotInfo
{
	uint8_t                                            VehicleOrientation;                            // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FExitVehicleAnimationInfo                   AnimInfo;                                      // 0x0004 (0x0038) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            DependentOnPassengerID;                        // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class ARBMPawnAI*                                  DependentOnPassengerPawn;                      // 0x0040 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDefaultExitAnim : 1;                          // 0x0048 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bLowPriorityExitAnim : 1;                      // 0x0048 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bCanBeUsedWhenDazed : 1;                       // 0x0048 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bCanBeUsedWhenCalm : 1;                        // 0x0048 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
};

// ScriptStruct BmGame.RVehicleNPC.VehiclePassenger
// 0x00D4
struct FVehiclePassenger
{
	class FName                                        PawnIdleAnimName;                              // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        VehicleDeadAnimName;                           // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SocketName;                                    // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimSocketName;                                // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        DoorAnimNodeName;                              // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        DoorBoneName;                                  // 0x0028 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           NeverExit : 1;                                 // 0x0030 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class ARBMPawnAI*                                  Pawn;                                          // 0x0034 (0x0008) [0x0000000000000000]               
	class ARVehicleNPCWeapon*                          Weapon;                                        // 0x003C (0x0008) [0x0000000000000000]               
	class URBMBehaviour_ControlledByVehicle*           BehaviourControlled;                           // 0x0044 (0x0008) [0x0000000000000000]               
	struct FVector                                     SeatLoc;                                       // 0x004C (0x000C) [0x0000000000000000]               
	struct FRotator                                    SeatRot;                                       // 0x0058 (0x000C) [0x0000000000000000]               
	float                                              Steering;                                      // 0x0064 (0x0004) [0x0000000000000000]               
	struct FVehiclePassengerIdleInfo                   Idles;                                         // 0x0068 (0x0020) [0x0000000000010000] (CPF_NeedCtorLink)
	class UClass*                                      WeaponToGivePassenger;                         // 0x0088 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           DoorAnimNode;                                  // 0x0090 (0x0008) [0x0000000000000000]               
	struct FEnterVehicleAnimInfo                       EnterAnimInfo;                                 // 0x0098 (0x002C) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FExitVehicleSlotInfo>          ExitVehicleInfos;                              // 0x00C4 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RVehicleCombatManager.DroneBarkTimer
// 0x000C
struct FDroneBarkTimer
{
	class FName                                        BarkType;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Timer;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleCombatManager.VehicleEnemyAttacksContainer
// 0x0054
struct FVehicleEnemyAttacksContainer
{
	int32_t                                            MaxEnemiesForFireSpeed;                        // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FireIntervalForOneEnemy;                       // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FireIntervalForMaxEnemies;                     // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AttackWarningTime;                             // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AttackWarningTimeForOneEnemy;                  // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxSimultaneousAttackSpacing;                  // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SimultaneousAttackInterval;                    // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DamageMod;                                     // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinLeadAmount;                                 // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxLeadAmount;                                 // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              HeavyTankVisibilityTime;                       // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NumTankMissiles;                               // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DamageFireIntervalBonus;                       // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DamageFireIntervalFalloff;                     // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ExtraWarningTimeAtStart;                       // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NumHitsToDecayWarningTime;                     // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              HeavyTankAttackWarningMod;                     // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<float>                                MultipleAttackPct;                             // 0x0044 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RVehicleCombatManager.VehicleEnemyContainer
// 0x0018
struct FVehicleEnemyContainer
{
	class ARVehicleNPC*                                Enemy;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              LastAttackTime;                                // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            CanAttack;                                     // 0x000C (0x0001) [0x0000000000000000]               
	int32_t                                            AttackTargetIdx;                               // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MyWeaponId;                                    // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleCombatManager.AttackSector
// 0x0028
struct FAttackSector
{
	class AActor*                                      ReservedAttacker;                              // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           AttackSectorLocked : 1;                        // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           AttackSectorUnavailable : 1;                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MinAngle;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              MaxAngle;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              CurrentAttackRange;                            // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              CurrentAttackAngle;                            // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              CurrentSectorZ;                                // 0x001C (0x0004) [0x0000000000000000]               
	float                                              CurrentHeadClearance;                          // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            AttackTargetIndex;                             // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleCombatManager.TempEnemyContainer
// 0x000C
struct FTempEnemyContainer
{
	class ARVehicleNPC*                                Vehicle;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            WeaponIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleCombatManager.AttackTarget
// 0x016C
struct FAttackTarget
{
	class AActor*                                      TargetActor;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     TargetLocation;                                // 0x0008 (0x000C) [0x0000000000000000]               
	class TArray<struct FAttackSector>                 GroundAttackSectors;                           // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAttackSector>                 AerialAttackSectors;                           // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            EncounterType;                                 // 0x0034 (0x0001) [0x0000000000000000]               
	struct FVehicleEnemyAttacksContainer               CurrentDifficulty;                             // 0x0038 (0x0054) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              FireTimer;                                     // 0x008C (0x0004) [0x0000000000000000]               
	class TArray<struct FTempEnemyContainer>           SimultaneousAttackers;                         // 0x0090 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            NumAttacksToGo;                                // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              NextSimAttackTimer;                            // 0x00A4 (0x0004) [0x0000000000000000]               
	class ARVehicleNPC*                                CurrentAttacker;                               // 0x00A8 (0x0008) [0x0000000000000000]               
	class ARVehicleNPC*                                AllAttackers[16];                              // 0x00B0 (0x0080) [0x0000000000000000]               
	int32_t                                            CurrentNumAttackers;                           // 0x0130 (0x0004) [0x0000000000000000]               
	struct FVector                                     TargetLocationAtStartOfAttack;                 // 0x0134 (0x000C) [0x0000000000000000]               
	float                                              LoseBatmanTimer;                               // 0x0140 (0x0004) [0x0000000000000000]               
	int32_t                                            NumAttacksThatHitInThisAttack;                 // 0x0144 (0x0004) [0x0000000000000000]               
	int32_t                                            NumDodgableAttacksInThisAttack;                // 0x0148 (0x0004) [0x0000000000000000]               
	float                                              DamagedAttackTimeModifier;                     // 0x014C (0x0004) [0x0000000000000000]               
	float                                              DodgeScoreTimer;                               // 0x0150 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUnderHeavyTankAttack : 1;                     // 0x0154 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           CanBeSeen : 1;                                 // 0x0154 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LoseTrackingTimer;                             // 0x0158 (0x0004) [0x0000000000000000]               
	uint32_t                                           CurrentAttackIsPursuitModeAttack : 1;          // 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentChapterDiff;                            // 0x0160 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentTankSectorToUpdate;                     // 0x0164 (0x0004) [0x0000000000000000]               
	int32_t                                            NumHitsSinceLastTimePlayerHit;                 // 0x0168 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleCombatManager.TankStrafeBehaviourContainer
// 0x0024
struct FTankStrafeBehaviourContainer
{
	class URVehicleBehaviour_TankStrafe*               Behaviour;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              CurrentSectorScore;                            // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentSectorIndex;                            // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            FavouredSector;                                // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              FavouredSectorAmount;                          // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FavouredSectorTime;                            // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              FavouredSectorTimeout;                         // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            FramesToGo;                                    // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PhysicsOutput.RagdollState
// 0x004C
struct FRagdollState
{
	float                                              Weight;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              FixedBodies;                                   // 0x0004 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              UnfixedBodies;                                 // 0x0014 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	float                                              MotorWeight;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              MotorDampingScale;                             // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              MotorLimitsScale;                              // 0x002C (0x0004) [0x0000000000000000]               
	uint32_t                                           MotorSubsetEnabled : 1;                        // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<int32_t>                              MotorSubsetIndices;                            // 0x0034 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	float                                              LinearDamping;                                 // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              AngularDamping;                                // 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PhysicsOutput.RagdollTransition
// 0x0070
struct FRagdollTransition
{
	uint32_t                                           Unfixed : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        Description;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            Instigator;                                    // 0x000C (0x0001) [0x0000000000000000]               
	float                                              BlendInDuration;                               // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BlendTime;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              BlendOutDuration;                              // 0x0018 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              FixedBodies;                                   // 0x001C (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<int32_t>                              UnfixedBodies;                                 // 0x002C (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	float                                              MotorWeightBlendFrom;                          // 0x003C (0x0004) [0x0000000000000000]               
	float                                              MotorWeightBlendTo;                            // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              MotorWeightBlendDuration;                      // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              MotorWeightBlendTimeRemaining;                 // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              MotorDampingScale;                             // 0x004C (0x0004) [0x0000000000000000]               
	uint32_t                                           MotorSubsetEnabled : 1;                        // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<int32_t>                              MotorSubsetIndices;                            // 0x0054 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	float                                              LinearDamping;                                 // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              AngularDamping;                                // 0x0068 (0x0004) [0x0000000000000000]               
	uint32_t                                           ActorRotationLocked : 1;                       // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil_PhysicsOutput.RagdollStack
// 0x0080
struct FRagdollStack
{
	struct FRagdollState                               State;                                         // 0x0000 (0x004C) [0x0000000000010000] (CPF_NeedCtorLink)
	class URAnimNotify_BeginRagdoll*                   CurrentBeginNotify;                            // 0x004C (0x0008) [0x0000000000000000]               
	class URAnimNotify_EndRagdoll*                     CurrentEndNotify;                              // 0x0054 (0x0008) [0x0000000000000000]               
	class TArray<struct FRagdollTransition>            Stack;                                         // 0x005C (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<struct FRagdollTransition>            Transitions;                                   // 0x006C (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	uint32_t                                           StackDirty : 1;                                // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RBMCombatManager.CachedAnimset
// 0x0018
struct FCachedAnimset
{
	class UAnimSet*                                    AnimSet;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      PathName;                                      // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBMCombatManager.WeaponConfigRef
// 0x000C
struct FWeaponConfigRef
{
	class URWeaponConfig*                              WeaponConfig;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RefCount;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMCombatManager.DynamicallyLoadedAnimsetDef
// 0x0019
struct FDynamicallyLoadedAnimsetDef
{
	class FName                                        PropertyName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      AnimsetString;                                 // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            ArrayOp;                                       // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0019 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RBMCombatManager.PairedAnimsetPackageDef
// 0x008C
struct FPairedAnimsetPackageDef
{
	class FName                                        PlayerName;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      PackageName;                                   // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        VillainAnimsetNames;                           // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        PlayerAnimsetNames;                            // 0x0028 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FDynamicallyLoadedAnimsetDef>  DynamicallyLoadedAnimsets;                     // 0x0038 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bAssumeAlreadyLoaded : 1;                      // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNonOWOnly : 1;                                // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	class TArray<class FName>                          DualPlayTakedownAnims;                         // 0x004C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          BMDualPlayTakedownAnims;                       // 0x005C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          DualPlayStrikeAnims;                           // 0x006C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          BMDualPlayStrikeAnims;                         // 0x007C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBMCombatManager.DifficultyProgressionDefine
// 0x0018
struct FDifficultyProgressionDefine
{
	float                                              MinChapter;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxChapter;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              EasyValue;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              HardValue;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              DebugMenuIncrement;                            // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bOpenInDebugMenu : 1;                          // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RBMCombatManager.CachedTauntAnims
// 0x0018
struct FCachedTauntAnims
{
	class UAnimSet*                                    AnimSet;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FTauntAnimInfo>                Anims;                                         // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBMCombatManager.CachedStepAnims
// 0x0030
struct FCachedStepAnims
{
	class TArray<class FName>                          List;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          LongList;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        ForwardName;                                   // 0x0020 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    AnimSet;                                       // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMCombatManager.CachedIdleStances
// 0x0018
struct FCachedIdleStances
{
	class TArray<class FName>                          Stances;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UAnimSet*                                    AnimSet;                                       // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMCombatManager.CombatantInfo
// 0x002C
struct FCombatantInfo
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class ARPawnVillain*                               Pawn;                                          // 0x0010 (0x0008) [0x0000000000000000]               
	class UClass*                                      PawnClass;                                     // 0x0018 (0x0008) [0x0000000000000000]               
	class UClass*                                      WeaponClass;                                   // 0x0020 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsMilitia : 1;                                // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bGiveXP : 1;                                   // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bPawnHasBeenDead : 1;                          // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BmGame.RAffectPlayerVolume.AffectPlayerVolumeInfo
// 0x000C
struct FAffectPlayerVolumeInfo
{
	uint32_t                                           NoClimb : 1;                                   // 0x0000 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           NoClimbDown : 1;                               // 0x0000 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           NoDropOffRailings : 1;                         // 0x0000 (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           NoJump : 1;                                    // 0x0000 (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           NoLedgeGrab : 1;                               // 0x0000 (0x0004) [0x0000000100000001] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           AllowSteepDiagonalRailings : 1;                // 0x0000 (0x0004) [0x0000000100000001] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           NoDiveOffEdges : 1;                            // 0x0000 (0x0004) [0x0000000100000001] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableAIAlerts : 1;                           // 0x0000 (0x0004) [0x0000000100000001] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           ForceLineLauncherCamera : 1;                   // 0x0000 (0x0004) [0x0000000100000001] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           NoTunnelCamera : 1;                            // 0x0000 (0x0004) [0x0000000100000001] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           UseHighTunnelGrateCamera : 1;                  // 0x0000 (0x0004) [0x0000000100000001] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           ForceTunnelGrateCamera : 1;                    // 0x0000 (0x0004) [0x0000000100000001] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           ForceInteriorTunnelCamera : 1;                 // 0x0000 (0x0004) [0x0000000100000001] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoRailingLookDownCamera : 1;                   // 0x0000 (0x0004) [0x0000000100000001] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoVantagePointCamera : 1;                      // 0x0000 (0x0004) [0x0000000100000001] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableGelCameraShake : 1;                     // 0x0000 (0x0004) [0x0000000100000001] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           ExtraZoom : 1;                                 // 0x0000 (0x0004) [0x0000000100000001] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoZoom : 1;                                    // 0x0000 (0x0004) [0x0000000100000001] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           UseLowFOVGrateCam : 1;                         // 0x0000 (0x0004) [0x0000000100000001] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           SupressCombatCamera : 1;                       // 0x0000 (0x0004) [0x0000000100000001] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoEnvironmentCounters : 1;                     // 0x0000 (0x0004) [0x0000000100000001] [0x00100000] (CPF_Edit | CPF_Const)
	uint32_t                                           NarrowCombatZone : 1;                          // 0x0000 (0x0004) [0x0000000100000001] [0x00200000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoRedirect : 1;                                // 0x0000 (0x0004) [0x0000000100000001] [0x00400000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoChargeGrab : 1;                              // 0x0000 (0x0004) [0x0000000100000001] [0x00800000] (CPF_Edit | CPF_Const)
	uint32_t                                           CloseLineLauncherCamera : 1;                   // 0x0000 (0x0004) [0x0000000100000001] [0x01000000] (CPF_Edit | CPF_Const)
	uint32_t                                           DontAllowCancelBatarangCamera : 1;             // 0x0000 (0x0004) [0x0000000100000001] [0x02000000] (CPF_Edit | CPF_Const)
	uint32_t                                           LowLineLauncher : 1;                           // 0x0000 (0x0004) [0x0000000100000001] [0x04000000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoLineLauncherFlip : 1;                        // 0x0000 (0x0004) [0x0000000100000001] [0x08000000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoSprayGel : 1;                                // 0x0000 (0x0004) [0x0000000100000001] [0x10000000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoResonator : 1;                               // 0x0000 (0x0004) [0x0000000100000001] [0x20000000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoWireWalk : 1;                                // 0x0000 (0x0004) [0x0000000100000001] [0x40000000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoLineLauncher : 1;                            // 0x0000 (0x0004) [0x0000000100000001] [0x80000000] (CPF_Edit | CPF_Const)
	uint32_t                                           ExtendBatclawRange : 1;                        // 0x0004 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           LongRangeGrapple : 1;                          // 0x0004 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           VantagePointOnlyGrapple : 1;                   // 0x0004 (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           NoGrapple : 1;                                 // 0x0004 (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           FavourEscapeGrapple : 1;                       // 0x0004 (0x0004) [0x0000000100000001] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           NoChainGrappling : 1;                          // 0x0004 (0x0004) [0x0000000100000001] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           NoGlide : 1;                                   // 0x0004 (0x0004) [0x0000000100000001] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           SuppressOverrideMoves : 1;                     // 0x0004 (0x0004) [0x0000000100000001] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           ForceGlideKickCamera : 1;                      // 0x0004 (0x0004) [0x0000000100000001] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           NoGlideKick : 1;                               // 0x0004 (0x0004) [0x0000000100000001] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           NoGlideClimb : 1;                              // 0x0004 (0x0004) [0x0000000100000001] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           NoGrappleBoost : 1;                            // 0x0004 (0x0004) [0x0000000100000001] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           ForceCrouch : 1;                               // 0x0004 (0x0004) [0x0000000100000001] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoCrouch : 1;                                  // 0x0004 (0x0004) [0x0000000100000001] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           ForceCrouchWhenNotRunning : 1;                 // 0x0004 (0x0004) [0x0000000100000001] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           SlowDownPlayer : 1;                            // 0x0004 (0x0004) [0x0000000100000001] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           StopPlayerFallingOffEdges : 1;                 // 0x0004 (0x0004) [0x0000000100000001] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           ForceBatmanToClimbAfterGrapple : 1;            // 0x0004 (0x0004) [0x0000000100000001] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           ForceClimbLadder : 1;                          // 0x0004 (0x0004) [0x0000000100000001] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableTakedowns : 1;                          // 0x0004 (0x0004) [0x0000000100000001] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           DontDoTakedownDOFChange : 1;                   // 0x0004 (0x0004) [0x0000000100000001] [0x00100000] (CPF_Edit | CPF_Const)
	uint32_t                                           SuppressCompassInOverworld : 1;                // 0x0004 (0x0004) [0x0000000100000001] [0x00200000] (CPF_Edit | CPF_Const)
	uint32_t                                           AlwaysShowCompass : 1;                         // 0x0004 (0x0004) [0x0000000100000001] [0x00400000] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableInformantScans : 1;                     // 0x0004 (0x0004) [0x0000000100000001] [0x00800000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoWallInterrogation : 1;                       // 0x0004 (0x0004) [0x0000000100000001] [0x01000000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoFloorInterrogation : 1;                      // 0x0004 (0x0004) [0x0000000100000001] [0x02000000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoDropFromCeiling : 1;                         // 0x0004 (0x0004) [0x0000000100000001] [0x04000000] (CPF_Edit | CPF_Const)
	uint32_t                                           DisablePounces : 1;                            // 0x0004 (0x0004) [0x0000000100000001] [0x08000000] (CPF_Edit | CPF_Const)
	uint32_t                                           AllowCatwomanInterrogations : 1;               // 0x0004 (0x0004) [0x0000000100000001] [0x10000000] (CPF_Edit | CPF_Const)
	uint32_t                                           ForceCatwomanLedgeClimb : 1;                   // 0x0004 (0x0004) [0x0000000100000001] [0x20000000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoCatwomanCatwalkToDangle : 1;                 // 0x0004 (0x0004) [0x0000000100000001] [0x40000000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoCatwomanCeilingToDangle : 1;                 // 0x0004 (0x0004) [0x0000000100000001] [0x80000000] (CPF_Edit | CPF_Const)
	uint32_t                                           AlwaysCheckForGlideIntoBatmobile : 1;          // 0x0008 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           DoHighSpeedPickup : 1;                         // 0x0008 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           ExtraEjectDistance : 1;                        // 0x0008 (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableBattleDodge : 1;                        // 0x0008 (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableRemotePickup : 1;                       // 0x0008 (0x0004) [0x0000000100000001] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableCallBatmobile : 1;                      // 0x0008 (0x0004) [0x0000000100000001] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           DoFullStopPickup : 1;                          // 0x0008 (0x0004) [0x0000000100000001] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           CanUseRemoteControlInCombat : 1;               // 0x0008 (0x0004) [0x0000000100000001] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           CantReleaseWinch : 1;                          // 0x0008 (0x0004) [0x0000000100000001] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableAfterburner : 1;                        // 0x0008 (0x0004) [0x0000000100000001] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           NoAutomaticTutorials : 1;                      // 0x0008 (0x0004) [0x0000000100000001] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           NoPunchWeakWalls : 1;                          // 0x0008 (0x0004) [0x0000000100000001] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           NoWaterGrappleRescue : 1;                      // 0x0008 (0x0004) [0x0000000100000001] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           AntiWaterVolume : 1;                           // 0x0008 (0x0004) [0x0000000100000001] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           TreatAsInterior : 1;                           // 0x0008 (0x0004) [0x0000000100000001] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           FearTakedownTutorial : 1;                      // 0x0008 (0x0004) [0x0000000100000001] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           DualTakedownTutorial : 1;                      // 0x0008 (0x0004) [0x0000000100000001] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           UnawareVehiclesCantSeeBatman : 1;              // 0x0008 (0x0004) [0x0000000100000001] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           InStormCrouchNoGadget : 1;                     // 0x0008 (0x0004) [0x0000000100000001] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           ShowCornerCoverAsBigPrompt : 1;                // 0x0008 (0x0004) [0x0000000100000001] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           AllowDualPlayPredatorSwitch : 1;               // 0x0008 (0x0004) [0x0000000100000001] [0x00100000] (CPF_Edit | CPF_Const)
	uint32_t                                           RedHoodPredator : 1;                           // 0x0008 (0x0004) [0x0000000100000001] [0x00200000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoPredatorSlowMo : 1;                          // 0x0008 (0x0004) [0x0000000100000001] [0x00400000] (CPF_Edit | CPF_Const)
	uint32_t                                           ForceNoCombatHostileCount : 1;                 // 0x0008 (0x0004) [0x0000000100000001] [0x00800000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoCallBatmobileTutorial : 1;                   // 0x0008 (0x0004) [0x0000000100000001] [0x01000000] (CPF_Edit | CPF_Const)
	uint32_t                                           NoEvade : 1;                                   // 0x0008 (0x0004) [0x0000000100000001] [0x02000000] (CPF_Edit | CPF_Const)
	uint32_t                                           HideCityTutorials : 1;                         // 0x0008 (0x0004) [0x0000000100000001] [0x04000000] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableStreamingPrediction : 1;                // 0x0008 (0x0004) [0x0000000100000001] [0x08000000] (CPF_Edit | CPF_Const)
};

// ScriptStruct BmGame.RHUDPrompt.HelpLine
// 0x001C
struct FHelpLine
{
	class FString                                      Line;                                          // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            Icon;                                          // 0x0010 (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Alpha;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAsSecondaryMain : 1;                          // 0x0018 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RBMPawnAI.SoftPawnInfo
// 0x0010
struct FSoftPawnInfo
{
	class ARBMPawnAI*                                  Pawn;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              InfluenceTime;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bInfluencedThisFrame : 1;                      // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RBMPawnAI.InitCharacterDescription
// 0x0060
struct FInitCharacterDescription
{
	class UClass*                                      Character;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class URCharacterDefine*                           CharacterDefine;                               // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        PawnReferenceName;                             // 0x0010 (0x0008) [0x0000000000000000]               
	class UClass*                                      WeaponType;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	class URAlternateAnimationAndWeaponConfig*         AlternateAnimAndWeapon;                        // 0x0020 (0x0008) [0x0000000000000000]               
	class FName                                        InitialMovementStance;                         // 0x0028 (0x0008) [0x0000000000000000]               
	class FName                                        InitialWeaponStance;                           // 0x0030 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCastShadow : 1;                               // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceFlappyBitsOff : 1;                       // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bForceAlwaysUsePhysicsOn : 1;                  // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDisableRagdollCalming : 1;                    // 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bCanBeXrayed : 1;                              // 0x0038 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bTreatXrayAsOverworld : 1;                     // 0x0038 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bTreatAsOverworldForStasis : 1;                // 0x0038 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bForceLongRangeXrayFading : 1;                 // 0x0038 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bSilentRagdoll : 1;                            // 0x0038 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bUsedInCutsceneDialogue : 1;                   // 0x0038 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bSnappedToGround : 1;                          // 0x0038 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           OverridePhysWalkingType : 1;                   // 0x0038 (0x0004) [0x0000000000000000] [0x00000800] 
	uint8_t                                            PhysWalkingType;                               // 0x003C (0x0001) [0x0000000000000000]               
	uint32_t                                           bFallBackToNavMeshFloor : 1;                   // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            RagdollVsNavMeshSolution;                      // 0x0044 (0x0001) [0x0000000000000000]               
	uint32_t                                           bReduceBlinksAndEyeMovements : 1;              // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceDisableFloorCorrection : 1;              // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUseSkeletalMeshAggressiveLODScale : 1;        // 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              SkeletalMeshAggressiveLODMultiplier;           // 0x004C (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              DefineIndexes;                                 // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBMPawnAI.AlwaysOnParticles
// 0x0010
struct FAlwaysOnParticles
{
	class UParticleSystemComponent*                    Part;                                          // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        AttachBone;                                    // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMPawnAI.PathFailItem
// 0x001C
struct FPathFailItem
{
	uint8_t                                            PathError;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	struct FVector                                     StartPos;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndPos;                                        // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMPawnAI.grateVisInfo
// 0x000C
struct FgrateVisInfo
{
	class ARTunnelGrateBase*                           Grate;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              timeVisible;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMPawnAI.ValidNavMeshPoly
// 0x0018
struct FValidNavMeshPoly
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	class APylon*                                      Pylon;                                         // 0x000C (0x0008) [0x0000000000000000]               
	int32_t                                            PolyId;                                        // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMPawnAI.BodyLocationDirtState
// 0x000C
struct FBodyLocationDirtState
{
	int32_t                                            Amount;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        Parameter;                                     // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMPawnAI.BodyDirtState
// 0x001C
struct FBodyDirtState
{
	struct FBodyLocationDirtState                      Locations[2];                                  // 0x0000 (0x0018) [0x0000000000000000]               
	int32_t                                            MaxDirt;                                       // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RNavigationHandle.StartStateDebugInfo
// 0x0068
struct FStartStateDebugInfo
{
	struct FNavMeshPathParams                          CachedPathParams;                              // 0x0000 (0x0034) [0x0000000000000000]               
	struct FRotator                                    ActorRot;                                      // 0x0034 (0x000C) [0x0000000000000000]               
	class AActor*                                      PathToActor;                                   // 0x0040 (0x0008) [0x0000000000000000]               
	struct FVector                                     PathToPoint;                                   // 0x0048 (0x000C) [0x0000000000000000]               
	uint32_t                                           bAvoidPlayers : 1;                             // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanUseLadders : 1;                            // 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUseCheapSupportCheck : 1;                     // 0x0054 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCanTraverse : 1;                              // 0x0054 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bPathToSafety : 1;                             // 0x0054 (0x0004) [0x0000000000000000] [0x00000010] 
	class TArray<struct FVector>                       AdditionalGoalList;                            // 0x0058 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RJokerHallucinationFrequencyController.HallucinationAppearanceHistory
// 0x001C
struct FHallucinationAppearanceHistory
{
	int32_t                                            TimesAppeard;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<class FName>                          AnimNames;                                     // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              TimeOfLastAppearance;                          // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              MinTimeBetweenAppearances;                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.KeyMap
// 0x0068
struct FKeyMap
{
	class FString                                      Ability;                                       // 0x0000 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      PrimaryKeyName;                                // 0x0010 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      SecondaryKeyName;                              // 0x0020 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Command;                                       // 0x0030 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Icon;                                          // 0x0040 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            bPrimaryCtrl;                                  // 0x0050 (0x0004) [0x0000000000000800] (CPF_Config)  
	int32_t                                            bPrimaryShift;                                 // 0x0054 (0x0004) [0x0000000000000800] (CPF_Config)  
	int32_t                                            bPrimaryAlt;                                   // 0x0058 (0x0004) [0x0000000000000800] (CPF_Config)  
	int32_t                                            bSecondaryCtrl;                                // 0x005C (0x0004) [0x0000000000000800] (CPF_Config)  
	int32_t                                            bSecondaryShift;                               // 0x0060 (0x0004) [0x0000000000000800] (CPF_Config)  
	int32_t                                            bSecondaryAlt;                                 // 0x0064 (0x0004) [0x0000000000000800] (CPF_Config)  
};

// ScriptStruct BmGame.RGameInfo.LevelStartDefinition
// 0x0020
struct FLevelStartDefinition
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      LevelNames;                                    // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfo.HelicopterPointOfInterest
// 0x0009
struct FHelicopterPointOfInterest
{
	class AActor*                                      TheActor;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            ActorPoiType;                                  // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RGameInfo.ConceptItem
// 0x0034
struct FConceptItem
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Package;                                       // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Prerequisite;                                  // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           DLC : 1;                                       // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Unlocked : 1;                                  // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RGameInfo.ShowcaseCamera
// 0x0060
struct FShowcaseCamera
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     VantagePosition;                               // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     VantageLookAt;                                 // 0x001C (0x000C) [0x0000000000000000]               
	float                                              VantageFOV;                                    // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x4];                              // 0x002C (0x0004) MISSED OFFSET
	struct FVector4                                    InspectHeights;                                // 0x0030 (0x0010) [0x0000000000000000]               
	struct FVector4                                    InspectAngles;                                 // 0x0040 (0x0010) [0x0000000000000000]               
	struct FVector                                     InspectFOVs;                                   // 0x0050 (0x000C) [0x0000000000000000]               
	float                                              InspectDistance;                               // 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.UpgradeHeader
// 0x0024
struct FUpgradeHeader
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              OX;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              OY;                                            // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              TX;                                            // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              TY;                                            // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           LeftJustify : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RGameInfo.UpgradeItem
// 0x008C
struct FUpgradeItem
{
	class FString                                      Page;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Item;                                          // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            X;                                             // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            DX;                                            // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            DY;                                            // 0x002C (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0030 (0x0004) [0x0000000000000000]               
	class FString                                      Icon;                                          // 0x0034 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Background;                                    // 0x0044 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Action;                                        // 0x0054 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Prerequisite;                                  // 0x0064 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Value;                                         // 0x0074 (0x0004) [0x0000000000000000]               
	class FString                                      Header;                                        // 0x0078 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Hierarchy;                                     // 0x0088 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.RiddlerPuzzlePrize
// 0x0014
struct FRiddlerPuzzlePrize
{
	uint8_t                                            Tape;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Prerequisite;                                  // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfo.RiddlerPuzzlePiece
// 0x0004
struct FRiddlerPuzzlePiece
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            Id;                                            // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            Collection;                                    // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            Count;                                         // 0x0003 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.RiddlerPuzzle
// 0x0029
struct FRiddlerPuzzle
{
	uint8_t                                            Id;                                            // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            Category;                                      // 0x0001 (0x0001) [0x0000000000000000]               
	struct FRiddlerPuzzlePrize                         Prize;                                         // 0x0004 (0x0014) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FRiddlerPuzzlePiece>           Pieces;                                        // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            ValidPieces;                                   // 0x0028 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0029 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RGameInfo.FilteredVehicleExclusionVolume
// 0x0024
struct FFilteredVehicleExclusionVolume
{
	class ARVehicleExclusionVolume*                    Volume;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FBox                                        Bounds;                                        // 0x0008 (0x001C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.VehiclePassengerSpawnInfo
// 0x0020
struct FVehiclePassengerSpawnInfo
{
	class ARVehicleNPC*                                Vehicle;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PassengerIndex;                                // 0x0008 (0x0004) [0x0000000000000000]               
	class URBmPawnSpawner*                             Spawner;                                       // 0x000C (0x0008) [0x0000000000000000]               
	class URVehicleScenario*                           Scenario;                                      // 0x0014 (0x0008) [0x0000000000000000]               
	int32_t                                            ScenarioVehicleIndex;                          // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.VehicleScenarioSpawnInfo
// 0x0058
struct FVehicleScenarioSpawnInfo
{
	class URVehicleScenario*                           Scenario;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     SpawnLoc;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    SpawnRot;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              RoadWidth;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            AddedFrame;                                    // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           ObeyExclusionZones : 1;                        // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            SpawnType;                                     // 0x002C (0x0001) [0x0000000000000000]               
	class TArray<class AVolume*>                       BehaviourVolumes;                              // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class ARPatrolPoint*                               PatrolRoute;                                   // 0x0040 (0x0008) [0x0000000000000000]               
	class TArray<class ARVehicleNPC*>                  SpawnedVehicles;                               // 0x0048 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfo.ChallengeDesc
// 0x0071
struct FChallengeDesc
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	int32_t                                            PackId;                                        // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            LeaderboardId;                                 // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            ChallengeFrontendGroup;                        // 0x000C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            ChallengeFrontendState;                        // 0x000D (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            ChallengeBeaconStyle;                          // 0x000E (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            ChallengeRankMode;                             // 0x000F (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     WorldLocation;                                 // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     NavigationLocation;                            // 0x001C (0x000C) [0x0000000100000000] (CPF_Edit)    
	class FString                                      PlayableCharacter;                             // 0x0028 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      PlayableBatmobile;                             // 0x0038 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Prerequisite;                                  // 0x0048 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      StartRef;                                      // 0x0058 (0x0010) [0x0000000500010000] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	int32_t                                            DifficultyLevel;                               // 0x0068 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           IgnoreGameState : 1;                           // 0x006C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint8_t                                            InstallChunkNeeded;                            // 0x0070 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0071 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RGameInfo.MostWantedSetup
// 0x0060
struct FMostWantedSetup
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Name;                                          // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bStartLocked : 1;                              // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsDLC : 1;                                    // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            BioCharacter;                                  // 0x0018 (0x0001) [0x0000000000000000]               
	class TArray<uint8_t>                              Markers;                                       // 0x001C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            MissionWeight;                                 // 0x002C (0x0004) [0x0000000000000000]               
	class TArray<uint8_t>                              WaynetechPointsTotal;                          // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              Lips;                                          // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Lipsf;                                         // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfo.LevelVolumeBsp
// 0x0018
struct FLevelVolumeBsp
{
	struct FPlane                                      Plane;                                         // 0x0000 (0x0010) [0x0000000000000000]               
	int32_t                                            ChildFront;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            ChildBack;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x8];                         // 0x0018 (0x0008) ADDED PADDING
};

// ScriptStruct BmGame.RGameInfo.LevelTransitionDesc
// 0x0054
struct FLevelTransitionDesc
{
	class FString                                      LevelNameOwner;                                // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            LevelFront;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            LevelBack;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            NextTransitionFront;                           // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            NextTransitionBack;                            // 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0020 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     Extent;                                        // 0x0038 (0x000C) [0x0000000000000000]               
	struct FVector                                     LevelOffset;                                   // 0x0044 (0x000C) [0x0000000000000000]               
	uint32_t                                           ActAsRcVisibilityBlocker : 1;                  // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RGameInfo.MapHackOWLoc
// 0x0050
struct FMapHackOWLoc
{
	class FString                                      SubName;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      ParentMapName;                                 // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            X;                                             // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            Z;                                             // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            SubX;                                          // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            SubY;                                          // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            SubZ;                                          // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	class FString                                      FlagCheck;                                     // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bHasNoMap : 1;                                 // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RGameInfo.MapElements
// 0x0020
struct FMapElements
{
	class FString                                      MapName;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              Indicies;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfo.ConversationActivationTime
// 0x000C
struct FConversationActivationTime
{
	class FName                                        speechAssetName;                               // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              lastActivatedTime;                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.ChallengeCharacterId
// 0x0024
struct FChallengeCharacterId
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Override;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Id;                                            // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.RequiredChaptersByChallengeId
// 0x0014
struct FRequiredChaptersByChallengeId
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Chapters;                                      // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGameInfo.RWindConfig
// 0x0024
struct FRWindConfig
{
	uint32_t                                           IsApplyWind : 1;                               // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FVector                                     WindVelocityCentre;                            // 0x0004 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              WindVelocityRadius;                            // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxWindAccelerationRadius;                     // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinTargetChangePeriod;                         // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxTargetChangePeriod;                         // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              WindForceCoefficient;                          // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameInfo.ResolutionOption
// 0x0008
struct FResolutionOption
{
	int32_t                                            ResX;                                          // 0x0000 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            ResY;                                          // 0x0004 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct BmGame.RGameInfo.MovementControllerHistory
// 0x0014
struct FMovementControllerHistory
{
	struct FVector                                     Direction;                                     // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              InputSpeed;                                    // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Time;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.RBasicWindConfig
// 0x0014
struct FRBasicWindConfig
{
	uint32_t                                           IsApplyWind : 1;                               // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FVector                                     WindDirection;                                 // 0x0004 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              WindBlusteryness;                              // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameInfo.MapCampaignEntry
// 0x0004
struct FMapCampaignEntry
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.IndexDistItem
// 0x0008
struct FIndexDistItem
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGameInfo.VillainAttackInfo
// 0x0020
struct FVillainAttackInfo
{
	uint32_t                                           bHitsLow : 1;                                  // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bHitsHigh : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	int32_t                                            Priority;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CounterLimb;                                   // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bCanBeMirrored : 1;                            // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              AttackRange;                                   // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ForceHitDistance;                              // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            VillainStrikeBone;                             // 0x0018 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            PlayerImpactBone;                              // 0x0019 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              HitReactionSlideDistance;                      // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGameInfo.DofStruct
// 0x0014
struct FDofStruct
{
	float                                              ApertureStop;                                  // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FocusDistance;                                 // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              InterpolationDuration;                         // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              BloomScale;                                    // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bEnableDOF : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RBarkCharacterDefInstance.BarkSetName
// 0x0020
struct FBarkSetName
{
	class FString                                      Root;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Suffix;                                        // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBarkCharacterDefInstance.DynamicSetContainer
// 0x003C
struct FDynamicSetContainer
{
	class URBarkSet*                                   BarkSet;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	struct FBarkSetName                                InternalName;                                  // 0x0008 (0x0020) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Filename;                                      // 0x0028 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bLoadTriggered : 1;                            // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RPersistentShared.RiddlerGridCategory
// 0x0014
struct FRiddlerGridCategory
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            Id;                                            // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            Flags;                                         // 0x0002 (0x0001) [0x0000000000000000]               
	class TArray<uint8_t>                              Collections;                                   // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPersistentShared.RiddlerGridPuzzle
// 0x0014
struct FRiddlerGridPuzzle
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            Id;                                            // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            Flags;                                         // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            Category;                                      // 0x0003 (0x0001) [0x0000000000000000]               
	class TArray<uint8_t>                              Pieces;                                        // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPopulationManager.SpawnedScenario
// 0x003C
struct FSpawnedScenario
{
	class TArray<class ARVehicleNPC*>                  Vehicles;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class URVehicleScenario*                           Scenario;                                      // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            ScenarioType;                                  // 0x0018 (0x0001) [0x0000000000000000]               
	float                                              SpawnedTime;                                   // 0x001C (0x0004) [0x0000000000000000]               
	float                                              DestroyedTime;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      District;                                      // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              InViewTime;                                    // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBeenSeen : 1;                                 // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RVehicleScenario.ScenarioPassengerDesc
// 0x0034
struct FScenarioPassengerDesc
{
	int32_t                                            SeatIndex;                                     // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class URBmPawnSpawner*                             Passenger;                                     // 0x0004 (0x0008) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	int32_t                                            ChanceOfNotBeingSpawned;                       // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            IdleAnimType;                                  // 0x0010 (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FVehiclePassengerIdleInfo                   IdleAnimCustom;                                // 0x0014 (0x0020) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RVehicleScenario.ScenarioVehicleDesc
// 0x0058
struct FScenarioVehicleDesc
{
	class ARVehicleNPC*                                VehicleArchetype;                              // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class ARVehicleNPC*>                  VehicleArchetypeRandom;                        // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class URVehicleBehaviour*                          VehicleBehaviour;                              // 0x0018 (0x0008) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	class URVehicleBehaviour*                          OverrideGuardBehaviour;                        // 0x0020 (0x0008) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	class URVehicleBehaviour*                          OverrideCombatBehaviour;                       // 0x0028 (0x0008) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	int32_t                                            TargetVehicle;                                 // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TargetDistance;                                // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TargetOffset;                                  // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FScenarioPassengerDesc>        Passengers;                                    // 0x003C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           IsPartyCar : 1;                                // 0x004C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              MassScale;                                     // 0x0050 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           ReturnToPatrolWhenPlayerLost : 1;              // 0x0054 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           DontShowOnRadar : 1;                           // 0x0054 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct BmGame.RPawnPlayerAnim.AllowedMovementTypes
// 0x0004
struct FAllowedMovementTypes
{
	uint32_t                                           bRun : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRunBack : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWalk : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWalkSlow : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bWalkBack : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bSprintBoost : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct BmGame.RPawnPlayerCombat.ThrowInfo
// 0x0020
struct FThrowInfo
{
	class UAnimSet*                                    ThrowAnimset;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    ThrowTargetAnimset;                            // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        ThrowAnimName;                                 // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            TimeSinceUse;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x001C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RPawnPlayerCombat.SimultaneousCounterInfo
// 0x00A8
struct FSimultaneousCounterInfo
{
	class UAnimSet*                                    CounterAnimset;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    CounterTargetAnimset;                          // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        CounterAnimName;                               // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            TimeSinceUse;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            AnimType;                                      // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            BehaviourType;                                 // 0x001D (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            WeaponInHand;                                  // 0x001E (0x0001) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FVector>                       StartLocation;                                 // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          AnimNames;                                     // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                MeetingPointEnd;                               // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              CounterOrder;                                  // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                GrabWeaponLHTime;                              // 0x0060 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                GrabWeaponRHTime;                              // 0x0070 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              ImpactBone;                                    // 0x0080 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            CombatSetID;                                   // 0x0090 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bHasThrowVersion : 1;                          // 0x0094 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class FName                                        CapeStateName;                                 // 0x0098 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        CapeAnimName;                                  // 0x00A0 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RPawnPlayerCombat.StrikeTargetInfo
// 0x0040
struct FStrikeTargetInfo
{
	class AActor*                                      TargetActor;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     TargetOffset;                                  // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetNormal;                                  // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              TargetDist;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              TargetScore;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           bObscured : 1;                                 // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCharging : 1;                                 // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            DualStrikeIndex;                               // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            DualStrikeYaw;                                 // 0x0030 (0x0004) [0x0000000000000000]               
	struct FVector                                     DualStrikePos;                                 // 0x0034 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBM2IdleConfig.InterrogationAnimations
// 0x0024
struct FInterrogationAnimations
{
	class UAnimSet*                                    VillainAnimSet;                                // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        InterrogationStartAnim;                        // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            InterrogationPose;                             // 0x0010 (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     InterrogationOffset;                           // 0x0014 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bUseIdleConfigLocator : 1;                     // 0x0020 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseIdleConfigInterrogationLocator : 1;        // 0x0020 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct BmGame.RBM2IdleConfig.BM2IdleSet
// 0x0018
struct FBM2IdleSet
{
	class FName                                        TransIn;                                       // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        Idle;                                          // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        TransOut;                                      // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBM2IdleConfig.RandomAnimation
// 0x0010
struct FRandomAnimation
{
	class FName                                        AnimationName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bHasNoMovement : 1;                            // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowAimAt : 1;                               // 0x0008 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	int32_t                                            RandomChancePerc;                              // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBM2IdleConfig.RandomAnimationData
// 0x0018
struct FRandomAnimationData
{
	class TArray<struct FRandomAnimation>              RandomAnimationData;                           // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MinTimeBetweenRandomAnimations;                // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxTimeBetweenRandomAnimations;                // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBM2IdleConfig.DialogueAnimationSets
// 0x0030
struct FDialogueAnimationSets
{
	struct FBM2IdleSet                                 IdleTriplet;                                   // 0x0000 (0x0018) [0x0000000100000000] (CPF_Edit)    
	struct FRandomAnimationData                        Randoms;                                       // 0x0018 (0x0018) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBM2IdleConfig.EventAnimationData
// 0x0014
struct FEventAnimationData
{
	class FName                                        AnimationName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        KismetInputLinkName;                           // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bHasNoMovement : 1;                            // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowAimAt : 1;                               // 0x0010 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bCanStartleDuring : 1;                         // 0x0010 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct BmGame.RBM2IdleConfig.StartledAnimationData
// 0x0020
struct FStartledAnimationData
{
	struct FRandomAnimation                            FrontStartle;                                  // 0x0000 (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FRandomAnimation                            BackStartle;                                   // 0x0010 (0x0010) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBM2IdleConfig.AnimationSets
// 0x0060
struct FAnimationSets
{
	struct FBM2IdleSet                                 IdleTriplet;                                   // 0x0000 (0x0018) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FEventAnimationData>           Events;                                        // 0x0018 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FRandomAnimationData                        Randoms;                                       // 0x0028 (0x0018) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FStartledAnimationData                      StartledAnimations;                            // 0x0040 (0x0020) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RPawnPlayerCombat.StrikeInfo
// 0x008C
struct FStrikeInfo
{
	class FName                                        StrikeAnimName;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    StrikeAnimset;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            StrikeRange;                                   // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikeStrength;                                // 0x0011 (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikeHand;                                    // 0x0012 (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikeDirection;                               // 0x0013 (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikeDamageDirection;                         // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikeTurnMotion;                              // 0x0015 (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikeTargetType;                              // 0x0016 (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikeStartHeight;                             // 0x0017 (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikeWeaponGrabbed;                           // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikePickupWeaponType;                        // 0x0019 (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikeRailingDir;                              // 0x001A (0x0001) [0x0000000000000000]               
	uint8_t                                            StrikeWallDir;                                 // 0x001B (0x0001) [0x0000000000000000]               
	uint8_t                                            PrevStrikeHand;                                // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            PrevStrikeTurnMotion;                          // 0x001D (0x0001) [0x0000000000000000]               
	class UAnimSet*                                    HitReactionAnimSet;                            // 0x0020 (0x0008) [0x0000000000000000]               
	class FName                                        HitReactionAnimName;                           // 0x0028 (0x0008) [0x0000000000000000]               
	uint8_t                                            Strike_PlayerStrikingBone;                     // 0x0030 (0x0001) [0x0000000000000000]               
	uint8_t                                            Strike_TargetImpactBone;                       // 0x0031 (0x0001) [0x0000000000000000]               
	float                                              DamageCollisionRadius;                         // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              DamageCollisionDuration;                       // 0x0038 (0x0004) [0x0000000000000000]               
	struct FVector                                     DamageCollisionProjection;                     // 0x003C (0x000C) [0x0000000000000000]               
	struct FVector                                     DamageDirection;                               // 0x0048 (0x000C) [0x0000000000000000]               
	float                                              DamageForceMultiplier;                         // 0x0054 (0x0004) [0x0000000000000000]               
	uint8_t                                            DamageARF;                                     // 0x0058 (0x0001) [0x0000000000000000]               
	uint32_t                                           bForceRespectDirection : 1;                    // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceRespectHandedness : 1;                   // 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDisableTargetCollision : 1;                   // 0x005C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCanBeFinalBlow : 1;                           // 0x005C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bTravelsBeyondTarget : 1;                      // 0x005C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bCanPerformWithNoTarget : 1;                   // 0x005C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bCanPerformOnBlocker : 1;                      // 0x005C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bPrimeHitReaction : 1;                         // 0x005C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bHitsLow : 1;                                  // 0x005C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bRemovesHelmet : 1;                            // 0x005C (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bCanBeMirrored : 1;                            // 0x005C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bOverrideMovementExit : 1;                     // 0x005C (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bPicksUpWeapon : 1;                            // 0x005C (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bJokerfied : 1;                                // 0x005C (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bMirrored : 1;                                 // 0x005C (0x0004) [0x0000000000000000] [0x00004000] 
	float                                              CapeAnimDelay;                                 // 0x0060 (0x0004) [0x0000000000000000]               
	float                                              CapeStopAnimDelay;                             // 0x0064 (0x0004) [0x0000000000000000]               
	class FName                                        DestCapeStateName;                             // 0x0068 (0x0008) [0x0000000000000000]               
	class FName                                        CapeAnimName;                                  // 0x0070 (0x0008) [0x0000000000000000]               
	uint8_t                                            PreferredCamDir;                               // 0x0078 (0x0001) [0x0000000000000000]               
	int32_t                                            UnlockChapter;                                 // 0x007C (0x0004) [0x0000000000000000]               
	int32_t                                            CombatSetID;                                   // 0x0080 (0x0004) [0x0000000000000000]               
	int32_t                                            TimeSinceUse;                                  // 0x0084 (0x0004) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNoTrail : 1;                                  // 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RPawnPlayerCombat.CounterInfo
// 0x0054
struct FCounterInfo
{
	class UAnimSet*                                    CounterAnimset;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    CounterTargetAnimset;                          // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        CounterAnimName;                               // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            CounterLimb;                                   // 0x0018 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CounterMoveDir;                                // 0x0019 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CounterWallDir;                                // 0x001A (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CounterRailDir;                                // 0x001B (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CounterStrength;                               // 0x001C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CounterStartHeight;                            // 0x001D (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CounterWeaponGrabbed;                          // 0x001E (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CounterSlopeDirection;                         // 0x001F (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMovesBeyondTarget : 1;                        // 0x0020 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bHandcuffed : 1;                               // 0x0020 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bBreaksHandcuffs : 1;                          // 0x0020 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	int32_t                                            TimeSinceUse;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	uint8_t                                            CounterDamageBone;                             // 0x0028 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CounterImpactBone;                             // 0x0029 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            HitStrength;                                   // 0x002A (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            UnlockChapter;                                 // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            CombatSetID;                                   // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bActive : 1;                                   // 0x0034 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bCanWindAnimation : 1;                         // 0x0034 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bCanKnockOverPawnsWhenRagdoll : 1;             // 0x0034 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bCanBeUsedOnSlope : 1;                         // 0x0034 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	class FName                                        DestCapeStateName;                             // 0x0038 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        CapeAnimName;                                  // 0x0040 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMirrored : 1;                                 // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            CounterPickupWeaponType;                       // 0x004C (0x0001) [0x0000000000000000]               
	uint32_t                                           bJokerfied : 1;                                // 0x0050 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bFatal : 1;                                    // 0x0050 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bHasLinkedJokerCounter : 1;                    // 0x0050 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct BmGame.RPawnPlayerCombat.TakedownInfo
// 0x0030
struct FTakedownInfo
{
	class UAnimSet*                                    TakedownAnimset;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    TakedownTargetAnimset;                         // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        TakedownAnimName;                              // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            TakedownSpeed;                                 // 0x0018 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            takedownType;                                  // 0x0019 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            TakedownEnvironmentDir;                        // 0x001A (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            TakedownDamageBone;                            // 0x001B (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            WeaponInHand;                                  // 0x001C (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            TimeSinceUse;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                            GeneralMovement;                               // 0x0024 (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            CombatSetID;                                   // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bActive : 1;                                   // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bCanBeMirrored : 1;                            // 0x002C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bForceCamera : 1;                              // 0x002C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct BmGame.RPawnPlayerCombat.WeaponDestroyInfo
// 0x0030
struct FWeaponDestroyInfo
{
	class UAnimSet*                                    WeaponDestroyAnimset;                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    WeaponDestroyTargetAnimset;                    // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        WeaponDestroyAnimName;                         // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            WeaponDestroyType;                             // 0x0018 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class TArray<class FName>                          DetachBoneList;                                // 0x001C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bActive : 1;                                   // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RPawnPlayerCombat.WeaponSnatchInfo
// 0x0021
struct FWeaponSnatchInfo
{
	class FName                                        SnatchAnimName;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    BMSnatchAnimset;                               // 0x0008 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    TargetSnatchAnimset;                           // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            WeaponType;                                    // 0x0018 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bLongRange : 1;                                // 0x001C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint8_t                                            PickupWeaponType;                              // 0x0020 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0021 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RPawnPlayerCombat.DualStrikeType
// 0x000C
struct FDualStrikeType
{
	uint8_t                                            BuddyType;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            EnemyType;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	class ARPawnCombat*                                PawnRef;                                       // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnPlayerCombat.DualStrikeInfo
// 0x0024
struct FDualStrikeInfo
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FDualStrikeType                             Type;                                          // 0x0008 (0x000C) [0x0000000000000000]               
	int32_t                                            YawDiffBuddy;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            YawDiffAnim;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              DistTargetToBuddy;                             // 0x001C (0x0004) [0x0000000000000000]               
	float                                              DistTargetToInitiator;                         // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnVillain.BeatdownInfo
// 0x0010
struct FBeatdownInfo
{
	int32_t                                            CurrStrike;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalHitsToKOTarget;                           // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            TimesCountered;                                // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bStartedBeatdown : 1;                          // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWasAtRange : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RPawnVillain.LookAtDirection
// 0x0010
struct FLookAtDirection
{
	class TArray<struct FVector>                       Locations;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPawnPlayer.FakeWall
// 0x0010
struct FFakeWall
{
	struct FVector                                     FakeCollisionNormal;                           // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           FakeCollisionNormalActive : 1;                 // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RGrapplePoint.GrapplePointOctreeObject
// 0x0044
struct FGrapplePointOctreeObject
{
	struct FBox                                        BoundingBox;                                   // 0x0000 (0x001C) [0x0000000000000000]               
	struct FVector                                     BoxCenter;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FPointer                                    OctreeNode;                                    // 0x0028 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    Owner;                                         // 0x0030 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	uint8_t                                            GrapplePointType;                              // 0x0038 (0x0001) [0x0000000000000001] (CPF_Const)   
	struct FPointer                                    OwningLevel;                                   // 0x003C (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct BmGame.RGrapplePoint.GrapplePointInfo
// 0x0050
struct FGrapplePointInfo
{
	struct FVector                                     OutwardNormal;                                 // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     PointA;                                        // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     PointB;                                        // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              ExtraCheckRadius;                              // 0x0024 (0x0004) [0x0000000000000000]               
	class UPhysicalMaterial*                           BasePhysicalMaterial;                          // 0x0028 (0x0008) [0x0000000000000000]               
	class ARGrapplePoint*                              SourceGrapplePoint;                            // 0x0030 (0x0008) [0x0000000000000000]               
	class ARHidePoint*                                 VantagePointGrapplePoint;                      // 0x0038 (0x0008) [0x0000000000000400] (CPF_Transient)
	struct FPointer                                    OctTreeObject;                                 // 0x0040 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	uint8_t                                            Type;                                          // 0x0048 (0x0001) [0x0000000000000000]               
	uint32_t                                           LowPriorityGrapplePoint : 1;                   // 0x004C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           SwingableGrapplePoint : 1;                     // 0x004C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bNoFadeRescue : 1;                             // 0x004C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bValid : 1;                                    // 0x004C (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct BmGame.RPawnPlayer.CeilingClimbPoint
// 0x0084
struct FCeilingClimbPoint
{
	struct FEnvironmentSpecialMoveLocator              FeatureLocator;                                // 0x0000 (0x0084) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPhysUtil.CapeStateChangeData
// 0x004C
struct FCapeStateChangeData
{
	class FName                                        CapeStateName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        CapeAnimName;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              AnimStartTime;                                 // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AnimPlayRate;                                  // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SyncAnimName;                                  // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              SyncAnimOffset;                                // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMirrored : 1;                                 // 0x0024 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceRestartAnim : 1;                         // 0x0024 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	class URCapeStateConfig*                           CinematicStateTemplate;                        // 0x0028 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        CinematicAnimName;                             // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    CinematicStateExtraAnimSet;                    // 0x0038 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bTeleportCape : 1;                             // 0x0040 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bCapeForceToAnimPoseOnTeleport : 1;            // 0x0040 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bCapeDoubleFrameTeleport : 1;                  // 0x0040 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bClearVelocityOnStateExit : 1;                 // 0x0040 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bSetCapeToInitialPose : 1;                     // 0x0040 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	float                                              ScaleHeadDepthBias;                            // 0x0044 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ScaleDepthBias;                                // 0x0048 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RPawnPlayer.WireBounceUpdater
// 0x0044
struct FWireBounceUpdater
{
	float                                              CurrentCorrection;                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              CurrentAmplitude;                              // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              CurrentTimer;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              CurrentPeriod;                                 // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           IncrementedSpeed : 1;                          // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinPeriod;                                     // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxPeriod;                                     // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxCorrection;                                 // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinCorrection;                                 // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MovementCorrection;                            // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MovementPeriod;                                // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              BlendInStrength;                               // 0x002C (0x0004) [0x0000000000000000]               
	float                                              DecayStrength;                                 // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              BuildUpStrength;                               // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinBounceDist;                                 // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxBounceDist;                                 // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bActive : 1;                                   // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RPawnPlayer.RailingInfo
// 0x0019
struct FRailingInfo
{
	struct FPointer                                    EdgeColl;                                      // 0x0000 (0x0008) [0x0000000000000200] (CPF_Native)  
	int32_t                                            RailingIndex;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     PointOnRailing;                                // 0x000C (0x000C) [0x0000000000000000]               
	uint8_t                                            RailingType;                                   // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0019 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RPawnPlayer.HairAndCowlState
// 0x0010
struct FHairAndCowlState
{
	class USkeletalMesh*                               HairMesh;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      HairMeshComponent;                             // 0x0008 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct BmGame.RPawnPlayer.PlayerTakedownInfo
// 0x001C
struct FPlayerTakedownInfo
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            FeatureType;                                   // 0x0001 (0x0001) [0x0000000000000000]               
	float                                              Floor2FloorHeight;                             // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     AimDirection;                                  // 0x0008 (0x000C) [0x0000000000000000]               
	class AActor*                                      ActorInstance;                                 // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnVillain.EnemyPosition
// 0x0010
struct FEnemyPosition
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnVillain.RegisteredPairedAnimsetInfo
// 0x0018
struct FRegisteredPairedAnimsetInfo
{
	class UAnimSet*                                    PlayerAnimset;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    VillainAnimSet;                                // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        CharacterName;                                 // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnVillain.PotentialLookAtPoint
// 0x0010
struct FPotentialLookAtPoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Distance;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBarkConvo.VoicePawnRef
// 0x0018
struct FVoicePawnRef
{
	class TArray<class UAkDialogueVoice*>              Voice;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class URBarkConvoPawnRef*                          PawnRef;                                       // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBarkConvo.VoiceUsage
// 0x0008
struct FVoiceUsage
{
	int32_t                                            VoiceId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Tally;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBarkConvo.VoiceWeightingInfo
// 0x001C
struct FVoiceWeightingInfo
{
	class TArray<struct FVoiceUsage>                   Usage;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class URBarkCharacterDef*                          SourceDef;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            LowestTally;                                   // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBarkConvo.GBFSNode
// 0x0018
struct FGBFSNode
{
	class TArray<struct FVoicePawnRef>                 VoicePawnRefList;                              // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class URBarkConvoAction*                           ConAct;                                        // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBarkConvo.VoiceCountData
// 0x0018
struct FVoiceCountData
{
	class UAkDialogueVoice*                            Voice;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              VPRIndex;                                      // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBarkConvo.WeightedSpeaker
// 0x000C
struct FWeightedSpeaker
{
	int32_t                                            Weight;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class AActor*                                      Speaker;                                       // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBarkConvo.LiveAssignRawState
// 0x0028
struct FLiveAssignRawState
{
	class TArray<class UAkDialogueVoice*>              Voice;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class URBarkConvoPawnRef*                          PawnRef;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<struct FWeightedSpeaker>              WeightedSpeakerList;                           // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBarkConvo.LiveAssignEndState
// 0x0010
struct FLiveAssignEndState
{
	class UAkDialogueVoice*                            Voice;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      SpeakerActor;                                  // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBarkConvo.BarkAssignmentSearchNode
// 0x0028
struct FBarkAssignmentSearchNode
{
	int32_t                                            NextSlotToAssign;                              // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FLiveAssignEndState>           SpeakerSlotList;                               // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class AActor*>                        UnusedSpeakerList;                             // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Score;                                         // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCombatMove_VillainAttack.AttackAndCounterInfo
// 0x0010
struct FAttackAndCounterInfo
{
	class FName                                        AttackAnimName;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        CounterAnimName;                               // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCombatMove_VillainSimultaneousAttack.VillainInfo
// 0x0040
struct FVillainInfo
{
	class ARPawnVillain*                               Pawn;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bTrackTarget : 1;                              // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanCounter : 1;                               // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCountered : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bGrabbed : 1;                                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FTransitionId                               AnimId;                                        // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     InitStrikeDir;                                 // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              LastTransitionRotation;                        // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bRagdolled : 1;                                // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            VecSpot;                                       // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              AttackDelay;                                   // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAttackStarted : 1;                            // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        ImpactBone;                                    // 0x0030 (0x0008) [0x0000000000000000]               
	float                                              GetInPositionTime;                             // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bInPosition : 1;                               // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCriticaled : 1;                               // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCriticalAttack : 1;                           // 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BmGame.RPersistentOptions.UnlockedChallengePerCharacter
// 0x001C
struct FUnlockedChallengePerCharacter
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            LocalRating;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            CustomLocalRating;                             // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            CustomScore;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            Medals;                                        // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            CustomMedals;                                  // 0x0015 (0x0001) [0x0000000000000000]               
	uint8_t                                            CharacterId;                                   // 0x0016 (0x0001) [0x0000000000000000]               
	int32_t                                            RivalPoints;                                   // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPersistentOptions.UnlockedChallenge
// 0x0024
struct FUnlockedChallenge
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            Status;                                        // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            Requirements;                                  // 0x0009 (0x0001) [0x0000000000000000]               
	class TArray<struct FUnlockedChallengePerCharacter> DataPerCharacter;                              // 0x000C (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	int32_t                                            ActiveCharacterId;                             // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            DefaultCharacterId;                            // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPersistentOptions.DeathMovieRecord
// 0x0024
struct FDeathMovieRecord
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      DeathMovieName;                                // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              PlayCounts;                                    // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPersistentOptions.ActivePlayerSkin
// 0x0024
struct FActivePlayerSkin
{
	uint8_t                                            Version;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Id;                                            // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Skin;                                          // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPersistentOptions.StoredKeyMap
// 0x0026
struct FStoredKeyMap
{
	class FString                                      PrimaryKeyName;                                // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      SecondaryKeyName;                              // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            bPrimaryCtrl;                                  // 0x0020 (0x0001) [0x0000000000000000]               
	uint8_t                                            bPrimaryShift;                                 // 0x0021 (0x0001) [0x0000000000000000]               
	uint8_t                                            bPrimaryAlt;                                   // 0x0022 (0x0001) [0x0000000000000000]               
	uint8_t                                            bSecondaryCtrl;                                // 0x0023 (0x0001) [0x0000000000000000]               
	uint8_t                                            bSecondaryShift;                               // 0x0024 (0x0001) [0x0000000000000000]               
	uint8_t                                            bSecondaryAlt;                                 // 0x0025 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                         // 0x0026 (0x0002) ADDED PADDING
};

// ScriptStruct BmGame.RGFxMovieUI.MenuState
// 0x0014
struct FMenuState
{
	int32_t                                            ActiveColumn;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              ActiveColumnIndexs;                            // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPlayerController.PlayableCharacterItem
// 0x0030
struct FPlayableCharacterItem
{
	int32_t                                            BaseId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      Name;                                          // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      LDRef;                                         // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bBad : 1;                                      // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Mask;                                          // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.MWBIDOverlayManager.NetworkStatus_Data
// 0x0061
struct FNetworkStatus_Data
{
	class FString                                      ConnectionStatusMessage;                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            ConnectionStatusColourCode;                    // 0x0010 (0x0001) [0x0000000000000000]               
	class FString                                      EnvironmentMessage;                            // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            EnvironmentColourCode;                         // 0x0024 (0x0001) [0x0000000000000000]               
	class FString                                      HydraStatusMessage;                            // 0x0028 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            HydraStatusColourCode;                         // 0x0038 (0x0001) [0x0000000000000000]               
	class FString                                      WBPlayStatusMessage;                           // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            WBPlayStatusColourCode;                        // 0x004C (0x0001) [0x0000000000000000]               
	class FString                                      WBPlayCodeMessage;                             // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            WBPlayCodeColourCode;                          // 0x0060 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0061 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.MWBIDOverlayManager.EmailForm_PreData
// 0x0024
struct FEmailForm_PreData
{
	class FString                                      Email;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Password;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bEmailOptIn : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.MWBIDOverlayManager.GenericOverlay_Data
// 0x0054
struct FGenericOverlay_Data
{
	class FString                                      GenericTitle;                                  // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      GenericDesc;                                   // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bHasImg : 1;                                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasDeclineOption : 1;                         // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      ErrorCode;                                     // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      TokenToReplace;                                // 0x0034 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      TokenReplacement;                              // 0x0044 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.MHackableInterface.SubroutineDefinition
// 0x0048
struct FSubroutineDefinition
{
	uint8_t                                            SubroutineType;                                // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class UMHackSubroutineContext*                     SubroutineContext;                             // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FString                                      SubroutineLocalizedId;                         // 0x000C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      SubroutineDescriptionLocalizedId;              // 0x001C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            SubroutineIcon;                                // 0x002C (0x0001) [0x0000000100000000] (CPF_Edit)    
	class TArray<class AActor*>                        SubroutineAffectedActors;                      // 0x0030 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class AActor*                                      SubroutineLookAtActor;                         // 0x0040 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.MHackingGadgetBase.BatgirlSecondaryTargetData
// 0x0014
struct FBatgirlSecondaryTargetData
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystemComponent*                    ConnectionBeam;                                // 0x000C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct BmGame.RForensicsInvestigator.InfoEntry
// 0x0028
struct FInfoEntry
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              RealX;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RealY;                                         // 0x000C (0x0004) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              PriorityOverride;                              // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RHidePoint.CantJumpOffArc
// 0x0008
struct FCantJumpOffArc
{
	int32_t                                            MinYaw;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxYaw;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RHidePoint.HideLink
// 0x001C
struct FHideLink
{
	struct FVector                                     SwingPosition;                                 // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              TravelTime;                                    // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     MidPoint;                                      // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGrappleGun.GrapplePointContainer
// 0x003C
struct FGrapplePointContainer
{
	struct FPointer                                    GrapplePoint;                                  // 0x0000 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	struct FVector                                     TargetPosition;                                // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     GrappleCheckPosition;                          // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     SwingCheckPosition;                            // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              Score;                                         // 0x002C (0x0004) [0x0000000000000000]               
	float                                              BonusScore;                                    // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              PredVolumeBonus;                               // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           GrappleClear : 1;                              // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           GrappleChecked : 1;                            // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           MustSwingToGrapplePoint : 1;                   // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BmGame.RGrappleGun.GrappleDodgeAnim
// 0x0010
struct FGrappleDodgeAnim
{
	float                                              RightSpeed;                                    // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              UpSpeed;                                       // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        DodgeAnim;                                     // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGrappleGun.HidePointInfo
// 0x0010
struct FHidePointInfo
{
	class ARHidePoint*                                 HidePoint;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              HidePointAngle;                                // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHidePointBlocked : 1;                         // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RGrappleGun.AvailableVantagePoints
// 0x0014
struct FAvailableVantagePoints
{
	class TArray<struct FHidePointInfo>                PotentialHidePoints;                           // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            CurrentHidePointIter;                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGrappleGun.GrappleConeDefinition
// 0x004C
struct FGrappleConeDefinition
{
	struct FVector                                     CheckLocation;                                 // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CheckRotation;                                 // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     PlayerLocation;                                // 0x0018 (0x000C) [0x0000000000000000]               
	uint32_t                                           bRunGrapple : 1;                               // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bZoomed : 1;                                   // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              ScoreBonus;                                    // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              VantagePointBonus;                             // 0x002C (0x0004) [0x0000000000000000]               
	float                                              MaxDistance;                                   // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              ConeAngle;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bVantagePointsOnly : 1;                        // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanSwingToTarget : 1;                         // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bGrapplePointsOnly : 1;                        // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           ChuteGrapple : 1;                              // 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
	class AActor*                                      ExcludeActor;                                  // 0x003C (0x0008) [0x0000000000000000]               
	float                                              SwingScoreBonus;                               // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              OverrideRange;                                 // 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBatarang.BatarangThrowDirection
// 0x002C
struct FBatarangThrowDirection
{
	class TArray<class FName>                          ThrowAnims;                                    // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<uint32_t>                             LeftHanded;                                    // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            AimingConfig;                                  // 0x0020 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              MinAngle;                                      // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxAngle;                                      // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBatarang.BatarangThrowDirectionsContainer
// 0x0010
struct FBatarangThrowDirectionsContainer
{
	class TArray<struct FBatarangThrowDirection>       ThrowDirections;                               // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPhysUtil.CapeChangeData
// 0x0008
struct FCapeChangeData
{
	uint8_t                                            NewCapeHiddenType;                             // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            NewCapeEnabledType;                            // 0x0001 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            NewCapeReducedDepthBiasType;                   // 0x0002 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           Padding : 1;                                   // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RPawnPlayerCatwomanBase.WhipTrailData
// 0x0024
struct FWhipTrailData
{
	class UParticleSystemComponent*                    ParticleSystemComp;                            // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        BoneAttachName;                                // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCurrentlyActive : 1;                          // 0x0010 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	struct FVector                                     LastUpdatePosition;                            // 0x0014 (0x000C) [0x0000000000000400] (CPF_Transient)
	int32_t                                            CachedBoneAttachIndex;                         // 0x0020 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct BmGame.RCwGrappleGunBase.WallLandPoint
// 0x0124
struct FWallLandPoint
{
	uint32_t                                           bFoundEdge : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDangleEdge : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     OriginalLocation;                              // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     OriginalNormal;                                // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     NextHoldLocation;                              // 0x0028 (0x000C) [0x0000000000000000]               
	struct FVector                                     NextHoldNormal;                                // 0x0034 (0x000C) [0x0000000000000000]               
	uint32_t                                           bGotAnyEdge : 1;                               // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Normal;                                        // 0x0044 (0x000C) [0x0000000000000000]               
	uint8_t                                            InDir;                                         // 0x0050 (0x0001) [0x0000000000000000]               
	uint8_t                                            OutDir;                                        // 0x0051 (0x0001) [0x0000000000000000]               
	struct FVector                                     CheckRefLocation;                              // 0x0054 (0x000C) [0x0000000000000000]               
	struct FVector                                     CheckStart;                                    // 0x0060 (0x000C) [0x0000000000000000]               
	struct FVector                                     CheckEnd;                                      // 0x006C (0x000C) [0x0000000000000000]               
	struct FVector                                     CheckExtent;                                   // 0x0078 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitLocation;                                   // 0x0084 (0x000C) [0x0000000000000000]               
	struct FVector                                     FootCheckStart;                                // 0x0090 (0x000C) [0x0000000000000000]               
	struct FVector                                     FootCheckEnd;                                  // 0x009C (0x000C) [0x0000000000000000]               
	struct FVector                                     FootCheckExtent;                               // 0x00A8 (0x000C) [0x0000000000000000]               
	struct FVector                                     FootHitLocation;                               // 0x00B4 (0x000C) [0x0000000000000000]               
	uint32_t                                           FootCheckDone : 1;                             // 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           FootCheckFailed : 1;                           // 0x00C0 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     SpotCheck;                                     // 0x00C4 (0x000C) [0x0000000000000000]               
	struct FVector                                     ToNextExtent;                                  // 0x00D0 (0x000C) [0x0000000000000000]               
	struct FVector                                     ToNextStart;                                   // 0x00DC (0x000C) [0x0000000000000000]               
	struct FVector                                     ToNextEnd;                                     // 0x00E8 (0x000C) [0x0000000000000000]               
	struct FVector                                     Spot2Check;                                    // 0x00F4 (0x000C) [0x0000000000000000]               
	struct FVector                                     ToNext2Extent;                                 // 0x0100 (0x000C) [0x0000000000000000]               
	struct FVector                                     ToNext2Start;                                  // 0x010C (0x000C) [0x0000000000000000]               
	struct FVector                                     ToNext2End;                                    // 0x0118 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCwGrappleGunBase.WallClimbPath
// 0x00D0
struct FWallClimbPath
{
	uint32_t                                           bSearchedEdges : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FWallLandPoint>                ClimbPoints;                                   // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bClimbToVantagePoint : 1;                      // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      VantagePointActor;                             // 0x0018 (0x0008) [0x0000000000000000]               
	uint32_t                                           bClimbToCeiling : 1;                           // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     TargetLocation;                                // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetNormal;                                  // 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     OriginalPlayerLocation;                        // 0x003C (0x000C) [0x0000000000000000]               
	struct FEnvironmentSpecialMoveLocator              TargetFeature;                                 // 0x0048 (0x0084) [0x0000000000000000]               
	float                                              NumClimbSteps;                                 // 0x00CC (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCwGrappleGunBase.SwingParameters
// 0x005C
struct FSwingParameters
{
	struct FVector                                     SwingStartLocation;                            // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     SwingStartTangent;                             // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     SwingEndLocation;                              // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     SwingEndTangent;                               // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     SwingWallLocation;                             // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              SwingTime;                                     // 0x003C (0x0004) [0x0000000000000000]               
	float                                              OneOverSwingTime;                              // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              ProportionAlongPath;                           // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              ProportionAtAnimationStart;                    // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              IdealEndYaw;                                   // 0x004C (0x0004) [0x0000000000000000]               
	float                                              IdealStartPitch;                               // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              IdealEndPitch;                                 // 0x0054 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUsed : 1;                                     // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bValid : 1;                                    // 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RCwGrappleGunBase.WallClimbInfo
// 0x0448
struct FWallClimbInfo
{
	struct FWallClimbPath                              ClimbPath;                                     // 0x0000 (0x00D0) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bGotValidPath : 1;                             // 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEdgeSwingCheckNewPath : 1;                    // 0x00D0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUsingFallbackPath : 1;                        // 0x00D0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bFromWallStick : 1;                            // 0x00D0 (0x0004) [0x0000000000000000] [0x00000008] 
	uint8_t                                            LastFailedPreferedClimbPath;                   // 0x00D4 (0x0001) [0x0000000000000000]               
	uint8_t                                            LastFailedEdgeSwingPreferedClimbPath;          // 0x00D5 (0x0001) [0x0000000000000000]               
	uint8_t                                            LastFailedAerialSwingPreferedClimbPath;        // 0x00D6 (0x0001) [0x0000000000000000]               
	uint32_t                                           bLastFailedDueToPounceDistance : 1;            // 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            LastFailReason;                                // 0x00DC (0x0001) [0x0000000000000000]               
	uint8_t                                            LastSuccessfulPreferedClimbPath;               // 0x00DD (0x0001) [0x0000000000000000]               
	uint8_t                                            LastFailedStartPoint;                          // 0x00DE (0x0001) [0x0000000000000000]               
	struct FVector                                     LastCheckedAerialSwingStart;                   // 0x00E0 (0x000C) [0x0000000000000000]               
	struct FEnvironmentSpecialMoveLocator              InitialLocator;                                // 0x00EC (0x0084) [0x0000000000000000]               
	struct FPointer                                    LastValidGrapplePoint;                         // 0x0170 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	class ARHidePoint*                                 LastValidHidePoint;                            // 0x0178 (0x0008) [0x0000000000000000]               
	uint32_t                                           bLastValidIsCeilingTarget : 1;                 // 0x0180 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     LastValidCeilingLocation;                      // 0x0184 (0x000C) [0x0000000000000000]               
	struct FVector                                     WallNormal;                                    // 0x0190 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastTargetLocation;                            // 0x019C (0x000C) [0x0000000000000000]               
	struct FVector                                     LastTargetWallLocation;                        // 0x01A8 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastMaxRight;                                  // 0x01B4 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastMaxLeft;                                   // 0x01C0 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastGrappleRight;                              // 0x01CC (0x000C) [0x0000000000000000]               
	struct FVector                                     LastGrappleLeft;                               // 0x01D8 (0x000C) [0x0000000000000000]               
	uint32_t                                           bLastExtremeRight : 1;                         // 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLastExtremeLeft : 1;                          // 0x01E4 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     EdgeSwingLaunchLocation;                       // 0x01E8 (0x000C) [0x0000000000000000]               
	uint32_t                                           bEdgeSwingPointCheckFailed : 1;                // 0x01F4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bValidEdgeSwingTarget : 1;                     // 0x01F4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAerialSwingPointCheckFailed : 1;              // 0x01F4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bValidAerialSwingTarget : 1;                   // 0x01F4 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bValidDirectPounceTarget : 1;                  // 0x01F4 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bValidWallClimbTarget : 1;                     // 0x01F4 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bValidCeilingTarget : 1;                       // 0x01F4 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bValidVantageSwingTarget : 1;                  // 0x01F4 (0x0004) [0x0000000000000000] [0x00000080] 
	struct FPointer                                    AssociatedGrapplePoint;                        // 0x01F8 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	float                                              AssociatedBonusScore;                          // 0x0200 (0x0004) [0x0000000000000000]               
	struct FVector                                     LockedExtendedEdgeSwingStart;                  // 0x0204 (0x000C) [0x0000000000000000]               
	struct FVector                                     LockedExtendedEdgeSwingWallLocation;           // 0x0210 (0x000C) [0x0000000000000000]               
	struct FVector                                     LockedExtendedAerialSwingStart;                // 0x021C (0x000C) [0x0000000000000000]               
	struct FVector                                     PlayerStartLocation;                           // 0x0228 (0x000C) [0x0000000000000000]               
	float                                              SwingHeightOffset;                             // 0x0234 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDebugNewPath : 1;                             // 0x0238 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     InitialWallLocation;                           // 0x023C (0x000C) [0x0000000000000000]               
	struct FVector                                     InitialLandLocation;                           // 0x0248 (0x000C) [0x0000000000000000]               
	struct FSwingParameters                            SwingParams;                                   // 0x0254 (0x005C) [0x0000000000000000]               
	struct FVector                                     LastFailedSwingLocation;                       // 0x02B0 (0x000C) [0x0000000000000000]               
	uint32_t                                           bCheckedLPounceWall : 1;                       // 0x02BC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFoundLPounceWall : 1;                         // 0x02BC (0x0004) [0x0000000000000000] [0x00000002] 
	struct FEnvironmentSpecialMoveLocator              LPounceWallLocation;                           // 0x02C0 (0x0084) [0x0000000000000000]               
	struct FVector                                     LastLPounceWallCheckPlayerLocation;            // 0x0344 (0x000C) [0x0000000000000000]               
	uint32_t                                           bFoundLPounceToTarget : 1;                     // 0x0350 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCheckedLPounceToTarget : 1;                   // 0x0350 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FEnvironmentSpecialMoveLocator              LPounceToTargetLocation;                       // 0x0354 (0x0084) [0x0000000000000000]               
	struct FVector                                     LastLPounceTargetCheckPlayerLocation;          // 0x03D8 (0x000C) [0x0000000000000000]               
	class FName                                        LastLPounceTargetCheckState;                   // 0x03E4 (0x0008) [0x0000000000000000]               
	int32_t                                            ArrayIndex;                                    // 0x03EC (0x0004) [0x0000000000000000]               
	struct FPointer                                    GrapplePoint;                                  // 0x03F0 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	class ARHidePoint*                                 HidePoint;                                     // 0x03F8 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEdgeSwingPointNeedsCheck : 1;                 // 0x0400 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEdgeSwingUseShortPounceOff : 1;               // 0x0400 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAerialSwingPointNeedsCheck : 1;               // 0x0400 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bLastSwingCheckWasShortSwing : 1;              // 0x0400 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     DebugLastSwingStartLoc;                        // 0x0404 (0x000C) [0x0000000000000000]               
	struct FVector                                     DebugLastSwingStartVel;                        // 0x0410 (0x000C) [0x0000000000000000]               
	float                                              SwingStartTime;                                // 0x041C (0x0004) [0x0000000000000000]               
	int32_t                                            PathRetries;                                   // 0x0420 (0x0004) [0x0000000000000000]               
	int32_t                                            PathRecalcs;                                   // 0x0424 (0x0004) [0x0000000000000000]               
	struct FVector                                     ToGrappleLine;                                 // 0x0428 (0x000C) [0x0000000000000000]               
	struct FVector                                     ToRight;                                       // 0x0434 (0x000C) [0x0000000000000000]               
	class ARClimbLocator*                              ClimbLocator;                                  // 0x0440 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.MPawnPlayerRedHoodBase.RhStickBouncePoint
// 0x0020
struct FRhStickBouncePoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x000C (0x000C) [0x0000000000000000]               
	class APawn*                                       Pawn;                                          // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPlayerControllerCombat.ComboMoveInfo
// 0x0008
struct FComboMoveInfo
{
	uint8_t                                            MoveType;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            MoveNum;                                       // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.MWBIDEmailFormScreenMessage.UserData
// 0x002C
struct FUserData
{
	class FString                                      Email;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Password;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bReceiveEmails : 1;                            // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            PlayerAge;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsValidAge : 1;                               // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RCameraOverlayPlayer.CameraOverlayLayer
// 0x00A8
struct FCameraOverlayLayer
{
	class FName                                        LayerName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        AnimSequence;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    CustomAnimSet;                                 // 0x0010 (0x0008) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           bActive : 1;                                   // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIgnoreXTranslation : 1;                       // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AnimStrength;                                  // 0x001C (0x0004) [0x0000000000000000]               
	float                                              AnimStrengthFactor;                            // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLooping : 1;                                  // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMirrored : 1;                                 // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              PlaybackSpeed;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              Time;                                          // 0x002C (0x0004) [0x0000000000000000]               
	class UAnimSequence*                               FoundAnim;                                     // 0x0030 (0x0008) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x8];                              // 0x0038 (0x0008) MISSED OFFSET
	struct FMatrix                                     ZeroAtom;                                      // 0x0040 (0x0040) [0x0000000000000000]               
	float                                              LinkToSpeed;                                   // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              BlendTime;                                     // 0x0088 (0x0004) [0x0000000000000000]               
	struct FVector                                     ProportionalExtraTranslation;                  // 0x008C (0x000C) [0x0000000000000000]               
	struct FVector                                     TranslationMultiplier;                         // 0x0098 (0x000C) [0x0000000000000000]               
	float                                              TranslationProportionFactor;                   // 0x00A4 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x8];                         // 0x00A8 (0x0008) ADDED PADDING
};

// ScriptStruct BmGame.R3rdPersonCamera.CameraLookAtSpeedDescriptor
// 0x0010
struct FCameraLookAtSpeedDescriptor
{
	float                                              DegreesPerSecond;                              // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SlowDownAngle;                                 // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AccelerationModifier;                          // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DecelerationModifier;                          // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.R3rdPersonCamera.FreeCameraConfig
// 0x00A8
struct FFreeCameraConfig
{
	struct FVector                                     StateFreeCameraSitOffsetMin;                   // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     StateFreeCameraSitOffsetMax;                   // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           UseStateFreeCameraSitOffsetUp : 1;             // 0x0018 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FVector                                     StateFreeCameraSitOffsetUp;                    // 0x001C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     StateFreeCameraPullOffset;                     // 0x0028 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     CameraPivotOffset;                             // 0x0034 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     ZoomedOffset;                                  // 0x0040 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              maxPitch;                                      // 0x004C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinPitch;                                      // 0x0050 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinFreeCameraDistance;                         // 0x0054 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxFreeCameraDistance;                         // 0x0058 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ShortCamSpringConst;                           // 0x005C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LongCamSpringConst;                            // 0x0060 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DefaultCameraPitch;                            // 0x0064 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraSitOffsetPower;                          // 0x0068 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraSitOffsetMin;                            // 0x006C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraSitOffsetMax;                            // 0x0070 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bUseSeparate43Settings : 1;                    // 0x0074 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FVector                                     StateFreeCamera43SitOffsetMax;                 // 0x0078 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     StateFreeCamera43SitOffsetMin;                 // 0x0084 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     StateFreeCamera43SitOffsetLookUp;              // 0x0090 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bDontModifySitOffsetWhenLookingUp : 1;         // 0x009C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              MinCameraSmoothingAngle;                       // 0x00A0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxCameraSmoothingAngle;                       // 0x00A4 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.R3rdPersonCamera.CameraSmoother
// 0x0024
struct FCameraSmoother
{
	float                                              LastSmoothDistance;                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentSmootherIndex;                          // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MinSmootherIndex;                              // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DirectionDistance[4];                          // 0x000C (0x0010) [0x0000000000000000]               
	float                                              MinCameraSmoothingAngle;                       // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxCameraSmoothingAngle;                       // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.R3rdPersonCamera.Vector3WithTime
// 0x0010
struct FVector3WithTime
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Z;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              W;                                             // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.R3rdPersonCamera.RailingOffsetSettings
// 0x0018
struct FRailingOffsetSettings
{
	float                                              fRailingOffsetReachesMaximumProportionAngle;   // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              fRailingOffsetInterpolationSpeed;              // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              fRailingOffsetMaximumDistanceToTheLeft;        // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              fRailingOffsetMaximumDistanceToTheRight;       // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              fRailingOriginalCameraOffsetX;                 // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OffsetInterpolant;                             // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.R3rdPersonCamera.CameraWanderSettings
// 0x0044
struct FCameraWanderSettings
{
	float                                              CameraWanderMagnitude;                         // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraWanderFOVMagnitude;                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraWanderXMagnitude;                        // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraWanderRotationMagnitude;                 // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraWanderRollMagnitude;                     // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraWanderSinComponent1;                     // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraWanderSinComponent2;                     // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraWanderSinComponent3;                     // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CameraWanderZOffset;                           // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Priority;                                      // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOnceOnly : 1;                                 // 0x0028 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bOneWayWander : 1;                             // 0x0028 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              OneWayTimer;                                   // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OriginalY;                                     // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              OriginalZ;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              OriginalRoll;                                  // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              OriginalPitch;                                 // 0x003C (0x0004) [0x0000000000000000]               
	float                                              OriginalYaw;                                   // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrection.FloorCorrectionResult
// 0x002C
struct FFloorCorrectionResult
{
	float                                              StepUpZ;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              CollisionZ;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              CustomZ;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OverExtensionZ;                                // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     RawNormal;                                     // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     BlendedNormal;                                 // 0x001C (0x000C) [0x0000000000000000]               
	uint32_t                                           NormalIsSignificant : 1;                       // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RDOFManager.BlurStruct
// 0x0010
struct FBlurStruct
{
	float                                              MaxFar;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxNear;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeRunning;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              TimeTotal;                                     // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAbandonedVehicle.MolotovTimeParam
// 0x0020
struct FMolotovTimeParam
{
	struct FVector                                     BurnPoint;                                     // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              BurnSize;                                      // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeOn;                                        // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeOff;                                       // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Strength;                                      // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              InitialBurn;                                   // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAddContentBatmobileMesh.BatmobileMaterialOverride
// 0x000C
struct FBatmobileMaterialOverride
{
	int32_t                                            MaterialIndex;                                 // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                      // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAddContentCharacterSelect.AddContentCharacterSelect_AttachMesh
// 0x0010
struct FAddContentCharacterSelect_AttachMesh
{
	class USkeletalMesh*                               Mesh;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        BoneOrSocketName;                              // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAddContentPlayerCharacterMesh.BoneTrackingPlayer
// 0x0030
struct FBoneTrackingPlayer
{
	class TArray<class FName>                          Bones;                                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UAkEvent*>                      Events;                                        // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UAkParameterName*>              RTPCToSet;                                     // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAttackEdgeSearch.EdgePoint
// 0x0018
struct FEdgePoint
{
	struct FVector                                     EdgeDir;                                       // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     StandPos;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAttackPointSearch.AttackPoint
// 0x0010
struct FAttackPoint
{
	uint32_t                                           bCanSeeStandingTarget : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanSeeCrouchingTarget : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_Attack_Converge.MultiDestPathFindInfo
// 0x0010
struct ARAEC_Attack_Converge_FMultiDestPathFindInfo
{
	class URNavigationHandle*                          Handle;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class URMultiDestGoalData*                         GoalData;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_Attack_Converge.PreSearchDestIndex
// 0x0014
struct FPreSearchDestIndex
{
	struct FVector                                     Loc;                                           // 0x0000 (0x000C) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Dist;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_Attack_Converge.PreSearchList
// 0x0010
struct FPreSearchList
{
	class TArray<struct FPreSearchDestIndex>           PSDIList;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RMultiDestGoalData.PerGoalInfo
// 0x0018
struct FPerGoalInfo
{
	struct FVector                                     GoalPos;                                       // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           bFound : 1;                                    // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Dist;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              ExtraCost;                                     // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnnounceAAITannoyRunner.AnnouncementInfo
// 0x001C
struct FAnnouncementInfo
{
	class FName                                        FlagVal;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              Type;                                          // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bPlayedDialogue : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RBMAIAction_ReviveCasualty.reviveAnimNames
// 0x0020
struct FreviveAnimNames
{
	class FName                                        casFaceUp[2];                                  // 0x0000 (0x0010) [0x0000000000000000]               
	class FName                                        casFaceDown[2];                                // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPerimeterData.StandPoint
// 0x0028
struct FStandPoint
{
	class TArray<struct FVector>                       WatchPoint;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class ARAEC_Casualty_Sub_Perim*                    Watcher;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              LastUsedTime;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_Disarmed.GunSource
// 0x0010
struct FGunSource
{
	class ARBMCombatThrownObject_Predator*             GunPickup;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class ARPredatorGunLockerBase*                     GunLocker;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_HideFromBatmobile.MultiDestPathFindInfo
// 0x0010
struct ARAEC_HideFromBatmobile_FMultiDestPathFindInfo
{
	class URNavigationHandle*                          Handle;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class URMultiDestGoalData*                         GoalData;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_LevelScripting.SearchTarget
// 0x0028
struct FSearchTarget
{
	class URJobAssignment*                             Assigner;                                      // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UObject*                                     Target;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     pos;                                           // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              ExtraCost;                                     // 0x001C (0x0004) [0x0000000000000000]               
	class ARLootSourceBase*                            TargetLootSource;                              // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_LevelScripting.MultiDestPathFindInfo
// 0x0010
struct ARAEC_LevelScripting_FMultiDestPathFindInfo
{
	class URNavigationHandle*                          Handle;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class URMultiDestGoalData*                         GoalData;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_LockedIn.PointDist
// 0x0008
struct FPointDist
{
	int32_t                                            ReactPointIndex;                               // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              DistSq;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_LockedIn.ThugPointDist
// 0x0018
struct FThugPointDist
{
	class ARBMAIController*                            TestThugCon;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FPointDist>                    PointDistList;                                 // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAEC_OutOfControlDroneExplode.ConDist
// 0x000C
struct FConDist
{
	class ARBMAIController*                            C;                                             // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              DistSq;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_SearchBase.GroupingHistoryEntry
// 0x0014
struct FGroupingHistoryEntry
{
	class ARPawnVillainGunBase*                        Thug1;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class ARPawnVillainGunBase*                        Thug2;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSearchRoutingWrapper.SideBranchStruct
// 0x0020
struct FSideBranchStruct
{
	class URChasePoint*                                BranchesFrom;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class URChasePoint*                                BranchTo;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     BranchFromPoint;                               // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              BranchPointDist;                               // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMAIAction_PairedCorner.cornerAnimNames
// 0x0020
struct FcornerAnimNames
{
	class FName                                        leader[2];                                     // 0x0000 (0x0010) [0x0000000000000000]               
	class FName                                        follower[2];                                   // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct BmGame.RTunnelGrateBase.DirectionAccessInfo
// 0x0018
struct FDirectionAccessInfo
{
	int32_t                                            directionIndex;                                // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFacesWall : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasPerpendicularNeighbours : 1;               // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              orientationScore;                              // 0x0008 (0x0004) [0x0000000000000000]               
	struct FRotator                                    worldRot;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_Search_Sub_VantageResponse.GargLocSearchItem
// 0x001C
struct ARAEC_Search_Sub_VantageResponse_FGargLocSearchItem
{
	class URAttackPointSearch*                         APS;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     RefPoint;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	class ARHidePoint*                                 Garg;                                          // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_Search_Sub_VantageResponse.GargSearchItem
// 0x001C
struct FGargSearchItem
{
	class URNavigationHandle*                          Path;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     RefPoint;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	class ARHidePoint*                                 Garg;                                          // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_Search_Sub_GeneratorSmash.GenSearchItem
// 0x0010
struct FGenSearchItem
{
	class URNavigationHandle*                          Path;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class ARMagneticSurfaceSMBase*                     Generator;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAEC_Search_Sub_Ledge.LedgeSegment
// 0x0024
struct FLedgeSegment
{
	struct FVector                                     segStart;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     segEnd;                                        // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     segNormalAwayFromDrop;                         // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAimingBoneConfig.AimingBoneValues
// 0x0028
struct FAimingBoneValues
{
	struct FVector                                     GroupProportion;                               // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           EnableLimit : 1;                               // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FVector                                     PositiveLimit;                                 // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     NegativeLimit;                                 // 0x001C (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAlternateAnimationAndWeaponConfig.OverlayAnimNames
// 0x0010
struct FOverlayAnimNames
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        Identifier;                                    // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAlternateAnimationAndWeaponConfig.AdditiveOverlayAnimNames
// 0x0010
struct FAdditiveOverlayAnimNames
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SubtractAnim;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAlternateAnimationAndWeaponConfig.MovementAnimNames
// 0x002C
struct FMovementAnimNames
{
	class FName                                        StandAnim;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        WalkAnim;                                      // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        RunAnim;                                       // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        BackWalkAnim;                                  // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        BackRunAnim;                                   // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              LegAnimYawStr;                                 // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAnimNode_BlendBonesFromPoses.BlendBoneData
// 0x0048
struct FBlendBoneData
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            UnknownData00[0x8];                              // 0x0008 (0x0008) MISSED OFFSET
	struct FQuat                                       PoseRotation;                                  // 0x0010 (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     PoseTranslation;                               // 0x0020 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              PoseScale;                                     // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMaintainOrigChildRotation : 1;                // 0x0030 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            BoneIndex;                                     // 0x0034 (0x0004) [0x0000000000000400] (CPF_Transient)
	class TArray<int32_t>                              ChildBoneIndices;                              // 0x0038 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	uint8_t                                            MinStructAlignment[0x8];                         // 0x0048 (0x0008) ADDED PADDING
};

// ScriptStruct BmGame.RAnimNode_Cape.LookupChainEntry
// 0x0010
struct FLookupChainEntry
{
	class TArray<int32_t>                              LinkBoneIndex;                                 // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimNode_Cape.LookupCapePos
// 0x0008
struct FLookupCapePos
{
	int32_t                                            ChainIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            LinkIndex;                                     // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimNode_FilterList.FilterChildBones
// 0x0010
struct FFilterChildBones
{
	class TArray<int32_t>                              Indices;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_PhysicsOutput.ConstraintLimit
// 0x0040
struct FConstraintLimit
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     FirstNormal;                                   // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     FirstAxis;                                     // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     SecondNormal;                                  // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     SecondAxis;                                    // 0x002C (0x000C) [0x0000000000000000]               
	float                                              Swing1Limit;                                   // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              Swing2Limit;                                   // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PhysicsOutput.RagdollForce
// 0x0020
struct FRagdollForce
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	struct FVector                                     Translation;                                   // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     Rotation;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	int32_t                                            BodyIndex;                                     // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_PhysicsOutput.RagdollCachedChannelsAndCallbacks
// 0x000C
struct FRagdollCachedChannelsAndCallbacks
{
	uint32_t                                           Valid : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           NotifyRigidBodyCollision : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            CollisionChannel;                              // 0x0004 (0x0001) [0x0000000000000000]               
	struct FRBCollisionChannelContainer                CollideWithChannels;                           // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimNotify_MeetingPoint.MeetingPointTranslationComponents
// 0x0004
struct FMeetingPointTranslationComponents
{
	uint32_t                                           X : 1;                                         // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Y : 1;                                         // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Z : 1;                                         // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct BmGame.RAnimNotify_MeetingPoint.MeetingPointRotationComponents
// 0x0004
struct FMeetingPointRotationComponents
{
	uint32_t                                           Yaw : 1;                                       // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Pitch : 1;                                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Roll : 1;                                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct BmGame.RAnimNotify_PickupProp.AdvDropSettings
// 0x0014
struct FAdvDropSettings
{
	float                                              MinSpeed;                                      // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxSpeed;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxAngle;                                      // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinAngle;                                      // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bUseAdvancedSettings : 1;                      // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RAnimNotify_StrikeContact.NotifyStrikeInfo
// 0x0014
struct FNotifyStrikeInfo
{
	uint8_t                                            StrikeDir;                                     // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StrikeHand;                                    // 0x0001 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StrikeStrength;                                // 0x0002 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StrikeRange;                                   // 0x0003 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            PrevStrikeHand;                                // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StrikeDmgDir;                                  // 0x0005 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StrikeRailingDir;                              // 0x0006 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StrikeWallDir;                                 // 0x0007 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StrikeTurnMotion;                              // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            PrevStrikeTurnMotion;                          // 0x0009 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StrikeTargetType;                              // 0x000A (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StrikeStartHeight;                             // 0x000B (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StrikeWeaponGrabbed;                           // 0x000C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bForceRespectDirection : 1;                    // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceRespectHandedness : 1;                   // 0x0010 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bJokerfied : 1;                                // 0x0010 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct BmGame.RAnimNotify_StrikeContact.NotifyCapeInfo
// 0x0018
struct FNotifyCapeInfo
{
	float                                              CapeAnimDelay;                                 // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CapeStopAnimDelay;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        DestCapeStateName;                             // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        CapeAnimName;                                  // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAnimNotify_StrikeContact.NotifyStrikeFlags
// 0x0004
struct FNotifyStrikeFlags
{
	uint32_t                                           bDisableTargetCollision : 1;                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bCanBeFinalBlow : 1;                           // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bTravelsBeyondTarget : 1;                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bCanPerformWithNoTarget : 1;                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bCanPerformOnBlocker : 1;                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bPrimeHitReaction : 1;                         // 0x0000 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bHitsLow : 1;                                  // 0x0000 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bRemovesHelmet : 1;                            // 0x0000 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           bCanBeMirrored : 1;                            // 0x0000 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           bPreStrike : 1;                                // 0x0000 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           bOverrideMovementExit : 1;                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
};

// ScriptStruct BmGame.RAnimNotify_StrikeContact.NotifyDamageInfo
// 0x0039
struct FNotifyDamageInfo
{
	class FName                                        HitReactionAnimName;                           // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    HitReactionAnimSet;                            // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            DamageBone;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            DamageImpactBone;                              // 0x0011 (0x0001) [0x0000000000000000]               
	uint8_t                                            Strike_PlayerStrikingBone;                     // 0x0012 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            Strike_TargetImpactBone;                       // 0x0013 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              DamageCollisionRadius;                         // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DamageCollisionDuration;                       // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     DamageCollisionProjection;                     // 0x001C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     DamageDirection;                               // 0x0028 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              DamageForceMultiplier;                         // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            DamageARF;                                     // 0x0038 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0039 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RAnimNotify_StrikeContact.NotifyCameraInfo
// 0x0008
struct FNotifyCameraInfo
{
	uint8_t                                            StrikeCameraDirection;                         // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Dummy;                                         // 0x0004 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct BmGame.RAnimUtil_FaceFXOutput.BlinkState
// 0x000C
struct FBlinkState
{
	uint8_t                                            SequenceState;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              RegisterValue;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeRemaining;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrectionGrid.ResolvedAABB
// 0x0008
struct FResolvedAABB
{
	float                                              HalfWidth;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              HalfHeight;                                    // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrection.FloorCorrectionTransition
// 0x001C
struct FFloorCorrectionTransition
{
	float                                              RelativeZ;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0004 (0x000C) [0x0000000000000000]               
	float                                              NormalizedTime;                                // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            Input;                                         // 0x0014 (0x0001) [0x0000000000000000]               
	uint32_t                                           OnCeiling : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           CatwomanCrawlingHack : 1;                      // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrection.FloorCorrectionBoneIndices
// 0x001C
struct FFloorCorrectionBoneIndices
{
	int32_t                                            Pelvis;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            LeftThigh;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            LeftCalf;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            LeftFoot;                                      // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            RightThigh;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            RightCalf;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            RightFoot;                                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrection.StepUpState
// 0x0010
struct FStepUpState
{
	float                                              CorrectionVelocity;                            // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              FloorVelocity;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              PendingFloorChange;                            // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           NeedsSnap : 1;                                 // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           NeedsUpdate : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrection.FloorCorrectionResolvedConfig
// 0x0018
struct FFloorCorrectionResolvedConfig
{
	struct FFloorMovementCorrectionConfig              Movement;                                      // 0x0000 (0x0014) [0x0000000100000000] (CPF_Edit)    
	float                                              CeilingWeight;                                 // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrection.FloorCorrectionTempDisable
// 0x0008
struct FFloorCorrectionTempDisable
{
	uint32_t                                           Requested : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Weight;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrectionGrid.GridSample
// 0x0010
struct FGridSample
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Weight;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrectionGrid.GridSlope
// 0x0014
struct FGridSlope
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Weight;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Delta;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrectionGrid.GridVector
// 0x000C
struct FGridVector
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Z;                                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrectionGrid.GridParameters
// 0x0014
struct FGridParameters
{
	class ARPawnCharacter*                             Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            NumSamplesPerAxis;                             // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            NumSamples;                                    // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           UseExtentRaycasts : 1;                         // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrectionGrid.GridFeather
// 0x0014
struct FGridFeather
{
	float                                              OneOverWidthXY;                                // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              BeginUpZ;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OneOverWidthUpZ;                               // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              BeginDownZ;                                    // 0x000C (0x0004) [0x0000000000000000]               
	float                                              OneOverWidthDownZ;                             // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrectionGrid.GridConstants
// 0x005C
struct FGridConstants
{
	float                                              StepXY;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              StepZ;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OneOverStepXY;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OneOverStepZ;                                  // 0x000C (0x0004) [0x0000000000000000]               
	float                                              HalfSpanXY;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TraceUpZ;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              TraceDownZ;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	struct FGridFeather                                SampleFeather;                                 // 0x001C (0x0014) [0x0000000000000000]               
	struct FGridFeather                                SlopeFeather;                                  // 0x0030 (0x0014) [0x0000000000000000]               
	float                                              IgnoreXYSlopeHeight;                           // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              IgnoreDSlopeHeight;                            // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              MaxXYSlopeHeight;                              // 0x004C (0x0004) [0x0000000000000000]               
	float                                              MaxDSlopeHeight;                               // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              CeilingMultiplier;                             // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              WalkableFloorZ;                                // 0x0058 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_FloorCorrectionGrid.GridState
// 0x0050
struct FGridState
{
	class TArray<struct FGridSample>                   Samples;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FGridSlope>                    XSlopes;                                       // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FGridSlope>                    YSlopes;                                       // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FGridSlope>                    D1Slopes;                                      // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FGridSlope>                    D2Slopes;                                      // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RAnimUtil_ShimmyCorrection.ShimmyArm
// 0x0010
struct FShimmyArm
{
	int32_t                                            Clavicle;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            UpperArm;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Forearm;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Hand;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_ShimmyCorrection.ShimmyDebugArm
// 0x006C
struct FShimmyDebugArm
{
	struct FVector                                     OldUpperArmTranslation;                        // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     OldForearmTranslation;                         // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     OldHandTranslation;                            // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     NewUpperArmTranslation;                        // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     NewForearmTranslation;                         // 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     NewHandTranslation;                            // 0x003C (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetHandTranslation;                         // 0x0048 (0x000C) [0x0000000000000000]               
	struct FVector                                     ClampedTargetHandTranslation;                  // 0x0054 (0x000C) [0x0000000000000000]               
	struct FVector                                     DohertyMadness;                                // 0x0060 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RAnimUtil_ShimmyCorrection.ShimmyDebug
// 0x0158
struct FShimmyDebug
{
	uint32_t                                           Active : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OverextensionCompensationWidth;                // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x8];                              // 0x0008 (0x0008) MISSED OFFSET
	struct FMatrix                                     LocalToWorld;                                  // 0x0010 (0x0040) [0x0000000000000000]               
	struct FVector                                     LedgeLeftTranslation;                          // 0x0050 (0x000C) [0x0000000000000000]               
	struct FVector                                     LedgeRightTranslation;                         // 0x005C (0x000C) [0x0000000000000000]               
	struct FVector                                     OldRootTranslation;                            // 0x0068 (0x000C) [0x0000000000000000]               
	struct FVector                                     NewRootTranslation;                            // 0x0074 (0x000C) [0x0000000000000000]               
	struct FShimmyDebugArm                             Arms[2];                                       // 0x0080 (0x00D8) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x8];                         // 0x0158 (0x0008) ADDED PADDING
};

// ScriptStruct BmGame.RMultiTargetCamera.TargetActorContainer
// 0x001C
struct FTargetActorContainer
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TargetRadius;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     FixedTargetPosition;                           // 0x000C (0x000C) [0x0000000000000000]               
	uint32_t                                           bUseFixedTarget : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RBarkCharacterDef.DynamicBarkRoot
// 0x0010
struct FDynamicBarkRoot
{
	class FString                                      RootName;                                      // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBarkConvoAction.BCA_Output
// 0x0020
struct FBCA_Output
{
	class TArray<class URBarkConvoAction*>             Next;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Label;                                         // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBarkConvoData_FlagNode.FlagLineEntry
// 0x0018
struct FFlagLineEntry
{
	class UAkDialogueLineDynamic*                      AKDynLine;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkDialogueLine*                             AKSingleLine;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URBarkFlagBase*                              FlagBase;                                      // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBarkPillarLookup.FlagValAndFileName
// 0x0018
struct FFlagValAndFileName
{
	class FName                                        FlagVal;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Filename;                                      // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBarkPillarLookup.RuntimePillar
// 0x0014
struct FRuntimePillar
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	class TArray<struct FFlagValAndFileName>           ValList;                                       // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBarkPillarLookup.PillarBarkPair
// 0x0020
struct FPillarBarkPair
{
	class FString                                      BarkKeyword;                                   // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      BarkName;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBarkPillarLookup.PillarBarkInfo
// 0x0034
struct FPillarBarkInfo
{
	struct FPillarBarkPair                             BarkType;                                      // 0x0000 (0x0020) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FPillarBarkPair>               BarkValues;                                    // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Order;                                         // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBarkSet.MapProxyForSaving
// 0x0018
struct FMapProxyForSaving
{
	class FName                                        Key;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class URBarkConvo*>                   BarkList;                                      // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBatmobileSonar.ScannedVehicleMesh
// 0x001C
struct FScannedVehicleMesh
{
	class USkeletalMeshComponent*                      Mesh;                                          // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AActor*                                      Vehicle;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              TimeToShow;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TimeToHide;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MaterialPoolIndex;                             // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBatmobileWinch.WinchInvalidTarget
// 0x0015
struct FWinchInvalidTarget
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Reason;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	class AActor*                                      Blocker;                                       // 0x000C (0x0008) [0x0000000000000000]               
	uint8_t                                            EncounterType;                                 // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RBMBehaviour_MoveToBase.MoveToRandomAnimation
// 0x000C
struct FMoveToRandomAnimation
{
	class FName                                        AnimationName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bHasNoMovement : 1;                            // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RBMBehaviour_MoveToBase.MoveToStartledAnimationData
// 0x0018
struct FMoveToStartledAnimationData
{
	struct FMoveToRandomAnimation                      FrontStartle;                                  // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FMoveToRandomAnimation                      BackStartle;                                   // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBMBehaviour_MoveToBase.StartleOptions
// 0x0030
struct FStartleOptions
{
	float                                              TimeBetweenStartles;                           // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FMoveToStartledAnimationData                StartledAnimations;                            // 0x0004 (0x0018) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    StartledAnimSet;                               // 0x001C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        StateBeforeStartle;                            // 0x0024 (0x0008) [0x0000000000000000]               
	float                                              StartledTimer;                                 // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBM2Behaviour_IdleConfig.MoveToData
// 0x0044
struct FMoveToData
{
	struct FVector                                     MoveToPosition;                                // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     FaceDir;                                       // 0x000C (0x000C) [0x0000000000000000]               
	float                                              TooLongForTurn;                                // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     NonAlignedStartLocation;                       // 0x001C (0x000C) [0x0000000000000000]               
	struct FRotator                                    NonAlignedStartRotation;                       // 0x0028 (0x000C) [0x0000000000000000]               
	class URNavigationHandle*                          NavHandle;                                     // 0x0034 (0x0008) [0x0000000000000000]               
	uint8_t                                            Speed;                                         // 0x003C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            TransInInteruptSetting;                        // 0x003D (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bDisableBMMove : 1;                            // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasSlowedDown : 1;                            // 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bHasTurned : 1;                                // 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bUseMoveTo : 1;                                // 0x0040 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           NonAlignedStartLocationSet : 1;                // 0x0040 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bFinishMoveToBeforeIdle : 1;                   // 0x0040 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bTransInWasInterupted : 1;                     // 0x0040 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bInteruptedCollisionNeedsReset : 1;            // 0x0040 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bTrackAlignmentPosition : 1;                   // 0x0040 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           bRestartIdleOnMatineeEnd : 1;                  // 0x0040 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           bUseAccurateDecelerationCalculation : 1;       // 0x0040 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
};

// ScriptStruct BmGame.RBM2Behaviour_IdleConfig.ProximityAndSight
// 0x0034
struct FProximityAndSight
{
	float                                              BatmanProximityDistance;                       // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              BatmanProximity2DDistance;                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NPCSeenDistance;                               // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              BatmanSeenDistance;                            // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeBetweenNotSeenAndSeenForOutput;            // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeSinceLastNPCSeen;                          // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              TimeSinceBMClose;                              // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              TimeSinceBMClose2D;                            // 0x001C (0x0004) [0x0000000000000000]               
	float                                              TimeSinceBMSeen;                               // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              CheckTimer;                                    // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            ProximityPawnTimesliceIndex;                   // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSeenBatmanBothWayCheck : 1;                   // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bDontCheckNPCs : 1;                            // 0x002C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              StartleDist;                                   // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBM2Behaviour_IdleConfig.NotifyIdentifier
// 0x0020
struct FNotifyIdentifier
{
	class FName                                        NotifyName;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            OutputLink;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	struct FGuid                                       Gid;                                           // 0x000C (0x0010) [0x0000000000000000]               
	int32_t                                            IsUsed;                                        // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RLootPointBase.LootingAnimInfo
// 0x0020
struct FLootingAnimInfo
{
	class UAnimSet*                                    lootingAnimSet;                                // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        inAnimName;                                    // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        idleAnimName;                                  // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        outAnimName;                                   // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBMAIAction_LookInGrate.sCachedAnimData
// 0x0030
struct FsCachedAnimData
{
	class FName                                        idleAnimName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        outAnimName;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     refLoc;                                        // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RefRot;                                        // 0x001C (0x000C) [0x0000000000000000]               
	class FName                                        slaveOutAnimName;                              // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RTransitionFromRunConfig.ApproachOption
// 0x0018
struct FApproachOption
{
	class FName                                        AnimationName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     ApproachRef;                                   // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              PlayAnimYaw;                                   // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMAIAction_OnGarg.VantagePointInfo
// 0x0008
struct FVantagePointInfo
{
	class ARHidePoint*                                 HidePoint;                                     // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RJokerIncidentalPoint.ReactionAnimations
// 0x000C
struct FReactionAnimations
{
	uint8_t                                            CombatQuality;                                 // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimationName;                                 // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBMAIManager.PredatorDifficultyLevelDefine
// 0x0028
struct FPredatorDifficultyLevelDefine
{
	float                                              AlwaysHitRange;                                // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              InstantHitIfNotRunningRange;                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeToAcquire;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RifleDamagePerShot;                            // 0x000C (0x0004) [0x0000000000000000]               
	float                                              ShotgunDamagePerShot;                          // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              SniperDamagePerShot;                           // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              InaccuracyRange;                               // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              MaxInaccuracyRange;                            // 0x001C (0x0004) [0x0000000000000000]               
	float                                              HitRatio;                                      // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              GrenadeDamage;                                 // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMAIManager.PawnSpawnerTimeout
// 0x0014
struct FPawnSpawnerTimeout
{
	class FString                                      PawnSpawnerName;                               // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              CanRespawnTime;                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMAIManager.NavMeshObstacleOperation
// 0x001C
struct FNavMeshObstacleOperation
{
	uint32_t                                           bAddObstacle : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UInterface_NavMeshPathObstacle*              PathObstacle_Object;                           // 0x0004 (0x0010) [0x0000000000000000] 
	class UInterface_NavMeshPathObstacle*              PathObstacle_Interface;                        // 0x0004 (0x0010) [0x0000000000000000]               
	class FName                                        ObstacleName;                                  // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMAIManager.StoredNavMeshObstacle
// 0x0018
struct FStoredNavMeshObstacle
{
	class AActor*                                      ObstacleActor;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      ObstacleName;                                  // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBMAIManager.StasisPawnDestroyInfo
// 0x0014
struct FStasisPawnDestroyInfo
{
	class ARBMPawnAI*                                  PawnAI;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              MaxTimeUntilDestroy;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              TimeUntilDestroy;                              // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bBeenSeen : 1;                                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RBMAIManager.StasisPawnTeleportInfo
// 0x000C
struct FStasisPawnTeleportInfo
{
	class ARBMPawnAI*                                  PawnAI;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TimeUntilTeleport;                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMBarkCoordinator.CoverageTestBucket
// 0x0018
struct FCoverageTestBucket
{
	class URBarkFlagBase*                              Query;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class URBarkConvo*>                   LineList;                                      // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBMBehaviour_AvoidanceRunAway.AvoidActor
// 0x0014
struct FAvoidActor
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              AvoidStrength;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              AvoidRadius;                                   // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bAlwaysAvoid : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RBMBehaviour_AvoidanceRunAway.StoredLink
// 0x000C
struct FStoredLink
{
	int32_t                                            StartID;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            EndID;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            RoadLinkID;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMBehaviour_AvoidanceRunAway.InvalidLink
// 0x000C
struct FInvalidLink
{
	int32_t                                            StartVert;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            EndVert;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            PathFails;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMBehaviour_AvoidanceRunAway.ValidLink
// 0x0018
struct FValidLink
{
	struct FVector                                     StartPos;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndPos;                                        // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RHelicopterBase.HelicopterDifficultyParameters
// 0x0008
struct FHelicopterDifficultyParameters
{
	float                                              ChainGunDamage;                                // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              RocketDamage;                                  // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RHelicopterBase.HelicopterPassengerInfo
// 0x002C
struct FHelicopterPassengerInfo
{
	class FName                                        BaseSocket;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        Socket;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        IdleAnim;                                      // 0x0010 (0x0008) [0x0000000000000000]               
	class FName                                        IntoTauntAnim;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	class ARBMPawnAI*                                  Pawn;                                          // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            TauntPoseID;                                   // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RHelicopterBase.HelicopterAbseilSlotInfo
// 0x0010
struct FHelicopterAbseilSlotInfo
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class ARBMPawnAI*                                  Pawn;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPopulationManager.WanderingGroup
// 0x0054
struct FWanderingGroup
{
	class TArray<class ARPawnVillain*>                 SpawnedPawns;                                  // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     CurrentWanderDestination;                      // 0x0010 (0x000C) [0x0000000000000000]               
	uint32_t                                           bHasPickedDestination : 1;                     // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bActive : 1;                                   // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFleeing : 1;                                  // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCombating : 1;                                // 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            PickedDestinationCounter;                      // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsSpawning : 1;                               // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            NumWanderers;                                  // 0x0028 (0x0004) [0x0000000000000000]               
	struct FVector                                     SpawnPoint;                                    // 0x002C (0x000C) [0x0000000000000000]               
	struct FRotator                                    RoadDirection;                                 // 0x0038 (0x000C) [0x0000000000000000]               
	int32_t                                            DistrictIndex;                                 // 0x0044 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsMilitia : 1;                                // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SpawnTime;                                     // 0x004C (0x0004) [0x0000000000000000]               
	float                                              LastBatarangTime;                              // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMBehaviour_CombatNinja.TeleportLocationScore
// 0x000C
struct FTeleportLocationScore
{
	float                                              dotProd;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              distScore;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           gotLOS : 1;                                    // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RBMBehaviour_FriendlyPatrolNavMesh.ProximityAndSightPatrol
// 0x0018
struct FProximityAndSightPatrol
{
	uint32_t                                           bPauseIfBatmanNear : 1;                        // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              BatmanCloseDistance;                           // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NPCLookAtDistance;                             // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              BatmanLookAtDistance;                          // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      LookingAtSomeone;                              // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMBehaviour_JokerEndOfCombat.JokerTauntAnims
// 0x0024
struct FJokerTauntAnims
{
	class FName                                        Idle;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class FName>                          Overlays;                                      // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bRequiresThug : 1;                             // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        ThugAnim;                                      // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMBehaviour_Wanderers.WanderOverlays
// 0x0010
struct FWanderOverlays
{
	class TArray<class FName>                          Overlays;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBMBehaviour_Wanderers.WeaponAnimOverrides
// 0x001C
struct FWeaponAnimOverrides
{
	class FName                                        WeaponType;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            NumPatrolWalks;                                // 0x0008 (0x0004) [0x0000000000000000]               
	class UAnimSet*                                    PatrolAnimset;                                 // 0x000C (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    PushOffAnimSet;                                // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMBehaviourAutoStringUp.ConnectToDatas
// 0x0010
struct FConnectToDatas
{
	class TArray<uint8_t>                              SupportConnectionBones;                        // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RBMBehaviourAutoStringUp.StringUpBoneConfig
// 0x0030
struct FStringUpBoneConfig
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     BoneOffset;                                    // 0x0008 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              ConnectionLength;                              // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     RopeEndOffset;                                 // 0x0018 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bEnableJointSpring : 1;                        // 0x0024 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              SpringStrength;                                // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SpringDamper;                                  // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RRopeComponent.RopeExtraAttachConnection
// 0x0038
struct FRopeExtraAttachConnection
{
	class UPrimitiveComponent*                         RopeExtraAttachComponent;                      // 0x0000 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        RopeExtraAttachBoneName;                       // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     RopeExtraAttachBonePos;                        // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              RopeExtraAttachDistance;                       // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     RopeExtraAttachRopeEndOffset;                  // 0x0020 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bEnableJointSpring : 1;                        // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              SpringStrength;                                // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SpringDamper;                                  // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RBMPathNode_VariablePositionTraverse.JumperAssignment
// 0x0028
struct FJumperAssignment
{
	float                                              Start;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              End;                                           // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     RefPoint;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	class ARPawn*                                      Jumper;                                        // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector                                     LandLoc;                                       // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RBMPawnSpawnerController.PawnSpawnerDesc
// 0x0050
struct FPawnSpawnerDesc
{
	class URCharacterDefine*                           CharacterDefine;                               // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      CharacterType;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	class UClass*                                      WeaponType;                                    // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      PawnType;                                      // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FString                                      PawnName;                                      // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class URCharacterDefine*>             OptionalCharacterDefines;                      // 0x0030 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UClass*>                        OptionalCharacterTypes;                        // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGunShotManager.GunInfo
// 0x000C
struct FGunInfo
{
	class UAkSwitchName*                               GunSwitch;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              RateOfFire;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGunShotManager.GunShotEntry
// 0x00D8
struct FGunShotEntry
{
	struct FDouble                                     ImpactTime;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FDouble                                     RicochetTerminateTime;                         // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     CurrentBulletPosition;                         // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     CurrentRicochetPosition;                       // 0x001C (0x000C) [0x0000000000000000]               
	struct FRotator                                    BulletTrajectory;                              // 0x0028 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RicochetTrajectory;                            // 0x0034 (0x000C) [0x0000000000000000]               
	class URPhysicalMaterialProperty*                  ImpactMaterial;                                // 0x0040 (0x0008) [0x0000000000000000]               
	struct FImpactInfo                                 Impact;                                        // 0x0048 (0x0060) [0x0000000000004000] (CPF_Component)
	float                                              ClosestPoint;                                  // 0x00A8 (0x0004) [0x0000000000000000]               
	float                                              BulletSpeed;                                   // 0x00AC (0x0004) [0x0000000000000000]               
	float                                              RicochetSpeed;                                 // 0x00B0 (0x0004) [0x0000000000000000]               
	struct FQWord                                      BulletAudioSource;                             // 0x00B4 (0x0008) [0x0000000000000000]               
	struct FQWord                                      RicochetAudioSource;                           // 0x00BC (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    BulletByAudioEvent;                            // 0x00C4 (0x0008) [0x0000000000000000]               
	uint32_t                                           SoundStarted : 1;                              // 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           ImpactDone : 1;                                // 0x00CC (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            FireType;                                      // 0x00D0 (0x0001) [0x0000000000000000]               
	uint32_t                                           Used : 1;                                      // 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RGunShotManager.RocketEntry
// 0x0028
struct FRocketEntry
{
	class AActor*                                      Tracking;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     OldLocation;                                   // 0x0008 (0x000C) [0x0000000000000000]               
	class UAkEvent*                                    Event;                                         // 0x0014 (0x0008) [0x0000000000000000]               
	struct FDouble                                     TriggerTime;                                   // 0x001C (0x0008) [0x0000000000000000]               
	uint32_t                                           Used : 1;                                      // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RGunShotManager.GunShotFiringActor
// 0x0060
struct FGunShotFiringActor
{
	class AActor*                                      FiringActor;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	struct FDouble                                     LastFireTime;                                  // 0x000C (0x0008) [0x0000000000000000]               
	struct FDouble                                     DecayTime;                                     // 0x0014 (0x0008) [0x0000000000000000]               
	float                                              ForceTraceTime;                                // 0x001C (0x0004) [0x0000000000000000]               
	class UParticleSystemComponent*                    UseTraceFX;                                    // 0x0020 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           CurrentTraceFX : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           ActuallyFiring : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           AudioActuallyPlayingForFire : 1;               // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	class UAkEvent*                                    LoopingAudioForFire;                           // 0x002C (0x0008) [0x0000000000000000]               
	uint8_t                                            GunType;                                       // 0x0034 (0x0001) [0x0000000000000000]               
	int32_t                                            GunIndex;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            Rays_TimedOut;                                 // 0x003C (0x0004) [0x0000000000000000]               
	struct FArray_Mirror                               Rays;                                          // 0x0040 (0x0010) [0x0000000000000200] (CPF_Native)  
	struct FArray_Mirror                               Reflections;                                   // 0x0050 (0x0010) [0x0000000000000200] (CPF_Native)  
};

// ScriptStruct BmGame.RGunShotManager.TrackedVehicle
// 0x000C
struct FTrackedVehicle
{
	class AActor*                                      Vehicle;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGunShotManager.Reflection
// 0x0020
struct FReflection
{
	class URAkAudible*                                 ReflectAudible;                                // 0x0000 (0x0008) [0x0000000000000000]               
	struct FDouble                                     TimeToFire;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	struct FDouble                                     TimeToStop;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              SpeedOfSoundDelay;                             // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           Used : 1;                                      // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RGunShotManager.GunFireRayJob
// 0x0004
struct FGunFireRayJob
{
	int32_t                                            warning_struct_must_contain_at_least_4_bytes;  // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCameraTransitionPathNode.LinkedCameraPathNode
// 0x0018
struct FLinkedCameraPathNode
{
	class AActor*                                      Node;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     Direction;                                     // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCapeStateBoneConfig.CapeSkinningBoneData
// 0x000D
struct FCapeSkinningBoneData
{
	class FName                                        SkinningBoneName;                              // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              SkinningBoneWeight;                            // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            SkinningType;                                  // 0x000C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x000D (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RCapeStateBoneConfig.CapeStateDataIndicator
// 0x0060
struct FCapeStateDataIndicator
{
	int32_t                                            ChainIndex;                                    // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            BoneIndex;                                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FCapeSkinningBoneData>         ParentSkinningBoneDatas;                       // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            StateEffectType;                               // 0x0018 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            BoneState;                                     // 0x0019 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           IsCollide : 1;                                 // 0x001C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceDisableCollisionWithWorld : 1;           // 0x001C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           IsForceRefPose : 1;                            // 0x001C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           IsIgnoreWindEffects : 1;                       // 0x001C (0x0004) [0x0000000000080000] [0x00000008] (CPF_Deprecated)
	float                                              AnimDriveJointLinearComponentStrengthOverride; // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AnimDriveJointAngularComponentStrengthOverride;// 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bPushUsingParentComponentBone : 1;             // 0x0028 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class FName                                        PushBoneName;                                  // 0x002C (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     PushTowardsDirection;                          // 0x0034 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              PushAngle;                                     // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bPushUsingParentComponentBone2 : 1;            // 0x0044 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class FName                                        PushBoneName2;                                 // 0x0048 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     PushTowardsDirection2;                         // 0x0050 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              PushAngle2;                                    // 0x005C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RCapeStateController.CapeBoneData
// 0x0050
struct FCapeBoneData
{
	uint8_t                                            BoneState;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            BoneVisibility;                                // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0xE];                              // 0x0002 (0x000E) MISSED OFFSET
	struct FMatrix                                     StoredPose;                                    // 0x0010 (0x0040) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCapeStateController.CapeShapeData
// 0x0018
struct FCapeShapeData
{
	class URCapeCollisionShapeConfig*                  CollisionShapeConfig;                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    PhysShapeMesh;                                 // 0x0008 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PhysShapeActor;                                // 0x0010 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct BmGame.RCapeStateController.CapeStateData
// 0x0028
struct FCapeStateData
{
	class URCapeStateConfig*                           CapeStateConfig;                               // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            CachedBoneConfigFindIndex;                     // 0x0008 (0x0004) [0x0000000000000000]               
	class FName                                        AutoForwardToStateName;                        // 0x000C (0x0008) [0x0000000000000000]               
	float                                              AutoForwardTimer;                              // 0x0014 (0x0004) [0x0000000000000000]               
	class TArray<struct FCapeShapeData>                CapeShapeDatas;                                // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCapeStateController.CapeBoneFakeSkinningData
// 0x0009
struct FCapeBoneFakeSkinningData
{
	int32_t                                            BoneIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              BoneWeight;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            SkinningType;                                  // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RCapeStateController.CapeBoneFakeSkinningDatas
// 0x0010
struct FCapeBoneFakeSkinningDatas
{
	class TArray<struct FCapeBoneFakeSkinningData>     SkinningDatas;                                 // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCapeStateController.CapeStateBoneData
// 0x0048
struct FCapeStateBoneData
{
	struct FCapeBoneFakeSkinningDatas                  FakeSkinBoneDatas;                             // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              AnimDriveJointLinearComponentStrengthOverride; // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AnimDriveJointAngularComponentStrengthOverride;// 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            BoneState;                                     // 0x0018 (0x0001) [0x0000000000000000]               
	uint32_t                                           BoneCollisionState : 1;                        // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           BoneWorldCollisionState : 1;                   // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           BoneForceRefState : 1;                         // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPushUsingParentComponentBone : 1;             // 0x001C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bPushUsingParentComponentBone2 : 1;            // 0x001C (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	int32_t                                            PushBoneIndex;                                 // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            PushBoneIndex2;                                // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     PushTowardsDirection;                          // 0x0028 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     PushTowardsDirection2;                         // 0x0034 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              PushAngle;                                     // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PushAngle2;                                    // 0x0044 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RCapeStateController.CapeBoneStateData
// 0x0018
struct FCapeBoneStateData
{
	class URCapeStateBoneConfig*                       BoneConfig;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FCapeStateBoneData>            BoneStates;                                    // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCapeStateController.SkinningLocalToWorlds
// 0x00A0
struct FSkinningLocalToWorlds
{
	struct FMatrix                                     ParentAttachPointLocalToWorld;                 // 0x0000 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     ParentAttachPointRefLocalToWorld;              // 0x0040 (0x0040) [0x0000000000000000]               
	class TArray<struct FMatrix>                       SkinningBoneLocalToWorlds;                     // 0x0080 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<struct FMatrix>                       SkinningBoneRefLocalToWorlds;                  // 0x0090 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCapeComponent.CapeWindAudioProperties
// 0x0008
struct FCapeWindAudioProperties
{
	float                                              WindStrength;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              WindBlusteryness;                              // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCapeConfig.CapeFloatArrayType
// 0x0010
struct FCapeFloatArrayType
{
	class TArray<float>                                FloatArray;                                    // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCapeConfig.CapeIntArrayType
// 0x0010
struct FCapeIntArrayType
{
	class TArray<int32_t>                              IntArray;                                      // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCapeConfig.CapeSupportConnectorIndexPair
// 0x0008
struct FCapeSupportConnectorIndexPair
{
	int32_t                                            ConnectionIndex1;                              // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ConnectionIndex2;                              // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RCapeConfig.MinLengthSpringConfig
// 0x0014
struct FMinLengthSpringConfig
{
	int32_t                                            Chain1Index;                                   // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Link1Index;                                    // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Chain2Index;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Link2Index;                                    // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinLength;                                     // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RCapeConfig.CapeBoolArrayType
// 0x0010
struct FCapeBoolArrayType
{
	class TArray<uint32_t>                             BoolArray;                                     // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCapeStateConfig.CapeMaterialPropertySetting
// 0x0010
struct FCapeMaterialPropertySetting
{
	class FName                                        MaterialConstantName;                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              MaterialConstantValue;                         // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaterialConstantMaxChangePerSecond;            // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RCharacter.BarkVoiceDef
// 0x0010
struct FBarkVoiceDef
{
	class TArray<class FString>                        BarkSetList;                                   // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCharacter.CharacterCustomConstraintConfig
// 0x002C
struct FCharacterCustomConstraintConfig
{
	class FName                                        BoneName1;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     BonePos1;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	class FName                                        BoneName2;                                     // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector                                     BonePos2;                                      // 0x001C (0x000C) [0x0000000000000000]               
	float                                              Length;                                        // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCharacterScaleReferenceBase.SkeletalMeshSettings
// 0x0018
struct FSkeletalMeshSettings
{
	class USkeletalMeshComponent*                      Component;                                     // 0x0000 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FString                                      AssetName;                                     // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCharacterSelect.CharacterSelectPlayer
// 0x0058
struct FCharacterSelectPlayer
{
	class USkeletalMeshComponent*                      Mesh;                                          // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class USkeletalMeshComponent*>        ExtraMeshes;                                   // 0x0008 (0x0010) [0x0000004000014004] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class USkeletalMeshComponent*>        AttachMeshes;                                  // 0x0018 (0x0010) [0x0000004000014004] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class URCapeSkeletalMeshComponent*                 CapeMesh;                                      // 0x0028 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URCapeComponent*                             CapeComponent;                                 // 0x0030 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URCapeRenderingComponent*                    CapeRenderingComponent;                        // 0x0038 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            CurrentConfigIndex;                            // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            PendingConfigIndex;                            // 0x0044 (0x0004) [0x0000000000000000]               
	uint32_t                                           CachedReady : 1;                               // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentTimeTillRandomAnimation;                // 0x004C (0x0004) [0x0000000000000000]               
	class FName                                        BlendToIdleFunctionName;                       // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSearchTreeFinder.VisitedEdge
// 0x0078
struct FVisitedEdge
{
	class APylon*                                      Pylon;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    EdgeID;                                        // 0x0008 (0x0008) [0x0000000000000200] (CPF_Native)  
	struct FVector                                     EdgeCenter;                                    // 0x0010 (0x000C) [0x0000000000000000]               
	struct FPointer                                    NextPolyID;                                    // 0x001C (0x0008) [0x0000000000000200] (CPF_Native)  
	struct FPointer                                    PrevPolyID;                                    // 0x0024 (0x0008) [0x0000000000000200] (CPF_Native)  
	struct FPointer                                    NextPolyParentID;                              // 0x002C (0x0008) [0x0000000000000200] (CPF_Native)  
	struct FPointer                                    PrevPolyParentID;                              // 0x0034 (0x0008) [0x0000000000000200] (CPF_Native)  
	class TArray<int32_t>                              VisibleVerts;                                  // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bCanSearchBeyond : 1;                          // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PathScore;                                     // 0x0050 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              ChildEdges;                                    // 0x0054 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              ParentEdges;                                   // 0x0064 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bChecked : 1;                                  // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsBackwards : 1;                              // 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDisappearsFromSightOfRoot : 1;                // 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BmGame.RCheatManager.BatmobileHandlingTweak
// 0x001C
struct FBatmobileHandlingTweak
{
	float                                              TireFrictionMod;                               // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LatStiffYMod;                                  // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FInterpCurveFloat                           StandardSteeringSpeedCurve;                    // 0x0008 (0x0014) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPersistentDebugData.PerCharacterTypeAnimDebug
// 0x0030
struct FPerCharacterTypeAnimDebug
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Poses : 1;                                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Poses_Detailed : 1;                            // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           Poses_DirectionalWeights : 1;                  // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           Poses_AimAt : 1;                               // 0x0000 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           PoseLog : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           PoseLog_Detailed : 1;                          // 0x0000 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           PoseLog_Callstack : 1;                         // 0x0000 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           PoseLog_SetRelativeTarget : 1;                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           ActorLocation : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           ActorLocation_Collision : 1;                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           ActorLocation_Detailed : 1;                    // 0x0000 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           TargetLines : 1;                               // 0x0000 (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           RelativeTransitions : 1;                       // 0x0000 (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           Notifies : 1;                                  // 0x0000 (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           Notifies_Log : 1;                              // 0x0000 (0x0004) [0x0000000100000000] [0x00008000] (CPF_Edit)
	uint32_t                                           Notifies_Anim : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00010000] (CPF_Edit)
	uint32_t                                           Notifies_SoundFilter : 1;                      // 0x0000 (0x0004) [0x0000000100000000] [0x00020000] (CPF_Edit)
	uint32_t                                           Collision : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00040000] (CPF_Edit)
	uint32_t                                           Ragdoll : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00080000] (CPF_Edit)
	uint32_t                                           Ragdoll_Details : 1;                           // 0x0000 (0x0004) [0x0000000100000000] [0x00100000] (CPF_Edit)
	uint32_t                                           Ragdoll_ForceAlwaysActive : 1;                 // 0x0000 (0x0004) [0x0000000100000000] [0x00200000] (CPF_Edit)
	uint32_t                                           Ragdoll_PhysDetails : 1;                       // 0x0000 (0x0004) [0x0000000100000000] [0x00400000] (CPF_Edit)
	uint32_t                                           MoveTo : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x00800000] (CPF_Edit)
	uint32_t                                           MoveTo_Anims : 1;                              // 0x0000 (0x0004) [0x0000000100000000] [0x01000000] (CPF_Edit)
	uint32_t                                           MoveTo_Detailed : 1;                           // 0x0000 (0x0004) [0x0000000100000000] [0x02000000] (CPF_Edit)
	uint32_t                                           MoveTo_DisableBanking : 1;                     // 0x0000 (0x0004) [0x0000000100000000] [0x04000000] (CPF_Edit)
	uint32_t                                           FaceAt : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x08000000] (CPF_Edit)
	uint32_t                                           AimAt : 1;                                     // 0x0000 (0x0004) [0x0000000100000000] [0x10000000] (CPF_Edit)
	uint32_t                                           LookAt : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x20000000] (CPF_Edit)
	uint32_t                                           Trails : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x40000000] (CPF_Edit)
	uint32_t                                           Trails_MovementType : 1;                       // 0x0000 (0x0004) [0x0000000100000000] [0x80000000] (CPF_Edit)
	uint32_t                                           Trails_PhysicsType : 1;                        // 0x0004 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Trails_Crumbs : 1;                             // 0x0004 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Trails_VelocityRainbow : 1;                    // 0x0004 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           Trails_Axis : 1;                               // 0x0004 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           Trails_CollisionBox : 1;                       // 0x0004 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           AnimBlend : 1;                                 // 0x0004 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           AnimBlend_Input : 1;                           // 0x0004 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           AnimBlend_Intermediate : 1;                    // 0x0004 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           AnimBlend_Motion : 1;                          // 0x0004 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           AnimBlend_Aiming : 1;                          // 0x0004 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           AnimBlend_Disable : 1;                         // 0x0004 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           AnimBlend_Disable_Aiming : 1;                  // 0x0004 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           AnimBlend_Disable_Additive : 1;                // 0x0004 (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           AnimBlend_Disable_AdditiveTransitionBlend : 1; // 0x0004 (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           AnimNames : 1;                                 // 0x0004 (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           AnimNamesPlus : 1;                             // 0x0004 (0x0004) [0x0000000100000000] [0x00008000] (CPF_Edit)
	uint32_t                                           MeshNames : 1;                                 // 0x0004 (0x0004) [0x0000000100000000] [0x00010000] (CPF_Edit)
	uint32_t                                           MeshLOD : 1;                                   // 0x0004 (0x0004) [0x0000000100000000] [0x00020000] (CPF_Edit)
	uint32_t                                           MeshLOD_Detailed : 1;                          // 0x0004 (0x0004) [0x0000000100000000] [0x00040000] (CPF_Edit)
	uint32_t                                           FaceFX : 1;                                    // 0x0004 (0x0004) [0x0000000100000000] [0x00080000] (CPF_Edit)
	uint32_t                                           FaceFX_Asset : 1;                              // 0x0004 (0x0004) [0x0000000100000000] [0x00100000] (CPF_Edit)
	uint32_t                                           FaceFX_Lod : 1;                                // 0x0004 (0x0004) [0x0000000100000000] [0x00200000] (CPF_Edit)
	uint32_t                                           FaceFX_Blinking : 1;                           // 0x0004 (0x0004) [0x0000000100000000] [0x00400000] (CPF_Edit)
	uint32_t                                           Overlays : 1;                                  // 0x0004 (0x0004) [0x0000000100000000] [0x00800000] (CPF_Edit)
	uint32_t                                           RandomOverlays : 1;                            // 0x0004 (0x0004) [0x0000000100000000] [0x01000000] (CPF_Edit)
	uint32_t                                           RandomOverlays_ForceOneSecondCountdown : 1;    // 0x0004 (0x0004) [0x0000000100000000] [0x02000000] (CPF_Edit)
	uint32_t                                           RandomOverlays_ForceAnim : 1;                  // 0x0004 (0x0004) [0x0000000100000000] [0x04000000] (CPF_Edit)
	uint32_t                                           RandomOverlays_ForceAnim_Additive : 1;         // 0x0004 (0x0004) [0x0000000100000000] [0x08000000] (CPF_Edit)
	int32_t                                            RandomOverlays_ForceAnim_Index;                // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           Scale : 1;                                     // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Unconscious : 1;                               // 0x000C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           HandIK : 1;                                    // 0x000C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           HandIK_Details : 1;                            // 0x000C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           HandIK_ForceDisable : 1;                       // 0x000C (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           FloorCorrection : 1;                           // 0x000C (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           FloorCorrection_Details : 1;                   // 0x000C (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           FloorCorrection_Render : 1;                    // 0x000C (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           FloorCorrection_RenderGrid : 1;                // 0x000C (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           FloorCorrection_OverrideConfig : 1;            // 0x000C (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           FloorCorrection_ForceDisableApply : 1;         // 0x000C (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           FloorCorrection_ForceDisableApplyNormal : 1;   // 0x000C (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           FloorCorrection_ForceDisableMaxFootZ : 1;      // 0x000C (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           FloorCorrection_ForceDisableOverExtensionClamp : 1;// 0x000C (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           FloorCorrection_UseComplexCollision : 1;       // 0x000C (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	struct FFloorMovementCorrectionConfig              FloorCorrection_OverrideConfig_Config;         // 0x0010 (0x0014) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           ShimmyCorrection : 1;                          // 0x0024 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           ShimmyCorrection_Disable : 1;                  // 0x0024 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           ShimmyCorrection_OverrideOverextensionCompensation : 1;// 0x0024 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	float                                              ShimmyCorrection_OverrideOverextensionCompensation_Width;// 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           ShimmyCorrection_Render : 1;                   // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           AutomaticTransitions : 1;                      // 0x002C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           AutomaticTransitions_Details : 1;              // 0x002C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           AutomaticTransitions_DisableAnimated : 1;      // 0x002C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           Dump : 1;                                      // 0x002C (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           OnlyNearby : 1;                                // 0x002C (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
};

// ScriptStruct BmGame.RCinematicActor.ProxyAttachment
// 0x0020
struct FProxyAttachment
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     RelativeLocation;                              // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RelativeRotation;                              // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCinematicCharacter.CinematicCharacterMeshComponentChange
// 0x0004
struct FCinematicCharacterMeshComponentChange
{
	uint32_t                                           Mesh : 1;                                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RCombatMove_2DVillainHighLowAttack.MoveSequence
// 0x0030
struct FMoveSequence
{
	class TArray<class FName>                          VillainSuccess;                                // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          PlayerSuccess;                                 // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              AttackBone;                                    // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCombatMove_BatmanAerial.AerialTargetInfo
// 0x003C
struct FAerialTargetInfo
{
	class ARPawnVillain*                               Pawn;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class URBMBehaviour_CombatMoveControlled*          Behaviour;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCheckAnim : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FTransitionId                               AnimId;                                        // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBeenInTransition : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class UAnimSet*                                    BatmanAttackAnimset;                           // 0x001C (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    BatmanStaggerAnimset;                          // 0x0024 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    TargetAttackAnimset;                           // 0x002C (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    TargetStaggerAnimset;                          // 0x0034 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCombatMove_BatmanGroupFloorTakedown.DodgerInfo
// 0x000C
struct FDodgerInfo
{
	class ARPawnVillain*                               Pawn;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FTransitionId                               AnimId;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCombatMove_RiddlerMechRevive.CasualtyInfo
// 0x000C
struct FCasualtyInfo
{
	class ARPawnVillain*                               Robot;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bRevived : 1;                                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RCombatMove_VillainClash.ClashInfo
// 0x0004
struct FClashInfo
{
	int32_t                                            NumBeatdownVariation;                          // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RCombatMove_VillainSimultaneousAttack.IndexDistArray
// 0x0020
struct FIndexDistArray
{
	class TArray<int32_t>                              IndexArray;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                DistArray;                                     // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RCommandBeaconLightsBase.CommandBeaconMaterialSet
// 0x0020
struct FCommandBeaconMaterialSet
{
	class UMaterialInterface*                          Materials[4];                                  // 0x0000 (0x0020) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RCwGrappleGunBase.ClimbLedges
// 0x001C
struct FClimbLedges
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x000C (0x000C) [0x0000000000000000]               
	uint32_t                                           bDangleLedge : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RDynamicMenu.ShowEntry
// 0x0024
struct FShowEntry
{
	uint32_t                                           Value : 1;                                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class FString                                      Label;                                         // 0x0004 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Command;                                       // 0x0014 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RDynamicMenu.DebugPageInfo
// 0x0014
struct FDebugPageInfo
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bUseNumberShortcut : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RPersistentDebugData.VehicleAnimDebug
// 0x0004
struct FVehicleAnimDebug
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Log : 1;                                       // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Log_Callstack : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct BmGame.RPersistentDebugData.CinematicAnimDebug
// 0x0004
struct FCinematicAnimDebug
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Log : 1;                                       // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Log_Callstack : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct BmGame.RPersistentDebugData.MostWantedDebugMenuData
// 0x0014
struct FMostWantedDebugMenuData
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class TArray<class FString>                        Flags;                                         // 0x0004 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPersistentDebugData.BackscreenDebugData
// 0x0058
struct FBackscreenDebugData
{
	uint32_t                                           bPointCloud : 1;                               // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              TweenInRate;                                   // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TweenOutRate;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_XMin;                                      // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_XMax;                                      // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_YMin;                                      // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_YMax;                                      // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_DefaultHeight;                             // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_DefaultElevation;                          // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_DefaultDistance;                           // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_Elevation_Min;                             // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_Elevation_Max;                             // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_Distance_Min;                              // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_Distance_Max;                              // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_Velocity;                                  // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_DistanceScalar;                            // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Map_NearRange;                                 // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Map_MidRange;                                  // 0x0044 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_IconMinVal;                                // 0x0048 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_IconNearVal;                               // 0x004C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_IconScaleVal;                              // 0x0050 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Map_IconMulVal;                                // 0x0054 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RDestructibleProp.DestructibleAppearance
// 0x007C
struct FDestructibleAppearance
{
	class UStaticMesh*                                 StaticMesh;                                    // 0x0000 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class USkeletalMesh*                               SkeletalMesh;                                  // 0x0008 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UApexDestructibleAsset*                      ApexMesh;                                      // 0x0010 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UPhysicsAsset*                               PhysicsAsset;                                  // 0x0018 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	uint32_t                                           DontCollideVehicle : 1;                        // 0x0020 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableLight : 1;                              // 0x0020 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableLight2 : 1;                             // 0x0020 (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableLight3 : 1;                             // 0x0020 (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableLight4 : 1;                             // 0x0020 (0x0004) [0x0000000100000001] [0x00000010] (CPF_Edit | CPF_Const)
	class FName                                        LightMaterialParameter;                        // 0x0024 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class FName                                        LightMaterialParameter2;                       // 0x002C (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class FName                                        LightMaterialParameter3;                       // 0x0034 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class FName                                        LightMaterialParameter4;                       // 0x003C (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class FName                                        LightSocket;                                   // 0x0044 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class FName                                        LightSocket2;                                  // 0x004C (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class FName                                        LightSocket3;                                  // 0x0054 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class FName                                        LightSocket4;                                  // 0x005C (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	uint32_t                                           CollideActors : 1;                             // 0x0064 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           BlockActors : 1;                               // 0x0064 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint8_t                                            CollisionFilter;                               // 0x0068 (0x0001) [0x0000000100000001] (CPF_Edit | CPF_Const)
	uint32_t                                           PushedByHumans : 1;                            // 0x006C (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           BrokenByHumans : 1;                            // 0x006C (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           BrokenByThrownRagdolls : 1;                    // 0x006C (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           BrokenByPlayer : 1;                            // 0x006C (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint8_t                                            BrokenApexCollisionFilter;                     // 0x0070 (0x0001) [0x0000000100000001] (CPF_Edit | CPF_Const)
	float                                              ImpactDamageThreshold;                         // 0x0074 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bNotifyRigidBodyCollision : 1;                 // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           StaticMeshStartsDynamic : 1;                   // 0x0078 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
};

// ScriptStruct BmGame.RDestructibleProp.DestructStage
// 0x00AC
struct FDestructStage
{
	float                                              HealthThreshold;                               // 0x0000 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	struct FDestructibleAppearance                     Appearance;                                    // 0x0008 (0x007C) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             ParticleEffect;                                // 0x0084 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class FName                                        ParticleSocket;                                // 0x008C (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    SoundEffect;                                   // 0x0094 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	uint32_t                                           DestroyActor : 1;                              // 0x009C (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           DestroyOffScreenOnly : 1;                      // 0x009C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Const)
	float                                              DestroyDelay;                                  // 0x00A0 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bTriggerAIStartleResponse : 1;                 // 0x00A4 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           StopInitialParticleSystem : 1;                 // 0x00A4 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	float                                              MinDuration;                                   // 0x00A8 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct BmGame.RDestructibleProp.DestructWhooshBy
// 0x0014
struct FDestructWhooshBy
{
	uint32_t                                           IsVehicleWhoosh : 1;                           // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              VelocityOfTargetInMS;                          // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DistanceToTriggerInMeters;                     // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    EventToPlay;                                   // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RDestructibleProp.DestructiblePropDamage
// 0x003C
struct FDestructiblePropDamage
{
	struct FVector                                     DamageDirection;                               // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     DamagePosition;                                // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     DamageCauserPointVelocity;                     // 0x0018 (0x000C) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ChunkIndex;                                    // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeDamageOccurred;                            // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ImpactThresholdMultiplier;                     // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      DamageType;                                    // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bFractureEffectInheritsVelocity : 1;           // 0x0038 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RSeqAct_PlayCameraConversation.ConversationCameraLocation
// 0x0048
struct FConversationCameraLocation
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class ARCameraActor_Conversation*                  EditorActor;                                   // 0x0010 (0x0008) [0x0000080500000000] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	struct FVector                                     Location;                                      // 0x0018 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x0024 (0x000C) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            FOV;                                           // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bActive : 1;                                   // 0x0034 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bNewSystem : 1;                                // 0x0034 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bDisableDoF : 1;                               // 0x0034 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	class TArray<class UAkDialogueLine*>               usedByLines;                                   // 0x0038 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RDisruptorSniper.DisruptedEquipmentRecord
// 0x001C
struct FDisruptedEquipmentRecord
{
	class ARPawn*                                      OwnerPawn;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class UPrimitiveComponent*                         LocationComponent;                             // 0x0008 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ARBMWeapon*                                  OptionalWeaponActor;                           // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            NameIndex;                                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RDroneCommanderTannoy.QueuedBarkInfo
// 0x0038
struct FQueuedBarkInfo
{
	class FName                                        Id;                                            // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Priority;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Delay;                                         // 0x000C (0x0004) [0x0000000000000000]               
	class FName                                        Location;                                      // 0x0010 (0x0008) [0x0000000000000000]               
	class FName                                        Battle;                                        // 0x0018 (0x0008) [0x0000000000000000]               
	class FName                                        VehicleType;                                   // 0x0020 (0x0008) [0x0000000000000000]               
	class FName                                        Commander;                                     // 0x0028 (0x0008) [0x0000000000000000]               
	float                                              TimeSinceLastPlayed;                           // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            PriorityLastPlayed;                            // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RDynamicBlockingVolume.CheckpointRecord
// 0x001C
struct ARDynamicBlockingVolume_FCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint32_t                                           bCollideActors : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlockActors : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsReplication : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BmGame.RFadeManager.IndependentFadeState
// 0x0014
struct FIndependentFadeState
{
	class FName                                        Identifier;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bFadeIn : 1;                                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasPlayedAtLeastOneFrame : 1;                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              fadeTime;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              TimeElapsed;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RFadeManager.MainFadeState
// 0x0014
struct FMainFadeState
{
	uint32_t                                           bFadeIn : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasPlayedAtLeastOneFrame : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              fadeTime;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeElapsed;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            FadeRGB;                                       // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           FadeDuringMovieCapture : 1;                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           FadeStartedByBatmobileInWater : 1;             // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           ControlledByInstantFade : 1;                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BmGame.RSideStoryManager.RiddlerHintEntry
// 0x0028
struct FRiddlerHintEntry
{
	class FString                                      RefName;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UAkHash*                                     AkLineRef;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	class FString                                      Who;                                           // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSideStoryManager.SideStoryVisualDiscoveryActor
// 0x0010
struct FSideStoryVisualDiscoveryActor
{
	class AActor*                                      TheActor;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            DiscoveryDistanceThresholdSquared;             // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsMainActor : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           CanBeDiscoveredDuringCloudburst : 1;           // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RSideStoryManager.SideStoryActorGroup
// 0x002C
struct FSideStoryActorGroup
{
	class TArray<struct FSideStoryVisualDiscoveryActor> TheActors;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      SideStoryIconName;                             // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            DiscoveryState;                                // 0x0020 (0x0001) [0x0000000000000000]               
	int32_t                                            TimeSliceActorIndex;                           // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           CanDiscoverThroughWalls : 1;                   // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RSideStoryManager.SideStoryVisibleEntry
// 0x000C
struct FSideStoryVisibleEntry
{
	float                                              ActorDotProd;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            GroupIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            ActorIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSideStoryManager.DiscoveryHudTarget
// 0x0014
struct FDiscoveryHudTarget
{
	class FString                                      UniqueName;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              TimeRemaining;                                 // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSideStoryManager.MissionDialogue
// 0x0044
struct FMissionDialogue
{
	int32_t                                            SpeechInstanceId;                              // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      PackageName;                                   // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      FullRef;                                       // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UAkDialogueConversation*                     AKLine;                                        // 0x0024 (0x0008) [0x0000000000000000]               
	uint8_t                                            DlgState;                                      // 0x002C (0x0001) [0x0000000000000000]               
	uint8_t                                            dlgType;                                       // 0x002D (0x0001) [0x0000000000000000]               
	struct FDouble                                     StartLoadTime;                                 // 0x0030 (0x0008) [0x0000000000000000]               
	struct FDouble                                     StartPlayTime;                                 // 0x0038 (0x0008) [0x0000000000000000]               
	uint32_t                                           Loaded : 1;                                    // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Cancelled : 1;                                 // 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           CancelWithFade : 1;                            // 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           Finished : 1;                                  // 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct BmGame.RForensicsDevice.ScreenInfoItem
// 0x0028
struct FScreenInfoItem
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	class ARPhysicalEvidenceBase*                      Object;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           Valid : 1;                                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                      // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RFractureWallBase.RBCollisionBreakType
// 0x0008
struct FRBCollisionBreakType
{
	class UClass*                                      BreakType;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RFractureWallBase.RFractureWallExplosionTriggerData
// 0x0024
struct FRFractureWallExplosionTriggerData
{
	struct FVector                                     ExplodePosition;                               // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              ExplodeRadius;                                 // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     ExplodeForce;                                  // 0x0010 (0x000C) [0x0000000000000000]               
	class AActor*                                      ExplodeInstigator;                             // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RFullTape.RArraySubtitleCue
// 0x0024
struct FRArraySubtitleCue
{
	float                                              Duration;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      SubtitleCharacterName;                         // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FSubtitleCue>                  Subtitles;                                     // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RFullTape.RLocalizedSubtitles
// 0x0020
struct FRLocalizedSubtitles
{
	class FString                                      Language;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FSubtitleCue>                  Subtitles;                                     // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RFullTape.RArrayLocalizedSubtitles
// 0x0010
struct FRArrayLocalizedSubtitles
{
	class TArray<struct FRLocalizedSubtitles>          SubtitleArray;                                 // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGangInteractPointBase.WeaponAnimsets
// 0x0010
struct FWeaponAnimsets
{
	class UClass*                                      WeaponType;                                    // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    WeaponAnimSet;                                 // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGangInteractPointAbandonedVehicleBase.ArrowContainer
// 0x0010
struct FArrowContainer
{
	class TArray<class UArrowComponent*>               Arrows;                                        // 0x0000 (0x0010) [0x0000084000014004] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline | CPF_EditorOnly)
};

// ScriptStruct BmGame.RGangInteractPointAbandonedVehicleBase.TransInLocs
// 0x0030
struct FTransInLocs
{
	class TArray<struct FVector>                       TransitionInStartPointLocs;                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FRotator>                      TransitionInStartPointRots;                    // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              TransitionInInvalid;                           // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGangInteractPointAbandonedVehicleBase.MultiStageAnim
// 0x0068
struct FMultiStageAnim
{
	class FName                                        TransitionIn;                                  // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        IdleAnimation;                                 // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              MinIdleTime;                                   // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxIdleTime;                                   // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<class FName>                          Events;                                        // 0x0018 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            MinEvents;                                     // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxEvents;                                     // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<class FName>                          WaitingEvents;                                 // 0x0030 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        CarAnim;                                       // 0x0040 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class FName>                          TransOutAnims;                                 // 0x0048 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        TimeOutAnim;                                   // 0x0058 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NumBuddies;                                    // 0x0060 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bSlaved : 1;                                   // 0x0064 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RGangInteractPointAbandonedVehicleBase.CarAnimationDetails
// 0x003C
struct FCarAnimationDetails
{
	class TArray<class FName>                          TransitionIns;                                 // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FMultiStageAnim>               MultiStageAnims;                               // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bOnSide : 1;                                   // 0x0020 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bOnWheels : 1;                                 // 0x0020 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bOnTop : 1;                                    // 0x0020 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bOnceOnly : 1;                                 // 0x0020 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bDisabled : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000010] 
	int32_t                                            RefCount;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              DisableOtherActionsAfterUse;                   // 0x0028 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bAllowSpectators : 1;                          // 0x0038 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RGargMineAssignmentPicker.GargLocSearchItem
// 0x0020
struct URGargMineAssignmentPicker_FGargLocSearchItem
{
	class URAttackPointSearch*                         APS;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     RefPoint;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	class ARHidePoint*                                 Garg;                                          // 0x0014 (0x0008) [0x0000000000000000]               
	int32_t                                            AssignID;                                      // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGFxMovieFrontMost.PromptRecord
// 0x003C
struct FPromptRecord
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bMain : 1;                                     // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      PadText;                                       // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      PCText;                                        // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Label;                                         // 0x0028 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              Alpha;                                         // 0x0038 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGFxMovieMissionWheel.Mission_Data
// 0x00D4
struct FMission_Data
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Id;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      Action;                                        // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Background;                                    // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           NewlyCompleted : 1;                            // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Angle;                                         // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           Unlocked : 1;                                  // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           LayoutOnly : 1;                                // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            SuspendedState;                                // 0x0040 (0x0004) [0x0000000000000000]               
	uint32_t                                           Waypointed : 1;                                // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Intel : 1;                                     // 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            New;                                           // 0x0048 (0x0004) [0x0000000000000000]               
	uint32_t                                           Dirty : 1;                                     // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           DLC : 1;                                       // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      Subscript;                                     // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      SidePanel;                                     // 0x0060 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              Percentage;                                    // 0x0070 (0x0004) [0x0000000000000000]               
	class FString                                      Markers;                                       // 0x0074 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            SynopsisId;                                    // 0x0084 (0x0004) [0x0000000000000000]               
	int32_t                                            ProgressId;                                    // 0x0088 (0x0004) [0x0000000000000000]               
	class FString                                      Headers;                                       // 0x008C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Params;                                        // 0x009C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Medals;                                        // 0x00AC (0x0004) [0x0000000000000000]               
	int32_t                                            Points;                                        // 0x00B0 (0x0004) [0x0000000000000000]               
	class FString                                      Score;                                         // 0x00B4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Leaderboard;                                   // 0x00C4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGFxMovieUI_PauseBase.ScreenDef
// 0x0010
struct FScreenDef
{
	class USwfMovie*                                   TheMovieInstance;                              // 0x0000 (0x0008) [0x0000000000000000]               
	class UClass*                                      TheClass;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RGFxMovieUI_SkinSelect.SkinChar
// 0x0024
struct FSkinChar
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      SkinName;                                      // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      LocName;                                       // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGFxMovieUI_SkinSelect.BaseChar
// 0x0024
struct FBaseChar
{
	int32_t                                            BaseId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      BaseName;                                      // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FSkinChar>                     Skins;                                         // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSeqAct_MultipleMobileObjectives.MMO_Record
// 0x004C
struct FMMO_Record
{
	class AActor*                                      TheActor;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class URSeqAct_VehicleEnemySpawner*                TheWaveSpawner;                                // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     cachedLocation;                                // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              Distance;                                      // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           IsActive : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	class ARObjectiveMarker*                           Marker;                                        // 0x0024 (0x0008) [0x0000000000000000]               
	class FString                                      FlagToSetWhenFound;                            // 0x002C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        AssociatedObjectives;                          // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RHudModuleTargets.ThreeDeeTarget
// 0x0098
struct FThreeDeeTarget
{
	class FString                                      CursorID;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      AnimName;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class AActor*                                      OptionalLinkedActor;                           // 0x0020 (0x0008) [0x0000000000000000]               
	class UPrimitiveComponent*                         OptionalLinkedComponent;                       // 0x0028 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Location;                                      // 0x0030 (0x000C) [0x0000000000000000]               
	int32_t                                            AttributeFlags;                                // 0x003C (0x0004) [0x0000000000000000]               
	class FString                                      ExtraInfo;                                     // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           ForceMainFlag : 1;                             // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ScreenX;                                       // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              ScreenY;                                       // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            ChargeLevel;                                   // 0x005C (0x0004) [0x0000000000000000]               
	uint32_t                                           KeepAliveFlag : 1;                             // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LockonProportion;                              // 0x0064 (0x0004) [0x0000000000000000]               
	class FString                                      OptionalFocusDetail;                           // 0x0068 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      MapRefName;                                    // 0x0078 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      MapTypeName;                                   // 0x0088 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RGlideOutOfBoundsVolume.GunFireLocator
// 0x0024
struct FGunFireLocator
{
	struct FVector                                     OriginLocationOffset;                          // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    OriginRotationOffset;                          // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              DelayInSeconds;                                // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             GunFireParticleSystem;                         // 0x001C (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RGrenadeGrateAssignmentPicker.MultiDestPathFindInfo
// 0x0010
struct URGrenadeGrateAssignmentPicker_FMultiDestPathFindInfo
{
	class URNavigationHandle*                          Handle;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class URMultiDestGoalData*                         GoalData;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSmashablePropConfig.RSmashablePropDecalData
// 0x0018
struct FRSmashablePropDecalData
{
	class FName                                        DecalTypeName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterial*                                   DecalMaterial;                                 // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              DecalWidth;                                    // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DecalHeight;                                   // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RHarpoonDragPhysicsBase.BatclawAnchorPoints
// 0x0018
struct FBatclawAnchorPoints
{
	struct FVector                                     Translation;                                   // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RHelicopterIntermediateBase.SearchLightData
// 0x0084
struct FSearchLightData
{
	class AActor*                                      hTarget;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     vTargetPositionDesired;                        // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     vTargetPositionCurrent;                        // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              fTargetValidateDelay;                          // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              fTargetInvisibleTime;                          // 0x0024 (0x0004) [0x0000000000000000]               
	class USpotLightComponent*                         hLightDynamic;                                 // 0x0028 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        hLightConeMesh;                                // 0x0030 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     vLightConeScale;                               // 0x0038 (0x000C) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   hLightConeMaterialConstant;                    // 0x0044 (0x0008) [0x0000000000000000]               
	struct FLinearColor                                vLightColorDesired;                            // 0x004C (0x0010) [0x0000000000000000]               
	struct FLinearColor                                vLightColorCurrent;                            // 0x005C (0x0010) [0x0000000000000000]               
	class UParticleSystemComponent*                    hWeaponEffect;                                 // 0x006C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bWeaponOverridePosition : 1;                   // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     vWeaponOverridePosition;                       // 0x0078 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RHelicopterIntermediateBase.TargetData
// 0x0010
struct FTargetData
{
	class AActor*                                      hActor;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              fDistanceSq;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsPlayer : 1;                                 // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RHelicopterIntermediateBase.SearchLightSourceLocationInfo
// 0x003C
struct FSearchLightSourceLocationInfo
{
	struct FVector                                     vSearchLightSourcePosition;                    // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    rSearchLightSourceRotation;                    // 0x000C (0x000C) [0x0000000000000000]               
	float                                              fSearchLightScanTiltCurrent;                   // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              fSearchLightScanRotateSpeedCurrent;            // 0x001C (0x0004) [0x0000000000000000]               
	float                                              fSearchLightScanSpreadCurrent;                 // 0x0020 (0x0004) [0x0000000000000000]               
	struct FRotator                                    rSearchLightSourceDirection;                   // 0x0024 (0x000C) [0x0000000000000000]               
	float                                              fSearchLightScanTiltDesired;                   // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              fSearchLightScanRotateSpeedDesired;            // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              fSearchLightScanSpreadDesired;                 // 0x0038 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RRope2Component.RopeRenderPoint
// 0x0020
struct FRopeRenderPoint
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x4];                              // 0x000C (0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                      // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct BmGame.RRope2Component.ConnectionAttachCalculatedData
// 0x00A0
struct FConnectionAttachCalculatedData
{
	struct FPointer                                    ConnectActor;                                  // 0x0000 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	uint8_t                                            UnknownData00[0x8];                              // 0x0008 (0x0008) MISSED OFFSET
	struct FMatrix                                     ActorAttachPose;                               // 0x0010 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     RopeAttachPose;                                // 0x0050 (0x0040) [0x0000000000000000]               
	float                                              ConnectMaxDistance;                            // 0x0090 (0x0004) [0x0000000000000000]               
	float                                              ConnectSwingLimit;                             // 0x0094 (0x0004) [0x0000000000000000]               
	float                                              ConnectTwistLimit;                             // 0x0098 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSpringConnection : 1;                         // 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RRope2BasePhysicsUpdater.EndInitData
// 0x0034
struct FEndInitData
{
	uint32_t                                           bUseInitPose : 1;                              // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FVector                                     EndInitPosition;                               // 0x0004 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    EndInitRotation;                               // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     EndInitLinearVelocity;                         // 0x001C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     EndInitAngularVelocity;                        // 0x0028 (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RRope2CapsuleChainPhysicsUpdater.RRope2CapsuleInitData
// 0x0034
struct FRRope2CapsuleInitData
{
	struct FVector                                     CapsuleEnd1Position;                           // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    CapsuleRotation;                               // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     CapsuleEnd1LinearVelocity;                     // 0x0018 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     CapsuleEnd1AngularVelocity;                    // 0x0024 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              CapsuleLength;                                 // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RRope2CapsuleChainPhysicsUpdater.Rope2CapsuleChainPhysicsUpdaterInitData
// 0x0010
struct FRope2CapsuleChainPhysicsUpdaterInitData
{
	class TArray<struct FRRope2CapsuleInitData>        CapsuleInitDatas;                              // 0x0000 (0x0010) [0x0000004100010004] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct BmGame.RRope2Component.RopeConnectData
// 0x0058
struct FRopeConnectData
{
	class UPrimitiveComponent*                         ConnectComponent;                              // 0x0000 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        ConnectBoneName;                               // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        ConnectSocketName;                             // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     ConnectComponentLocation;                      // 0x0018 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    ConnectComponentRotation;                      // 0x0024 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     ConnectRopeLocation;                           // 0x0030 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    ConnectRopeRotation;                           // 0x003C (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              ConnectMaxDistance;                            // 0x0048 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ConnectSwingLimit;                             // 0x004C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ConnectTwistLimit;                             // 0x0050 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bSpringConnection : 1;                         // 0x0054 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bDisableEndCollision : 1;                      // 0x0054 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bAllowDirectConnection : 1;                    // 0x0054 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bAllowRenderToConnection : 1;                  // 0x0054 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
};

// ScriptStruct BmGame.RRope2Component.RopeEndAttachData
// 0x0020
struct FRopeEndAttachData
{
	class TArray<struct FRopeConnectData>              RopeEndConnections;                            // 0x0000 (0x0010) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FVector                                     RopeEndRenderOffset;                           // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bInludeEndBeforeEndWithRenderOffset : 1;       // 0x001C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RRope2SimplePhysicsUpdater.RRope2SimplePhyiscsNodeInitData
// 0x001C
struct FRRope2SimplePhyiscsNodeInitData
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     LinearVelocity;                                // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              Length;                                        // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RRope2SimplePhysicsUpdater.RRope2SimplePhysicsUpdaterInitData
// 0x0010
struct FRRope2SimplePhysicsUpdaterInitData
{
	class TArray<struct FRRope2SimplePhyiscsNodeInitData> NodeInitDatas;                                 // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RHudModuleLocalRadar.DetailObject
// 0x0010
struct FDetailObject
{
	float                                              PositionX;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              PositionY;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Bearing;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            MovieFrame;                                    // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RHudObjectivesContainer.QueuedObjectives
// 0x0060
struct FQueuedObjectives
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Title;                                         // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Desc;                                          // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      OrgDesc;                                       // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            ArrowType;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bForceShowMap : 1;                             // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      BackPrompt;                                    // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bNoDuplicates : 1;                             // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPulseCompassIndicator : 1;                    // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      MostWantedPipeSeparatedArray;                  // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RHudModuleTargets.CompassItemThreeDee
// 0x003C
struct FCompassItemThreeDee
{
	class FString                                      StringID;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      IconName;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class AActor*                                      LinkedActor;                                   // 0x0020 (0x0008) [0x0000000000000000]               
	struct FVector                                     ItemLocation;                                  // 0x0028 (0x000C) [0x0000000000000000]               
	int32_t                                            RangeForDisappear;                             // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            FadeOutDistance;                               // 0x0038 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RInterpTrackCape.CapeTrackKey
// 0x003C
struct FCapeTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           TeleportCape : 1;                              // 0x0004 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           HideCape : 1;                                  // 0x0004 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	class FName                                        CapeStateName;                                 // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        CapeAnimName;                                  // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    CinematicStateExtraAnimSet;                    // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              AnimStartTime;                                 // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ScaleHeadDepthBias;                            // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ScaleDepthBias;                                // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        ParentTimeSyncAnimName;                        // 0x002C (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ParentTimeSyncAnimOffset;                      // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           PropertiesChangedSinceLastUpdate : 1;          // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RInventoryManager.GadgetDirection
// 0x0010
struct FGadgetDirection
{
	class TArray<class FName>                          SelectableGadgets;                             // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RLedgeLookDangerAreaInfo.RLedgeInfoIntermediate
// 0x0024
struct FRLedgeInfoIntermediate
{
	struct FVector                                     EndPoint1;                                     // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndPoint2;                                     // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     OutwardNormal;                                 // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RLedgeLookDangerAreaInfo.PrePlacedLedgeInfo
// 0x0024
struct FPrePlacedLedgeInfo
{
	class ARLedgeLookDangerAreaInfo*                   LDI;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FBox                                        AABB;                                          // 0x0008 (0x001C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RLevelSelectMenu.LevelDef
// 0x006C
struct FLevelDef
{
	class FString                                      Desc;                                          // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      LevelNames;                                    // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Flags;                                         // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Chapters;                                      // 0x0030 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      LoadSaveGame;                                  // 0x0040 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      ConsoleEvent;                                  // 0x0050 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        StartPoint;                                    // 0x0060 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           DisableEntry : 1;                              // 0x0068 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           DisableEntryInMilestone : 1;                   // 0x0068 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct BmGame.RLevelSelectMenu.MenusDef
// 0x0020
struct FMenusDef
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FLevelDef>                     Levels;                                        // 0x0010 (0x0010) [0x0000040100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSaveGameManager.RSaveGameSummaryInfo
// 0x0040
struct FRSaveGameSummaryInfo
{
	class FString                                      SaveName;                                      // 0x0000 (0x0010) [0x0000020000000200] (CPF_Native | CPF_AlwaysInit)
	class FString                                      Description;                                   // 0x0010 (0x0010) [0x0000020000000200] (CPF_Native | CPF_AlwaysInit)
	class FString                                      Summary;                                       // 0x0020 (0x0010) [0x0000020000000200] (CPF_Native | CPF_AlwaysInit)
	int32_t                                            DaysOld;                                       // 0x0030 (0x0004) [0x0000000000000200] (CPF_Native)  
	int32_t                                            InstallChunkRequired;                          // 0x0034 (0x0004) [0x0000000000000200] (CPF_Native)  
	int32_t                                            ChapterNumber;                                 // 0x0038 (0x0004) [0x0000000000000200] (CPF_Native)  
	uint32_t                                           bIsVS : 1;                                     // 0x003C (0x0004) [0x0000000000000200] [0x00000001] (CPF_Native)
	uint32_t                                           bIsNGP : 1;                                    // 0x003C (0x0004) [0x0000000000000200] [0x00000002] (CPF_Native)
};

// ScriptStruct BmGame.RSaveGameManager.LocationIDRemap
// 0x0030
struct FLocationIDRemap
{
	class FString                                      MapName;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      MapRoom;                                       // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Location;                                      // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RLevelVolume.VisibleLevelInfo
// 0x0054
struct FVisibleLevelInfo
{
	class FName                                        LevelName;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARLevelTransition*                           TransitionActor;                               // 0x0008 (0x0008) [0x0000000101000400] (CPF_Edit | CPF_Transient | CPF_CrossLevelPassive)
	class ARLevelTransition*                           TransitionActor2;                              // 0x0010 (0x0008) [0x0000000101000400] (CPF_Edit | CPF_Transient | CPF_CrossLevelPassive)
	class FString                                      ConditionalFlag;                               // 0x0018 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            RequiredInstallChunk;                          // 0x0028 (0x0001) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bKeepHidden : 1;                               // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bMakeVisibleWhenLoaded : 1;                    // 0x002C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bDontBlockOnLoad : 1;                          // 0x002C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bDontBlockWhenVisible : 1;                     // 0x002C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bOnlyLoadWhenNear : 1;                         // 0x002C (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bIgnoreRemoteBatmobileOrBatarang : 1;          // 0x002C (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bHackyDoNotBlockOnLoadIfWeAreFarEnoughAbove : 1;// 0x002C (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bLoadOnlyWhenOnSamePlaneAsTransition : 1;      // 0x002C (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           bLoadLodOnlyWhenInBatmobile : 1;               // 0x002C (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           bStarted : 1;                                  // 0x002C (0x0004) [0x0000000000000400] [0x00000200] (CPF_Transient)
	uint32_t                                           bVisible : 1;                                  // 0x002C (0x0004) [0x0000000000000400] [0x00000400] (CPF_Transient)
	uint32_t                                           bDLCMap : 1;                                   // 0x002C (0x0004) [0x0000000000000000] [0x00000800] 
	class ARLevelVolume*                               LevelVolume;                                   // 0x0030 (0x0008) [0x0000000000000400] (CPF_Transient)
	struct FBox                                        Bounds;                                        // 0x0038 (0x001C) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct BmGame.RLevelVolumeOW.OWStreamingLevelInfo
// 0x002C
struct FOWStreamingLevelInfo
{
	class FName                                        LevelName;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FBox                                        Bounds;                                        // 0x0008 (0x001C) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	uint8_t                                            RequiredInstallChunk;                          // 0x0024 (0x0001) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bStarted : 1;                                  // 0x0028 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
};

// ScriptStruct BmGame.RMagneticBlastReceiver.BeamInfo
// 0x0068
struct FBeamInfo
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class ARPawnVillain*                               weaponOwner;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class TArray<class AEmitter*>                      BeamFX;                                        // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class AEmitter*                                    SourceHitFx;                                   // 0x0020 (0x0008) [0x0000000000000000]               
	class AEmitter*                                    TargetHitFx;                                   // 0x0028 (0x0008) [0x0000000000000000]               
	struct FVector                                     CurrSourceTan;                                 // 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     OldSourceTan;                                  // 0x003C (0x000C) [0x0000000000000000]               
	struct FVector                                     NewSourceTan;                                  // 0x0048 (0x000C) [0x0000000000000000]               
	struct FVector                                     CurrTargetTan;                                 // 0x0054 (0x000C) [0x0000000000000000]               
	float                                              CurrentSourceTanTime;                          // 0x0060 (0x0004) [0x0000000000000000]               
	uint32_t                                           SecondaryOn : 1;                               // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RMagneticMatineeObject.MagneticMatineeMovementProperties
// 0x000C
struct FMagneticMatineeMovementProperties
{
	float                                              Damping;                                       // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Mass;                                          // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EndCollisionRestitution;                       // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RMagneticMatineeObject.MagMatObjEmitterData
// 0x001C
struct FMagMatObjEmitterData
{
	class AEmitter*                                    Emitter;                                       // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            EmitType;                                      // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              MinEmitSpeed;                                  // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxEmitSpeed;                                  // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        FadeParameterName;                             // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RMagneticMatineeObject.MagMatObjCalculatedVelocity
// 0x0010
struct FMagMatObjCalculatedVelocity
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Velocity;                                      // 0x0004 (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RManBatAppearanceController.ManbatAppearanceHistory
// 0x001C
struct FManbatAppearanceHistory
{
	int32_t                                            TimesAppeard;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<class FName>                          AnimNames;                                     // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              TimeOfLastAppearance;                          // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              MinTimeBetweenAppearances;                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RMirrorConfig.MirrorAction
// 0x0004
struct FMirrorAction
{
	uint32_t                                           FlipRotationX : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           FlipRotationY : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           FlipRotationZ : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           FlipTranslationX : 1;                          // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           FlipTranslationZ : 1;                          // 0x0000 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           Rotate180X : 1;                                // 0x0000 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
};

// ScriptStruct BmGame.RMirrorConfig.NamedMirror
// 0x0014
struct FNamedMirror
{
	class FName                                        DestBone;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SourceBone;                                    // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FMirrorAction                               Action;                                        // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RMultiCharacterCinematicActor.MultiCharacterCinematicActorMaterialSwap
// 0x0010
struct FMultiCharacterCinematicActorMaterialSwap
{
	class UMaterialInterface*                          From;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInterface*                          To;                                            // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RMultiCharacterCinematicActor.MultiCharacterCinematicActorSetup
// 0x0030
struct FMultiCharacterCinematicActorSetup
{
	class USkeletalMesh*                               SkeletalMesh;                                  // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        RootBoneName;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class USkeletalMesh*>                 ExtraSkeletalMeshes;                           // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FMultiCharacterCinematicActorMaterialSwap> MaterialSwaps;                                 // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RMultiNavHandleWrapper.IndexedNavHandle
// 0x0010
struct FIndexedNavHandle
{
	class URNavigationHandle*                          NavHandle;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ExtraCost;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RNavigationHandle.PathShortenInstance
// 0x0034
struct FPathShortenInstance
{
	struct FVector                                     ShortenStart;                                  // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     ShortenEnd;                                    // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     ShortenExtent;                                 // 0x0018 (0x000C) [0x0000000000000000]               
	class TArray<struct FVector>                       ShortenPoints;                                 // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RNavigationHandle.EdgeReachedInstance
// 0x0030
struct FEdgeReachedInstance
{
	struct FVector                                     EdgeReachedLocation;                           // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EdgeStart;                                     // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     EdgeEnd;                                       // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     NextEdgeLocation;                              // 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RNavigationHandle.NavHandleHistoryInfo
// 0x0014
struct FNavHandleHistoryInfo
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Text;                                          // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RNavigationHandle.ComputedPathPoint
// 0x0014
struct FComputedPathPoint
{
	struct FVector                                     Loc;                                           // 0x0000 (0x000C) [0x0000000000000000]               
	struct FPointer                                    Edge;                                          // 0x000C (0x0008) [0x0000000000000200] (CPF_Native)  
};

// ScriptStruct BmGame.RNavigationManager.RebuildObstacleMeshkDOPInfo
// 0x000C
struct FRebuildObstacleMeshkDOPInfo
{
	class APylon*                                      RebuildPylon;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              RequestTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.ROverworldPopulationVolume.DeletePawnStruct
// 0x000C
struct FDeletePawnStruct
{
	class ARBMPawnAI*                                  Pawn;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnPlayerJokerBase.JokerCustomConstraintConfig
// 0x002C
struct FJokerCustomConstraintConfig
{
	class FName                                        BoneName1;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     BonePos1;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	class FName                                        BoneName2;                                     // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector                                     BonePos2;                                      // 0x001C (0x000C) [0x0000000000000000]               
	float                                              Length;                                        // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPawnPlayerNightwingBase.NwStickBouncePoint
// 0x0020
struct FNwStickBouncePoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x000C (0x000C) [0x0000000000000000]               
	class APawn*                                       Pawn;                                          // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPhysicsTriggerVolume.PxShapeAndActorPair
// 0x0010
struct FPxShapeAndActorPair
{
	struct FPointer                                    ShapesInForceField;                            // 0x0000 (0x0008) [0x0000000000000200] (CPF_Native)  
	class AActor*                                      Actor;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPlayerTransitionCameraActor.CamSplineSegment
// 0x0034
struct FCamSplineSegment
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     SplinePrev;                                    // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     SplineStart;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     SplineEnd;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     SplineNext;                                    // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPlayerController.QuickGrappleSwingContainer
// 0x0014
struct FQuickGrappleSwingContainer
{
	class ARHidePoint*                                 HidePoint;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     SwingLocation;                                 // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPlayerController.IntItems
// 0x0010
struct FIntItems
{
	int32_t                                            MaxDistance;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0004 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCurrentLookAt : 1;                            // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RPlayerController.MoveNameString
// 0x0014
struct FMoveNameString
{
	uint8_t                                            MoveType;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      MoveString;                                    // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPlayerController.BatmobileChallengeKillString
// 0x0014
struct FBatmobileChallengeKillString
{
	uint8_t                                            MoveType;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      MoveString;                                    // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPlayerController.CheatCode
// 0x0015
struct FCheatCode
{
	uint8_t                                            E;                                             // 0x0000 (0x0001) [0x0000000000000000]               
	class TArray<uint8_t>                              Code;                                          // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            Index;                                         // 0x0014 (0x0001) [0x0000000000000400] (CPF_Transient)
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct BmGame.RPlayerController.FearTakedownHightlightInfo
// 0x0014
struct FFearTakedownHightlightInfo
{
	class ARPawnVillain*                               HighlightedFearTakedownTarget;                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UMaterialInterface*                          CurrentHighlightMaterial;                      // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bRelevant : 1;                                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RPlayerController.BattleModeWeaponButton
// 0x000C
struct FBattleModeWeaponButton
{
	struct FVector2D                                   Offset;                                        // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FColor                                      Colour;                                        // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RPlayerController.ChildStateCacheElement
// 0x0014
struct FChildStateCacheElement
{
	class FName                                        State;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        ParentState;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           Result : 1;                                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RPlayerController.RemapStringAtoB
// 0x0020
struct FRemapStringAtoB
{
	class FString                                      A;                                             // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      B;                                             // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPlayerController.RiddleData
// 0x0054
struct FRiddleData
{
	class FString                                      Zone;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Room;                                          // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Room2;                                         // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      EnableOnFlag;                                  // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            RiddleIndex;                                   // 0x0040 (0x0001) [0x0000000000000000]               
	uint8_t                                            SpeechChapter;                                 // 0x0041 (0x0001) [0x0000000000000000]               
	class FString                                      SpeechFlag;                                    // 0x0044 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPlayerController.HudComboData
// 0x0018
struct FHudComboData
{
	int32_t                                            iComboMultiplier;                              // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            iBaseScore;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      ComboMoveString;                               // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPlayerController.UnlockableDefinition
// 0x0028
struct FUnlockableDefinition
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Level;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSecret : 1;                                   // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      NeedsFlagSet;                                  // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPlayerController.ChallengeCombatData
// 0x0020
struct FChallengeCombatData
{
	class FString                                      sIntroText;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            iNumberofWaves;                                // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            iScoreBronze;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            iScoreSilver;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            iScoreGold;                                    // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPlayerControllerCombat.StruckInfo
// 0x000C
struct FStruckInfo
{
	class ARPawnCombat*                                PawnAttacked;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ConsecutiveHits;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPlayerInput.ControllerSpinContainer
// 0x0010
struct FControllerSpinContainer
{
	uint32_t                                           InProgress : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Triggered : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            Direction;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              PrevAngle;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              TotalSpin;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPopulationManager.TempDeactivatedPopVolumes
// 0x0018
struct FTempDeactivatedPopVolumes
{
	class FString                                      VolName;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              TimeOfDeactivation;                            // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              DeactivationTime;                              // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPopulationManager.ScenarioUsageInformation
// 0x000C
struct FScenarioUsageInformation
{
	class URVehicleScenario*                           Scenario;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TimeSinceActive;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RPopulationManager.APCSpawnPointsList
// 0x0010
struct FAPCSpawnPointsList
{
	class TArray<struct FVector>                       Points;                                        // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPopulationManager.ThreatLevelCache
// 0x0010
struct FThreatLevelCache
{
	class TArray<int32_t>                              ThreatLevels;                                  // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RPopulationManager.WeaponConfigInfo
// 0x0014
struct FWeaponConfigInfo
{
	class UClass*                                      BehaviourClass;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class URWeaponConfig*                              WeaponConfig;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bMilitia : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFleeing : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BmGame.RPopulationManager.DestroyPawnInfo
// 0x000C
struct FDestroyPawnInfo
{
	class ARBMPawnAI*                                  PawnToDestroy;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bStreamedOut : 1;                              // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RPopulationManager.ScenarioID
// 0x0008
struct FScenarioID
{
	int32_t                                            Idx;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAPCSideStory : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RSeqAct_SetRandomPopulationBase.WanderingData
// 0x0008
struct FWanderingData
{
	float                                              MaxWanderingGroups;                            // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bIsMilitia : 1;                                // 0x0004 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RStealthTakeDownStage.AnimList
// 0x0010
struct FAnimList
{
	class TArray<class FName>                          Anims;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RStealthTakeDownStage.TakeDownStageAnimSet
// 0x0134
struct FTakeDownStageAnimSet
{
	class TArray<class FName>                          AttackerAnimation;                             // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          AttackerIdle;                                  // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      AttackerAnimationPrefix;                       // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      AttackerAnimationSuffix;                       // 0x0030 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UAnimSet*                                    AttackerAnimSet;                               // 0x0040 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        DefaultCapeStateName;                          // 0x0048 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class FName>                          CapeStateName;                                 // 0x0050 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          CapeAnimName;                                  // 0x0060 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        CapeFinishStateName;                           // 0x0070 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FAnimList>                     VictimAnimations;                              // 0x0078 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          VictimIdle;                                    // 0x0088 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      VictimAnimationPrefix;                         // 0x0098 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      VictimAnimationSuffix;                         // 0x00A8 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UAnimSet*                                    VictimAnimSet;                                 // 0x00B8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              MeetingTime;                                   // 0x00C0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AnimatedCameraFOV;                             // 0x00C4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMirrored : 1;                                 // 0x00C8 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class FName                                        AttackerEndPose;                               // 0x00CC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        VictimEndPose;                                 // 0x00D4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    CameraAnimSet;                                 // 0x00DC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        CameraAnimation;                               // 0x00E4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class FName>                          CameraAnimations;                              // 0x00EC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      CameraAnimationPrefix;                         // 0x00FC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      CameraAnimationSuffix;                         // 0x010C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           OverlayAnim : 1;                               // 0x011C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           ForceCameraAnimation : 1;                      // 0x011C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bBlendBackToPlayerCameraWhenFinishedCameraAnimation : 1;// 0x011C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           CameraCollision : 1;                           // 0x011C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bUseBatmanAsCameraCollisionTargetInsteadOfVictim : 1;// 0x011C (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bCameraHardCut : 1;                            // 0x011C (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	float                                              fCameraBlendInTime;                            // 0x0120 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            OnStairsAnimIndex;                             // 0x0124 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bUseMovementAnimSet : 1;                       // 0x0128 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bUsePredatorOverrideAnimSets : 1;              // 0x0128 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	class FName                                        StrikeBone;                                    // 0x012C (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RStealthTakeDownStage.VictimStruct
// 0x001C
struct FVictimStruct
{
	class ARPawnVillain*                               Victim;                                        // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URBMBehaviour*                               ControlledBehaviour;                           // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARBMAIController*                            VictimController;                              // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bVictimFinished : 1;                           // 0x0018 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RRedHoodExcavatorBase.TunnelPathPoint
// 0x001C
struct FTunnelPathPoint
{
	class AActor*                                      Point;                                         // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<int32_t>                              NeighbourPoints;                               // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bRoundedCorner : 1;                            // 0x0018 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RRepeatAnimManager.RAM_AnimTime
// 0x000C
struct FRAM_AnimTime
{
	class FName                                        Anim;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RRHD.SecondaryTargetData
// 0x0014
struct FSecondaryTargetData
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystemComponent*                    ConnectionBeam;                                // 0x000C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct BmGame.RRoadArea.RoadAreaPoint
// 0x002C
struct FRoadAreaPoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	class ARRoadPoint*                                 FromRoadPoint;                                 // 0x000C (0x0008) [0x0000000000000000]               
	class ARRoadLink*                                  FromRoadLink;                                  // 0x0014 (0x0008) [0x0000000000000000]               
	float                                              FromRoadLinkTime;                              // 0x001C (0x0004) [0x0000000000000000]               
	float                                              MaxHeadroom;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            IndexInNetwork;                                // 0x0024 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            RefCount;                                      // 0x0028 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct BmGame.RRoadArea.RoadAreaLink
// 0x0008
struct FRoadAreaLink
{
	int32_t                                            Points[2];                                     // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RRoadLink.Lane
// 0x002C
struct FLane
{
	uint32_t                                           Usable : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           SeaWall : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	struct FLaneInfo                                   Start;                                         // 0x0004 (0x0014) [0x0000000100000000] (CPF_Edit)    
	struct FLaneInfo                                   End;                                           // 0x0018 (0x0014) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RRope2SimpleSphereChainPhysicsUpdater.RRope2SimpleSphereChainPhyiscsNodeInitData
// 0x0020
struct FRRope2SimpleSphereChainPhyiscsNodeInitData
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     LinearVelocity;                                // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              PreNodeLength;                                 // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PostNodeLength;                                // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RRope2SimpleSphereChainPhysicsUpdater.RRope2SimpleSphereChainPhysicsUpdaterInitData
// 0x0010
struct FRRope2SimpleSphereChainPhysicsUpdaterInitData
{
	class TArray<struct FRRope2SimpleSphereChainPhyiscsNodeInitData> NodeInitDatas;                                 // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RRopeBaseSpawnable.HangingFearRopeSetupParams
// 0x0094
struct FHangingFearRopeSetupParams
{
	class ARPawnVillain*                               Victim;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class ARHidePoint*                                 SourceHidePoint;                               // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        RopeBoneAttachName;                            // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              RopeAttachConnectionDistance;                  // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            NumExtraAttachConnections;                     // 0x001C (0x0004) [0x0000000000000000]               
	struct FRopeExtraAttachConnection                  RopeExtraAttachConnections[2];                 // 0x0020 (0x0070) [0x0000000000004000] (CPF_Component)
	float                                              StoredRopeLengthForFear;                       // 0x0090 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSearchRoutingWrapper.RejectedLedgeInfo
// 0x0014
struct FRejectedLedgeInfo
{
	class ARLedgeLookDangerAreaInfo*                   LedgeDanger;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     LocRejectedAt;                                 // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSentryGunBase.SentryGunSettings
// 0x008C
struct FSentryGunSettings
{
	uint8_t                                            SearchType;                                    // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              constantRotationSearchPitch;                   // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              maxRotationRate_search;                        // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              maxRotationRate_attack;                        // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              timeTillMaxRotationRate_search;                // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              timeTillMaxRotationRate_attack;                // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<class AActor*>                        AimTargets;                                    // 0x0018 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              aimPauseTime;                                  // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FOV;                                           // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Range;                                         // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxLightRangeOverride;                         // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              shootAngleTolerance;                           // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bKnockPlayerBackIfTooClose : 1;                // 0x003C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              instantShootRange;                             // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              pauseDurationAfterLosingPlayer;                // 0x0044 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              pauseDurationBeforeShootingPlayer;             // 0x0048 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              GunDamage;                                     // 0x004C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeBetweenShots;                              // 0x0050 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bCanBeTakenDown : 1;                           // 0x0054 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              jamDuration;                                   // 0x0058 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              jamStartTransitionDuration;                    // 0x005C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              jamEndTransitionDuration;                      // 0x0060 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              minLightAngleProportion;                       // 0x0064 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bDrawDebug : 1;                                // 0x0068 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class AActor*                                      actorToKnockPlayerInDirectionOf;               // 0x006C (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bIgnoreKnockbackDirectionActor : 1;            // 0x0074 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAlwaysPlayKnockBackAnim : 1;                  // 0x0074 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              minFiringTime;                                 // 0x0078 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bFadeLightShaftOutIfBMBelowGun : 1;            // 0x007C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              BMBelowGun_ShaftFadeStartZ;                    // 0x0080 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              BMBelowGun_ShaftFadeEndZ;                      // 0x0084 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bDontSetDestroyedFlag : 1;                     // 0x0088 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RSentryKitAssignmentPicker.MultiDestPathFindInfo
// 0x0010
struct URSentryKitAssignmentPicker_FMultiDestPathFindInfo
{
	class URNavigationHandle*                          Handle;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class URMultiDestGoalData*                         GoalData;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSeqAct_ActiveCombatantChecker.CombatantThreshold
// 0x0008
struct FCombatantThreshold
{
	int32_t                                            aMin;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            bMax;                                          // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RSeqAct_AirshipBobbingBase.BobWaveForm
// 0x0008
struct FBobWaveForm
{
	float                                              BobWaveLength;                                 // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Offset;                                        // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RSeqAct_AirshipBobbingBase.AxisBobSettings
// 0x0014
struct FAxisBobSettings
{
	float                                              BobMagnitude;                                  // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FBobWaveForm>                  WaveForms;                                     // 0x0004 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSeqAct_AutoJez.AutoJezChapter
// 0x0014
struct FAutoJezChapter
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Chapter;                                       // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSeqAct_PlaySpeechBase.OutputLinkData
// 0x0020
struct FOutputLinkData
{
	class UAkDialogueLine*                             LineForLink;                                   // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeIntoLine;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FString                                      LinkName;                                      // 0x000C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bDoneOutput : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RSeqAct_PlaySpeechBase.voiceCharacterPair
// 0x000C
struct FvoiceCharacterPair
{
	int32_t                                            voiceHash;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class ARPawnCharacter*                             Character;                                     // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSeqAct_ChatterBoxBase.PawnChatterInfo
// 0x0020
struct FPawnChatterInfo
{
	class APawn*                                       Pawn;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              PlayerDistSq;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            activityType;                                  // 0x000C (0x0001) [0x0000000000000000]               
	class ARVehicleNPC*                                Vehicle;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            wandererGroup;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Group;                                         // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSeqAct_ChatterBoxBase.PawnChatterGroup
// 0x0014
struct FPawnChatterGroup
{
	class TArray<struct FPawnChatterInfo>              pawnChatterInfos;                              // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              Score;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSeqAct_EventSequence.TimedLink
// 0x0014
struct FTimedLink
{
	class FName                                        LinkName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeForLink;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            LinkId;                                        // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bFired : 1;                                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RSeqAct_FireCrewController.singleTier
// 0x0010
struct FsingleTier
{
	class TArray<int32_t>                              members;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSeqAct_IntThresholdChecker.IntThreshold
// 0x0008
struct FIntThreshold
{
	int32_t                                            aMin;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            bMax;                                          // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RSeqAct_JokerRooftopControllerBase.SidePercs
// 0x0030
struct FSidePercs
{
	class TArray<int32_t>                              MinPerc;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              MaxPerc;                                       // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              bListened;                                     // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSeqAct_PlayCameraConversation.CharacterAnim
// 0x0020
struct FCharacterAnim
{
	class UAkDialogueVoice*                            Voice;                                         // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    AnimSet;                                       // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimationName;                                 // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        CustomIdleName;                                // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RSeqAct_PlayCameraConversation.SingleLineAnimData
// 0x0030
struct FSingleLineAnimData
{
	class UAkDialogueLine*                             LineForAnimation;                              // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeIntoLine;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FCharacterAnim                              CharacterAnim;                                 // 0x000C (0x0020) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bPlayedAnim : 1;                               // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RSeqAct_PlayCameraConversation.PawnAndTransition
// 0x0014
struct FPawnAndTransition
{
	class ARPawnCharacter*                             Pawn;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FTransitionId                               transID;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	class UAnimSequence*                               Anim;                                          // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSeqAct_RestoreBeams.BeamData
// 0x0018
struct FBeamData
{
	int32_t                                            CollectionIndex;                               // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            RailingIndex;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	class TArray<class ARStaticClimbableActor*>        LinkedActors;                                  // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSeqAct_RestoreBeams.BreakableData
// 0x0018
struct FBreakableData
{
	class ARStaticClimbableActor*                      Breakable;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FBeamData>                     Data;                                          // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSeqAct_RiddlerBlockInitialiser.BlockSettings
// 0x0008
struct FBlockSettings
{
	uint8_t                                            Col;                                           // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            StartState;                                    // 0x0001 (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Padding;                                       // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BmGame.RSeqAct_SetRandomPopulationBase.RiotWeapons
// 0x0018
struct FRiotWeapons
{
	int32_t                                            MaxWeaponThugs;                                // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MinWeaponThugs;                                // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UClass*>                        AllowedWeapons;                                // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSeqAct_SwitchDate.DateDef
// 0x000C
struct FDateDef
{
	int32_t                                            Day;                                           // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            Month;                                         // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Year;                                          // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RSeqAct_SwitchDate.DateGroupDef
// 0x0020
struct FDateGroupDef
{
	class FString                                      Desc;                                          // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FDateDef>                      ValidDates;                                    // 0x0010 (0x0010) [0x0000040100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSeqAct_SwitchFlags.FlagItem
// 0x0008
struct FFlagItem
{
	class FName                                        FlagName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RSeqAct_VehicleEnemySpawner.AdditionalWaveSetup
// 0x0018
struct FAdditionalWaveSetup
{
	int32_t                                            NumEnemiesToTriggerSetup;                      // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            OverrideChapterDifficulty;                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FSpawnedVehicleEnemyDesc>      SpawnTypes;                                    // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSeqEvent_RiddlerProgressionAdvanced.UnlockCriterion
// 0x003C
struct FUnlockCriterion
{
	int32_t                                            NumSecretsFound;                               // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NumSecretsFound_FOR_DEMO;                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<class FString>                        FlagsRequired;                                 // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FString>                        FlagsToSet;                                    // 0x0018 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FString>                        FlagsToUnSet;                                  // 0x0028 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bImportant : 1;                                // 0x0038 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bMustHappenExact : 1;                          // 0x0038 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bInCityOnly : 1;                               // 0x0038 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bForceIfRiddlerOnBillboard : 1;                // 0x0038 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           DO_NOT_EDIT_HasBeenSet : 1;                    // 0x0038 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct BmGame.RSkelControl_FeedConstraint.FeedConstraintSourceRange
// 0x000C
struct FFeedConstraintSourceRange
{
	float                                              Min;                                           // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Max;                                           // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           ClampToMin : 1;                                // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           ClampToMax : 1;                                // 0x0008 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct BmGame.RSkelControl_FeedConstraint.FeedConstraintDestinationRange
// 0x0008
struct FFeedConstraintDestinationRange
{
	float                                              Min;                                           // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Max;                                           // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RSkelControl_PositionConstraint.PositionConstraintBone
// 0x000C
struct FPositionConstraintBone
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RSkelControl_PositionConstraint.ResolvedPositionConstraintBone
// 0x0030
struct FResolvedPositionConstraintBone
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Weight;                                        // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            UnknownData00[0x8];                              // 0x0008 (0x0008) MISSED OFFSET
	struct FBoneAtom                                   TargetBoneReferencePose;                       // 0x0010 (0x0020) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RSkelControlDeformVehicle.DeformVehicleBone
// 0x001C
struct FDeformVehicleBone
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxTranslation;                                // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CurTranslation;                                // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinRotation;                                   // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxRotation;                                   // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CurRotation;                                   // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RSkelControlWhip.WhipBoneData
// 0x000C
struct FWhipBoneData
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            BoneIndex;                                     // 0x0008 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct BmGame.RSkelControlWhip.WhipBoneReparenting
// 0x0028
struct FWhipBoneReparenting
{
	struct FWhipBoneData                               ReparentBone;                                  // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FWhipBoneData                               NewParentBone;                                 // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FWhipBoneData                               OrigReparentBoneOverride;                      // 0x0018 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bForceReparenting : 1;                         // 0x0024 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct BmGame.RSkelControlWhip.WhipTargetingData
// 0x009C
struct FWhipTargetingData
{
	uint32_t                                           bEnableWhipTargeting : 1;                      // 0x0000 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint8_t                                            TargetingType;                                 // 0x0004 (0x0001) [0x0000000000000400] (CPF_Transient)
	uint8_t                                            UnknownData00[0xB];                              // 0x0005 (0x000B) MISSED OFFSET
	struct FMatrix                                     RetargetPose;                                  // 0x0010 (0x0040) [0x0000000000000400] (CPF_Transient)
	struct FMatrix                                     RetargetCurrentPose;                           // 0x0050 (0x0040) [0x0000000000000400] (CPF_Transient)
	int32_t                                            TargetingStartBoneIndex;                       // 0x0090 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            TargetingEndBoneIndex;                         // 0x0094 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              TargetingBoneChainLength;                      // 0x0098 (0x0004) [0x0000000000000400] (CPF_Transient)
	uint8_t                                            MinStructAlignment[0x4];                         // 0x009C (0x0004) ADDED PADDING
};

// ScriptStruct BmGame.RSkelControlWhip.WhipHipPhysicsData
// 0x0078
struct FWhipHipPhysicsData
{
	struct FWhipBoneData                               WhipHipBone;                                   // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FWhipBoneData                               WhipPhysicsApplicationBone;                    // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              CentreOfMassDist;                              // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              GravityZ;                                      // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RotationMax;                                   // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Restitution;                                   // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Damping;                                       // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     HandleForwardsVector;                          // 0x002C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     HandleDownVector;                              // 0x0038 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     HandleOutVector;                               // 0x0044 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     CurrPos;                                       // 0x0050 (0x000C) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     CurrVel;                                       // 0x005C (0x000C) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           bActive : 1;                                   // 0x0068 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	float                                              LastUpdateTime;                                // 0x006C (0x0004) [0x0000000000000400] (CPF_Transient)
	class USkeletalMeshComponent*                      LastUpdateSkelComp;                            // 0x0070 (0x0008) [0x0000004000004404] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
};

// ScriptStruct BmGame.RSpecialMoveConfig_HarpoonThug.BatclawBatmanAnimConfig
// 0x0024
struct FBatclawBatmanAnimConfig
{
	class TArray<class FName>                          Anims;                                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     ReleaseClawImpulse;                            // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              MinAngle;                                      // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxAngle;                                      // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RStringUpRope.RailingAttackRopeSetupParams
// 0x00C4
struct FRailingAttackRopeSetupParams
{
	class ARPawnVillain*                               Victim;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        RopeBoneAttachName;                            // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     RopeAttachPoint;                               // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RopeAttachRotation;                            // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     RopeRenderAttachPoint;                         // 0x0028 (0x000C) [0x0000000000000000]               
	float                                              RopeAttachConnectionDistance;                  // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            NumExtraAttachConnections;                     // 0x0038 (0x0004) [0x0000000000000000]               
	struct FRopeExtraAttachConnection                  RopeExtraAttachConnections[2];                 // 0x003C (0x0070) [0x0000000000004000] (CPF_Component)
	float                                              StoredRopeLength;                              // 0x00AC (0x0004) [0x0000000000000000]               
	uint32_t                                           bAttachRopeToFeet : 1;                         // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     RopePelvisAttachPoint;                         // 0x00B4 (0x000C) [0x0000000000000000]               
	uint32_t                                           DisableCutRope : 1;                            // 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RStealthTakedownStage_ChainTakedown_WeakWall.WallAttackAnimInfo
// 0x0020
struct ARStealthTakedownStage_ChainTakedown_WeakWall_FWallAttackAnimInfo
{
	class TArray<uint8_t>                              CameraCollisionOptions;                        // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          CameraAnims;                                   // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RStealthTakedownStage_ChainTakedown_WeakWall.WallAttackStageInfo
// 0x0010
struct ARStealthTakedownStage_ChainTakedown_WeakWall_FWallAttackStageInfo
{
	class TArray<struct ARStealthTakedownStage_ChainTakedown_WeakWall_FWallAttackAnimInfo> AnimInfos;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RStealthTakeDownStage_GlassWallAttack.WallAttackAnimInfo
// 0x0020
struct ARStealthTakeDownStage_GlassWallAttack_FWallAttackAnimInfo
{
	class TArray<uint8_t>                              CameraCollisionOptions;                        // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          CameraAnims;                                   // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RStealthTakeDownStage_GlassWallAttack.WallAttackStageInfo
// 0x0010
struct ARStealthTakeDownStage_GlassWallAttack_FWallAttackStageInfo
{
	class TArray<struct ARStealthTakeDownStage_GlassWallAttack_FWallAttackAnimInfo> AnimInfos;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSubtitle.RSArraySubtitleCue
// 0x0020
struct FRSArraySubtitleCue
{
	class FString                                      Language;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FSubtitleCue>                  Subtitles;                                     // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RSubtitleLookup.RSubtitleLookupEntry
// 0x000C
struct FRSubtitleLookupEntry
{
	int32_t                                            SubtitleHash;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class URSubtitle*                                  Subtitle;                                      // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RUninformedTreeEndPathWrapper.TreeEndHandleCombo
// 0x0010
struct FTreeEndHandleCombo
{
	class URNavigationHandle*                          NavHandle;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class URChasePoint*                                TreeEnd;                                       // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BmGame.RVehicleHeavyTank.CommanderTankWeakPoint
// 0x0018
struct FCommanderTankWeakPoint
{
	class FName                                        Socket;                                        // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              VisibleDuration;                               // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDestroyed : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystemComponent*                    WeakPointPS;                                   // 0x0010 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct BmGame.RVehicleHeavyTank.CommanderTankStage
// 0x002C
struct FCommanderTankStage
{
	class TArray<int32_t>                              AvailableWeapons;                              // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MaxHealthPct;                                  // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NextStageHealth;                               // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Duration;                                      // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NextStageTimeout;                              // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MinSimultaneousAttacks;                        // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DifficultyMod;                                 // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OverrideAttackInterval;                        // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RVehicleHeavyTank.CommandTankDialogueCont
// 0x0010
struct FCommandTankDialogueCont
{
	class TArray<class UAkDialogueSpeech*>             Lines;                                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BmGame.RVehicleHushBase.BadGuyData
// 0x0040
struct FBadGuyData
{
	class UClass*                                      PawnClass;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URCharacterDefine*                           CharacterDefine;                               // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      CharacterType;                                 // 0x0010 (0x0008) [0x0000000000000000]               
	class UClass*                                      WeaponType;                                    // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SpawnSocket;                                   // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              SpawnTime;                                     // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        GetOutAnimation;                               // 0x002C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    GetOutAnimSet;                                 // 0x0034 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bSpawned : 1;                                  // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RVehicleSimBatmobile.VehicleTransmission
// 0x0070
struct FVehicleTransmission
{
	float                                              RPM;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Gear;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OutputGas;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Friction;                                      // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Drag;                                          // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DragNoLoad;                                    // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NumForwardGears;                               // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              GearRatios[6];                                 // 0x001C (0x0018) [0x0000000100000000] (CPF_Edit)    
	float                                              DifferentialRatio;                             // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RPMGearDown;                                   // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RPMGearUp;                                     // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SlopeTorqueScale;                              // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              BoostTorqueScale;                              // 0x0044 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DonutBoostTorqueScale;                         // 0x0048 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              WheelspinBoostExtraTorque;                     // 0x004C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RPMIdle;                                       // 0x0050 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TorqueIdle;                                    // 0x0054 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RPMPeak;                                       // 0x0058 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TorquePeak;                                    // 0x005C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RPMMax;                                        // 0x0060 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RPMWheelspin;                                  // 0x0064 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OutputGasIncSpeed;                             // 0x0068 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OutputGasDecSpeed;                             // 0x006C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct BmGame.RVoiceSynthesiser.VoiceSynthTargetStruct
// 0x0024
struct FVoiceSynthTargetStruct
{
	class UParticleSystemComponent*                    Beam;                                          // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    Box;                                           // 0x0008 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ARPawnVillain*                               Villain;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	class AActor*                                      Target;                                        // 0x0018 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCurrentlyTargetted : 1;                       // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BmGame.RWinchableWallBase.RestingChunk
// 0x0018
struct FRestingChunk
{
	class USkeletalMeshComponent*                      MeshComp;                                      // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            BodyIndex;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            BoneIndex;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              RestingBaseZ;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              RestingTime;                                   // 0x0014 (0x0004) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
