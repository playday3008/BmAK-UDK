/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: Engine_structs.hpp
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

// ScriptStruct Engine.AkWwise.AkPropagationShell
// 0x001C
struct FAkPropagationShell
{
	int32_t                                            Rays;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Span;                                          // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Pitch;                                         // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Yaw;                                           // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OcclusionWeighting;                            // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ObstructionWeighting;                          // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ShellExtent;                                   // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkWwise.AkPropagationDesc
// 0x0024
struct FAkPropagationDesc
{
	class TArray<struct FAkPropagationShell>           Shells;                                        // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              PropagationBubble;                             // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PropagationExtent;                             // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PrimaryRayOcclusionWeighting;                  // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PrimaryRayObstructionWeighting;                // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bScaleOverExtent : 1;                          // 0x0020 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bComputeReflections : 1;                       // 0x0020 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.AkWwise.AkSoundHandle
// 0x0010
struct FAkSoundHandle
{
	int32_t                                            EventInstanceID;                               // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            OriginalEventID;                               // 0x0004 (0x0004) [0x0000000000000000]               
	struct FQWord                                      SourceID;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.AkWwise.AkLoopingEvent
// 0x0018
struct FAkLoopingEvent
{
	int32_t                                            OriginalEventID;                               // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ParentBankID;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            EventInstanceID;                               // 0x0008 (0x0004) [0x0000000000000000]               
	struct FQWord                                      EventSourceID;                                 // 0x000C (0x0008) [0x0000000000000000]               
	float                                              LoopAudibilityRadius;                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AkWwise.AkParameterSetting
// 0x0008
struct FAkParameterSetting
{
	int32_t                                            ParameterID;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              ParameterValue;                                // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AkWwise.AkSwitchSetting
// 0x0008
struct FAkSwitchSetting
{
	int32_t                                            SwitchGroupID;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            SwitchValueID;                                 // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AkWwise.AkEnvironmentSettings
// 0x0010
struct FAkEnvironmentSettings
{
	class UAkEnvironmentName*                          EnvironmentName;                               // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              WetMixAdjust;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DryMixAdjust;                                  // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkWwise.AkEnvironmentMixLevel
// 0x000C
struct FAkEnvironmentMixLevel
{
	float                                              MixLevelSum;                                   // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MixLevelCount;                                 // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MuteCount;                                     // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkWwise.AkEnvironmentInfo
// 0x0028
struct FAkEnvironmentInfo
{
	struct FAkEnvironmentSettings                      EnvSettings;                                   // 0x0000 (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FAkEnvironmentMixLevel                      WetMixLevel;                                   // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FAkEnvironmentMixLevel                      DryMixLevel;                                   // 0x001C (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkWwise.AkSourceSpatial
// 0x0018
struct FAkSourceSpatial
{
	struct FVector                                     TransformedPosition;                           // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     TransformedOrientation;                        // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AkWwise.SimpleWhooshBy
// 0x0014
struct FSimpleWhooshBy
{
	uint32_t                                           IsVehicleWhoosh : 1;                           // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              VelocityOfTargetInMS;                          // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DistanceToTriggerInMeters;                     // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    EventToPlay;                                   // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkWwise.AkParticleEvents
// 0x0024
struct FAkParticleEvents
{
	class FName                                        MatchingName;                                  // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ParticleLoop;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           SuspendLoopDuringInactivity : 1;               // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            ParticleLoopThreshold;                         // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ParticleBurst;                                 // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ParticleBurstThreshold;                        // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkWwise.AkEnvelopeSettings
// 0x0014
struct FAkEnvelopeSettings
{
	float                                              SustainValue;                                  // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ReleaseValue;                                  // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AttackDuration;                                // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SustainDuration;                               // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ReleaseDuration;                               // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkWwise.AkPhysInfo
// 0x0050
struct FAkPhysInfo
{
	class UAkSwitchName*                               SurfaceSwitch;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ImpactSound;                                   // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ImpactedSound;                                 // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ScrapeSound;                                   // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    RollSound;                                     // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              InstantaneousActivationDelay;                  // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              InstantaneousVelocityThreshold;                // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              InstantaneousVelocityAssuredThreshold;         // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              InstantaneousProbability;                      // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ContinuousMonitorWindowDuration;               // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ContinuousMinimumLoopDuration;                 // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ContinuousVelocityThreshold;                   // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SurfaceHardness;                               // 0x0044 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SurfaceWetness;                                // 0x0048 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CoalesceRatio;                                 // 0x004C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkWwise.AkPhysEvent
// 0x0051
struct FAkPhysEvent
{
	int32_t                                            PrimaryEventId;                                // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            SecondaryEventId;                              // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SurfaceSwitchId;                               // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     CollisionPosition;                             // 0x000C (0x000C) [0x0000000000000000]               
	float                                              CollisionVelocity;                             // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              CollisionMagnitude;                            // 0x001C (0x0004) [0x0000000000000000]               
	float                                              CollisionObsOcc;                               // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ActivationDelay;                               // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              AudibilityRadius;                              // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              CoalesceRadius;                                // 0x002C (0x0004) [0x0000000000000000]               
	float                                              PrimaryHardness;                               // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              SecondaryHardness;                             // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              SurfaceWetness;                                // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              ContinuousMinimumLoopDuration;                 // 0x003C (0x0004) [0x0000000000000000]               
	float                                              InstantaneousVelocityThreshold;                // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              InstantaneousVelocityAssuredThreshold;         // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              InstantaneousProbability;                      // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              ContinuousVelocityThreshold;                   // 0x004C (0x0004) [0x0000000000000000]               
	uint8_t                                            CollisionType;                                 // 0x0050 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0051 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.AkWwise.AkFakePhysics
// 0x0064
struct FAkFakePhysics
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     PreviousLocation;                              // 0x0004 (0x000C) [0x0000000000000400] (CPF_Transient)
	struct FAkPhysInfo                                 PhysInfo;                                      // 0x0010 (0x0050) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           FakeScrape : 1;                                // 0x0060 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           FakeImpact : 1;                                // 0x0060 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.AkWwise.AkPropagationMaterial
// 0x000C
struct FAkPropagationMaterial
{
	float                                              ObstructionFactor;                             // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OcclusionFactor;                               // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AbsorptionFactor;                              // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkWwise.AkPropagationInfo
// 0x0020
struct FAkPropagationInfo
{
	float                                              Obstruction;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Occlusion;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              ReflectionFrontLeft;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ReflectionFrontRight;                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              ReflectionBackLeft;                            // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              ReflectionBackRight;                           // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              ReflectionAbove;                               // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              ReflectionBelow;                               // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AkWwise.AkWorldDataEntry
// 0x0008
struct FAkWorldDataEntry
{
	uint8_t                                            Material;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              Height;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AkWwise.AkWorldData
// 0x004C
struct FAkWorldData
{
	class TArray<struct FAkWorldDataEntry>             Entries;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FBox                                        Bounds;                                        // 0x0010 (0x001C) [0x0000000000000000]               
	uint32_t                                           Active : 1;                                    // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Matches;                                       // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            Missed;                                        // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            Missing;                                       // 0x0038 (0x0004) [0x0000000000000000]               
	class FString                                      Path;                                          // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AkWwise.AkInterpolationBuffer
// 0x000C
struct FAkInterpolationBuffer
{
	float                                              _Current;                                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Const)   
	float                                              _Target;                                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Const)   
	float                                              _Rate;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.StretchInstance
// 0x0014
struct FStretchInstance
{
	struct FVector4                                    TranslationAndScale;                           // 0x0000 (0x0010) [0x0000000000000000]               
	int32_t                                            BoneIndex;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0xC];                         // 0x0014 (0x000C) ADDED PADDING
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.StretchPhaseInstances
// 0x0010
struct FStretchPhaseInstances
{
	class TArray<struct FStretchInstance>              Instances;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.StretchInstances
// 0x0020
struct FStretchInstances
{
	struct FStretchPhaseInstances                      Phases[2];                                     // 0x0000 (0x0020) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.FaceFXEmbeddedAnimSample
// 0x0014
struct FFaceFXEmbeddedAnimSample
{
	class UAnimSequence*                               Anim;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Weight;                                        // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           Mirror : 1;                                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.TwistBoneFixer
// 0x0018
struct FTwistBoneFixer
{
	int32_t                                            BaseBoneIndex;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            DriverBoneIndex;                               // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            TwistBoneIndices[3];                           // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              TwistProportion;                               // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.KneeElbowFixer
// 0x0008
struct FKneeElbowFixer
{
	int32_t                                            ParentBoneIndex;                               // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            HelperBoneIndex;                               // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.NeckTwistFixer
// 0x000C
struct FNeckTwistFixer
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            NeckBoneIndex;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            HeadBoneIndex;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.CollarTwistFixer
// 0x000C
struct FCollarTwistFixer
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            NeckBoneIndex;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            CollarBoneIndex;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.Fixers
// 0x003C
struct FFixers
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FTwistBoneFixer>               TwistBoneFixers;                               // 0x0004 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<struct FKneeElbowFixer>               KneeElbowFixers;                               // 0x0014 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	struct FNeckTwistFixer                             NeckTwistFixer;                                // 0x0024 (0x000C) [0x0000000000000000]               
	struct FCollarTwistFixer                           CollarTwistFixer;                              // 0x0030 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.BreathingFixer
// 0x0014
struct FBreathingFixer
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Valid : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            Spine1Index;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Spine2Index;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Spine3Index;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Amount;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.FaceFXRegisterTransition
// 0x0015
struct FFaceFXRegisterTransition
{
	int32_t                                            NodeIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              FromValue;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              ToValue;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OneOverDuration;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              NormalizedTime;                                // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            Owner;                                         // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.FaceFXRegisterConstant
// 0x0009
struct FFaceFXRegisterConstant
{
	int32_t                                            NodeIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Value;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            Owner;                                         // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.FaceFXBaseExpressionSample
// 0x0010
struct FFaceFXBaseExpressionSample
{
	uint8_t                                            Value;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	class UAnimSequence*                               Anim;                                          // 0x0008 (0x0008) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.FaceFXMatineeLookAt
// 0x0030
struct FFaceFXMatineeLookAt
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      Target;                                        // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                        // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      YawRegisterName;                               // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      PitchRegisterName;                             // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.StretchDescription
// 0x0019
struct FStretchDescription
{
	class FName                                        Bone;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Translation;                                   // 0x0008 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              Scale;                                         // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            Phase;                                         // 0x0018 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0019 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.AutoLODSetting
// 0x0030
struct FAutoLODSetting
{
	float                                              LODDisplayFactor;                              // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LODQuality;                                    // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            SilhouetteImportance;                          // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            TextureImportance;                             // 0x0009 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            ShadingImportance;                             // 0x000A (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            SkinningImportance;                            // 0x000B (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            NormalMode;                                    // 0x000C (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              BoneReductionRatio;                            // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxBonesPerVertex;                             // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           UseVertexWelding : 1;                          // 0x0018 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class TArray<float>                                MaterialPriorities;                            // 0x001C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            LODVersion;                                    // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.TrackedNotify
// 0x001C
struct FTrackedNotify
{
	class UAnimSequence*                               Anim;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimNotify*                                 Notify;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	class UObject*                                     Token;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           KeepAlive : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.CharacterMirrorBoneAction
// 0x0004
struct FCharacterMirrorBoneAction
{
	uint8_t                                            ShuffleRotation;                               // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            FlipRotation;                                  // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            FlipTranslation;                               // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            Padding;                                       // 0x0003 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.CharacterMirrorBone
// 0x0008
struct FCharacterMirrorBone
{
	int32_t                                            SourceBoneIndex;                               // 0x0000 (0x0004) [0x0000000000000000]               
	struct FCharacterMirrorBoneAction                  Action;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.BoneMass
// 0x0008
struct FBoneMass
{
	int32_t                                            BoneIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Mass;                                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.RotationBoneMass
// 0x0018
struct FRotationBoneMass
{
	struct FQuat                                       RotationOffset;                                // 0x0000 (0x0010) [0x0000000000000000]               
	int32_t                                            BoneIndex;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Mass;                                          // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x8];                         // 0x0018 (0x0008) ADDED PADDING
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.NormalizedBoneMasses
// 0x0020
struct FNormalizedBoneMasses
{
	class TArray<struct FBoneMass>                     Translation;                                   // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FRotationBoneMass>             Rotation;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.AnimatedMaterialParameter_Scalar
// 0x000C
struct FAnimatedMaterialParameter_Scalar
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.AnimatedMaterialParameter_Vector
// 0x0014
struct FAnimatedMaterialParameter_Vector
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Value;                                         // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.AnimatedMaterialParameters
// 0x0020
struct FAnimatedMaterialParameters
{
	class TArray<struct FAnimatedMaterialParameter_Scalar> Scalar;                                        // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FAnimatedMaterialParameter_Vector> Vector;                                        // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.SkelControlInstance
// 0x004C
struct FSkelControlInstance
{
	class USkelControlBase*                            Control;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            MainBone;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              DirectlyAffectedBones;                         // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              PreCalculateBones;                             // 0x001C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              PostCalculateBones;                            // 0x002C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              PostBlendBones;                                // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.SkeletalMeshComponentExtraBounds
// 0x000C
struct FSkeletalMeshComponentExtraBounds
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.SkeletalMeshComponentExtraBoundsInstance
// 0x0008
struct FSkeletalMeshComponentExtraBoundsInstance
{
	int32_t                                            BoneIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.BoneToTrack
// 0x0010
struct FBoneToTrack
{
	struct FVector                                     OldPosition;                                   // 0x0000 (0x000C) [0x0000000000000400] (CPF_Transient)
	int32_t                                            BoneIndex;                                     // 0x000C (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.AudioBones
// 0x004C
struct FAudioBones
{
	class TArray<class FName>                          TrackingBones;                                 // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UAkEvent*>                      AudioEvents;                                   // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UAkParameterName*>              RTPCToSet;                                     // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              BoneScaleRatio;                                // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    EventToTrigger;                                // 0x0034 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FBoneToTrack>                  Bones;                                         // 0x003C (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.AudioBoneTracking
// 0x0010
struct FAudioBoneTracking
{
	class TArray<struct FAudioBones>                   BoneGroups;                                    // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.PersistentSoundNotify
// 0x0014
struct FPersistentSoundNotify
{
	struct FAkSoundHandle                              SoundHandle;                                   // 0x0000 (0x0010) [0x0000000000000000]               
	float                                              PlayTime;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshComponent_Export.PersistentSoundData
// 0x0018
struct FPersistentSoundData
{
	class TArray<struct FPersistentSoundNotify>        Table;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        PreviousAnim;                                  // 0x0010 (0x0008) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.Actor.PendingTouch
// 0x0030
struct FPendingTouch
{
	class AActor*                                      TouchingActor;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UPrimitiveComponent*                         HitComponent;                                  // 0x0008 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     HitLocation;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitNormal;                                     // 0x001C (0x000C) [0x0000000000000000]               
	class UPrimitiveComponent*                         SourceComponent;                               // 0x0028 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.Actor.TimerData
// 0x0020
struct FTimerData
{
	uint32_t                                           bLoop : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPaused : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIgnoreGameTimeDilation : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	class FName                                        FuncName;                                      // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              Rate;                                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Count;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TimerTimeDilation;                             // 0x0014 (0x0004) [0x0000000000000000]               
	class UObject*                                     TimerObj;                                      // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.InvestigationData
// 0x002C
struct FInvestigationData
{
	class FString                                      InvestigationInfoTitle;                        // 0x0000 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      InvestigationInfo;                             // 0x0010 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	class FName                                        GlobalFlagCheck;                               // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bInvertFlag : 1;                               // 0x0028 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bWarningFlag : 1;                              // 0x0028 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.Actor.DetailThought
// 0x0014
struct FDetailThought
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	uint8_t                                            Red;                                           // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            Green;                                         // 0x0011 (0x0001) [0x0000000000000000]               
	uint8_t                                            Blue;                                          // 0x0012 (0x0001) [0x0000000000000000]               
	uint8_t                                            Alpha;                                         // 0x0013 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.Thought
// 0x0024
struct FThought
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	uint8_t                                            Red;                                           // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            Green;                                         // 0x0011 (0x0001) [0x0000000000000000]               
	uint8_t                                            Blue;                                          // 0x0012 (0x0001) [0x0000000000000000]               
	uint8_t                                            Alpha;                                         // 0x0013 (0x0001) [0x0000000000000000]               
	class TArray<struct FDetailThought>                DetailThoughts;                                // 0x0014 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Actor.BlockingVolumeTypesContainer
// 0x0004
struct FBlockingVolumeTypesContainer
{
	uint32_t                                           AllActors : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Player : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Enemies : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           Friendlies : 1;                                // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           Physics : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           Batarang : 1;                                  // 0x0000 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           BatClaw : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           LineLauncher : 1;                              // 0x0000 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           GrappleGun : 1;                                // 0x0000 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           Camera : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           WeaponsOrLOS : 1;                              // 0x0000 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           MagneticObjects : 1;                           // 0x0000 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           ClimbOnly : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           IgnoreWallPounces : 1;                         // 0x0000 (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           FreezeGrenades : 1;                            // 0x0000 (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           SmokeBomb : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00008000] (CPF_Edit)
	uint32_t                                           REC : 1;                                       // 0x0000 (0x0004) [0x0000000100000000] [0x00010000] (CPF_Edit)
};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x0028
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                      // 0x0000 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	class UPhysicalMaterial*                           PhysMaterial;                                  // 0x0008 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	int32_t                                            Item;                                          // 0x0010 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
	int32_t                                            LevelIndex;                                    // 0x0014 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
	class FName                                        BoneName;                                      // 0x0018 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	class UPrimitiveComponent*                         HitComponent;                                  // 0x0020 (0x0008) [0x0000024000004004] (CPF_ExportObject | CPF_Component | CPF_AlwaysInit | CPF_EditInline)
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x0060
struct FImpactInfo
{
	class AActor*                                      HitActor;                                      // 0x0000 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	struct FVector                                     HitLocation;                                   // 0x0008 (0x000C) [0x0000020000000000] (CPF_AlwaysInit)
	struct FVector                                     HitNormal;                                     // 0x0014 (0x000C) [0x0000020000000000] (CPF_AlwaysInit)
	struct FVector                                     RayDir;                                        // 0x0020 (0x000C) [0x0000020000000000] (CPF_AlwaysInit)
	struct FVector                                     StartTrace;                                    // 0x002C (0x000C) [0x0000020000000000] (CPF_AlwaysInit)
	struct FTraceHitInfo                               HitInfo;                                       // 0x0038 (0x0028) [0x0000020000004000] (CPF_Component | CPF_AlwaysInit)
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	class FName                                        SlotName;                                      // 0x0000 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	class TArray<float>                                ChannelWeights;                                // 0x0008 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	class FName                                        SlotName;                                      // 0x0000 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	int32_t                                            NumChannels;                                   // 0x0008 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
};

// ScriptStruct Engine.Actor.PhysContactModificationData
// 0x0034
struct FPhysContactModificationData
{
	int32_t                                            ChangeFlags;                                   // 0x0000 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
	struct FPointer                                    PhysShape0;                                    // 0x0004 (0x0008) [0x0000020000000201] (CPF_Const | CPF_Native | CPF_AlwaysInit)
	struct FPointer                                    PhysShape1;                                    // 0x000C (0x0008) [0x0000020000000201] (CPF_Const | CPF_Native | CPF_AlwaysInit)
	class AActor*                                      Actor0;                                        // 0x0014 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	class AActor*                                      Actor1;                                        // 0x001C (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	int32_t                                            PhysFeatureIndex0;                             // 0x0024 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
	int32_t                                            physFeatureIndex1;                             // 0x0028 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
	struct FPointer                                    PhysData;                                      // 0x002C (0x0008) [0x0000020000000200] (CPF_Native | CPF_AlwaysInit)
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0039
struct FRigidBodyState
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x4];                              // 0x000C (0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                    // 0x0010 (0x0010) [0x0000000000000000]               
	struct FVector                                     LinVel;                                        // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     AngVel;                                        // 0x002C (0x000C) [0x0000000000000000]               
	uint8_t                                            bNewData;                                      // 0x0038 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x7];                         // 0x0039 (0x0007) ADDED PADDING
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x0054
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                               // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     ContactNormal;                                 // 0x000C (0x000C) [0x0000000000000000]               
	float                                              ContactPenetration;                            // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     ContactVelocity[2];                            // 0x001C (0x0018) [0x0000000000000000]               
	class UPhysicalMaterial*                           PhysMaterial[2];                               // 0x0034 (0x0010) [0x0000000000000000]               
	struct FPointer                                    Shapes[2];                                     // 0x0044 (0x0010) [0x0000000000000200] (CPF_Native)  
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	class TArray<struct FRigidBodyContactInfo>         ContactInfos;                                  // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     TotalNormalForceVector;                        // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     TotalFrictionForceVector;                      // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x001C
struct FPhysEffectInfo
{
	float                                              MinEffectSpeed;                                // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxEffectSpeed;                                // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ReFireDelay;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             Effect;                                        // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URB_ForceComponent*                          Force;                                         // 0x0014 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.Actor.ActorReference
// 0x0018
struct FActorReference
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FGuid                                       Guid;                                          // 0x0008 (0x0010) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.Actor.NavReference
// 0x0018
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                           // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FGuid                                       Guid;                                          // 0x0008 (0x0010) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.Actor.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Position;                                      // 0x0008 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     CachedBaseLocation;                            // 0x0014 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CachedBaseRotation;                            // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     CachedTransPosition;                           // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.ASyncLoadRequestInfo
// 0x0018
struct FASyncLoadRequestInfo
{
	class AActor*                                      SelfRef;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      ObjectName;                                    // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x002C
struct FSeqOpInputLink
{
	class FString                                      LinkDesc;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            QueuedActivations;                             // 0x0010 (0x0004) [0x0000000000000400] (CPF_Transient)
	class USequenceOp*                                 LinkedOp;                                      // 0x0014 (0x0008) [0x0000000000000000]               
	float                                              ActivateDelay;                                 // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x0020 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	uint32_t                                           bHidden : 1;                                   // 0x0024 (0x0004) [0x0000080000000000] [0x00000001] (CPF_EditorOnly)
	uint32_t                                           bHasImpulse : 1;                               // 0x0024 (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
	uint32_t                                           bDisabled : 1;                                 // 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDisabledPIE : 1;                              // 0x0024 (0x0004) [0x0000080000000000] [0x00000008] (CPF_EditorOnly)
	uint32_t                                           bMoving : 1;                                   // 0x0024 (0x0004) [0x0000080000000400] [0x00000010] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x0024 (0x0004) [0x0000080000000000] [0x00000020] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x0024 (0x0004) [0x0000080000000000] [0x00000040] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x0028 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.AkDialogue.AkPreferredVoice
// 0x0018
struct FAkPreferredVoice
{
	class UAkDialogueVoice*                            PreferredVoice;                                // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UObject*                                     SpeakerObject;                                 // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        PawnReferenceName;                             // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkDialogue.AkSpeechCallbacks
// 0x0048
struct FAkSpeechCallbacks
{
	struct FScriptDelegate                             OnStartSpeech;                                 // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             OnStopSpeech;                                  // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             OnStartDialogueLine;                           // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             OnStopDialogueLine;                            // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FPointer                                    CustomListener;                                // 0x0040 (0x0008) [0x0000000000000600] (CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.AkDialogue.AkSpeechOptions
// 0x0074
struct FAkSpeechOptions
{
	int32_t                                            InstancePriorityBump;                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinDistanceToPlayer;                           // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxDistanceFromPlayer;                         // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bNoDistanceScoring : 1;                        // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bRejectInstanceOnPriorityMatch : 1;            // 0x000C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bRejectInstanceIfNotHighestPriority : 1;       // 0x000C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bRejectInstanceIfPredBarkLockActive : 1;       // 0x000C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bRejectInstanceIfChatterDisabled : 1;          // 0x000C (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bRejectIfInterruptsMatchingSpeech : 1;         // 0x000C (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bRejectIfInterruptsAnySpeech : 1;              // 0x000C (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bAllowIncapacitatedSpeakers : 1;               // 0x000C (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           bNoAbortIfActiveSpeakerInterrupted : 1;        // 0x000C (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           bNoAbortIfInactiveSpeakerInterrupted : 1;      // 0x000C (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           bSubstituteGlobalSpeakers : 1;                 // 0x000C (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           bAllowMissingSpeakers : 1;                     // 0x000C (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           bAllowMissingVoiceForSingleLine : 1;           // 0x000C (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           bAllowIncorrectVoiceForSingleLine : 1;         // 0x000C (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           bDisableAnimation : 1;                         // 0x000C (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           bDisableAudio : 1;                             // 0x000C (0x0004) [0x0000000100000000] [0x00008000] (CPF_Edit)
	uint32_t                                           bDisableSubtitles : 1;                         // 0x000C (0x0004) [0x0000000100000000] [0x00010000] (CPF_Edit)
	uint32_t                                           bForceSubtitlesIfNewest : 1;                   // 0x000C (0x0004) [0x0000000100000000] [0x00020000] (CPF_Edit)
	uint32_t                                           bWaitForNotifies : 1;                          // 0x000C (0x0004) [0x0000000100000000] [0x00040000] (CPF_Edit)
	uint32_t                                           bPreventAttachToWaitingSpeech : 1;             // 0x000C (0x0004) [0x0000000100000000] [0x00080000] (CPF_Edit)
	uint32_t                                           bRequireAttachToWaitingSpeech : 1;             // 0x000C (0x0004) [0x0000000100000000] [0x00100000] (CPF_Edit)
	uint32_t                                           bAllowDifferentSpeakerOnAttachToWaitingSpeech : 1;// 0x000C (0x0004) [0x0000000100000000] [0x00200000] (CPF_Edit)
	uint32_t                                           bOverrideVoiceLock : 1;                        // 0x000C (0x0004) [0x0000000100000000] [0x00400000] (CPF_Edit)
	uint32_t                                           bOverrideTypeLock : 1;                         // 0x000C (0x0004) [0x0000000100000000] [0x00800000] (CPF_Edit)
	uint32_t                                           bRequireExplicitStop : 1;                      // 0x000C (0x0004) [0x0000000100000000] [0x01000000] (CPF_Edit)
	uint32_t                                           bRequirePreferredVoices : 1;                   // 0x000C (0x0004) [0x0000000100000000] [0x02000000] (CPF_Edit)
	uint32_t                                           bRejectIfRepetitionDisallowed : 1;             // 0x000C (0x0004) [0x0000000100000000] [0x04000000] (CPF_Edit)
	uint32_t                                           bRejectIfInvalidChapterFlags : 1;              // 0x000C (0x0004) [0x0000000100000000] [0x08000000] (CPF_Edit)
	class TArray<struct FAkPreferredVoice>             PreferredVoices;                               // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            CustomPauseFlags;                              // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bIgnoreEventOffset : 1;                        // 0x0024 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint8_t                                            StreamingPriorityOverride;                     // 0x0028 (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FAkSpeechCallbacks                          Callbacks;                                     // 0x002C (0x0048) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0020
struct FKeyValuePair
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x0034
struct FPlayerResponseLine
{
	int32_t                                            PlayerNum;                                     // 0x0000 (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	int32_t                                            PlayerID;                                      // 0x0004 (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	class FString                                      PlayerName;                                    // 0x0008 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	int32_t                                            Ping;                                          // 0x0018 (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	int32_t                                            Score;                                         // 0x001C (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	int32_t                                            StatsID;                                       // 0x0020 (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	class TArray<struct FKeyValuePair>                 PlayerInfo;                                    // 0x0024 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0078
struct FServerResponseLine
{
	int32_t                                            ServerID;                                      // 0x0000 (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	class FString                                      IP;                                            // 0x0004 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0014 (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	int32_t                                            QueryPort;                                     // 0x0018 (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	class FString                                      ServerName;                                    // 0x001C (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x002C (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      GameType;                                      // 0x003C (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	int32_t                                            CurrentPlayers;                                // 0x004C (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	int32_t                                            MaxPlayers;                                    // 0x0050 (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	int32_t                                            Ping;                                          // 0x0054 (0x0004) [0x0000020100000000] (CPF_Edit | CPF_AlwaysInit)
	class TArray<struct FKeyValuePair>                 ServerInfo;                                    // 0x0058 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<struct FPlayerResponseLine>           PlayerInfo;                                    // 0x0068 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x0009
struct FLocalizedStringSetting
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ValueIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            AdvertisementType;                             // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.Settings.SettingsData
// 0x0010
struct FSettingsData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Const)   
	int32_t                                            Value1;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Const)   
	struct FPointer                                    Value2;                                        // 0x0008 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x0015
struct FSettingsProperty
{
	int32_t                                            PropertyId;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               Data;                                          // 0x0004 (0x0010) [0x0000000000000000]               
	uint8_t                                            AdvertisementType;                             // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x000C
struct FIdToStringMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000001001] (CPF_Const | CPF_Localized)
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000001001] (CPF_Const | CPF_Localized)
	uint32_t                                           bIsWildcard : 1;                               // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x002C
struct FLocalizedStringSettingMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000000001] (CPF_Const)   
	class FString                                      ColumnHeaderText;                              // 0x000C (0x0010) [0x0000000000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<struct FStringIdToStringMapping>      ValueMappings;                                 // 0x001C (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x004C
struct FSettingsPropertyPropertyMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000000001] (CPF_Const)   
	class FString                                      ColumnHeaderText;                              // 0x000C (0x0010) [0x0000000000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint8_t                                            MappingType;                                   // 0x001C (0x0001) [0x0000000000000001] (CPF_Const)   
	class TArray<struct FIdToStringMapping>            ValueMappings;                                 // 0x0020 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FSettingsData>                 PredefinedValues;                              // 0x0030 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	float                                              MinVal;                                        // 0x0040 (0x0004) [0x0000000000000001] (CPF_Const)   
	float                                              MaxVal;                                        // 0x0044 (0x0004) [0x0000000000000001] (CPF_Const)   
	float                                              RangeIncrement;                                // 0x0048 (0x0004) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.UniqueNetId
// 0x0008
struct FUniqueNetId
{
	struct FQWord                                      Uid;                                           // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x0008
struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x000C (0x0008 - 0x0014)
struct FOnlineArbitrationRegistrant : FOnlineRegistrant
{
	struct FQWord                                      MachineId;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Const)   
	int32_t                                            Trustworthiness;                               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x0038
struct FNamedSession
{
	class FName                                        SessionName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    SessionInfo;                                   // 0x0008 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<struct FOnlineRegistrant>             Registrants;                                   // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineArbitrationRegistrant>  ArbitrationRegistrants;                        // 0x0028 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	class FName                                        InterfaceName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     InterfaceObject;                               // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageFlags
// 0x0004
struct FSocialPostImageFlags
{
	uint32_t                                           bIsUserGeneratedImage : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsGameGeneratedImage : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsAchievementImage : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsMediaImage : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageInfo
// 0x0044
struct FSocialPostImageInfo
{
	struct FSocialPostImageFlags                       Flags;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      MessageText;                                   // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      TitleText;                                     // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      PictureCaption;                                // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      PictureDescription;                            // 0x0034 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostLinkInfo
// 0x0020 (0x0044 - 0x0064)
struct FSocialPostLinkInfo : FSocialPostImageInfo
{
	class FString                                      TitleURL;                                      // 0x0044 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      PictureURL;                                    // 0x0054 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostPrivileges
// 0x0004
struct FSocialPostPrivileges
{
	uint32_t                                           bCanPostImage : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)
	uint32_t                                           bCanPostLink : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// 0x003C
struct FOnlinePartyMember
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Const)   
	class FString                                      NickName;                                      // 0x0008 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                  // 0x0018 (0x0001) [0x0000000000000001] (CPF_Const)   
	uint8_t                                            NatType;                                       // 0x0019 (0x0001) [0x0000000000000001] (CPF_Const)   
	int32_t                                            TitleId;                                       // 0x001C (0x0004) [0x0000000000000001] (CPF_Const)   
	uint32_t                                           bIsLocal : 1;                                  // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)
	uint32_t                                           bIsInPartyVoice : 1;                           // 0x0020 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Const)
	uint32_t                                           bIsTalking : 1;                                // 0x0020 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Const)
	uint32_t                                           bIsInGameSession : 1;                          // 0x0020 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Const)
	uint32_t                                           bIsPlayingThisGame : 1;                        // 0x0020 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Const)
	struct FQWord                                      SessionId;                                     // 0x0024 (0x0008) [0x0000000000000001] (CPF_Const)   
	int32_t                                            Data1;                                         // 0x002C (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            Data2;                                         // 0x0030 (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            Data3;                                         // 0x0034 (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            Data4;                                         // 0x0038 (0x0004) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x0048
struct FAchievementDetails
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Const)   
	class FString                                      AchievementName;                               // 0x0004 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0014 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      HowTo;                                         // 0x0024 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class USurface*                                    Image;                                         // 0x0034 (0x0008) [0x0000000000000000]               
	uint8_t                                            MonthEarned;                                   // 0x003C (0x0001) [0x0000000000000001] (CPF_Const)   
	uint8_t                                            DayEarned;                                     // 0x003D (0x0001) [0x0000000000000001] (CPF_Const)   
	uint8_t                                            YearEarned;                                    // 0x003E (0x0001) [0x0000000000000001] (CPF_Const)   
	uint8_t                                            DayOfWeekEarned;                               // 0x003F (0x0001) [0x0000000000000001] (CPF_Const)   
	int32_t                                            GamerPoints;                                   // 0x0040 (0x0004) [0x0000000000000001] (CPF_Const)   
	uint32_t                                           bIsSecret : 1;                                 // 0x0044 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)
	uint32_t                                           bWasAchievedOnline : 1;                        // 0x0044 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Const)
	uint32_t                                           bWasAchievedOffline : 1;                       // 0x0044 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// 0x0014
struct FCommunityContentMetadata
{
	int32_t                                            ContentType;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FSettingsProperty>             MetadataItems;                                 // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// 0x0038
struct FCommunityContentFile
{
	int32_t                                            ContentId;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            FileId;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            ContentType;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            FileSize;                                      // 0x000C (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                Owner;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            DownloadCount;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              AverageRating;                                 // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            RatingCount;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            LastRatingGiven;                               // 0x0024 (0x0004) [0x0000000000000000]               
	class FString                                      LocalFilePath;                                 // 0x0028 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// 0x0024
struct FTitleFile
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            AsyncState;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	class TArray<uint8_t>                              Data;                                          // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.EmsFile
// 0x0034
struct FEmsFile
{
	class FString                                      Hash;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      DLName;                                        // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Filename;                                      // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            FileSize;                                      // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	class FName                                        InterfaceName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      InterfaceClassName;                            // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x002C
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SendingPlayerNick;                             // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bIsFriendInvite : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsGameInvite : 1;                             // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWasAccepted : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWasDenied : 1;                                // 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	class FString                                      Message;                                       // 0x001C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x0010
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              LastNotificationTime;                          // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasTalking : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsTalking : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsRegistered : 1;                             // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x0004
struct FLocalTalker
{
	uint32_t                                           bHasVoice : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasNetworkedVoice : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsRecognizingSpeech : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWasTalking : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIsTalking : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bIsRegistered : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x0010
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            TeamID;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x0018
struct FSpeechRecognizedWord
{
	int32_t                                            WordId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      WordText;                                      // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              Confidence;                                    // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x0068
struct FOnlineContent
{
	uint8_t                                            ContentType;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            UserIndex;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	uint32_t                                           bIsCorrupt : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            DeviceID;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            DLCPackId;                                     // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            LicenseMask;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      FriendlyName;                                  // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Filename;                                      // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      ContentPath;                                   // 0x0034 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ContentPackages;                               // 0x0044 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ContentFiles;                                  // 0x0054 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bCorrupt : 1;                                  // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bInvalid : 1;                                  // 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlineCrossTitleContent
// 0x0004 (0x0068 - 0x006C)
struct FOnlineCrossTitleContent : FOnlineContent
{
	int32_t                                            TitleId;                                       // 0x0068 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x0038
struct FOnlineFriend
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Const)   
	struct FQWord                                      SessionId;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Const)   
	class FString                                      NickName;                                      // 0x0010 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      PresenceInfo;                                  // 0x0020 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            FriendState;                                   // 0x0030 (0x0001) [0x0000000000000001] (CPF_Const)   
	uint32_t                                           bIsOnline : 1;                                 // 0x0034 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)
	uint32_t                                           bIsPlaying : 1;                                // 0x0034 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Const)
	uint32_t                                           bIsPlayingThisGame : 1;                        // 0x0034 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Const)
	uint32_t                                           bIsJoinable : 1;                               // 0x0034 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Const)
	uint32_t                                           bHasVoiceSupport : 1;                          // 0x0034 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Const)
	uint32_t                                           bHaveInvited : 1;                              // 0x0034 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bHasInvitedYou : 1;                            // 0x0034 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineStoreContentOffering
// 0x0068
struct FOnlineStoreContentOffering
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      PromoText;                                     // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      ProductPurchaseId;                             // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Price;                                         // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      ListPrice;                                     // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Quantity;                                      // 0x0060 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBuyable : 1;                                  // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlineStoreContent
// 0x004C
struct FOnlineStoreContent
{
	class FString                                      ProductId;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      ProductName;                                   // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      ProductDescription;                            // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bConsumable : 1;                               // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOwned : 1;                                    // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            CurrentQuantity;                               // 0x0034 (0x0004) [0x0000000000000000]               
	uint8_t                                            ContentState;                                  // 0x0038 (0x0001) [0x0000000000000000]               
	class TArray<struct FOnlineStoreContentOffering>   Offerings;                                     // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x000C
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsFriend : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineAuthInterface.BaseAuthSession
// 0x0010
struct FBaseAuthSession
{
	int32_t                                            EndPointIP;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            EndPointPort;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Const)   
	struct FUniqueNetId                                EndPointUID;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.AccessControl.PendingClientAuth
// 0x0018
struct FPendingClientAuth
{
	class UPlayer*                                     ClientConnection;                              // 0x0000 (0x0008) [0x0000000000000000]               
	struct FUniqueNetId                                ClientUID;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              AuthTimestamp;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            AuthRetryCount;                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AccessControl.ServerAuthRetry
// 0x000C
struct FServerAuthRetry
{
	struct FUniqueNetId                                ClientUID;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            AuthRetryCount;                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineAuthInterface.AuthSession
// 0x0008 (0x0010 - 0x0018)
struct FAuthSession : FBaseAuthSession
{
	uint8_t                                            AuthStatus;                                    // 0x0010 (0x0001) [0x0000000000000001] (CPF_Const)   
	int32_t                                            AuthTicketUID;                                 // 0x0014 (0x0004) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.OnlineAuthInterface.LocalAuthSession
// 0x0004 (0x0010 - 0x0014)
struct FLocalAuthSession : FBaseAuthSession
{
	int32_t                                            SessionUID;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	uint32_t                                           bOpaque : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMasked : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bTranslucency : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDistortion : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOneLayerDistortionRelevance : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bInheritDominantShadowsRelevance : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bLit : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bUsesSceneColor : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bSceneTextureRenderBehindTranslucency : 1;     // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bDynamicLitTranslucencyPrepass : 1;            // 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bDynamicLitTranslucencyPostRenderDepthPass : 1;// 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bSoftMasked : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bTranslucencyDoF : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bModulated : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bSSS : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bScatterDensity : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bBlurDirection : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bRenderAsPointCloud : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bRenderAsMapPointCloud : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct FRBCollisionChannelContainer
{
	uint32_t                                           Default : 1;                                   // 0x0000 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           Nothing : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Const)
	uint32_t                                           Pawn : 1;                                      // 0x0000 (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           Vehicle : 1;                                   // 0x0000 (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           Water : 1;                                     // 0x0000 (0x0004) [0x0000000100000001] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           GameplayPhysics : 1;                           // 0x0000 (0x0004) [0x0000000100000001] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           EffectPhysics : 1;                             // 0x0000 (0x0004) [0x0000000100000001] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           FloatingRaft : 1;                              // 0x0000 (0x0004) [0x0000000100000001] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           Gargoyles : 1;                                 // 0x0000 (0x0004) [0x0000000100000001] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           PawnRagdoll : 1;                               // 0x0000 (0x0004) [0x0000000100000001] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           Rope : 1;                                      // 0x0000 (0x0004) [0x0000000100000001] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           Cloth : 1;                                     // 0x0000 (0x0004) [0x0000000100000001] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           CapeOnlyCollision : 1;                         // 0x0000 (0x0004) [0x0000000100000001] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           PropStaticChunks : 1;                          // 0x0000 (0x0004) [0x0000000100000001] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           FlyingVehicle : 1;                             // 0x0000 (0x0004) [0x0000000100000001] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           BlockingVolume : 1;                            // 0x0000 (0x0004) [0x0000000100000001] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           DeadPawn : 1;                                  // 0x0000 (0x0004) [0x0000000100000001] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           Clothing : 1;                                  // 0x0000 (0x0004) [0x0000000100000001] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           ClothingCollision : 1;                         // 0x0000 (0x0004) [0x0000000100000001] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           FlexAsset : 1;                                 // 0x0000 (0x0004) [0x0000000100000001] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           Cape : 1;                                      // 0x0000 (0x0004) [0x0000000100000001] [0x00100000] (CPF_Edit | CPF_Const)
	uint32_t                                           CinematicCape : 1;                             // 0x0000 (0x0004) [0x0000000100000001] [0x00200000] (CPF_Edit | CPF_Const)
	uint32_t                                           PawnRagdollStrungUp : 1;                       // 0x0000 (0x0004) [0x0000000100000001] [0x00400000] (CPF_Edit | CPF_Const)
	uint32_t                                           Projectile : 1;                                // 0x0000 (0x0004) [0x0000000100000001] [0x00800000] (CPF_Edit | CPF_Const)
	uint32_t                                           PropDynamicChunks : 1;                         // 0x0000 (0x0004) [0x0000000100000001] [0x01000000] (CPF_Edit | CPF_Const)
	uint32_t                                           Grate : 1;                                     // 0x0000 (0x0004) [0x0000000100000001] [0x02000000] (CPF_Edit | CPF_Const)
	uint32_t                                           Prop : 1;                                      // 0x0000 (0x0004) [0x0000000100000001] [0x04000000] (CPF_Edit | CPF_Const)
	uint32_t                                           MagneticDynamicObjects : 1;                    // 0x0000 (0x0004) [0x0000000100000001] [0x08000000] (CPF_Edit | CPF_Const)
	uint32_t                                           MagneticProp : 1;                              // 0x0000 (0x0004) [0x0000000100000001] [0x10000000] (CPF_Edit | CPF_Const)
	uint32_t                                           VehicleBlocker : 1;                            // 0x0000 (0x0004) [0x0000000100000001] [0x20000000] (CPF_Edit | CPF_Const)
	uint32_t                                           RobinCape : 1;                                 // 0x0000 (0x0004) [0x0000000100000001] [0x40000000] (CPF_Edit | CPF_Const)
	uint32_t                                           PhysicsPuzzleObject : 1;                       // 0x0000 (0x0004) [0x0000000100000001] [0x80000000] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.PrimitiveComponent.PhysXShapeFilterFlagsContainer
// 0x0004
struct FPhysXShapeFilterFlagsContainer
{
	uint32_t                                           NotifyOnCollision : 1;                         // 0x0000 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint32_t                                           DisableCollisionResponse : 1;                  // 0x0000 (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
	uint32_t                                           UsePairwiseCollisionFilter : 1;                // 0x0000 (0x0004) [0x0000000000000400] [0x00000004] (CPF_Transient)
	uint32_t                                           ContactModification : 1;                       // 0x0000 (0x0004) [0x0000000000000400] [0x00000008] (CPF_Transient)
	uint32_t                                           DoNotNotifyOnCollisionWithVehicle : 1;         // 0x0000 (0x0004) [0x0000000000000400] [0x00000010] (CPF_Transient)
	uint32_t                                           HasCollidedWithFloor : 1;                      // 0x0000 (0x0004) [0x0000000000000400] [0x00000020] (CPF_Transient)
	uint32_t                                           NotifyOnSelfCollision : 1;                     // 0x0000 (0x0004) [0x0000000000000400] [0x00000040] (CPF_Transient)
	uint32_t                                           ForceDisableContactModification : 1;           // 0x0000 (0x0004) [0x0000000000000400] [0x00000080] (CPF_Transient)
	uint32_t                                           CapeCollisionTrigger : 1;                      // 0x0000 (0x0004) [0x0000000000000400] [0x00000100] (CPF_Transient)
	uint32_t                                           DetachedVehiclePart : 1;                       // 0x0000 (0x0004) [0x0000000000000400] [0x00000200] (CPF_Transient)
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0004
struct FLightingChannelContainer
{
	uint32_t                                           bInitialized : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           BSP : 1;                                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           Static : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           Dynamic : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           CompositeDynamic : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           Skybox : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           Unnamed : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           Unnamed01 : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           Unnamed02 : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           Cinematic : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           Cinematic01 : 1;                               // 0x0000 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           Cinematic02 : 1;                               // 0x0000 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           Cinematic03 : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           Cinematic04 : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           Cinematic05 : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           Cinematic06 : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           Cinematic07 : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           Cinematic08 : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           Cinematic09 : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           Gameplay : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           Gameplay01 : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           StaticProp : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           Crowd : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           Door : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           Plant : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           Prop : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           Character : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x04000000] (CPF_Edit)
	uint32_t                                           CinematicExclusive : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x08000000] 
	uint32_t                                           CinematicExclusive01 : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x10000000] 
	uint32_t                                           TVExclusive : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x20000000] 
	uint32_t                                           PhysX : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x40000000] 
};

// ScriptStruct Engine.ApexDynamicGridComponent.SCSelfShadowingSpotlightParams
// 0x0038
struct FSCSelfShadowingSpotlightParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              saturationDensity;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Direction;                                     // 0x0008 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     LocationOffset;                                // 0x0014 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              FOV;                                           // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NearPlane;                                     // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FarPlane;                                      // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            RealColumns;                                   // 0x002C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            VirtualColumns;                                // 0x002D (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            ColumnDepthResolution;                         // 0x002E (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              shadowCouplingTimeConstant;                    // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SampleOffset;                                  // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDynamicGridComponent.SCSelfShadowingParams
// 0x0018
struct FSCSelfShadowingParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              saturationDensity;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            directionToLight;                              // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              rawDensityWeight;                              // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              shadowMinDensity;                              // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              shadowCouplingTimeConstant;                    // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDynamicGridComponent.SCMacCormackAdvectionParams
// 0x0008
struct FSCMacCormackAdvectionParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              Sharpness;                                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDynamicGridComponent.SCStochasticParticleAdvectionParams
// 0x000C
struct FSCStochasticParticleAdvectionParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              SpatialStandardDeviation;                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              VelocityStandardDeviation;                     // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDynamicGridComponent.SCMultigridParams
// 0x0010
struct FSCMultigridParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            Levels;                                        // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            FineIterations;                                // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            CoarseIterations;                              // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDynamicGridComponent.SCBuoyancyAdvancedParams
// 0x0010
struct FSCBuoyancyAdvancedParams
{
	float                                              rawDensityWeight;                              // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              forceBias;                                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              forceMaximum;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              forceMinimum;                                  // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDynamicGridComponent.SCExpansionAdvancedParams
// 0x0010
struct FSCExpansionAdvancedParams
{
	float                                              rawDensityWeight;                              // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              rateBias;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              rateMaximum;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              rateMinimum;                                   // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDynamicGridComponent.SCDensityParams
// 0x0050
struct FSCDensityParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              smoothingRate;                                 // 0x0004 (0x0004) [0x0000000100080000] (CPF_Edit | CPF_Deprecated)
	int32_t                                            smoothingIterations;                           // 0x0008 (0x0004) [0x0000000100080000] (CPF_Edit | CPF_Deprecated)
	struct FSCMultigridParams                          multigrid;                                     // 0x000C (0x0010) [0x0000000100080000] (CPF_Edit | CPF_Deprecated)
	float                                              smoothingRadius;                               // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              saturationThreshold;                           // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              GammaCorrection;                               // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Buoyancy;                                      // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FSCBuoyancyAdvancedParams                   BuoyancyAdvanced;                              // 0x002C (0x0010) [0x0000000100000000] (CPF_Edit)    
	float                                              Expansion;                                     // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FSCExpansionAdvancedParams                  ExpansionAdvanced;                             // 0x0040 (0x0010) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDynamicGridComponent.SCGridToParticleCouplingParams
// 0x000C
struct FSCGridToParticleCouplingParams
{
	float                                              accelTimeConstant;                             // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              decelTimeConstant;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              thresholdMultiplier;                           // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDynamicGridComponent.SCParticleToGridCouplingParams
// 0x000C
struct FSCParticleToGridCouplingParams
{
	float                                              accelTimeConstant;                             // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              decelTimeConstant;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              thresholdMultiplier;                           // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ActorFactoryApexDynamicGrid.SFSelfShadowingSpotlightParams
// 0x0038
struct FSFSelfShadowingSpotlightParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              saturationDensity;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Direction;                                     // 0x0008 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     LocationOffset;                                // 0x0014 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              FOV;                                           // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NearPlane;                                     // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FarPlane;                                      // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            RealColumns;                                   // 0x002C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            VirtualColumns;                                // 0x002D (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            ColumnDepthResolution;                         // 0x002E (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              shadowCouplingTimeConstant;                    // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SampleOffset;                                  // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ActorFactoryApexDynamicGrid.SFSelfShadowingParams
// 0x0018
struct FSFSelfShadowingParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              saturationDensity;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            directionToLight;                              // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              rawDensityWeight;                              // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              shadowMinDensity;                              // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              shadowCouplingTimeConstant;                    // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ActorFactoryApexDynamicGrid.SFMacCormackAdvectionParams
// 0x0008
struct FSFMacCormackAdvectionParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              Sharpness;                                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ActorFactoryApexDynamicGrid.SFStochasticParticleAdvectionParams
// 0x000C
struct FSFStochasticParticleAdvectionParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              SpatialStandardDeviation;                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              VelocityStandardDeviation;                     // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ActorFactoryApexDynamicGrid.SFMultigridParams
// 0x0010
struct FSFMultigridParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            Levels;                                        // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            FineIterations;                                // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            CoarseIterations;                              // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ActorFactoryApexDynamicGrid.SFBuoyancyAdvancedParams
// 0x0010
struct FSFBuoyancyAdvancedParams
{
	float                                              rawDensityWeight;                              // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              forceBias;                                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              forceMaximum;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              forceMinimum;                                  // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ActorFactoryApexDynamicGrid.SFExpansionAdvancedParams
// 0x0010
struct FSFExpansionAdvancedParams
{
	float                                              rawDensityWeight;                              // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              rateBias;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              rateMaximum;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              rateMinimum;                                   // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ActorFactoryApexDynamicGrid.SFDensityParams
// 0x0050
struct FSFDensityParams
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              smoothingRate;                                 // 0x0004 (0x0004) [0x0000000100080000] (CPF_Edit | CPF_Deprecated)
	int32_t                                            smoothingIterations;                           // 0x0008 (0x0004) [0x0000000100080000] (CPF_Edit | CPF_Deprecated)
	struct FSFMultigridParams                          multigrid;                                     // 0x000C (0x0010) [0x0000000100080000] (CPF_Edit | CPF_Deprecated)
	float                                              smoothingRadius;                               // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              saturationThreshold;                           // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              GammaCorrection;                               // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Buoyancy;                                      // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FSFBuoyancyAdvancedParams                   BuoyancyAdvanced;                              // 0x002C (0x0010) [0x0000000100000000] (CPF_Edit)    
	float                                              Expansion;                                     // 0x003C (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FSFExpansionAdvancedParams                  ExpansionAdvanced;                             // 0x0040 (0x0010) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ActorFactoryApexDynamicGrid.SFGridToParticleCouplingParams
// 0x000C
struct FSFGridToParticleCouplingParams
{
	float                                              accelTimeConstant;                             // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              decelTimeConstant;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              thresholdMultiplier;                           // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ActorFactoryApexDynamicGrid.SFParticleToGridCouplingParams
// 0x000C
struct FSFParticleToGridCouplingParams
{
	float                                              accelTimeConstant;                             // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              decelTimeConstant;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              thresholdMultiplier;                           // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexGridComponent.SGridIntRange
// 0x0008
struct FSGridIntRange
{
	float                                              Min;                                           // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Max;                                           // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexGridComponent.SGridFloatRange
// 0x0008
struct FSGridFloatRange
{
	float                                              Min;                                           // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Max;                                           // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0010
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Destination;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x0038
struct FTViewTarget
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AController*                                 Controller;                                    // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FTPOV                                       POV;                                           // 0x0010 (0x001C) [0x0000000100000000] (CPF_Edit)    
	float                                              AspectRatio;                                   // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class APlayerReplicationInfo*                      PRI;                                           // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// 0x0024
struct FLUTBlender
{
	class TArray<class UTexture*>                      LUTTextures;                                   // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                LUTWeights;                                    // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bHasChanged : 1;                               // 0x0020 (0x0004) [0x0000000000000601] [0x00000001] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x020C
struct FPostProcessSettings
{
	struct FVector                                     levelOffsetCached;                             // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           bOverride_InterpolateOverDistance : 1;         // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_InterpolateOverDistanceFade : 1;     // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_bEnableHighQualityDOF : 1;           // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_EnableBloom : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverride_EnableDOF : 1;                       // 0x000C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bOverride_EnableMotionBlur : 1;                // 0x000C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bOverride_EnableSceneEffect : 1;               // 0x000C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bOverride_AllowAmbientOcclusion : 1;           // 0x000C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bOverride_BloomOverload : 1;                   // 0x000C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bOverride_BloomLowerCut : 1;                   // 0x000C (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bOverride_DOF_ApertureStop : 1;                // 0x000C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bOverride_DOF_FocusDistance : 1;               // 0x000C (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bOverride_DOF_InterpolationDuration : 1;       // 0x000C (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bOverride_MotionBlur_MaxVelocity : 1;          // 0x000C (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bOverride_MotionBlur_Amount : 1;               // 0x000C (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bOverride_MotionBlur_FullMotionBlur : 1;       // 0x000C (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bOverride_MotionBlur_CameraRotationThreshold : 1;// 0x000C (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bOverride_MotionBlur_CameraTranslationThreshold : 1;// 0x000C (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bOverride_MotionBlur_InterpolationDuration : 1;// 0x000C (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bOverride_Scene_Desaturation : 1;              // 0x000C (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bOverride_Scene_Colorize : 1;                  // 0x000C (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bOverride_Scene_ImageGrainScale : 1;           // 0x000C (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bOverride_Scene_HighLights : 1;                // 0x000C (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bOverride_Scene_MidTones : 1;                  // 0x000C (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bOverride_Scene_Shadows : 1;                   // 0x000C (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bOverride_Scene_InterpolationDuration : 1;     // 0x000C (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bOverride_Scene_ColorGradingLUT : 1;           // 0x000C (0x0004) [0x0000000000000000] [0x04000000] 
	uint32_t                                           bEnableInterpolateOverDistance : 1;            // 0x000C (0x0004) [0x0000000100000000] [0x08000000] (CPF_Edit)
	float                                              InterpolateOverDistanceFade;                   // 0x0010 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_MobileColorGrading : 1;              // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableBloom : 1;                              // 0x0014 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bEnableDOF : 1;                                // 0x0014 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnableHighQualityDOF : 1;                     // 0x0014 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bEnableMotionBlur : 1;                         // 0x0014 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bEnableSceneEffect : 1;                        // 0x0014 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bAllowAmbientOcclusion : 1;                    // 0x0014 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bOverride_EnableAtmosD1 : 1;                   // 0x0014 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bAtmosD1 : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bOverride_EnableAtmosD1Col : 1;                // 0x0014 (0x0004) [0x0000000000000000] [0x00000200] 
	struct FColor                                      AtmosD1_Colour;                                // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverride_EnableAtmosD1Den : 1;                // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosD1_Density;                               // 0x0020 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosD1Start : 1;              // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosD1_DistanceStart;                         // 0x0028 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosD1End : 1;                // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosD1_DistanceEnd;                           // 0x0030 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosD2 : 1;                   // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAtmosD2 : 1;                                  // 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_EnableAtmosD2Col : 1;                // 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FColor                                      AtmosD2_Colour;                                // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverride_EnableAtmosD2Den : 1;                // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosD2_Density;                               // 0x0040 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosD2Start : 1;              // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosD2_DistanceStart;                         // 0x0048 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosD2End : 1;                // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosD2_DistanceEnd;                           // 0x0050 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosH1 : 1;                   // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAtmosH1 : 1;                                  // 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_EnableAtmosH1Col : 1;                // 0x0054 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FColor                                      AtmosH1_Colour;                                // 0x0058 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverride_EnableAtmosH1Den : 1;                // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosH1_Density;                               // 0x0060 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosH1Size : 1;               // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosH1_GradientSize;                          // 0x0068 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosH1Pos : 1;                // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosH1_GradientPosition;                      // 0x0070 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosH2 : 1;                   // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAtmosH2 : 1;                                  // 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_EnableAtmosH2Col : 1;                // 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FColor                                      AtmosH2_Colour;                                // 0x0078 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverride_EnableAtmosH2Den : 1;                // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosH2_Density;                               // 0x0080 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosH2Size : 1;               // 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosH2_GradientSize;                          // 0x0088 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosH2Pos : 1;                // 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosH2_GradientPosition;                      // 0x0090 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosGlobal_Gradient_Colour : 1;// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      AtmosGlobal_Gradient_Colour;                   // 0x0098 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverride_EnableAtmosGlobal_Gradient_Direction : 1;// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     AtmosGlobal_Gradient_Direction;                // 0x00A0 (0x000C) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosGlobal_Gradient_Density : 1;// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosGlobal_Gradient_Density;                  // 0x00B0 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosGlobal_Gradient_Cosine : 1;// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AtmosGlobal_Gradient_Cosine;                   // 0x00B8 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosHazeWeight : 1;           // 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_EnableAtmosHazeNear : 1;             // 0x00BC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_EnableAtmosHazeFar : 1;              // 0x00BC (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              AtmosHazeWeight;                               // 0x00C0 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              AtmosHazeNear;                                 // 0x00C4 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              AtmosHazeFar;                                  // 0x00C8 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosAmbientD1 : 1;            // 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_EnableAtmosAmbientD2 : 1;            // 0x00CC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_EnableAtmosAmbientH1 : 1;            // 0x00CC (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_EnableAtmosAmbientH2 : 1;            // 0x00CC (0x0004) [0x0000000000000000] [0x00000008] 
	struct FLinearColor                                AtmosAmbientD1;                                // 0x00D0 (0x0010) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FLinearColor                                AtmosAmbientD2;                                // 0x00E0 (0x0010) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FLinearColor                                AtmosAmbientH1;                                // 0x00F0 (0x0010) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FLinearColor                                AtmosAmbientH2;                                // 0x0100 (0x0010) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosNoiseD1 : 1;              // 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_EnableAtmosNoiseD2 : 1;              // 0x0110 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_EnableAtmosNoiseH1 : 1;              // 0x0110 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_EnableAtmosNoiseH2 : 1;              // 0x0110 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              AtmosNoiseD1;                                  // 0x0114 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              AtmosNoiseD2;                                  // 0x0118 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              AtmosNoiseH1;                                  // 0x011C (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              AtmosNoiseH2;                                  // 0x0120 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_EnableAtmosHeightMapModD1 : 1;       // 0x0124 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_EnableAtmosHeightMapModD2 : 1;       // 0x0124 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_EnableAtmosHeightMapModH1 : 1;       // 0x0124 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_EnableAtmosHeightMapModH2 : 1;       // 0x0124 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     AtmosHeightMapModD1;                           // 0x0128 (0x000C) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FVector                                     AtmosHeightMapModD2;                           // 0x0134 (0x000C) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FVector                                     AtmosHeightMapModH1;                           // 0x0140 (0x000C) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FVector                                     AtmosHeightMapModH2;                           // 0x014C (0x000C) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_ExposureAutoBracketing : 1;          // 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ExposureAutoBracketing;                        // 0x015C (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           bOverride_ExposureBaseOffset : 1;              // 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ExposureBaseOffset;                            // 0x0164 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              BloomOverload;                                 // 0x0168 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              BloomLowerCut;                                 // 0x016C (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              DOF_ApertureStop;                              // 0x0170 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              DOF_FocusDistance;                             // 0x0174 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              DOF_InterpolationDuration;                     // 0x0178 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MotionBlur_MaxVelocity;                        // 0x017C (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              MotionBlur_Amount;                             // 0x0180 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	uint32_t                                           MotionBlur_FullMotionBlur : 1;                 // 0x0184 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              MotionBlur_CameraRotationThreshold;            // 0x0188 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              MotionBlur_CameraTranslationThreshold;         // 0x018C (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              MotionBlur_InterpolationDuration;              // 0x0190 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Scene_Desaturation;                            // 0x0194 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FVector                                     Scene_Colorize;                                // 0x0198 (0x000C) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              Scene_ImageGrainScale;                         // 0x01A4 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FLinearColor                                Scene_HighLights;                              // 0x01A8 (0x0010) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FLinearColor                                Scene_MidTones;                                // 0x01B8 (0x0010) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FLinearColor                                Scene_Shadows;                                 // 0x01C8 (0x0010) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              Scene_InterpolationDuration;                   // 0x01D8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UTexture*                                    ColorGrading_LookupTable;                      // 0x01DC (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FLUTBlender                                 ColorGradingLUT;                               // 0x01E4 (0x0024) [0x0000000000010401] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           bOverride_CompositeViewModeBeforeBlur : 1;     // 0x0208 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCompositeViewModeBeforeBlur : 1;              // 0x0208 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.EngineBaseTypes.RenderingPerformanceOverrides
// 0x0004
struct FRenderingPerformanceOverrides
{
	uint32_t                                           bAllowAmbientOcclusion : 1;                    // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowDominantWholeSceneDynamicShadows : 1;    // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bAllowMotionBlurSkinning : 1;                  // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bAllowTemporalAA : 1;                          // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bAllowLightShafts : 1;                         // 0x0000 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                     // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            BlendFunction;                                 // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              BlendExp;                                      // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bLockOutgoing : 1;                             // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bResetCameraBehindPlayer : 1;                  // 0x000C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bKeepBatmanOnScreen : 1;                       // 0x000C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bDisableCamerCollisionDuringBlend : 1;         // 0x000C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FTPOV                                       POV;                                           // 0x0004 (0x001C) [0x0000000000000000]               
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x000C
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            InputLinkIdx;                                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x0040
struct FSeqOpOutputLink
{
	class TArray<struct FSeqOpOutputInputLink>         Links;                                         // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class USequenceOp*                                 LinkedOp;                                      // 0x0020 (0x0008) [0x0000000000000000]               
	float                                              ActivateDelay;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x002C (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	uint32_t                                           bHidden : 1;                                   // 0x0030 (0x0004) [0x0000080000000000] [0x00000001] (CPF_EditorOnly)
	uint32_t                                           bHasImpulse : 1;                               // 0x0030 (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
	uint32_t                                           bDisabled : 1;                                 // 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDisabledPIE : 1;                              // 0x0030 (0x0004) [0x0000080000000000] [0x00000008] (CPF_EditorOnly)
	uint32_t                                           bMoving : 1;                                   // 0x0030 (0x0004) [0x0000080000000400] [0x00000010] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x0030 (0x0004) [0x0000080000000000] [0x00000020] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x0030 (0x0004) [0x0000080000000000] [0x00000040] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x0034 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	float                                              PIEActivationTime;                             // 0x0038 (0x0004) [0x0000080000000400] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bIsActivated : 1;                              // 0x003C (0x0004) [0x0000080000440400] [0x00000001] (CPF_Transient | CPF_NoImport | CPF_NonTransactional | CPF_EditorOnly)
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x0060
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class USequenceVariable*>             LinkedVariables;                               // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        LinkVar;                                       // 0x0028 (0x0008) [0x0000000000000000]               
	class FName                                        StructPropertyName;                            // 0x0030 (0x0008) [0x0000000000000000]               
	class FName                                        PropertyName;                                  // 0x0038 (0x0008) [0x0000000000000000]               
	int32_t                                            MinVars;                                       // 0x0040 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	int32_t                                            MaxVars;                                       // 0x0044 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	int32_t                                            DrawX;                                         // 0x0048 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	class UProperty*                                   CachedProperty;                                // 0x004C (0x0008) [0x0000000000000401] (CPF_Const | CPF_Transient)
	int32_t                                            CachedPropertyOffset;                          // 0x0054 (0x0004) [0x0000000000000401] (CPF_Const | CPF_Transient)
	uint32_t                                           bWriteable : 1;                                // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSequenceNeverReadsOnlyWritesToThisVar : 1;    // 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bModifiesLinkedObject : 1;                     // 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bHidden : 1;                                   // 0x0058 (0x0004) [0x0000080000000000] [0x00000008] (CPF_EditorOnly)
	uint32_t                                           bMustBeLinked : 1;                             // 0x0058 (0x0004) [0x0000080000000000] [0x00000010] (CPF_EditorOnly)
	uint32_t                                           bAllowAnyType : 1;                             // 0x0058 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bMoving : 1;                                   // 0x0058 (0x0004) [0x0000080000000400] [0x00000040] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x0058 (0x0004) [0x0000080000000000] [0x00000080] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x0058 (0x0004) [0x0000080000000000] [0x00000100] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x005C (0x0004) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x0034
struct FSeqEventLink
{
	class UClass*                                      ExpectedType;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class USequenceEvent*>                LinkedEvents;                                  // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            DrawX;                                         // 0x0028 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	uint32_t                                           bHidden : 1;                                   // 0x002C (0x0004) [0x0000080000000000] [0x00000001] (CPF_EditorOnly)
	uint32_t                                           bMoving : 1;                                   // 0x002C (0x0004) [0x0000080000000400] [0x00000002] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x002C (0x0004) [0x0000080000000000] [0x00000004] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x002C (0x0004) [0x0000080000000000] [0x00000008] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x0030 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x000E
struct FOnlineGameSearchParameter
{
	int32_t                                            EntryId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        ObjectPropertyName;                            // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            EntryType;                                     // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            ComparisonType;                                // 0x000D (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                         // 0x000E (0x0002) ADDED PADDING
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x0010
struct FOnlineGameSearchORClause
{
	class TArray<struct FOnlineGameSearchParameter>    OrParams;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x000E
struct FOnlineGameSearchSortClause
{
	int32_t                                            EntryId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        ObjectPropertyName;                            // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            EntryType;                                     // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            SortType;                                      // 0x000D (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                         // 0x000E (0x0002) ADDED PADDING
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x0020
struct FOnlineGameSearchQuery
{
	class TArray<struct FOnlineGameSearchORClause>     OrClauses;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineGameSearchSortClause>   SortClauses;                                   // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// 0x0034
struct FOverrideSkill
{
	int32_t                                            LeaderboardId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FUniqueNetId>                  Players;                                       // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FDouble>                       Mus;                                           // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FDouble>                       Sigmas;                                        // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x0018
struct FNamedObjectProperty
{
	class FName                                        ObjectPropertyName;                            // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      ObjectPropertyValue;                           // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x0010
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Const)   
	struct FPointer                                    PlatformData;                                  // 0x0008 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0054
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     SrcActorOffset;                                // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     SrcActorDesiredOffset;                         // 0x0014 (0x000C) [0x0000000000000000]               
	class FString                                      DebugText;                                     // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              TimeRemaining;                                 // 0x0030 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              Duration;                                      // 0x0034 (0x0004) [0x0000000000000000]               
	struct FColor                                      TextColor;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAbsoluteLocation : 1;                         // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bKeepAttachedToActor : 1;                      // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     OrigActorLocation;                             // 0x0040 (0x000C) [0x0000000000000000]               
	class UFont*                                       Font;                                          // 0x004C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerController.ConnectedPeerInfo
// 0x0010
struct FConnectedPeerInfo
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            NatType;                                       // 0x0008 (0x0001) [0x0000000000000000]               
	uint32_t                                           bLostConnectionToHost : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0035
struct FClientAdjustment
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            newPhysics;                                    // 0x0004 (0x0001) [0x0000000000000000]               
	struct FVector                                     NewLoc;                                        // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     NewVel;                                        // 0x0014 (0x000C) [0x0000000000000000]               
	class AActor*                                      NewBase;                                       // 0x0020 (0x0008) [0x0000000000000000]               
	struct FVector                                     NewFloor;                                      // 0x0028 (0x000C) [0x0000000000000000]               
	uint8_t                                            bAckGoodMove;                                  // 0x0034 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0035 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x0008
struct FWaveformSample
{
	uint8_t                                            LeftAmplitude;                                 // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            RightAmplitude;                                // 0x0001 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            LeftFunction;                                  // 0x0002 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            RightFunction;                                 // 0x0003 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              Value;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeDelta;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x000D (0x0003) ADDED PADDING
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x0048
struct FInputMatchRequest
{
	class TArray<struct FInputEntry>                   Inputs;                                        // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class AActor*                                      MatchActor;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	class FName                                        MatchFuncName;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             MatchDelegate;                                 // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        FailedFuncName;                                // 0x0030 (0x0008) [0x0000000000000000]               
	class FName                                        RequestName;                                   // 0x0038 (0x0008) [0x0000000000000000]               
	int32_t                                            MatchIdx;                                      // 0x0040 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              LastMatchTime;                                 // 0x0044 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// 0x0040
struct FKismetDrawTextInfo
{
	class FString                                      MessageText;                                   // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      AppendedText;                                  // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UFont*                                       MessageFont;                                   // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   MessageFontScale;                              // 0x0028 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   MessageOffset;                                 // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FColor                                      MessageColor;                                  // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MessageEndTime;                                // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0020
struct FConsoleMessage
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FColor                                      TextColor;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              MessageLife;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class APlayerReplicationInfo*                      PRI;                                           // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.HUD.HudLocalizedMessage
// 0x0050
struct FHudLocalizedMessage
{
	class UClass*                                      Message;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      StringMessage;                                 // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Switch;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              EndOfLife;                                     // 0x001C (0x0004) [0x0000000000000000]               
	float                                              Lifetime;                                      // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              PosY;                                          // 0x0024 (0x0004) [0x0000000000000000]               
	struct FColor                                      DrawColor;                                     // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            FontSize;                                      // 0x002C (0x0004) [0x0000000000000000]               
	class UFont*                                       StringFont;                                    // 0x0030 (0x0008) [0x0000000000000000]               
	float                                              DX;                                            // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              DY;                                            // 0x003C (0x0004) [0x0000000000000000]               
	uint32_t                                           Drawn : 1;                                     // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Count;                                         // 0x0044 (0x0004) [0x0000000000000000]               
	class UObject*                                     OptionalObject;                                // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x0008
struct FAutomatedTestingDatum
{
	int32_t                                            NumberOfMatchesPlayed;                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumMapListCyclesDone;                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationPoint.DebugNavCost
// 0x0014
struct FDebugNavCost
{
	class FString                                      Desc;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Cost;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x0039
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                   // 0x0000 (0x001C) [0x0000000000000000]               
	struct FVector                                     BoxCenter;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FPointer                                    OctreeNode;                                    // 0x0028 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	class UObject*                                     Owner;                                         // 0x0030 (0x0008) [0x0000000000020001] (CPF_Const | CPF_NoExport)
	uint8_t                                            OwnerType;                                     // 0x0038 (0x0001) [0x0000000000020001] (CPF_Const | CPF_NoExport)
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0039 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.NavigationPoint.CheckpointRecord
// 0x0004
struct ANavigationPoint_FCheckpointRecord
{
	uint32_t                                           bDisabled : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlocked : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x0048
struct FKSphereElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	float                                              Radius;                                        // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bNoRBCollision : 1;                            // 0x0044 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x0044 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bNoClipNavMesh : 1;                            // 0x0044 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bOptionalRBCollision : 1;                      // 0x0044 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint8_t                                            MinStructAlignment[0x8];                         // 0x0048 (0x0008) ADDED PADDING
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x0050
struct FKBoxElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	float                                              X;                                             // 0x0040 (0x0004) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	float                                              Y;                                             // 0x0044 (0x0004) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	float                                              Z;                                             // 0x0048 (0x0004) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bIsAxisAligned : 1;                            // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasCookedAlignmentData : 1;                   // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNoRBCollision : 1;                            // 0x004C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x004C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bNoClipNavMesh : 1;                            // 0x004C (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bOptionalRBCollision : 1;                      // 0x004C (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bInterVehicleCollision : 1;                    // 0x004C (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x004C
struct FKSphylElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	float                                              Radius;                                        // 0x0040 (0x0004) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	float                                              Length;                                        // 0x0044 (0x0004) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x0048 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x0048 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bNoClipNavMesh : 1;                            // 0x0048 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bOptionalRBCollision : 1;                      // 0x0048 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint8_t                                            MinStructAlignment[0x4];                         // 0x004C (0x0004) ADDED PADDING
};

// ScriptStruct Engine.KMeshProps.KConvexVert
// 0x0010
struct FKConvexVert
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	int32_t                                            ShapeIndex;                                    // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x0098
struct FKConvexElem
{
	class TArray<struct FVector>                       VertexData;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FPlane>                        PermutedVertexData;                            // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              FaceTriData;                                   // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       EdgeDirections;                                // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       FaceNormalDirections;                          // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FPlane>                        FacePlaneData;                                 // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              BevelPlaneData;                                // 0x0060 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FBox                                        ElemBox;                                       // 0x0070 (0x001C) [0x0000000000000000]               
	int32_t                                            AutoGenShapeIndex;                             // 0x008C (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	float                                              ContactOffsetOverride;                         // 0x0090 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bNoRBCollision : 1;                            // 0x0094 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bNoClipNavMesh : 1;                            // 0x0094 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bOptionalRBCollision : 1;                      // 0x0094 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bAutoGenerated : 1;                            // 0x0094 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Const)
	uint32_t                                           bInterVehicleCollision : 1;                    // 0x0094 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x006C
struct FKAggregateGeom
{
	class TArray<struct FKSphereElem>                  SphereElems;                                   // 0x0000 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKBoxElem>                     BoxElems;                                      // 0x0010 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKSphylElem>                   SphylElems;                                    // 0x0020 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKConvexElem>                  ConvexElems;                                   // 0x0030 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKConvexElem>                  BoxMirrorConvexElems;                          // 0x0040 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKConvexVert>                  ConvexVerts;                                   // 0x0050 (0x0010) [0x0000080300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink | CPF_EditorOnly)
	struct FPointer                                    RenderInfo;                                    // 0x0060 (0x0008) [0x0000000000440200] (CPF_Native | CPF_NoImport | CPF_NonTransactional)
	uint32_t                                           bSkipCloseAndParallelChecks : 1;               // 0x0068 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.Pylon.CornerPointInfo
// 0x0014
struct FCornerPointInfo
{
	class AActor*                                      StartPoint;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      EndPoint;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            EndPolyID;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Pylon.PolyReference
// 0x0028
struct FPolyReference
{
	struct FActorReference                             OwningPylon;                                   // 0x0000 (0x0018) [0x0000000000000000]               
	int32_t                                            PylonBuildID;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            PolyId;                                        // 0x001C (0x0004) [0x0000000000000000]               
	struct FPointer                                    CachedPoly;                                    // 0x0020 (0x0008) [0x0000000000000200] (CPF_Native)  
};

// ScriptStruct Engine.Pylon.EdgeReference
// 0x0020
struct FEdgeReference
{
	struct FActorReference                             OwningPylon;                                   // 0x0000 (0x0018) [0x0000000000000000]               
	int32_t                                            EdgeIdx;                                       // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            PylonBuildID;                                  // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Pylon.ObstaclePolyPylonPair
// 0x002C
struct FObstaclePolyPylonPair
{
	struct FActorReference                             OwningPylon;                                   // 0x0000 (0x0018) [0x0000000000000000]               
	class TArray<struct FPolyReference>                PolyRefs;                                      // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            PylonBuildID;                                  // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x0015
struct FPathSizeInfo
{
	class FName                                        Desc;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              CrouchHeight;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            PathColor;                                     // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.AkActionGlobal_CombatMusicControl.CombatGroups
// 0x0008
struct FCombatGroups
{
	int32_t                                            NumberOfPawnsDead;                             // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ValueToSetCombat;                              // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkAudioNotifySet.AkAudioNotifyDefine
// 0x0010
struct FAkAudioNotifyDefine
{
	class UAkAudioNotifyType*                          Type;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    Event;                                         // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RExternalHook.ExternalHookDataEntry
// 0x0074
struct FExternalHookDataEntry
{
	class FString                                      Entry;                                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Platform;                                      // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Tag;                                           // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FUntypedBulkData_Mirror                     BulkStoredData;                                // 0x0030 (0x0040) [0x0000000000000201] (CPF_Const | CPF_Native)
	uint32_t                                           bPreallocated : 1;                             // 0x0070 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
};

// ScriptStruct Engine.AkComponent.AkFakePhysicsControl
// 0x0070
struct FAkFakePhysicsControl
{
	struct FAkFakePhysics                              Physics;                                       // 0x0000 (0x0064) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     OldVelocity;                                   // 0x0064 (0x000C) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.AkCurve.AkCurvePoint
// 0x0009
struct FAkCurvePoint
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            Shape;                                         // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.AkCurve.AkCurveData
// 0x0014
struct FAkCurveData
{
	class TArray<struct FAkCurvePoint>                 Points;                                        // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bInvert : 1;                                   // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.AkDialogue.AkDuckingInfo
// 0x0018
struct FAkDuckingInfo
{
	int32_t                                            DuckingLevels;                                 // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DuckAttackTime;                                // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DuckReleaseTime;                               // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FullyDuckedValue;                              // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FullyUnduckedValue;                            // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            PhantomDucks;                                  // 0x0014 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.AkDialogue.AkDialogueCallbackInfo
// 0x0008
struct FAkDialogueCallbackInfo
{
	int32_t                                            SpeechInstanceId;                              // 0x0000 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	int32_t                                            LineIndex;                                     // 0x0004 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.AkDialogueAnim.AkDialogueAnimData
// 0x0050
struct FAkDialogueAnimData
{
	class UFaceFXAnimSet*                              AutomaticFaceFXAnim;                           // 0x0000 (0x0008) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	class UFaceFXAnimSet*                              CustomFaceFXAnim;                              // 0x0008 (0x0008) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	class FString                                      WavDigest;                                     // 0x0010 (0x0010) [0x0000100500010001] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink | CPF_NotForConsole)
	class FString                                      AnalysisText;                                  // 0x0020 (0x0010) [0x0000100500010001] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink | CPF_NotForConsole)
	class FString                                      AnimType;                                      // 0x0030 (0x0010) [0x0000100500010001] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink | CPF_NotForConsole)
	class FString                                      Error;                                         // 0x0040 (0x0010) [0x0000100500010001] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink | CPF_NotForConsole)
};

// ScriptStruct Engine.AkDialogueAnim.AkDialogueResolvedData
// 0x003C
struct FAkDialogueResolvedData
{
	class UFaceFXAnimSet*                              FaceFX_AnimSet;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      FaceFX_AnimName;                               // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              AnimWarmupTime;                                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              AnimDuration;                                  // 0x001C (0x0004) [0x0000000000000000]               
	float                                              TypeOffset;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              EventOffset;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              EventDuration;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	class FString                                      Error;                                         // 0x002C (0x0010) [0x0000100000010000] (CPF_NeedCtorLink | CPF_NotForConsole)
};

// ScriptStruct Engine.AkDialogueConversation.AkDialogueConversationItem
// 0x000C
struct FAkDialogueConversationItem
{
	class UAkDialogueLine*                             DialogueLine;                                  // 0x0000 (0x0008) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	int32_t                                            Order;                                         // 0x0008 (0x0004) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.AkDialogueConversationDynamic.AkDialogueConversationDynamicItem
// 0x0010
struct FAkDialogueConversationDynamicItem
{
	class UAkDialogueSpeech*                           DynamicLine;                                   // 0x0000 (0x0008) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	int32_t                                            Order;                                         // 0x0008 (0x0004) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	int32_t                                            Assignment;                                    // 0x000C (0x0004) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.AkDialogueLineRandom.AkDialogueLineRandomItem
// 0x0010
struct FAkDialogueLineRandomItem
{
	class UAkDialogueEvent*                            DialogueEvent;                                 // 0x0000 (0x0008) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	int32_t                                            Weighting;                                     // 0x0008 (0x0004) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	uint32_t                                           Used : 1;                                      // 0x000C (0x0004) [0x0000000000000401] [0x00000001] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.AkEmoteSet.AkEmoteDefine
// 0x0010
struct FAkEmoteDefine
{
	class UAkEmoteType*                                EmoteType;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkDialogueLine*                             Speech;                                        // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkMixTemplate.MixParameter
// 0x0010
struct FMixParameter
{
	class UAkParameterName*                            AudioParameter;                                // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ValueToSet;                                    // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Rate;                                          // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkVehicleSoundInfo.Gearing
// 0x0020
struct FGearing
{
	float                                              Down;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Up;                                            // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DownPowerApplied;                              // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              UpNoPowerApplied;                              // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Ratio;                                         // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           DisableExhaustEffect : 1;                      // 0x0014 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           IsTheInfiniteGear : 1;                         // 0x0014 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	class UAkCurve*                                    RemappingCurve;                                // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkVehicleSoundInfo.InheritSetParam
// 0x000C
struct FInheritSetParam
{
	class UAkParameterName*                            Param;                                         // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           SetOnChildren : 1;                             // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.AkVehicleSoundInfo.WheelData
// 0x001C
struct FWheelData
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    WheelEvent;                                    // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        LocationBoneName;                              // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           SetSurfaceWheel : 1;                           // 0x0018 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.AkVehicleSoundInfo.SuspensionTrigger
// 0x0010
struct FSuspensionTrigger
{
	float                                              Travel;                                        // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    SuspensionEvent;                               // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ResetValue;                                    // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkVehicleSoundInfo.ForceTrigger
// 0x0010
struct FForceTrigger
{
	float                                              TriggerValue;                                  // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ResetValue;                                    // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ForceEvent;                                    // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkVehicleSoundInfo.NamedWheelForceTriggers
// 0x0028
struct FNamedWheelForceTriggers
{
	class TArray<class FName>                          Wheels;                                        // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              TriggerValue;                                  // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ResetValue;                                    // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ResetTime;                                     // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            TriggerType;                                   // 0x001C (0x0001) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ForceEvent;                                    // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkVehicleSoundInfo.SocketAudio
// 0x0010
struct FSocketAudio
{
	class FName                                        SocketName;                                    // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    EventToPlayAtSocket;                           // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkVehicleSoundInfo.ExtraSoundData
// 0x0020
struct FExtraSoundData
{
	class FString                                      EventName;                                     // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UAkEvent*                                    ActualEvent;                                   // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkPredicate*                                SuppressSound;                                 // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AkVehicleSoundInfo.FactSound
// 0x0018
struct FFactSound
{
	class FString                                      FactString;                                    // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UAkEvent*                                    ActualEvent;                                   // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// 0x0014
struct FScalarParameterInterpStruct
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ParameterValue;                                // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              InterpTime;                                    // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              WarmupTime;                                    // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.SubtitleCue
// 0x0014
struct FSubtitleCue
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000100011001] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              Time;                                          // 0x0010 (0x0004) [0x0000000100001001] (CPF_Edit | CPF_Const | CPF_Localized)
};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x0024
struct FLocalizedSubtitle
{
	class FString                                      LanguageExt;                                   // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FSubtitleCue>                  Subtitles;                                     // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bMature : 1;                                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bManualWordWrap : 1;                           // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSingleLine : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineTypes.LightMapRef
// 0x0008
struct FLightMapRef
{
	struct FPointer                                    Reference;                                     // 0x0000 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// 0x00A4
struct FDominantShadowInfo
{
	struct FMatrix                                     WorldToLight;                                  // 0x0000 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     LightToWorld;                                  // 0x0040 (0x0040) [0x0000000000000000]               
	struct FBox                                        LightSpaceImportanceBounds;                    // 0x0080 (0x001C) [0x0000000000000000]               
	int32_t                                            ShadowMapSizeX;                                // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            ShadowMapSizeY;                                // 0x00A0 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0xC];                         // 0x00A4 (0x000C) ADDED PADDING
};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                         // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              IndirectLightingSaturation;                    // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ShadowExponent;                                // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x0004 (0x000C - 0x0010)
struct FLightmassPointLightSettings : FLightmassLightSettings
{
	float                                              LightSourceRadius;                             // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x0004 (0x000C - 0x0010)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings
{
	float                                              LightSourceAngle;                              // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x001C
struct FLightmassPrimitiveSettings
{
	uint32_t                                           bUseTwoSidedLighting : 1;                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bShadowIndirectOnly : 1;                       // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseEmissiveForStaticLighting : 1;             // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bUmbraIsOccluder : 1;                          // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	float                                              EmissiveLightFalloffExponent;                  // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EmissiveLightExplicitInfluenceRadius;          // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EmissiveBoost;                                 // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FullyOccludedSamplesFraction;                  // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x0014
struct FLightmassDebugOptions
{
	uint32_t                                           bDebugMode : 1;                                // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bStatsEnabled : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bGatherBSPSurfacesAcrossComponents : 1;        // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	float                                              CoplanarTolerance;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bUseDeterministicLighting : 1;                 // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseImmediateImport : 1;                       // 0x0008 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bImmediateProcessMappings : 1;                 // 0x0008 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bSortMappings : 1;                             // 0x0008 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bDumpBinaryFiles : 1;                          // 0x0008 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bDebugMaterials : 1;                           // 0x0008 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bPadMappings : 1;                              // 0x0008 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bDebugPaddings : 1;                            // 0x0008 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           bOnlyCalcDebugTexelMappings : 1;               // 0x0008 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           bUseRandomColors : 1;                          // 0x0008 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           bColorBordersGreen : 1;                        // 0x0008 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           bColorByExecutionTime : 1;                     // 0x0008 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	float                                              ExecutionTimeDivisor;                          // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bInitialized : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	uint32_t                                           bDistributionEnabled : 1;                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceContentExport : 1;                       // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bInitialized : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// 0x0020
struct FRootMotionCurve
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FInterpCurveVector                          Curve;                                         // 0x0008 (0x0014) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MaxCurveTime;                                  // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshComponent.DepthBiasData
// 0x0038
struct FDepthBiasData
{
	float                                              DepthBias;                                     // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            DepthBiasCalculationType;                      // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     DepthBiasVaryingDirection;                     // 0x0008 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              InterpStartAngle;                              // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              InterpEndAngle;                                // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AlternateDepthBias;                            // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            DepthBiasApplicationType;                      // 0x0020 (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     DepthBiasCustomTestPoint;                      // 0x0024 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              DepthBiasMinDistanceFromCameraPlaneOverride;   // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinDepthBiasMultiplier;                        // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x000C
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x0034
struct FAttachment
{
	class UActorComponent*                             Component;                                     // 0x0000 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        BoneName;                                      // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     RelativeLocation;                              // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    RelativeRotation;                              // 0x001C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     RelativeScale;                                 // 0x0028 (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// 0x0010
struct FSkelMeshComponentLODInfo
{
	class TArray<uint32_t>                             HiddenMaterials;                               // 0x0000 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x0010
struct FBonePair
{
	class FName                                        Bones[2];                                      // 0x0000 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x0020
struct FAnimBlendChild
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimNode*                                   Anim;                                          // 0x0008 (0x0008) [0x0000004000010004] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              Weight;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BlendWeight;                                   // 0x0014 (0x0004) [0x0000000000000401] (CPF_Const | CPF_Transient)
	uint32_t                                           bMirrorSkeleton : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsAdditive : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            DrawY;                                         // 0x001C (0x0004) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x0008
struct FLinearDOFSetup
{
	uint8_t                                            bLimited;                                      // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              LimitSize;                                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.SVehicle.WheelPropToUpdateAtSpeed
// 0x0008
struct FWheelPropToUpdateAtSpeed
{
	float                                              Speed;                                         // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              WheelPct;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.SVehicle.VehicleState
// 0x004C
struct FVehicleState
{
	struct FRigidBodyState                             RBState;                                       // 0x0000 (0x0040) [0x0000000000000000]               
	uint8_t                                            ServerBrake;                                   // 0x0040 (0x0001) [0x0000000000000000]               
	uint8_t                                            ServerGas;                                     // 0x0041 (0x0001) [0x0000000000000000]               
	uint8_t                                            ServerSteering;                                // 0x0042 (0x0001) [0x0000000000000000]               
	uint8_t                                            ServerRise;                                    // 0x0043 (0x0001) [0x0000000000000000]               
	uint32_t                                           bServerHandbrake : 1;                          // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ServerView;                                    // 0x0048 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x4];                         // 0x004C (0x0004) ADDED PADDING
};

// ScriptStruct Engine.SVehicle.FakeRoadPlane
// 0x0020
struct FFakeRoadPlane
{
	struct FPlane                                      Plane;                                         // 0x0000 (0x0010) [0x0000000000000400] (CPF_Transient)
	struct FPointer                                    PhysXActor;                                    // 0x0010 (0x0008) [0x0000000000000600] (CPF_Native | CPF_Transient)
	struct FPointer                                    PhysXShape;                                    // 0x0018 (0x0008) [0x0000000000000600] (CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.AkVehicleSoundVar.VehicleFactList
// 0x0010
struct FVehicleFactList
{
	int32_t                                            Hash;                                          // 0x0000 (0x0004) [0x0000000000000400] (CPF_Transient)
	class UAkEvent*                                    EventToPlay;                                   // 0x0004 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
	uint32_t                                           Active : 1;                                    // 0x000C (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
};

// ScriptStruct Engine.AkVehicleSoundVar.SortedNamedEvent
// 0x0014
struct FSortedNamedEvent
{
	int32_t                                            HashNameOfEvent;                               // 0x0000 (0x0004) [0x0000000000000400] (CPF_Transient)
	class TArray<struct FExtraSoundData>               EventsToPlay;                                  // 0x0004 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AkVehicleSoundVar.InternalWheelData
// 0x0080
struct FInternalWheelData
{
	class URAkAudible*                                 WheelAudible;                                  // 0x0000 (0x0008) [0x0000004000010004] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UAkEvent*                                    CachedEvent;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    CachedSurfaceEvent;                            // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              LastSuspensionValue;                           // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              SuspensionDampedValuePos;                      // 0x001C (0x0004) [0x0000000000000000]               
	float                                              SuspensionDampedValueNeg;                      // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              dbgLastSuspensionDelta;                        // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              dbgPeakSuspensionDeltaPos;                     // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              dbgPeakSuspensionDeltaNeg;                     // 0x002C (0x0004) [0x0000000000000000]               
	struct FDouble                                     dbgPeakSuspensionDeltaPosTime;                 // 0x0030 (0x0008) [0x0000000000000000]               
	struct FDouble                                     dbgPeakSuspensionDeltaNegTime;                 // 0x0038 (0x0008) [0x0000000000000000]               
	struct FDouble                                     dbgPeakForceTime;                              // 0x0040 (0x0008) [0x0000000000000000]               
	float                                              dbgPeakForce;                                  // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              dbgSqueal;                                     // 0x004C (0x0004) [0x0000000000000000]               
	float                                              dbgSquealRatio;                                // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              WheelWetAmount;                                // 0x0054 (0x0004) [0x0000000000000000]               
	struct FPointer                                    LastForceEvent;                                // 0x0058 (0x0008) [0x0000000000000200] (CPF_Native)  
	class FName                                        OldMaterial;                                   // 0x0060 (0x0008) [0x0000000000000000]               
	int32_t                                            OldMaterialSwitchContainer;                    // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            OldMaterialSwitch;                             // 0x006C (0x0004) [0x0000000000000000]               
	class FString                                      dbgCurrentMaterial;                            // 0x0070 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AkVehicleSoundVar.VehSocketAudio
// 0x0010
struct FVehSocketAudio
{
	class URAkAudible*                                 SocketAudible;                                 // 0x0000 (0x0008) [0x0000004000010004] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UAkEvent*                                    CachedEvent;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.AkVehicleSoundVar.EngineDebug
// 0x0024
struct FEngineDebug
{
	struct FDouble                                     Time;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Load;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              NormalizedRPM;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Throttle;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AltThrottle;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Brake;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              HandBrake;                                     // 0x001C (0x0004) [0x0000000000000000]               
	float                                              ForceSqueal;                                   // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AkVehicleSoundVar.VehicleCurve
// 0x0014
struct FVehicleCurve
{
	class UAkCurve*                                    Curve;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TotalSize;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Position;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              UseAcceleration;                               // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AkVehicleSoundVar.RightFootModel
// 0x0005
struct FRightFootModel
{
	float                                              CurrentFootPosition;                           // 0x0000 (0x0004) [0x0000000000000400] (CPF_Transient)
	uint8_t                                            CurrentFootMode;                               // 0x0004 (0x0001) [0x0000000000000400] (CPF_Transient)
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.AkVehicleSoundVar.EngineParameters
// 0x0044
struct FEngineParameters
{
	uint8_t                                            EngineModel;                                   // 0x0000 (0x0001) [0x0000000000000400] (CPF_Transient)
	float                                              RPM;                                           // 0x0004 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              AlternateRPM;                                  // 0x0008 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              NormalizedRPM;                                 // 0x000C (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              AbsSpeed;                                      // 0x0010 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              ActualSpeed;                                   // 0x0014 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              Throttle;                                      // 0x0018 (0x0004) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           TurboEngaged : 1;                              // 0x001C (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint32_t                                           mChangingUpGear : 1;                           // 0x001C (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
	float                                              Brake;                                         // 0x0020 (0x0004) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           HandBrake : 1;                                 // 0x0024 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	int32_t                                            Gear;                                          // 0x0028 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            REVGear;                                       // 0x002C (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              Steering;                                      // 0x0030 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              Load;                                          // 0x0034 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              NormalizedAltRPM;                              // 0x0038 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              AltMag;                                        // 0x003C (0x0004) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           ForceWheelSpin : 1;                            // 0x0040 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint32_t                                           mClutchPressed : 1;                            // 0x0040 (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
	uint32_t                                           ForceStopping : 1;                             // 0x0040 (0x0004) [0x0000000000000400] [0x00000004] (CPF_Transient)
};

// ScriptStruct Engine.LightComponent.EffectorSignal
// 0x000C
struct FEffectorSignal
{
	float                                              Speed;                                         // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Offset;                                        // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              intensity;                                     // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.LightComponent.FGelLayer
// 0x0040
struct FFGelLayer
{
	class UTexture2D*                                  Texture;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class UTexture2D*>                    Textures;                                      // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            CellLayout;                                    // 0x0018 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              Frame;                                         // 0x001C (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              FrameRate;                                     // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   Scale;                                         // 0x0024 (0x0008) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FVector2D                                   Translation;                                   // 0x002C (0x0008) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	struct FVector2D                                   TranslationRate;                               // 0x0034 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bUseLightProjectionTexture : 1;                // 0x003C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.PlatformInterfaceBase.DelegateArray
// 0x0010
struct FDelegateArray
{
	class TArray<struct FScriptDelegate>               Delegates;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceData
// 0x002C
struct FPlatformInterfaceData
{
	class FName                                        DataName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0008 (0x0001) [0x0000000000000000]               
	int32_t                                            IntValue;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              FloatValue;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      StringValue;                                   // 0x0014 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class UObject*                                     ObjectValue;                                   // 0x0024 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceDelegateResult
// 0x0030
struct FPlatformInterfaceDelegateResult
{
	uint32_t                                           bSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPlatformInterfaceData                      Data;                                          // 0x0004 (0x002C) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnalyticEventsBase.EventStringParam
// 0x0020
struct FEventStringParam
{
	class FString                                      ParamName;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      ParamValue;                                    // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.AnimLink
// 0x0014
struct FAnimLink
{
	class UAnimSet*                                    AnimSet;                                       // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimName;                                      // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            EditVersion;                                   // 0x0010 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.AnimSequence.AnimReferenceCopy
// 0x0015
struct FAnimReferenceCopy
{
	struct FAnimLink                                   Anim;                                          // 0x0000 (0x0014) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            Time;                                          // 0x0014 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.AnimSequence.AnimReferenceOptions
// 0x0038
struct FAnimReferenceOptions
{
	struct FRotator                                    ForwardRotation;                               // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            ForwardYawDirection;                           // 0x000C (0x0001) [0x0000000000080000] (CPF_Deprecated)
	float                                              ForwardYaw;                                    // 0x0010 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              FloorHeight;                                   // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              AutomaticFloorHeightOffset;                    // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           AutomaticFloorHeight : 1;                      // 0x001C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           AutomaticForwardRotation : 1;                  // 0x001C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           UseRootMotionRollPitch : 1;                    // 0x001C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           CopyFromAnim_Enabled : 1;                      // 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	struct FAnimReferenceCopy                          CopyFromAnim;                                  // 0x0020 (0x0018) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.AnimReferencePeriodsAdvanced
// 0x0010
struct FAnimReferencePeriodsAdvanced
{
	float                                              MinimumFloorHeight;                            // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           EnforceMinimumFloorHeight : 1;                 // 0x0004 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           SimpleForwardRotation : 1;                     // 0x0004 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           SimpleFloorHeight : 1;                         // 0x0004 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           SimpleTranslationXY : 1;                       // 0x0004 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           InheritRootMotionFromVelocity : 1;             // 0x0004 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           DisableProportionalMotionDuringBlendOut : 1;   // 0x0004 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           SnapAxisToReferencePoint_Enabled : 1;          // 0x0004 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           ApplyMotionExtractionOffsetToLinearMotion : 1; // 0x0004 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint8_t                                            SnapAxisToReferencePoint;                      // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           AllowMultipleCollisionOptionNotifies : 1;      // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.AnimSequence.AnimReferencePeriods
// 0x008C
struct FAnimReferencePeriods
{
	struct FAnimReferenceOptions                       Start;                                         // 0x0000 (0x0038) [0x0000000100000000] (CPF_Edit)    
	struct FAnimReferenceOptions                       End;                                           // 0x0038 (0x0038) [0x0000000100000000] (CPF_Edit)    
	struct FAnimReferencePeriodsAdvanced               Advanced;                                      // 0x0070 (0x0010) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           EnforceMinimumFloorHeight : 1;                 // 0x0080 (0x0004) [0x0000000000080000] [0x00000001] (CPF_Deprecated)
	float                                              MinimumFloorHeight;                            // 0x0084 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	uint32_t                                           SimpleForwardRotation : 1;                     // 0x0088 (0x0004) [0x0000000000080000] [0x00000001] (CPF_Deprecated)
	uint32_t                                           SimpleFloorHeight : 1;                         // 0x0088 (0x0004) [0x0000000000080000] [0x00000002] (CPF_Deprecated)
	uint32_t                                           SimpleTranslationXY : 1;                       // 0x0088 (0x0004) [0x0000000000080000] [0x00000004] (CPF_Deprecated)
	uint32_t                                           InheritRootMotionFromVelocity : 1;             // 0x0088 (0x0004) [0x0000000000080000] [0x00000008] (CPF_Deprecated)
	uint32_t                                           DisableProportionalMotionDuringBlendOut : 1;   // 0x0088 (0x0004) [0x0000000000080000] [0x00000010] (CPF_Deprecated)
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	class TArray<uint8_t>                              ByteStream;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              Mins[3];                                       // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              Ranges[3];                                     // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.RAutomaticTransitions.AutomaticTransitionLayer1Description
// 0x0018
struct FAutomaticTransitionLayer1Description
{
	float                                              MinYawDelta;                                   // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxYawDelta;                                   // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinBeginSpeed;                                 // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MaxBeginSpeed;                                 // 0x0009 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinEndSpeed;                                   // 0x000A (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MaxEndSpeed;                                   // 0x000B (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           AllowTurn : 1;                                 // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              UndershootMarginAngle;                         // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OvershootMarginAngle;                          // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RAutomaticTransitions.AutomaticTransitionLayer2Description
// 0x000C
struct FAutomaticTransitionLayer2Description
{
	uint8_t                                            BeginSpeed;                                    // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            BeginDirection;                                // 0x0001 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            BeginPhase;                                    // 0x0002 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            EndSpeed;                                      // 0x0003 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            EndDirection;                                  // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            TurnAngle;                                     // 0x0005 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            TurnDirection;                                 // 0x0006 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           Mirrored : 1;                                  // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.RAutomaticTransitions.AutomaticTransitionLayer2
// 0x001C
struct FAutomaticTransitionLayer2
{
	class TArray<class FName>                          AnimNames;                                     // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FAutomaticTransitionLayer2Description       Description;                                   // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RAutomaticTransitions.AutomaticTransitionLayer1
// 0x0028
struct FAutomaticTransitionLayer1
{
	struct FAutomaticTransitionLayer1Description       Description;                                   // 0x0000 (0x0018) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FAutomaticTransitionLayer2>    Layer2;                                        // 0x0018 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.RAnimZip_Settings.AnimZipErrorBounds
// 0x000C
struct FAnimZipErrorBounds
{
	float                                              Rotation;                                      // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Translation;                                   // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Scale;                                         // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RAnimZip_Settings.AnimZipTrackSettings
// 0x0010
struct FAnimZipTrackSettings
{
	struct FAnimZipErrorBounds                         ErrorBounds;                                   // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           AllowRotationRetargeting : 1;                  // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.RAnimZip_Settings.AnimZipNamedTrackSettings
// 0x0018
struct FAnimZipNamedTrackSettings
{
	class FName                                        TrackName;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FAnimZipTrackSettings                       Settings;                                      // 0x0008 (0x0010) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x000C
struct FAnimNotifyEvent
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAnimNotify*                                 Notify;                                        // 0x0004 (0x0008) [0x0000004100010004] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0040
struct FRawAnimSequenceTrack
{
	class TArray<struct FVector>                       PosKeys;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FQuat>                         RotKeys;                                       // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                ScaleKeys;                                     // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       PosMinusScaleKeys;                             // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x0018
struct FCurveTrack
{
	class FName                                        CurveName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<float>                                CurveWeights;                                  // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.AnimCachedDialogue
// 0x0018
struct FAnimCachedDialogue
{
	class UAkDialogueLine*                             Line;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              WavTime;                                       // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Duration;                                      // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           IsForOtherCharacter : 1;                       // 0x0014 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           FromAutoTrigger : 1;                           // 0x0014 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.AnimSequence.AnimLinearMotion
// 0x0030
struct FAnimLinearMotion
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FVector                                     TranslationOrigin;                             // 0x0004 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     TranslationSpan;                               // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            UnknownData00[0x4];                              // 0x001C (0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                      // 0x0020 (0x0010) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.AutoTriggeredDialogueStruct
// 0x0030
struct FAutoTriggeredDialogueStruct
{
	class TArray<class UAkDialogueLine*>               Lines;                                         // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UAkDialogueLine*>               OtherCharacterLines;                           // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      AnimTimecode;                                  // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.AnimCollisionOptions
// 0x0008
struct FAnimCollisionOptions
{
	uint8_t                                            Physics;                                       // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            BlockActors2;                                  // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            RootMotionRotationOption;                      // 0x0002 (0x0001) [0x0000000000080000] (CPF_Deprecated)
	uint8_t                                            RootMotionTranslationOption;                   // 0x0003 (0x0001) [0x0000000000080000] (CPF_Deprecated)
	uint32_t                                           BlockActors : 1;                               // 0x0004 (0x0004) [0x0000000000080000] [0x00000001] (CPF_Deprecated)
	uint32_t                                           CollideWorld : 1;                              // 0x0004 (0x0004) [0x0000000000080000] [0x00000002] (CPF_Deprecated)
	uint32_t                                           DisableLegIK : 1;                              // 0x0004 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           AllowIKWhenNotPHYSWalking : 1;                 // 0x0004 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           PreviousVelocityOverridesAnimRootMotion : 1;   // 0x0004 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
};

// ScriptStruct Engine.AnimSequence.AnimCollisionPeriods
// 0x0010
struct FAnimCollisionPeriods
{
	struct FAnimCollisionOptions                       Middle;                                        // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FAnimCollisionOptions                       End;                                           // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.TimeModifier
// 0x0008
struct FTimeModifier
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TargetStrength;                                // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// 0x0018
struct FSkelControlModifier
{
	class FName                                        SkelControlName;                               // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FTimeModifier>                 Modifiers;                                     // 0x0008 (0x0010) [0x0000004100010000] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	class TArray<struct FVector>                       PosKeys;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0020
struct FRotationTrack
{
	class TArray<struct FQuat>                         RotKeys;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNode.CurveKey
// 0x000C
struct FCurveKey
{
	class FName                                        CurveName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                    // 0x0000 (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Translation;                                   // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x4];                         // 0x001C (0x0004) ADDED PADDING
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0130
struct FAimComponent
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            UnknownData00[0x8];                              // 0x0008 (0x0008) MISSED OFFSET
	struct FAimTransform                               LU;                                            // 0x0010 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FAimTransform                               LC;                                            // 0x0030 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FAimTransform                               LD;                                            // 0x0050 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FAimTransform                               CU;                                            // 0x0070 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FAimTransform                               CC;                                            // 0x0090 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FAimTransform                               CD;                                            // 0x00B0 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FAimTransform                               RU;                                            // 0x00D0 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FAimTransform                               RC;                                            // 0x00F0 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FAimTransform                               RD;                                            // 0x0110 (0x0020) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x0070
struct FAimOffsetProfile
{
	class FName                                        ProfileName;                                   // 0x0000 (0x0008) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FVector2D                                   HorizontalRange;                               // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   VerticalRange;                                 // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FAimComponent>                 AimComponents;                                 // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        AnimName_LU;                                   // 0x0028 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimName_LC;                                   // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimName_LD;                                   // 0x0038 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimName_CU;                                   // 0x0040 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimName_CC;                                   // 0x0048 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimName_CD;                                   // 0x0050 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimName_RU;                                   // 0x0058 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimName_RC;                                   // 0x0060 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AnimName_RD;                                   // 0x0068 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0038
struct FChildBoneBlendInfo
{
	class TArray<float>                                TargetPerBoneWeight;                           // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        InitTargetStartBone;                           // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              InitPerBoneIncrease;                           // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        OldStartBone;                                  // 0x001C (0x0008) [0x0000000000000001] (CPF_Const)   
	float                                              OldBoneIncrease;                               // 0x0024 (0x0004) [0x0000000000000001] (CPF_Const)   
	class TArray<int32_t>                              TargetRequiredBones;                           // 0x0028 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0020
struct FRandomAnimInfo
{
	float                                              Chance;                                        // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            LoopCountMin;                                  // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            LoopCountMax;                                  // 0x0005 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   PlayRateRange;                                 // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bStillFrame : 1;                               // 0x0014 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint8_t                                            LoopCount;                                     // 0x0018 (0x0001) [0x0000000000000400] (CPF_Transient)
	float                                              LastPosition;                                  // 0x001C (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0014
struct FAnimInfo
{
	class FName                                        AnimSeqName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Const)   
	class UAnimSequence*                               AnimSeq;                                       // 0x0008 (0x0008) [0x0000000000000401] (CPF_Const | CPF_Transient)
	int32_t                                            AnimLinkupIndex;                               // 0x0010 (0x0004) [0x0000000000000401] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x0020
struct FAnimBlendInfo
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FAnimInfo                                   AnimInfo;                                      // 0x0008 (0x0014) [0x0000000000000000]               
	float                                              Weight;                                        // 0x001C (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x0028
struct FSynchGroup
{
	class TArray<class UAnimNodeSequence*>             SeqNodes;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UAnimNodeSequence*                           MasterNode;                                    // 0x0010 (0x0008) [0x0000000000000400] (CPF_Transient)
	class FName                                        GroupName;                                     // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bFireSlaveNotifies : 1;                        // 0x0020 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              RateScale;                                     // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNotify.NotifierInfo
// 0x0030
struct FNotifierInfo
{
	class UAnimNotify*                                 AnimNotify;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Owner;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      SkelComponent;                                 // 0x0010 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UAnimSequence*                               AnimSequence;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              TimeDifference;                                // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           AnimMirrored : 1;                              // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           PlayedBackwards : 1;                           // 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           PreNotify : 1;                                 // 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// 0x0018
struct FTrailSocketSamplePoint
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// 0x004C
struct FTrailSamplePoint
{
	float                                              RelativeTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     FirstEdgeSample;                               // 0x0004 (0x0018) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     ControlPointSample;                            // 0x001C (0x0018) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     SecondEdgeSample;                              // 0x0034 (0x0018) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSample
// 0x0028
struct FTrailSample
{
	float                                              RelativeTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     FirstEdgeSample;                               // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     ControlPointSample;                            // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     SecondEdgeSample;                              // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x0020
struct FAnimSetMeshLinkup
{
	class TArray<int32_t>                              BoneToTrackTable;                              // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              TrackToBoneTable;                              // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSet.AnimSetPreviewAttachment
// 0x0010
struct FAnimSetPreviewAttachment
{
	class FName                                        MeshName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        BoneOrSocketName;                              // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSet.AnimSetPreviewPartner
// 0x0018
struct FAnimSetPreviewPartner
{
	class FName                                        AnimSetName;                                   // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FString                                      AnimPostfixName;                               // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSet.AnimSetPreviewWeapon
// 0x0014
struct FAnimSetPreviewWeapon
{
	uint8_t                                            Preset;                                        // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      Class;                                         // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        OverrideBoneOrSocketName;                      // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0030
struct FAnimGroup
{
	class TArray<class UAnimNodeSequence*>             SeqNodes;                                      // 0x0000 (0x0010) [0x0000000000010401] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UAnimNodeSequence*                           SynchMaster;                                   // 0x0010 (0x0008) [0x0000000000000401] (CPF_Const | CPF_Transient)
	class UAnimNodeSequence*                           NotifyMaster;                                  // 0x0018 (0x0008) [0x0000000000000401] (CPF_Const | CPF_Transient)
	class FName                                        GroupName;                                     // 0x0020 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	float                                              RateScale;                                     // 0x0028 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	float                                              SynchPctPosition;                              // 0x002C (0x0004) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x0014
struct FSkelControlListHead
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ControlHead;                                   // 0x0008 (0x0008) [0x0000004000010004] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	int32_t                                            DrawY;                                         // 0x0010 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// 0x0038
struct FPreviewSkelMeshStruct
{
	class FName                                        DisplayName;                                   // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UMorphTargetSet*>               PreviewMorphSets;                              // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class USkeletalMesh*                               PreviewExtraSkelMeshes[3];                     // 0x0020 (0x0018) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// 0x0020
struct FPreviewSocketStruct
{
	class FName                                        DisplayName;                                   // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SocketName;                                    // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UStaticMesh*                                 PreviewStaticMesh;                             // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// 0x0018
struct FPreviewAnimSetsStruct
{
	class FName                                        DisplayName;                                   // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UAnimSet*>                      PreviewAnimSets;                               // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ApexClothingAsset.ClothingLodInfo
// 0x0010
struct FClothingLodInfo
{
	class TArray<int32_t>                              LODMaterialMap;                                // 0x0000 (0x0010) [0x0000020300010001] (CPF_Edit | CPF_Const | CPF_EditFixedSize | CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.RStaticClimbableActor.RailingBlockerPair
// 0x0018
struct FRailingBlockerPair
{
	int32_t                                            CollectionIndex;                               // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            RailingIndex;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	class TArray<class ARStaticClimbableActor*>        OtherActors;                                   // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.ApexDestructibleAsset.CookedBuffer
// 0x0008
struct FCookedBuffer
{
	struct FPointer                                    Buffer;                                        // 0x0000 (0x0008) [0x0000000000000200] (CPF_Native)  
};

// ScriptStruct Engine.ApexDestructibleAsset.DestructibleCrumbleParameters
// 0x0034
struct FDestructibleCrumbleParameters
{
	class FString                                      BehaviorGroupName;                             // 0x0000 (0x0010) [0x00000A0500010000] (CPF_Edit | CPF_EditConst | CPF_AlwaysInit | CPF_NeedCtorLink | CPF_EditorOnly)
	class UParticleSystem*                             CrumbleParticleEffect;                         // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              PercentageOfChunksToCrumble;                   // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FractureEffectScale;                           // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinSizeChunkToCrumble;                         // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxSizeChunkToCrumble;                         // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PercentageOfCrumbleEffects;                    // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PercentageOfChunksToRemoveImmediately;         // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bNotDamagedByChainGun : 1;                     // 0x0030 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDamageParameters
// 0x0014
struct FNxDestructibleDamageParameters
{
	float                                              DamageThreshold;                               // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DamageSpread;                                  // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ImpactDamage;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ImpactResistance;                              // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            DefaultImpactDamageDepth;                      // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDebrisParameters
// 0x002C
struct FNxDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                             // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DebrisLifetimeMax;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DebrisMaxSeparationMin;                        // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DebrisMaxSeparationMax;                        // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FBox                                        ValidBounds;                                   // 0x0010 (0x001C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleAdvancedParameters
// 0x0018
struct FNxDestructibleAdvancedParameters
{
	float                                              DamageCap;                                     // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ImpactVelocityThreshold;                       // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxChunkSpeed;                                 // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MassScaleExponent;                             // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MassScale;                                     // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FractureImpulseScale;                          // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParametersFlag
// 0x0004
struct FNxDestructibleParametersFlag
{
	uint32_t                                           ACCUMULATE_DAMAGE : 1;                         // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           ASSET_DEFINED_SUPPORT : 1;                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           WORLD_SUPPORT : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           DEBRIS_TIMEOUT : 1;                            // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           DEBRIS_MAX_SEPARATION : 1;                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           CRUMBLE_SMALLEST_CHUNKS : 1;                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           ACCURATE_RAYCASTS : 1;                         // 0x0000 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           USE_VALID_BOUNDS : 1;                          // 0x0000 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           FORM_EXTENDED_STRUCTURES : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDepthParameters
// 0x0005
struct FNxDestructibleDepthParameters
{
	uint32_t                                           TAKE_IMPACT_DAMAGE : 1;                        // 0x0000 (0x0004) [0x0000000000080000] [0x00000001] (CPF_Deprecated)
	uint32_t                                           IGNORE_POSE_UPDATES : 1;                       // 0x0000 (0x0004) [0x0000000000080000] [0x00000002] (CPF_Deprecated)
	uint32_t                                           IGNORE_RAYCAST_CALLBACKS : 1;                  // 0x0000 (0x0004) [0x0000000000080000] [0x00000004] (CPF_Deprecated)
	uint32_t                                           IGNORE_CONTACT_CALLBACKS : 1;                  // 0x0000 (0x0004) [0x0000000000080000] [0x00000008] (CPF_Deprecated)
	uint32_t                                           USER_FLAG : 1;                                 // 0x0000 (0x0004) [0x0000000000080000] [0x00000010] (CPF_Deprecated)
	uint32_t                                           USER_FLAG01 : 1;                               // 0x0000 (0x0004) [0x0000000000080000] [0x00000020] (CPF_Deprecated)
	uint32_t                                           USER_FLAG02 : 1;                               // 0x0000 (0x0004) [0x0000000000080000] [0x00000040] (CPF_Deprecated)
	uint32_t                                           USER_FLAG03 : 1;                               // 0x0000 (0x0004) [0x0000000000080000] [0x00000080] (CPF_Deprecated)
	uint8_t                                            ImpactDamageOverride;                          // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParameters
// 0x00F0
struct FNxDestructibleParameters
{
	struct FNxDestructibleDamageParameters             DamageParameters;                              // 0x0000 (0x0014) [0x0000000100000000] (CPF_Edit)    
	struct FNxDestructibleDebrisParameters             DebrisParameters;                              // 0x0014 (0x002C) [0x0000000100000000] (CPF_Edit)    
	struct FNxDestructibleAdvancedParameters           AdvancedParameters;                            // 0x0040 (0x0018) [0x0000000100000000] (CPF_Edit)    
	float                                              DamageThreshold;                               // 0x0058 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              DamageToRadius;                                // 0x005C (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              DamageCap;                                     // 0x0060 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              ForceToDamage;                                 // 0x0064 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              ImpactVelocityThreshold;                       // 0x0068 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              MaterialStrength;                              // 0x006C (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              DamageToPercentDeformation;                    // 0x0070 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              DeformationPercentLimit;                       // 0x0074 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	uint32_t                                           bFormExtendedStructures : 1;                   // 0x0078 (0x0004) [0x0000000000080000] [0x00000001] (CPF_Deprecated)
	int32_t                                            SupportDepth;                                  // 0x007C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MinimumFractureDepth;                          // 0x0080 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            DebrisDepth;                                   // 0x0084 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            EssentialDepth;                                // 0x0088 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DebrisLifetimeMin;                             // 0x008C (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              DebrisLifetimeMax;                             // 0x0090 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              DebrisMaxSeparationMin;                        // 0x0094 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              DebrisMaxSeparationMax;                        // 0x0098 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	struct FBox                                        ValidBounds;                                   // 0x009C (0x001C) [0x0000000000080000] (CPF_Deprecated)
	float                                              MaxChunkSpeed;                                 // 0x00B8 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              MassScaleExponent;                             // 0x00BC (0x0004) [0x0000000000080000] (CPF_Deprecated)
	struct FNxDestructibleParametersFlag               Flags;                                         // 0x00C0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              GrbVolumeLimit;                                // 0x00C4 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              GrbParticleSpacing;                            // 0x00C8 (0x0004) [0x0000000000080000] (CPF_Deprecated)
	float                                              FractureImpulseScale;                          // 0x00CC (0x0004) [0x0000000000080000] (CPF_Deprecated)
	class TArray<struct FNxDestructibleDepthParameters> DepthParameters;                               // 0x00D0 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	int32_t                                            DynamicChunksDominanceGroup;                   // 0x00E0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           UseDynamicChunksGroupsMask : 1;                // 0x00E4 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint8_t                                            DynamicChunksChannel;                          // 0x00E8 (0x0001) [0x0000000100000001] (CPF_Edit | CPF_Const)
	struct FRBCollisionChannelContainer                DynamicChunksCollideWithChannels;              // 0x00EC (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamageParameters
// 0x0010
struct FDamageParameters
{
	uint8_t                                            OverrideMode;                                  // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              BaseDamage;                                    // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Momentum;                                      // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamagePair
// 0x0018
struct FDamagePair
{
	class UClass*                                      DamageType;                                    // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FDamageParameters                           Params;                                        // 0x0008 (0x0010) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AppNotificationsBase.NotificationMessageInfo
// 0x0020
struct FNotificationMessageInfo
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AppNotificationsBase.NotificationInfo
// 0x0028
struct FNotificationInfo
{
	uint32_t                                           bIsLocal : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      MessageBody;                                   // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            BadgeNumber;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class TArray<struct FNotificationMessageInfo>      MessageInfo;                                   // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AppNotificationsBase.LaunchNotificationInfo
// 0x002C
struct FLaunchNotificationInfo
{
	uint32_t                                           bWasLaunchedViaNotification : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FNotificationInfo                           Notification;                                  // 0x0004 (0x0028) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x0014
struct FAudioComponentParam
{
	class FName                                        ParamName;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              FloatParam;                                    // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class USoundNodeWave*                              WaveParam;                                     // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.AudioDevice.Listener
// 0x0058
struct FListener
{
	class APortalVolume*                               PortalVolume;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Const)   
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     Up;                                            // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     Right;                                         // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     Front;                                         // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0038 (0x000C) [0x0000000000000000]               
	struct FVector                                     MicLocation;                                   // 0x0044 (0x000C) [0x0000000000000000]               
	float                                              FOV;                                           // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              ZoomMagnification;                             // 0x0054 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.BrushComponent.KCachedConvexDataElement
// 0x001C
struct FKCachedConvexDataElement
{
	class TArray<uint8_t>                              ConvexElementData;                             // 0x0000 (0x0010) [0x0000020000000200] (CPF_Native | CPF_AlwaysInit)
	struct FPointer                                    ConvexMesh;                                    // 0x0010 (0x0008) [0x0000000000000600] (CPF_Native | CPF_Transient)
	int32_t                                            ConvexMeshDataSize;                            // 0x0018 (0x0004) [0x0000000000000200] (CPF_Native)  
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData
// 0x0010
struct FKCachedConvexData
{
	class TArray<struct FKCachedConvexDataElement>     CachedConvexElements;                          // 0x0000 (0x0010) [0x0000020000000200] (CPF_Native | CPF_AlwaysInit)
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x000C
struct FGeomSelection
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectionIndex;                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.CameraShake.FOscillator
// 0x0009
struct FFOscillator
{
	float                                              Amplitude;                                     // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Frequency;                                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            InitialOffset;                                 // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.CameraShake.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                             // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FFOscillator                                Y;                                             // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FFOscillator                                Z;                                             // 0x0018 (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.CameraShake.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                         // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FFOscillator                                Yaw;                                           // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FFOscillator                                Roll;                                          // 0x0018 (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
// 0x0090
struct FCameraShakeInstance
{
	class UCameraShake*                                SourceShake;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        SourceShakeName;                               // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              OscillatorTimeRemaining;                       // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlendingIn : 1;                               // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendInTime;                            // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlendingOut : 1;                              // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendOutTime;                           // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     LocSinOffset;                                  // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     RotSinOffset;                                  // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              FOVSinOffset;                                  // 0x003C (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0040 (0x0004) [0x0000000000000000]               
	class UCameraAnimInst*                             AnimInst;                                      // 0x0044 (0x0008) [0x0000000000000000]               
	uint8_t                                            PlaySpace;                                     // 0x004C (0x0001) [0x0000000000000000]               
	struct FMatrix                                     UserPlaySpaceMatrix;                           // 0x0050 (0x0040) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                       // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              U;                                             // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              V;                                             // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              UL;                                            // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              VL;                                            // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x00A8
struct FFontImportOptionsData
{
	class FString                                      FontName;                                      // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Height;                                        // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bEnableAntialiasing : 1;                       // 0x0014 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bEnableBold : 1;                               // 0x0014 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bEnableItalic : 1;                             // 0x0014 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnableUnderline : 1;                          // 0x0014 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bAlphaOnly : 1;                                // 0x0014 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint8_t                                            CharacterSet;                                  // 0x0018 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FString                                      Chars;                                         // 0x001C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      UnicodeRange;                                  // 0x002C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      CharsFilePath;                                 // 0x003C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      CharsFileWildcard;                             // 0x004C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bCreatePrintableOnly : 1;                      // 0x005C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bIncludeASCIIRange : 1;                        // 0x005C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	struct FLinearColor                                ForegroundColor;                               // 0x0060 (0x0010) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bEnableDropShadow : 1;                         // 0x0070 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            TexturePageWidth;                              // 0x0074 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            TexturePageMaxHeight;                          // 0x0078 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            XPadding;                                      // 0x007C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            YPadding;                                      // 0x0080 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ExtendBoxTop;                                  // 0x0084 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ExtendBoxBottom;                               // 0x0088 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ExtendBoxRight;                                // 0x008C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ExtendBoxLeft;                                 // 0x0090 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bEnableLegacyMode : 1;                         // 0x0094 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            Kerning;                                       // 0x0098 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bUseDistanceFieldAlpha : 1;                    // 0x009C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            DistanceFieldScaleFactor;                      // 0x00A0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DistanceFieldScanRadiusScale;                  // 0x00A4 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int32_t                                            StartU;                                        // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            StartV;                                        // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            USize;                                         // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            VSize;                                         // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            TextureIndex;                                  // 0x0010 (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            VerticalOffset;                                // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.Texture.TextureGroupContainer
// 0x0004
struct FTextureGroupContainer
{
	uint32_t                                           TEXTUREGROUP_World : 1;                        // 0x0000 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldNormalMap : 1;               // 0x0000 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldSpecular : 1;                // 0x0000 (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Character : 1;                    // 0x0000 (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_CharacterNormalMap : 1;           // 0x0000 (0x0004) [0x0000000100000001] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_CharacterSpecular : 1;            // 0x0000 (0x0004) [0x0000000100000001] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_CharacterSpecPower : 1;           // 0x0000 (0x0004) [0x0000000100000001] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Weapon : 1;                       // 0x0000 (0x0004) [0x0000000100000001] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WeaponNormalMap : 1;              // 0x0000 (0x0004) [0x0000000100000001] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WeaponSpecular : 1;               // 0x0000 (0x0004) [0x0000000100000001] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_World_Low : 1;                    // 0x0000 (0x0004) [0x0000000100000001] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Vehicle : 1;                      // 0x0000 (0x0004) [0x0000000100000001] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_VehicleNormalMap : 1;             // 0x0000 (0x0004) [0x0000000100000001] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_VehicleSpecular : 1;              // 0x0000 (0x0004) [0x0000000100000001] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Cinematic : 1;                    // 0x0000 (0x0004) [0x0000000100000001] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Effects : 1;                      // 0x0000 (0x0004) [0x0000000100000001] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_EffectsNotFiltered : 1;           // 0x0000 (0x0004) [0x0000000100000001] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Skybox : 1;                       // 0x0000 (0x0004) [0x0000000100000001] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_UI : 1;                           // 0x0000 (0x0004) [0x0000000100000001] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Lightmap : 1;                     // 0x0000 (0x0004) [0x0000000100000001] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_RenderTarget : 1;                 // 0x0000 (0x0004) [0x0000000100000001] [0x00100000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_World_Hi : 1;                     // 0x0000 (0x0004) [0x0000000100000001] [0x00200000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldNormalMap_Hi : 1;            // 0x0000 (0x0004) [0x0000000100000001] [0x00400000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldSpecular_Hi : 1;             // 0x0000 (0x0004) [0x0000000100000001] [0x00800000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ProcBuilding_Face : 1;            // 0x0000 (0x0004) [0x0000000100000001] [0x01000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ProcBuilding_LightMap : 1;        // 0x0000 (0x0004) [0x0000000100000001] [0x02000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Shadowmap : 1;                    // 0x0000 (0x0004) [0x0000000100000001] [0x04000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ColorLookupTable : 1;             // 0x0000 (0x0004) [0x0000000100000001] [0x08000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Terrain_Heightmap : 1;            // 0x0000 (0x0004) [0x0000000100000001] [0x10000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Terrain_Weightmap : 1;            // 0x0000 (0x0004) [0x0000000100000001] [0x20000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ImageBasedReflection : 1;         // 0x0000 (0x0004) [0x0000000100000001] [0x40000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Bokeh : 1;                        // 0x0000 (0x0004) [0x0000000100000001] [0x80000000] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x0044
struct FTexture2DMipMap
{
	struct FUntypedBulkData_Mirror                     Data;                                          // 0x0000 (0x0040) [0x0000000000000200] (CPF_Native)  
	int32_t                                            Size;                                          // 0x0040 (0x0004) [0x0000000000020000] (CPF_NoExport)
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x0018
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                       // 0x0000 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FPointer                                    Next;                                          // 0x0008 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FPointer                                    PrevLink;                                      // 0x0010 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	uint32_t                                           bEnableGlow : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                GlowColor;                                     // 0x0004 (0x0010) [0x0000000000000000]               
	struct FVector2D                                   GlowOuterRadius;                               // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   GlowInnerRadius;                               // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.MobileDistanceFieldParams
// 0x0054
struct FMobileDistanceFieldParams
{
	float                                              Gamma;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AlphaRefVal;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              SmoothWidth;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           EnableShadow : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector2D                                   ShadowDirection;                               // 0x0010 (0x0008) [0x0000000000000000]               
	struct FLinearColor                                ShadowColor;                                   // 0x0018 (0x0010) [0x0000000000000000]               
	float                                              ShadowSmoothWidth;                             // 0x0028 (0x0004) [0x0000000000000000]               
	struct FDepthFieldGlowInfo                         GlowInfo;                                      // 0x002C (0x0024) [0x0000000000000200] (CPF_Native)  
	int32_t                                            BlendMode;                                     // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	uint32_t                                           bClipText : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableShadow : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDepthFieldGlowInfo                         GlowInfo;                                      // 0x0004 (0x0024) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.CanvasUVTri
// 0x0030
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                        // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   V0_UV;                                         // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   V1_Pos;                                        // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   V1_UV;                                         // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   V2_Pos;                                        // 0x0020 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector2D                                   V2_UV;                                         // 0x0028 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x002C
struct FTextSizingParameters
{
	float                                              DrawX;                                         // 0x0000 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
	float                                              DrawY;                                         // 0x0004 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
	float                                              DrawXL;                                        // 0x0008 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
	float                                              DrawYL;                                        // 0x000C (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
	struct FVector2D                                   Scaling;                                       // 0x0010 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	class UFont*                                       DrawFont;                                      // 0x0018 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	struct FVector2D                                   SpacingAdjust;                                 // 0x0020 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	float                                              ViewportHeight;                                // 0x0028 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	class FString                                      Value;                                         // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	struct FVector2D                                   LineExtent;                                    // 0x0010 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                  // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinValue;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxValue;                                      // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NudgeValue;                                    // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bIntRange : 1;                                 // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                             // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              V;                                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              UL;                                            // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              VL;                                            // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x002C
struct FInputKeyAction
{
	class FName                                        InputKeyName;                                  // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            InputKeyState;                                 // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FSeqOpOutputInputLink>         TriggeredOps;                                  // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class USequenceOp*>                   ActionsToExecute;                              // 0x001C (0x0010) [0x0000000000090000] (CPF_NeedCtorLink | CPF_Deprecated)
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	int32_t                                            PlayerIndex;                                   // 0x0000 (0x0004) [0x0000020000000401] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
	int32_t                                            ControllerId;                                  // 0x0004 (0x0004) [0x0000020000000401] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
	class FName                                        InputKeyName;                                  // 0x0008 (0x0008) [0x0000020000000401] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
	uint8_t                                            EventType;                                     // 0x0010 (0x0001) [0x0000020000000401] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
	float                                              InputDelta;                                    // 0x0014 (0x0004) [0x0000020000000401] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
	float                                              DeltaTime;                                     // 0x0018 (0x0004) [0x0000020000000401] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
	uint32_t                                           bAltPressed : 1;                               // 0x001C (0x0004) [0x0000020000000401] [0x00000001] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
	uint32_t                                           bCtrlPressed : 1;                              // 0x001C (0x0004) [0x0000020000000401] [0x00000002] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
	uint32_t                                           bShiftPressed : 1;                             // 0x001C (0x0004) [0x0000020000000401] [0x00000004] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008 (0x0020 - 0x0028)
struct FSubscribedInputEventParameters : FInputEventParameters
{
	class FName                                        InputAliasName;                                // 0x0020 (0x0008) [0x0000020000000401] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	class FName                                        AxisInputKey;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        AdjacentAxisInputKey;                          // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEmulateButtonPress : 1;                       // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        InputKeyToEmulate[2];                          // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	class FName                                        InputKeyName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            ModifierKeyFlags;                              // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.Console.AutoCompleteCommand
// 0x0020
struct FAutoCompleteCommand
{
	class FString                                      Command;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Desc;                                          // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x0024
struct FAutoCompleteNode
{
	int32_t                                            IndexChar;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              AutoCompleteListIndices;                       // 0x0004 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<struct FPointer>                      ChildNodes;                                    // 0x0014 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.CoverLink.CovPosInfo
// 0x0038
struct FCovPosInfo
{
	class ACoverLink*                                  Link;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            LtSlotIdx;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            RtSlotIdx;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LtToRtPct;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     Tangent;                                       // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverLink.FireLink
// 0x0018
struct FFireLink
{
	class TArray<uint8_t>                              Interactions;                                  // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            PackedProperties_CoverPairRefAndDynamicInfo;   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Const)   
	uint32_t                                           bFallbackLink : 1;                             // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDynamicIndexInited : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.CoverLink.SlotMoveRef
// 0x0064
struct FSlotMoveRef
{
	struct FPolyReference                              Poly;                                          // 0x0000 (0x0028) [0x0000000100000000] (CPF_Edit)    
	struct FBasedPosition                              Dest;                                          // 0x0028 (0x0038) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Direction;                                     // 0x0060 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.CoverLink.CoverInfo
// 0x000C
struct FCoverInfo
{
	class ACoverLink*                                  Link;                                          // 0x0000 (0x0008) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	int32_t                                            SlotIdx;                                       // 0x0008 (0x0004) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct Engine.CoverLink.CoverSlot
// 0x0090
struct FCoverSlot
{
	class APawn*                                       SlotOwner;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              SlotValidAfterTime;                            // 0x0008 (0x0004) [0x0000000000000400] (CPF_Transient)
	uint8_t                                            ForceCoverType;                                // 0x000C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CoverType;                                     // 0x000D (0x0001) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	uint8_t                                            LocationDescription;                           // 0x000E (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     LocationOffset;                                // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RotationOffset;                                // 0x001C (0x000C) [0x0000000000000000]               
	class TArray<uint8_t>                              Actions;                                       // 0x0028 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FFireLink>                     FireLinks;                                     // 0x0038 (0x0010) [0x0000000500010000] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FFireLink>                     RejectedFireLinks;                             // 0x0048 (0x0010) [0x0000000500010400] (CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<int32_t>                              ExposedCoverPackedProperties;                  // 0x0058 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            TurnTargetPackedProperties;                    // 0x0068 (0x0004) [0x0000000000000000]               
	class TArray<struct FSlotMoveRef>                  SlipRefs;                                      // 0x006C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FCoverInfo>                    OverlapClaimsList;                             // 0x007C (0x0010) [0x0000000500010000] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	uint32_t                                           bLeanLeft : 1;                                 // 0x008C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bLeanRight : 1;                                // 0x008C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bForceCanPopUp : 1;                            // 0x008C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bCanPopUp : 1;                                 // 0x008C (0x0004) [0x0000000500000000] [0x00000008] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bCanMantle : 1;                                // 0x008C (0x0004) [0x0000000500000000] [0x00000010] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bCanClimbUp : 1;                               // 0x008C (0x0004) [0x0000000500000000] [0x00000020] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bForceCanCoverSlip_Left : 1;                   // 0x008C (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bForceCanCoverSlip_Right : 1;                  // 0x008C (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           bCanCoverSlip_Left : 1;                        // 0x008C (0x0004) [0x0000000500000000] [0x00000100] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bCanCoverSlip_Right : 1;                       // 0x008C (0x0004) [0x0000000500000000] [0x00000200] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bCanSwatTurn_Left : 1;                         // 0x008C (0x0004) [0x0000000500000000] [0x00000400] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bCanSwatTurn_Right : 1;                        // 0x008C (0x0004) [0x0000000500000000] [0x00000800] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bEnabled : 1;                                  // 0x008C (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           bAllowPopup : 1;                               // 0x008C (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           bAllowMantle : 1;                              // 0x008C (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           bAllowCoverSlip : 1;                           // 0x008C (0x0004) [0x0000000100000000] [0x00008000] (CPF_Edit)
	uint32_t                                           bAllowClimbUp : 1;                             // 0x008C (0x0004) [0x0000000100000000] [0x00010000] (CPF_Edit)
	uint32_t                                           bAllowSwatTurn : 1;                            // 0x008C (0x0004) [0x0000000100000000] [0x00020000] (CPF_Edit)
	uint32_t                                           bForceNoGroundAdjust : 1;                      // 0x008C (0x0004) [0x0000000100000000] [0x00040000] (CPF_Edit)
	uint32_t                                           bPlayerOnly : 1;                               // 0x008C (0x0004) [0x0000000100000000] [0x00080000] (CPF_Edit)
	uint32_t                                           bPreferLeanOverPopup : 1;                      // 0x008C (0x0004) [0x0000000100000000] [0x00100000] (CPF_Edit)
	uint32_t                                           bDestructible : 1;                             // 0x008C (0x0004) [0x0000000000000400] [0x00200000] (CPF_Transient)
	uint32_t                                           bSelected : 1;                                 // 0x008C (0x0004) [0x0000000000000400] [0x00400000] (CPF_Transient)
	uint32_t                                           bFailedToFindSurface : 1;                      // 0x008C (0x0004) [0x0000000500000400] [0x00800000] (CPF_Edit | CPF_Transient | CPF_EditConst)
};

// ScriptStruct Engine.CoverLink.DynamicLinkInfo
// 0x0018
struct FDynamicLinkInfo
{
	struct FVector                                     LastTargetLocation;                            // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastSrcLocation;                               // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverLink.CoverReference
// 0x0004 (0x0018 - 0x001C)
struct FCoverReference : FActorReference
{
	int32_t                                            SlotIdx;                                       // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.CoverLink.FireLinkItem
// 0x0004
struct FFireLinkItem
{
	uint8_t                                            SrcType;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            SrcAction;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            DestType;                                      // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            DestAction;                                    // 0x0003 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverLink.ExposedLink
// 0x001D
struct FExposedLink
{
	struct FCoverReference                             TargetActor;                                   // 0x0000 (0x001C) [0x0000000500000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	uint8_t                                            ExposedScale;                                  // 0x001C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x001D (0x0003) ADDED PADDING
};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FPackedNormal                               Normal;                                        // 0x000C (0x0004) [0x0000000000000000]               
	struct FColor                                      Color;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x0018
struct FStaticMeshComponentLODInfo
{
	struct FPointer                                    OverrideVertexColors;                          // 0x0000 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
	class TArray<struct FPaintedVertex>                PaintedVertices;                               // 0x0008 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x0068
struct FCoverMeshes
{
	class UStaticMesh*                                 Base;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanLeft;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanRight;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanLeftPref;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanRightPref;                                 // 0x0020 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 Climb;                                         // 0x0028 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 Mantle;                                        // 0x0030 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SlipLeft;                                      // 0x0038 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SlipRight;                                     // 0x0040 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SwatLeft;                                      // 0x0048 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SwatRight;                                     // 0x0050 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 PopUp;                                         // 0x0058 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 PlayerOnly;                                    // 0x0060 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CullDistance;                                  // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              KeyOut;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           TangentsValid : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TangentIn;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              TangentOut;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            IntepMode;                                     // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0018
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                   // 0x0000 (0x0008) [0x0000020000000401] (CPF_Const | CPF_Transient | CPF_AlwaysInit)
	class TArray<class UUIDataStore*>                  DataStores;                                    // 0x0008 (0x0010) [0x0000020000010401] (CPF_Const | CPF_Transient | CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Input.KeyBind
// 0x001C
struct FKeyBind
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000800] (CPF_Config)  
	class FString                                      Command;                                       // 0x0008 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           Control : 1;                                   // 0x0018 (0x0004) [0x0000000000000800] [0x00000001] (CPF_Config)
	uint32_t                                           Shift : 1;                                     // 0x0018 (0x0004) [0x0000000000000800] [0x00000002] (CPF_Config)
	uint32_t                                           Alt : 1;                                       // 0x0018 (0x0004) [0x0000000000000800] [0x00000004] (CPF_Config)
	uint32_t                                           bIgnoreCtrl : 1;                               // 0x0018 (0x0004) [0x0000000000000800] [0x00000008] (CPF_Config)
	uint32_t                                           bIgnoreShift : 1;                              // 0x0018 (0x0004) [0x0000000000000800] [0x00000010] (CPF_Config)
	uint32_t                                           bIgnoreAlt : 1;                                // 0x0018 (0x0004) [0x0000000000000800] [0x00000020] (CPF_Config)
};

// ScriptStruct Engine.Input.TouchTracker
// 0x0018
struct FTouchTracker
{
	int32_t                                            Handle;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            TouchpadIndex;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   Location;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            EventType;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	uint32_t                                           bTrapInput : 1;                                // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0010
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x0000004000004005] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FPointer                                    RenderData;                                    // 0x0008 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x000C
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                         // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              LifetimeRemaining;                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x001C
struct FLightmassMaterialInterfaceSettings
{
	uint32_t                                           bCastShadowAsMasked : 1;                       // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              EmissiveBoost;                                 // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              ExportResolutionScale;                         // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DistanceFieldPenumbraScale;                    // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverrideCastShadowAsMasked : 1;               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverrideEmissiveBoost : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverrideDiffuseBoost : 1;                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverrideSpecularBoost : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverrideExportResolutionScale : 1;            // 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bOverrideDistanceFieldPenumbraScale : 1;       // 0x0018 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.Material.MaterialInput
// 0x0034
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            OutputIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      InputName;                                     // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            GCC64_Padding;                                 // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                       // 0x0000 (0x0010) [0x0000000000000000]               
	class UMaterialFunction*                           Function;                                      // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008 (0x0034 - 0x003C)
struct FColorMaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      Constant;                                      // 0x0038 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008 (0x0034 - 0x003C)
struct FScalarMaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Constant;                                      // 0x0038 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010 (0x0034 - 0x0044)
struct FVectorMaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Constant;                                      // 0x0038 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x000C (0x0034 - 0x0040)
struct FVector2MaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ConstantX;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              ConstantY;                                     // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PhysicsVolume.CheckpointRecord
// 0x0004
struct APhysicsVolume_FCheckpointRecord
{
	uint32_t                                           bPainCausing : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.DynamicBlockingVolume.CheckpointRecord
// 0x001C
struct ADynamicBlockingVolume_FCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint32_t                                           bCollideActors : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlockActors : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsReplication : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// 0x0048
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 EmitterInstanceMBInfoMap;                      // 0x0000 (0x0048) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0048
struct FParticleSysParam
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            ParamType;                                     // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              Scalar;                                        // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Scalar_Low;                                    // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Vector;                                        // 0x0014 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Vector_Low;                                    // 0x0020 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FColor                                      Color;                                         // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      Actor;                                         // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                      // 0x0038 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FPointer                                    VectorArray;                                   // 0x0040 (0x0008) [0x0000000100000200] (CPF_Edit | CPF_Native)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x0034
struct FParticleEventData
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        EventName;                                     // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              EmitterTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Direction;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000 (0x0034 - 0x0034)
struct FParticleEventSpawnData : FParticleEventData
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x0004 (0x0034 - 0x0038)
struct FParticleEventDeathData : FParticleEventData
{
	float                                              ParticleTime;                                  // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x0020 (0x0034 - 0x0054)
struct FParticleEventCollideData : FParticleEventData
{
	float                                              ParticleTime;                                  // 0x0034 (0x0004) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0038 (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            Item;                                          // 0x0048 (0x0004) [0x0000000000000000]               
	class FName                                        BoneName;                                      // 0x004C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x0004
struct FParticleSystemLOD
{
	uint32_t                                           bLit : 1;                                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	class TArray<uint8_t>                              SoloEnableSetting;                             // 0x0000 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x0010 (0x0034 - 0x0044)
struct FParticleEventKismetData : FParticleEventData
{
	uint32_t                                           UsePSysCompLocation : 1;                       // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Normal;                                        // 0x0038 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventAttractorCollideData
// 0x0000 (0x0054 - 0x0054)
struct FParticleEventAttractorCollideData : FParticleEventCollideData
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstanceMotionBlurInfo
// 0x0048
struct FParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 ParticleMBInfoMap;                             // 0x0000 (0x0048) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.Emitter.CheckpointRecord
// 0x0004
struct AEmitter_FCheckpointRecord
{
	uint32_t                                           bIsActive : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x002C
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                           // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AActor*                                      Base;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     RelativeLocation;                              // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RelativeRotation;                              // 0x001C (0x000C) [0x0000000000000000]               
	uint32_t                                           bInheritBaseScale : 1;                         // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                            // 0x0000 (0x0004) [0x0000000000002800] (CPF_Config | CPF_GlobalConfig)
	struct FColor                                      Out;                                           // 0x0004 (0x0004) [0x0000000000002800] (CPF_Config | CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x0024
struct FStatColorMapping
{
	class FString                                      StatName;                                      // 0x0000 (0x0010) [0x0000000000012800] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	class TArray<struct FStatColorMapEntry>            ColorMap;                                      // 0x0010 (0x0010) [0x0000000000012800] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	uint32_t                                           DisableBlend : 1;                              // 0x0020 (0x0004) [0x0000000000002800] [0x00000001] (CPF_Config | CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	class FString                                      Comment;                                       // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Engine.KismetLevelUpdatePriority
// 0x000C
struct FKismetLevelUpdatePriority
{
	class FName                                        LevelName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Priority;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x000C
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                     // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MaterialIndex;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.PostProcessMaterialRef
// 0x0008
struct FPostProcessMaterialRef
{
	class UMaterialEffect*                             Effect;                                        // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// 0x0028
struct FMaterialReferenceList
{
	class UMaterialInterface*                          TargetMaterial;                                // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FPrimitiveMaterialRef>         AffectedMaterialRefs;                          // 0x0008 (0x0010) [0x0000001000014000] (CPF_Component | CPF_NeedCtorLink | CPF_EditHide)
	class TArray<struct FPostProcessMaterialRef>       AffectedPPChainMaterialRefs;                   // 0x0018 (0x0010) [0x0000001000010000] (CPF_NeedCtorLink | CPF_EditHide)
};

// ScriptStruct Engine.EngineTypes.VelocityObstacleStat
// 0x0020
struct FVelocityObstacleStat
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Priority;                                      // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.FacebookIntegration.FacebookFriend
// 0x0020
struct FFacebookFriend
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      Id;                                            // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpActor.CheckpointRecord
// 0x0020
struct AInterpActor_FCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint8_t                                            CollisionType;                                 // 0x0018 (0x0001) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsShutdown : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsPositionReplication : 1;                 // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.FlexComponent.FlexSimBuffer
// 0x0024
struct FFlexSimBuffer
{
	class TArray<struct FVector4>                      SimPositions;                                  // 0x0000 (0x0010) [0x0000100000000601] (CPF_Const | CPF_Native | CPF_Transient | CPF_NotForConsole)
	class TArray<struct FVector>                       SimNormals;                                    // 0x0010 (0x0010) [0x0000100000000601] (CPF_Const | CPF_Native | CPF_Transient | CPF_NotForConsole)
	int32_t                                            SimFrameID;                                    // 0x0020 (0x0004) [0x0000100000000601] (CPF_Const | CPF_Native | CPF_Transient | CPF_NotForConsole)
};

// ScriptStruct Engine.FogVolumeDensityInfo.CheckpointRecord
// 0x0004
struct AFogVolumeDensityInfo_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FracturedStaticMeshComponent.FragmentGroup
// 0x0014
struct FFragmentGroup
{
	class TArray<int32_t>                              FragmentIndices;                               // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bGroupIsRooted : 1;                            // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.WorldInfo.NavMeshPathGoalEvaluatorCacheDatum
// 0x002C
struct FNavMeshPathGoalEvaluatorCacheDatum
{
	int32_t                                            ListIdx;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class UNavMeshPathGoalEvaluator*                   List[5];                                       // 0x0004 (0x0028) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x0028
struct FNetViewer
{
	class APlayerController*                           InViewer;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Viewer;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     ViewLocation;                                  // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     ViewDir;                                       // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.PIESettings
// 0x0038
struct FPIESettings
{
	class FString                                      Description;                                   // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      SetFlagsInPIE;                                 // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      SetChaptersInPIE;                              // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        StartPointInPIE;                               // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	uint32_t                                           RigidBody : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Fluid : 1;                                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Cloth : 1;                                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           SoftBody : 1;                                  // 0x0000 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x0024
struct FScreenMessageString
{
	struct FQWord                                      Key;                                           // 0x0000 (0x0008) [0x0000020000000400] (CPF_Transient | CPF_AlwaysInit)
	class FString                                      ScreenMessage;                                 // 0x0008 (0x0010) [0x0000020000010400] (CPF_Transient | CPF_AlwaysInit | CPF_NeedCtorLink)
	struct FColor                                      DisplayColor;                                  // 0x0018 (0x0004) [0x0000020000000400] (CPF_Transient | CPF_AlwaysInit)
	float                                              TimeToDisplay;                                 // 0x001C (0x0004) [0x0000020000000400] (CPF_Transient | CPF_AlwaysInit)
	float                                              CurrentTimeDisplayed;                          // 0x0020 (0x0004) [0x0000020000000400] (CPF_Transient | CPF_AlwaysInit)
};

// ScriptStruct Engine.WorldInfo.HostMigrationState
// 0x0020
struct FHostMigrationState
{
	uint8_t                                            HostMigrationProgress;                         // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              HostMigrationElapsedTime;                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              HostMigrationTravelCountdown;                  // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      HostMigrationTravelURL;                        // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bHostMigrationEnabled : 1;                     // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// 0x0058
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                      // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NumIndirectLightingBounces;                    // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FColor                                      EnvironmentColor;                              // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EnvironmentIntensity;                          // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bEnableAdvancedEnvironmentColor : 1;           // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FColor                                      EnvironmentSunColor;                           // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EnvironmentSunIntensity;                       // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EnvironmentLightTerminatorAngle;               // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     EnvironmentLightDirection;                     // 0x0020 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              EmissiveBoost;                                 // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              IndirectNormalInfluenceBoost;                  // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bUseAmbientOcclusion : 1;                      // 0x003C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bEnableImageReflectionShadowing : 1;           // 0x003C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              DirectIlluminationOcclusionFraction;           // 0x0040 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              IndirectIlluminationOcclusionFraction;         // 0x0044 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OcclusionExponent;                             // 0x0048 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FullyOccludedSamplesFraction;                  // 0x004C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxOcclusionDistance;                          // 0x0050 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bVisualizeMaterialDiffuse : 1;                 // 0x0054 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bVisualizeAmbientOcclusion : 1;                // 0x0054 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bCompressShadowmap : 1;                        // 0x0054 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	uint32_t                                           bDisableLod : 1;                               // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            ParticlesLodMin;                               // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ParticlesLodMax;                               // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            PacketsPerPhysXParticleSystemMax;              // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bApplyCylindricalPacketCulling : 1;            // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              SpawnLodVsFifoBias;                            // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                      // 0x0000 (0x0018) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// 0x0014
struct FApexModuleDestructibleSettings
{
	int32_t                                            MaxChunkIslandCount;                           // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxShapeCount;                                 // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxRrbActorCount;                              // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxChunkSeparationLOD;                         // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverrideMaxChunkSeparationLOD : 1;            // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x0010
struct FPhysXSimulationProperties
{
	uint32_t                                           bUseHardware : 1;                              // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bFixedTimeStep : 1;                            // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              TimeStep;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxTimeStep;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxSubSteps;                                   // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x0050
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                  // 0x0000 (0x0010) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                          // 0x0010 (0x0010) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentFluid;                              // 0x0020 (0x0010) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentCloth;                              // 0x0030 (0x0010) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                           // 0x0040 (0x0010) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// 0x001C
struct FWorldFractureSettings
{
	float                                              ChanceOfPhysicsChunkOverride;                  // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnableChanceOfPhysicsChunkOverride : 1;       // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLimitExplosionChunkSize : 1;                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MaxExplosionChunkSize;                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLimitDamageChunkSize : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDamageChunkSize;                            // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxNumFacturedChunksToSpawnInAFrame;           // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FractureExplosionVelScale;                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.NavMeshPathConstraintCacheDatum
// 0x002C
struct FNavMeshPathConstraintCacheDatum
{
	int32_t                                            ListIdx;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class UNavMeshPathConstraint*                      List[5];                                       // 0x0004 (0x0028) [0x0000000000000000]               
};

// ScriptStruct Engine.FracturedStaticMeshActor.DeferredPartToSpawn
// 0x0030
struct FDeferredPartToSpawn
{
	class TArray<int32_t>                              ChunkIndex;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     InitialVel;                                    // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     InitialAngVel;                                 // 0x001C (0x000C) [0x0000000000000000]               
	float                                              RelativeScale;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bExplosion : 1;                                // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FracturedStaticMeshActor.BreakOffPartsData
// 0x0054
struct FBreakOffPartsData
{
	uint32_t                                           bWantPhysChunksAndParticles : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAllowDamagedEventFiring : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            ExplosionType;                                 // 0x0004 (0x0001) [0x0000000000000000]               
	struct FVector                                     ExplodePosition;                               // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              ExplodeRadius;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            PartIndex;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            BlastType;                                     // 0x001C (0x0001) [0x0000000000000000]               
	struct FVector                                     BlastOriginOffset;                             // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              BlastOriginRadiusOverride;                     // 0x002C (0x0004) [0x0000000000000000]               
	float                                              ExplodeForce;                                  // 0x0030 (0x0004) [0x0000000000000000]               
	struct FVector                                     ExplodeVelocity;                               // 0x0034 (0x000C) [0x0000000000000000]               
	struct FVector                                     ExplodeAngularVelocity;                        // 0x0040 (0x000C) [0x0000000000000000]               
	uint32_t                                           bUseCoreBlastPositionIfPossible : 1;           // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIncludeSupportChunks : 1;                     // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSupressStateSaving : 1;                       // 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            NumPartsPerChunk;                              // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.FracturedStaticMeshActor.CheckpointRecord
// 0x0014
struct AFracturedStaticMeshActor_FCheckpointRecord
{
	uint32_t                                           bIsShutdown : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<uint8_t>                              FragmentVis;                                   // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	class FName                                        PackageName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bShouldBeLoaded : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShouldBeVisible : 1;                          // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0034
struct FFullyLoadedPackagesInfo
{
	uint8_t                                            FullyLoadType;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Tag;                                           // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          PackagesToLoad;                                // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class UObject*>                       LoadedObjects;                                 // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class FName                                        NetDriverName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    NetDriver;                                     // 0x0008 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.GameEngine.AnimTag
// 0x0020
struct FAnimTag
{
	class FString                                      Tag;                                           // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Contains;                                      // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.URL
// 0x0058
struct FURL
{
	class FString                                      Protocol;                                      // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      Host;                                          // 0x0010 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0020 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
	class FString                                      Map;                                           // 0x0024 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class TArray<class FString>                        Op;                                            // 0x0034 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class FString                                      Portal;                                        // 0x0044 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	int32_t                                            Valid;                                         // 0x0054 (0x0004) [0x0000020000000000] (CPF_AlwaysInit)
};

// ScriptStruct Engine.GameInfo.GameClassShortName
// 0x0020
struct FGameClassShortName
{
	class FString                                      ShortName;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      GameClassName;                                 // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// 0x0044
struct FGameTypePrefix
{
	class FString                                      Prefix;                                        // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bUsesCommonPackage : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      GameType;                                      // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        AdditionalGameTypes;                           // 0x0024 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ForcedObjects;                                 // 0x0034 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameInfo.RMap3DRenderingData
// 0x005C
struct FRMap3DRenderingData
{
	struct FVector                                     PlayerPosition;                                // 0x0000 (0x000C) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x4];                              // 0x000C (0x0004) MISSED OFFSET
	struct FVector4                                    WaypointPosition;                              // 0x0010 (0x0010) [0x0000000000000000]               
	float                                              MapXNavigable;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              MapYNavigable;                                 // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              MapZNavigable;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              MapAceNavigable;                               // 0x002C (0x0004) [0x0000000000000000]               
	float                                              MapXThreatLevel;                               // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              MapYThreatLevel;                               // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              MapZThreatLevel;                               // 0x0038 (0x0004) [0x0000000000000000]               
	class TArray<struct FVector4>                      ColorAndFadePct;                               // 0x003C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FMatrix>                       WorldToHighlight;                              // 0x004C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            MinStructAlignment[0x4];                         // 0x005C (0x0004) ADDED PADDING
};

// ScriptStruct Engine.GameplayEvents.PlayerInformation
// 0x0024
struct FPlayerInformation
{
	class FName                                        ControllerName;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      PlayerName;                                    // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                      // 0x0018 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsBot : 1;                                    // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameplayEvents.TeamInformation
// 0x001C
struct FTeamInformation
{
	int32_t                                            TeamIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      TeamName;                                      // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FColor                                      TeamColor;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxSize;                                       // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameStatGroup
// 0x0008
struct FGameStatGroup
{
	uint8_t                                            Group;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            Level;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameplayEventMetaData
// 0x0018
struct FGameplayEventMetaData
{
	int32_t                                            EventID;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Const)   
	class FName                                        EventName;                                     // 0x0004 (0x0008) [0x0000000000000001] (CPF_Const)   
	struct FGameStatGroup                              StatGroup;                                     // 0x000C (0x0008) [0x0000000000000001] (CPF_Const)   
	int32_t                                            EventDataType;                                 // 0x0014 (0x0004) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.GameplayEvents.WeaponClassEventData
// 0x0008
struct FWeaponClassEventData
{
	class FName                                        WeaponClassName;                               // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.DamageClassEventData
// 0x0008
struct FDamageClassEventData
{
	class FName                                        DamageClassName;                               // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.ProjectileClassEventData
// 0x0008
struct FProjectileClassEventData
{
	class FName                                        ProjectileClassName;                           // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.PawnClassEventData
// 0x0008
struct FPawnClassEventData
{
	class FName                                        PawnClassName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameplayEventsHeader
// 0x0030
struct FGameplayEventsHeader
{
	int32_t                                            EngineVersion;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            StatsWriterVersion;                            // 0x0004 (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            StreamOffset;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            AggregateOffset;                               // 0x000C (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            FooterOffset;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            TotalStreamSize;                               // 0x0014 (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            FileSize;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Const)   
	class FString                                      FilterClass;                                   // 0x001C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Flags;                                         // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameplayEvents.GameSessionInformation
// 0x0088
struct FGameSessionInformation
{
	int32_t                                            AppTitleID;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PlatformType;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      Language;                                      // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      GameplaySessionTimestamp;                      // 0x0018 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	float                                              GameplaySessionStartTime;                      // 0x0028 (0x0004) [0x0000000000000001] (CPF_Const)   
	float                                              GameplaySessionEndTime;                        // 0x002C (0x0004) [0x0000000000000001] (CPF_Const)   
	uint32_t                                           bGameplaySessionInProgress : 1;                // 0x0030 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)
	class FString                                      GameplaySessionID;                             // 0x0034 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      GameClassName;                                 // 0x0044 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0054 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      MapURL;                                        // 0x0064 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            SessionInstance;                               // 0x0074 (0x0004) [0x0000000000000001] (CPF_Const)   
	int32_t                                            GameTypeId;                                    // 0x0078 (0x0004) [0x0000000000000001] (CPF_Const)   
	struct FUniqueNetId                                OwningNetId;                                   // 0x007C (0x0008) [0x0000000000000001] (CPF_Const)   
	int32_t                                            PlaylistId;                                    // 0x0084 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameStateObject.TeamState
// 0x0014
struct FTeamState
{
	int32_t                                            TeamIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              PlayerIndices;                                 // 0x0004 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameStateObject.PlayerState
// 0x0010
struct FPlayerState
{
	int32_t                                            PlayerIndex;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentTeamIndex;                              // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeSpawned;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              TimeAliveSinceLastDeath;                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameStatsAggregator.AggregateEventMapping
// 0x000C
struct FAggregateEventMapping
{
	int32_t                                            EventID;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            AggregateID;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            TargetAggregateID;                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameStatsAggregator.GameEvents
// 0x0048
struct FGameEvents
{
	struct FMap_Mirror                                 Events;                                        // 0x0000 (0x0048) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.GameStatsAggregator.EventsBase
// 0x0058
struct FEventsBase
{
	struct FGameEvents                                 TotalEvents;                                   // 0x0000 (0x0048) [0x0000000000000000]               
	class TArray<struct FGameEvents>                   EventsByClass;                                 // 0x0048 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameStatsAggregator.WeaponEvents
// 0x0000 (0x0058 - 0x0058)
struct FWeaponEvents : FEventsBase
{
};

// ScriptStruct Engine.GameStatsAggregator.DamageEvents
// 0x0000 (0x0058 - 0x0058)
struct FDamageEvents : FEventsBase
{
};

// ScriptStruct Engine.GameStatsAggregator.ProjectileEvents
// 0x0000 (0x0058 - 0x0058)
struct FProjectileEvents : FEventsBase
{
};

// ScriptStruct Engine.GameStatsAggregator.PawnEvents
// 0x0000 (0x0058 - 0x0058)
struct FPawnEvents : FEventsBase
{
};

// ScriptStruct Engine.GameStatsAggregator.TeamEvents
// 0x0200
struct FTeamEvents
{
	struct FGameEvents                                 TotalEvents;                                   // 0x0000 (0x0048) [0x0000000000000000]               
	struct FWeaponEvents                               WeaponEvents;                                  // 0x0048 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FDamageEvents                               DamageAsPlayerEvents;                          // 0x00A0 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FDamageEvents                               DamageAsTargetEvents;                          // 0x00F8 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FProjectileEvents                           ProjectileEvents;                              // 0x0150 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FPawnEvents                                 PawnEvents;                                    // 0x01A8 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameStatsAggregator.PlayerEvents
// 0x0200
struct FPlayerEvents
{
	struct FGameEvents                                 TotalEvents;                                   // 0x0000 (0x0048) [0x0000000000000000]               
	struct FWeaponEvents                               WeaponEvents;                                  // 0x0048 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FDamageEvents                               DamageAsPlayerEvents;                          // 0x00A0 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FDamageEvents                               DamageAsTargetEvents;                          // 0x00F8 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FProjectileEvents                           ProjectileEvents;                              // 0x0150 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FPawnEvents                                 PawnEvents;                                    // 0x01A8 (0x0058) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameStatsAggregator.GameEvent
// 0x0010
struct FGameEvent
{
	class TArray<float>                                EventCountByTimePeriod;                        // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0018
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxPercentY;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              XbMaxPercentX;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              XbMaxPercentY;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              RecommendedPercentX;                           // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              RecommendedPercentY;                           // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              SizeY;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OriginX;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OriginY;                                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x0010
struct FSplitscreenData
{
	class TArray<struct FPerPlayerSplitscreenData>     PlayerData;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0014
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        PropertyName;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSpecialProperty : 1;                          // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCountArray : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCountObjInstances : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.GameViewportClient.ShowFlags_Mirror
// 0x0010
struct FShowFlags_Mirror
{
	struct FQWord                                      flags0;                                        // 0x0000 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FQWord                                      flags1;                                        // 0x0008 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.GameViewportClient.ExportShowFlags_Mirror
// 0x0000 (0x0010 - 0x0010)
struct FExportShowFlags_Mirror : FShowFlags_Mirror
{
};

// ScriptStruct Engine.HeadTrackingComponent.ActorToLookAt
// 0x001C
struct FActorToLookAt
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Rating;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              EnteredTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LastKnownDistance;                             // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              StartTimeBeingLookedAt;                        // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           CurrentlyBeingLookedAt : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// 0x0035
struct FIniLocFileEntry
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      DLName;                                        // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      HashCode;                                      // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bIsUnicode : 1;                                // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            ReadState;                                     // 0x0034 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0035 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                     // 0x0000 (0x0040) [0x0000000000000000]               
	struct FVector2D                                   LightmapUVBias;                                // 0x0040 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   ShadowmapUVBias;                               // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// 0x0020
struct FInstancedStaticMeshMappingInfo
{
	struct FPointer                                    Mapping;                                       // 0x0000 (0x0008) [0x0000000000000200] (CPF_Native)  
	struct FPointer                                    LightMap;                                      // 0x0008 (0x0008) [0x0000000000000200] (CPF_Native)  
	class UTexture2D*                                  LightmapTexture;                               // 0x0010 (0x0008) [0x0000000000000000]               
	class UShadowMap2D*                                ShadowmapTexture;                              // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x0034
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FColor                                      CurveColor;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      CurveName;                                     // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            bHideCurve;                                    // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            bColorCurve;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            bFloatingPointColorCurve;                      // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            bClamp;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              ClampLow;                                      // 0x002C (0x0004) [0x0000000000000000]               
	float                                              ClampHigh;                                     // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	class FString                                      TabName;                                       // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FCurveEdEntry>                 Curves;                                        // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              ViewStartInput;                                // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ViewEndInput;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              ViewStartOutput;                               // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              ViewEndOutput;                                 // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// 0x0014
struct FAnimSetBakeAndPruneStatus
{
	class FString                                      AnimSetName;                                   // 0x0000 (0x0010) [0x0000000500010000] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	uint32_t                                           bReferencedButUnused : 1;                      // 0x0010 (0x0004) [0x0000000500000000] [0x00000001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bSkipBakeAndPrune : 1;                         // 0x0010 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bSkipCooking : 1;                              // 0x0010 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UInterpTrack*                                Track;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            KeyIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              UnsnappedPosition;                             // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpGroupCamera.CameraPreviewInfo
// 0x0040
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UAnimSet*>                      PreviewAnimSets;                               // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        AnimSeqName;                                   // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Location;                                      // 0x0020 (0x000C) [0x0000000400000000] (CPF_EditConst)
	struct FRotator                                    Rotation;                                      // 0x002C (0x000C) [0x0000000400000000] (CPF_EditConst)
	class APawn*                                       PawnInst;                                      // 0x0038 (0x0008) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x0024
struct FSubTrackGroup
{
	class FString                                      GroupName;                                     // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              TrackIndices;                                  // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bIsCollapsed : 1;                              // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsSelected : 1;                               // 0x0020 (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x001C
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SubTrackName;                                  // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            GroupIndex;                                    // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackFloatBase.RandomGenerator
// 0x0034
struct FRandomGenerator
{
	uint32_t                                           bUseRandomise : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            RandomSeed;                                    // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StepValue;                                     // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StartTime;                                     // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EndTime;                                       // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StartValues[2];                                // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              EndValues[2];                                  // 0x001C (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ValueVariationsPerc[2];                        // 0x0024 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bStartAtMax : 1;                               // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              StepValueMax;                                  // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        AnimSeqName;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              AnimStartOffset;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AnimEndOffset;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AnimPlayRate;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLooping : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReverse : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.InterpTrackVectorBase.RandomGeneratorVector
// 0x0064
struct FRandomGeneratorVector
{
	uint32_t                                           bUseRandomise : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            RandomSeed;                                    // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StepValue;                                     // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StepValueMax;                                  // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StartTime;                                     // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EndTime;                                       // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StartValues[6];                                // 0x0018 (0x0018) [0x0000000100000000] (CPF_Edit)    
	float                                              EndValues[6];                                  // 0x0030 (0x0018) [0x0000000100000000] (CPF_Edit)    
	float                                              ValueVariationsPerc[6];                        // 0x0048 (0x0018) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bStartAtMaxX : 1;                              // 0x0060 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bStartAtMaxY : 1;                              // 0x0060 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bStartAtMaxZ : 1;                              // 0x0060 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           Value : 1;                                     // 0x0004 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0024
struct FDirectorTrackCut
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TransitionTime;                                // 0x0004 (0x0004) [0x0000000000000000]               
	class FName                                        TargetCamGroup;                                // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ShotNumber;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	class TArray<class UInterpTrack*>                  BoundTracks;                                   // 0x0014 (0x0010) [0x00000A0000010000] (CPF_AlwaysInit | CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        EventName;                                     // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x0024
struct FFaceFXTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      FaceFXGroupName;                               // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      FaceFXSeqName;                                 // 0x0014 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// 0x0008
struct FFaceFXSoundCueKey
{
	class USoundCue*                                   FaceFXSoundCue;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.InterpTrackHeadTracking.HeadTrackingKey
// 0x0005
struct FHeadTrackingKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// 0x0020
struct FFloatMaterialParamMICData
{
	class TArray<class UMaterialInstanceConstant*>     MICs;                                          // 0x0000 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<float>                                MICResetFloats;                                // 0x0010 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamPrimitiveData
// 0x000C
struct FFloatMaterialParamPrimitiveData
{
	class UPrimitiveComponent*                         Primitive;                                     // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MaterialIndex;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            ToggleAction;                                  // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// 0x0020
struct FVectorMaterialParamMICData
{
	class TArray<class UMaterialInstanceConstant*>     MICs;                                          // 0x0000 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FVector>                       MICResetVectors;                               // 0x0010 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamPrimitiveData
// 0x000C
struct FVectorMaterialParamPrimitiveData
{
	class UPrimitiveComponent*                         Primitive;                                     // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MaterialIndex;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0006
struct FVisibilityTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            ActiveCondition;                               // 0x0005 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                         // 0x0006 (0x0002) ADDED PADDING
};

// ScriptStruct Engine.InterpTrackMove.RandomGeneratorMove
// 0x00AC
struct FRandomGeneratorMove
{
	uint32_t                                           bUseRandomise : 1;                             // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            RandomSeed;                                    // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StepValue;                                     // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StepValueMax;                                  // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StartTime;                                     // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EndTime;                                       // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StartValuesPos[6];                             // 0x0018 (0x0018) [0x0000000100000000] (CPF_Edit)    
	float                                              EndValuesPos[6];                               // 0x0030 (0x0018) [0x0000000100000000] (CPF_Edit)    
	float                                              ValueVariationsPercPos[6];                     // 0x0048 (0x0018) [0x0000000100000000] (CPF_Edit)    
	float                                              StartValuesRot[6];                             // 0x0060 (0x0018) [0x0000000100000000] (CPF_Edit)    
	float                                              EndValuesRot[6];                               // 0x0078 (0x0018) [0x0000000100000000] (CPF_Edit)    
	float                                              ValueVariationsPercRot[6];                     // 0x0090 (0x0018) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bStartAtMaxX : 1;                              // 0x00A8 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bStartAtMaxY : 1;                              // 0x00A8 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bStartAtMaxZ : 1;                              // 0x00A8 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bStartAtMaxRotX : 1;                           // 0x00A8 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bStartAtMaxRotY : 1;                           // 0x00A8 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bStartAtMaxRotZ : 1;                           // 0x00A8 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	class FName                                        GroupName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	class TArray<struct FInterpLookupPoint>            Points;                                        // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x0010
struct FParticleReplayTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ClipIDNumber;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bEconomicalReplay : 1;                         // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Volume;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Pitch;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	class USoundCue*                                   Sound;                                         // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              WwiseDuration;                                 // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LandscapeProxy.LandscapeLayerStruct
// 0x0030
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                  // 0x0008 (0x0008) [0x0000080000000000] (CPF_EditorOnly)
	class ALandscapeProxy*                             Owner;                                         // 0x0010 (0x0008) [0x0000080000000000] (CPF_EditorOnly)
	int32_t                                            DebugColorChannel;                             // 0x0018 (0x0004) [0x0000080000000400] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bSelected : 1;                                 // 0x001C (0x0004) [0x0000080000000400] [0x00000001] (CPF_Transient | CPF_EditorOnly)
	class FString                                      SourceFilePath;                                // 0x0020 (0x0010) [0x0000080000010000] (CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[4];                               // 0x0000 (0x0020) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.Landscape.LandscapeLayerInfo
// 0x0038
struct FLandscapeLayerInfo
{
	class FName                                        LayerName;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              Hardness;                                      // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bNoWeightBlend : 1;                            // 0x000C (0x0004) [0x0000080000000000] [0x00000001] (CPF_EditorOnly)
	class UPhysicalMaterial*                           PhysMaterial;                                  // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInstanceConstant*                   ThumbnailMIC;                                  // 0x0018 (0x0008) [0x0000080000000000] (CPF_EditorOnly)
	uint32_t                                           bSelected : 1;                                 // 0x0020 (0x0004) [0x0000080000000400] [0x00000001] (CPF_Transient | CPF_EditorOnly)
	int32_t                                            DebugColorChannel;                             // 0x0024 (0x0004) [0x0000080000000400] (CPF_Transient | CPF_EditorOnly)
	class FString                                      LayerSourceFile;                               // 0x0028 (0x0010) [0x0000080000010400] (CPF_Transient | CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// 0x000A
struct FWeightmapLayerAllocationInfo
{
	class FName                                        LayerName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            WeightmapTextureIndex;                         // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            WeightmapTextureChannel;                       // 0x0009 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                         // 0x000A (0x0002) ADDED PADDING
};

// ScriptStruct Engine.LandscapeGizmoActiveActor.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	float                                              Ratio;                                         // 0x0000 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	float                                              HeightData;                                    // 0x0004 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
	uint8_t                                            UnknownData00[0x48];                            // 0x0008 (0x0048) MISSED OFFSET
};

// ScriptStruct Engine.LandscapeInfo.LandscapeAddCollision
// 0x0030
struct FLandscapeAddCollision
{
	struct FVector                                     Corners[4];                                    // 0x0000 (0x0030) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.MaterialInstanceConstant.FontParameterValue
// 0x0024
struct FFontParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UFont*                                       FontValue;                                     // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            FontPage;                                      // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstanceConstant.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ParameterValue;                                // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x000C (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstanceConstant.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UTexture*                                    ParameterValue;                                // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstanceConstant.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FLinearColor                                ParameterValue;                                // 0x0008 (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0018 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x0224
struct FLensFlareElement
{
	class FName                                        ElementName;                                   // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              RayDistance;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bIsEnabled : 1;                                // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bOcclusionPercentageInVertAlpha : 1;           // 0x000C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bIntensityInVertAlpha : 1;                     // 0x000C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bSourceDistanceInVertAlpha : 1;                // 0x000C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bRayDistanceInVertAlpha : 1;                   // 0x000C (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bRadialDistanceInVertAlpha : 1;                // 0x000C (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bInvertOcclusionPercentage : 1;                // 0x000C (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bInvertIntensity : 1;                          // 0x000C (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           bInvertSourceDistance : 1;                     // 0x000C (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           bInvertRayDistance : 1;                        // 0x000C (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           bInvertRadialDistance : 1;                     // 0x000C (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           bUseSourceDistance : 1;                        // 0x000C (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           bNormalizeRadialDistance : 1;                  // 0x000C (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           bModulateColorBySource : 1;                    // 0x000C (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	struct FVector                                     Size;                                          // 0x0010 (0x000C) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UMaterialInterface*>            LFMaterials;                                   // 0x001C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       LFMaterialIndex;                               // 0x002C (0x0024) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Scaling;                                       // 0x0050 (0x0024) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      AxisScaling;                                   // 0x0074 (0x0040) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Rotation;                                      // 0x00B4 (0x0024) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	uint32_t                                           bOrientTowardsSource : 1;                      // 0x00D8 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FRawDistributionVector                      Color;                                         // 0x00DC (0x0040) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Alpha;                                         // 0x011C (0x0024) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      Offset;                                        // 0x0140 (0x0040) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Scale;                                 // 0x0180 (0x0040) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Color;                                 // 0x01C0 (0x0040) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       DistMap_Alpha;                                 // 0x0200 (0x0024) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0018
struct FLensFlareElementCurvePair
{
	class FString                                      CurveName;                                     // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                   // 0x0010 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// 0x0010
struct FLensFlareElementMaterials
{
	class TArray<class UMaterialInterface*>            ElementMaterials;                              // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{
};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// 0x000C
struct FLevelGridCellCoordinate
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Z;                                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LevelStreamingVolume.CheckpointRecord
// 0x0004
struct ALevelStreamingVolume_FCheckpointRecord
{
	uint32_t                                           bDisabled : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.LocalPlayer.PostProcessSettingsOverride
// 0x0238
struct FPostProcessSettingsOverride
{
	struct FPostProcessSettings                        Settings;                                      // 0x0000 (0x020C) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bBlendingIn : 1;                               // 0x020C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlendingOut : 1;                              // 0x020C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CurrentBlendInTime;                            // 0x0210 (0x0004) [0x0000000000000000]               
	float                                              CurrentBlendOutTime;                           // 0x0214 (0x0004) [0x0000000000000000]               
	float                                              BlendInDuration;                               // 0x0218 (0x0004) [0x0000000000000000]               
	float                                              BlendOutDuration;                              // 0x021C (0x0004) [0x0000000000000000]               
	float                                              BlendStartTime;                                // 0x0220 (0x0004) [0x0000000000000000]               
	struct FInterpCurveFloat                           TimeAlphaCurve;                                // 0x0224 (0x0014) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x021C
struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;                                  // 0x0000 (0x020C) [0x0000000000010000] (CPF_NeedCtorLink)
	class APostProcessVolume*                          LastVolumeUsed;                                // 0x020C (0x0008) [0x0000000000000000]               
	float                                              BlendStartTime;                                // 0x0214 (0x0004) [0x0000000000000000]               
	float                                              LastBlendTime;                                 // 0x0218 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x0010
struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    CriticalSection;                               // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.LocHelper.CountryCodeMap
// 0x0035
struct FCountryCodeMap
{
	class FString                                      CountryCode;                                   // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      TOS;                                           // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      PP;                                            // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            PS4Age;                                        // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                            XBoxAgeGroup;                                  // 0x0034 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0035 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.MaterialExpression.ExpressionOutput
// 0x0024
struct FExpressionOutput
{
	class FString                                      OutputName;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x0034
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            OutputIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      InputName;                                     // 0x000C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            GCC64_Padding;                                 // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// 0x0044
struct FCustomInput
{
	class FString                                      InputName;                                     // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FExpressionInput                            Input;                                         // 0x0010 (0x0034) [0x0000001000010000] (CPF_NeedCtorLink | CPF_EditHide)
};

// ScriptStruct Engine.MaterialExpressionDecodeMask.WeightInput
// 0x0044
struct FWeightInput
{
	class FString                                      WeightName;                                    // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FExpressionInput                            Input;                                         // 0x0010 (0x0034) [0x0000001000010000] (CPF_NeedCtorLink | CPF_EditHide)
};

// ScriptStruct Engine.MaterialExpressionLandscapeLayerBlend.LayerBlendInput
// 0x0080
struct FLayerBlendInput
{
	class FName                                        LayerName;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            BlendType;                                     // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FExpressionInput                            LayerInput;                                    // 0x000C (0x0034) [0x0000001000010000] (CPF_NeedCtorLink | CPF_EditHide)
	struct FExpressionInput                            HeightInput;                                   // 0x0040 (0x0034) [0x0000001000010000] (CPF_NeedCtorLink | CPF_EditHide)
	float                                              PreviewWeight;                                 // 0x0074 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FPointer                                    InstanceOverride;                              // 0x0078 (0x0008) [0x0000000000000601] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
// 0x004C
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                               // 0x0000 (0x0008) [0x0000000000000400] (CPF_Transient)
	struct FGuid                                       ExpressionInputId;                             // 0x0008 (0x0010) [0x0000000000000000]               
	struct FExpressionInput                            Input;                                         // 0x0018 (0x0034) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
// 0x003C
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                              // 0x0000 (0x0008) [0x0000000000000400] (CPF_Transient)
	struct FGuid                                       ExpressionOutputId;                            // 0x0008 (0x0010) [0x0000000000000000]               
	struct FExpressionOutput                           Output;                                        // 0x0018 (0x0024) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                // 0x0000 (0x0010) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	class FName                                        ParameterName;                                 // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bLoop : 1;                                     // 0x001C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAutoActivate : 1;                             // 0x001C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              CycleTime;                                     // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bNormalizeTime : 1;                            // 0x0024 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              OffsetTime;                                    // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOffsetFromEnd : 1;                            // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x000C (0x0030 - 0x003C)
struct FFontParameterValueOverTime : FParameterValueOverTime
{
	class UFont*                                       FontValue;                                     // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            FontPage;                                      // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0018 (0x0030 - 0x0048)
struct FScalarParameterValueOverTime : FParameterValueOverTime
{
	float                                              ParameterValue;                                // 0x0030 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FInterpCurveFloat                           ParameterValueCurve;                           // 0x0034 (0x0014) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x0008 (0x0030 - 0x0038)
struct FTextureParameterValueOverTime : FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                // 0x0030 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x0024 (0x0030 - 0x0054)
struct FVectorParameterValueOverTime : FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                // 0x0030 (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FInterpCurveVector                          ParameterValueCurve;                           // 0x0040 (0x0014) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.LinearColorParameterValueOverTime
// 0x0024 (0x0030 - 0x0054)
struct FLinearColorParameterValueOverTime : FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                // 0x0030 (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FInterpCurveLinearColor                     ParameterValueCurve;                           // 0x0040 (0x0014) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.MicroTransactionBase.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	class FString                                      Identifier;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      DisplayName;                                   // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      DisplayDescription;                            // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      DisplayPrice;                                  // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x001C
struct FMorphNodeConn
{
	class TArray<class UMorphNodeBase*>                ChildNodes;                                    // 0x0000 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        ConnName;                                      // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MorphNodeWeightByBoneAngle.BoneAngleMorph
// 0x0008
struct FBoneAngleMorph
{
	float                                              Angle;                                         // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TargetWeight;                                  // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.NavigationHandle.PolySegmentSpan
// 0x0020
struct FPolySegmentSpan
{
	struct FPointer                                    Poly;                                          // 0x0000 (0x0008) [0x0000000000000200] (CPF_Native)  
	struct FVector                                     P1;                                            // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     P2;                                            // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// 0x0034
struct FNavMeshPathParams
{
	struct FPointer                                    Interface;                                     // 0x0000 (0x0008) [0x0000000000000200] (CPF_Native)  
	uint32_t                                           bCanMantle : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNeedsMantleValidityTest : 1;                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAbleToSearch : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCanUseLadders : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bCanJumpUpWalls : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bUseCheapSupportCheck : 1;                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     SearchExtent;                                  // 0x000C (0x000C) [0x0000000000000000]               
	float                                              SearchLaneMultiplier;                          // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     SearchStart;                                   // 0x001C (0x000C) [0x0000000000000000]               
	float                                              MaxDropHeight;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              MinWalkableZ;                                  // 0x002C (0x0004) [0x0000000000000000]               
	float                                              MaxHoverDistance;                              // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationHandle.EdgePointer
// 0x0008
struct FEdgePointer
{
	struct FPointer                                    Dummy;                                         // 0x0000 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.NavigationHandle.PathStore
// 0x0010
struct FPathStore
{
	class TArray<struct FEdgePointer>                  EdgeList;                                      // 0x0000 (0x0010) [0x0000000000000200] (CPF_Native)  
};

// ScriptStruct Engine.NavMeshPathGoalEvaluator.BiasedGoalActor
// 0x000C
struct FBiasedGoalActor
{
	class AActor*                                      Goal;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ExtraCost;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.NavMeshObstacle.CheckpointRecord
// 0x0004
struct ANavMeshObstacle_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineMatchmakingStats.MMStats_Timer
// 0x000C
struct FMMStats_Timer
{
	uint32_t                                           bInProgress : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FDouble                                     MSecs;                                         // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlinePlayerStorage.OnlineProfileSetting
// 0x001C
struct FOnlineProfileSetting
{
	uint8_t                                            Owner;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	struct FSettingsProperty                           ProfileSetting;                                // 0x0004 (0x0018) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineRecentPlayersList.RecentParty
// 0x0018
struct FRecentParty
{
	struct FUniqueNetId                                PartyLeader;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FUniqueNetId>                  PartyMembers;                                  // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineRecentPlayersList.CurrentPlayerMet
// 0x0010
struct FCurrentPlayerMet
{
	int32_t                                            TeamNum;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Skill;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                NetId;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0014
struct FOnlineStatsColumn
{
	int32_t                                            ColumnNo;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               StatValue;                                     // 0x0004 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x0038
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Const)   
	struct FSettingsData                               Rank;                                          // 0x0008 (0x0010) [0x0000000000000001] (CPF_Const)   
	class FString                                      NickName;                                      // 0x0018 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FOnlineStatsColumn>            Columns;                                       // 0x0028 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x001C
struct FColumnMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000000001] (CPF_Const)   
	class FString                                      ColumnName;                                    // 0x000C (0x0010) [0x0000000000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int32_t                                            Count;                                         // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            CountLow;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	class FString                                      CurveName;                                     // 0x0000 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                   // 0x0010 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// 0x001C
struct FParticleRandomSeedInfo
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bGetSeedFromInstance : 1;                      // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bInstanceSeedIsIndex : 1;                      // 0x0008 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bResetSeedOnEmitterLooping : 1;                // 0x0008 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	class TArray<int32_t>                              RandomSeeds;                                   // 0x000C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleApexEmitterExplicitGeom.ExplicitGeomMap
// 0x0024
struct FExplicitGeomMap
{
	class UTexture*                                    ExplicitGeomTexture;                           // 0x0000 (0x0008) [0x0000080100000000] (CPF_Edit | CPF_EditorOnly)
	uint8_t                                            TextureSamplingMultiple;                       // 0x0008 (0x0001) [0x0000080100000000] (CPF_Edit | CPF_EditorOnly)
	float                                              Lifetime;                                      // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FVector2D>                     PointsSequence;                                // 0x0010 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            PointsSequenceMaxLength;                       // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleModuleAttractorBoneSocket.AttractLocationBoneSocketInfo
// 0x0014
struct FAttractLocationBoneSocketInfo
{
	class FName                                        BoneSocketName;                                // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x0008 (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	uint32_t                                           bModify : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bScale : 1;                                    // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bLock : 1;                                     // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleCollision.ParticleAttractorCollisionAction
// 0x0014
struct FParticleAttractorCollisionAction
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FString                                      EventName;                                     // 0x0004 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x002C
struct FParticleEvent_GenerateInfo
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Frequency;                                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            LowFreq;                                       // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ParticleFrequency;                             // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           FirstTimeOnly : 1;                             // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           LastTimeOnly : 1;                              // 0x0010 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           UseReflectedImpactVector : 1;                  // 0x0010 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	class FName                                        CustomName;                                    // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;              // 0x001C (0x0010) [0x0000004100010000] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	class FName                                        BoneSocketName;                                // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x0008 (0x000C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	uint32_t                                           bProcessDuringSpawn : 1;                       // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bProcessDuringUpdate : 1;                      // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseEmitterTime : 1;                           // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0038
struct FEmitterDynamicParameter
{
	class FName                                        ParamName;                                     // 0x0000 (0x0008) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bUseEmitterTime : 1;                           // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bSpawnTimeOnly : 1;                            // 0x0008 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint8_t                                            ValueMethod;                                   // 0x000C (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bScaleVelocityByParamValue : 1;                // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FRawDistributionFloat                       ParamValue;                                    // 0x0014 (0x0024) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleTypeDataApex.ApexLODAsset
// 0x0010
struct FApexLODAsset
{
	class UApexGenericAsset*                           IOFXAsset;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UApexGenericAsset*                           EmitterAsset;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	class FName                                        TargetName;                                    // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              TargetPercentage;                              // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                 // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              WeightForSpawnLod;                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SpawnLodRateVsLifeBias;                        // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RelativeFadeoutTime;                           // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	int32_t                                            EmitterType;                                   // 0x0000 (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
	int32_t                                            OriginalEmitterIndex;                          // 0x0004 (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
	struct FPointer                                    FrameState;                                    // 0x0008 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x0014
struct FParticleSystemReplayFrame
{
	class TArray<struct FParticleEmitterReplayFrame>   Emitters;                                      // 0x0000 (0x0010) [0x0000000000000201] (CPF_Const | CPF_Native)
	float                                              Time;                                          // 0x0010 (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.PBRuleNodeBase.PBRuleLink
// 0x0014
struct FPBRuleLink
{
	class UPBRuleNodeBase*                             NextRule;                                      // 0x0000 (0x0008) [0x0000004100010004] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class FName                                        LinkName;                                      // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            DrawY;                                         // 0x0010 (0x0004) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.SVehicleWheel.VehicleRaycastHitData
// 0x0030
struct FVehicleRaycastHitData
{
	uint32_t                                           bValid : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            UnknownData00[0xC];                              // 0x0004 (0x000C) MISSED OFFSET
	struct FPlane                                      HitPlane;                                      // 0x0010 (0x0010) [0x0000000000000000]               
	struct FPointer                                    HitPxActor;                                    // 0x0020 (0x0008) [0x0000000000000200] (CPF_Native)  
	struct FPointer                                    HitPxShape;                                    // 0x0028 (0x0008) [0x0000000000000200] (CPF_Native)  
};

// ScriptStruct Engine.PointLightToggleable.CheckpointRecord
// 0x0004
struct APointLightToggleable_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0018
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class USequenceOp*                                 Op;                                            // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            InputIdx;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              RemainingDelay;                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// 0x002C
struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      InOriginator;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class AActor*                                      InInstigator;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              ActivateIndices;                               // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bPushTop : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Sequence.SequenceSortKey
// 0x0014
struct FSequenceSortKey
{
	int32_t                                            Priority;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Name;                                          // 0x0004 (0x0010) [0x0000020000010000] (CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ProcBuilding.PBFaceUVInfo
// 0x0010
struct FPBFaceUVInfo
{
	struct FVector2D                                   Offset;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   Size;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuilding.PBMeshCompInfo
// 0x000C
struct FPBMeshCompInfo
{
	class UStaticMeshComponent*                        MeshComp;                                      // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            TopLevelScopeIndex;                            // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuilding.PBFracMeshCompInfo
// 0x000C
struct FPBFracMeshCompInfo
{
	class UFracturedStaticMeshComponent*               FracMeshComp;                                  // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            TopLevelScopeIndex;                            // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuilding.PBScope2D
// 0x0048
struct FPBScope2D
{
	struct FMatrix                                     ScopeFrame;                                    // 0x0000 (0x0040) [0x0000000000000000]               
	float                                              DimX;                                          // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              DimZ;                                          // 0x0044 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x8];                         // 0x0048 (0x0008) ADDED PADDING
};

// ScriptStruct Engine.ProcBuilding.PBScopeProcessInfo
// 0x001C
struct FPBScopeProcessInfo
{
	class AProcBuilding*                               OwningBuilding;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class UProcBuildingRuleset*                        Ruleset;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        RulesetVariation;                              // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           bGenerateLODPoly : 1;                          // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPartOfNonRect : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.ProcBuilding.PBEdgeInfo
// 0x002C
struct FPBEdgeInfo
{
	struct FVector                                     EdgeEnd;                                       // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EdgeStart;                                     // 0x000C (0x000C) [0x0000000000000000]               
	int32_t                                            ScopeAIndex;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            ScopeAEdge;                                    // 0x001C (0x0001) [0x0000000000000000]               
	int32_t                                            ScopeBIndex;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                            ScopeBEdge;                                    // 0x0024 (0x0001) [0x0000000000000000]               
	float                                              EdgeAngle;                                     // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuilding.PBMaterialParam
// 0x0018
struct FPBMaterialParam
{
	class FName                                        ParamName;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FLinearColor                                Color;                                         // 0x0008 (0x0010) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.ProcBuilding.PBMemUsageInfo
// 0x002C
struct FPBMemUsageInfo
{
	class AProcBuilding*                               Building;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UProcBuildingRuleset*                        Ruleset;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            NumStaticMeshComponent;                        // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            NumInstancedStaticMeshComponents;              // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            NumInstancedTris;                              // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            LightmapMemBytes;                              // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            ShadowmapMemBytes;                             // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            LODDiffuseMemBytes;                            // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            LODLightingMemBytes;                           // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ProcBuildingRuleset.PBVariationInfo
// 0x000C
struct FPBVariationInfo
{
	class FName                                        VariationName;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMeshOnTopOfFacePoly : 1;                      // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ProcBuildingRuleset.PBParamSwatch
// 0x0018
struct FPBParamSwatch
{
	class FName                                        SwatchName;                                    // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FPBMaterialParam>              Params;                                        // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.RAimingConfig.AimingPartConfig
// 0x000C
struct FAimingPartConfig
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              Yaw;                                           // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Pitch;                                         // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RHeightMapCaptureVolume.FHeightMapVolumeInfo
// 0x0024
struct FFHeightMapVolumeInfo
{
	struct FBoxSphereBounds                            Bounds;                                        // 0x0000 (0x001C) [0x0000000000000000]               
	class UTexture2D*                                  HeightMap;                                     // 0x001C (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RRainComponent.RockRainVolumeSettings
// 0x0024
struct FRockRainVolumeSettings
{
	struct FVector                                     VolumeWind;                                    // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     KillBoundsMin;                                 // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     KillBoundsMax;                                 // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.RRainComponent.RockRainSettings
// 0x0040
struct FRockRainSettings
{
	float                                              Density;                                       // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Width;                                         // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FearGasAmount;                                 // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FLinearColor                                FearGasSludgeColor;                            // 0x000C (0x0010) [0x0000000100000000] (CPF_Edit)    
	class UTexture2D*                                  RainTexture;                                   // 0x001C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UTexture2D*                                  RainStreakTexture;                             // 0x0024 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    RainSoundBed;                                  // 0x002C (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              RainProximityRadius;                           // 0x0034 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            RainProximityRange;                            // 0x0038 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           StaticRainVolume : 1;                          // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.RAnimSet_Skeleton.AnimSetRefSkeletonBone
// 0x0030
struct FAnimSetRefSkeletonBone
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ParentIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x4];                              // 0x000C (0x0004) MISSED OFFSET
	struct FBoneAtom                                   ParentspaceReferencePose;                      // 0x0010 (0x0020) [0x0000000000000000]               
};

// ScriptStruct Engine.RDustComponent.RockDustSettings
// 0x0014
struct FRockDustSettings
{
	float                                              Density;                                       // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Width;                                         // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Opacity;                                       // 0x0008 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	class UTexture2D*                                  DustTexture;                                   // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RThickFearGasComponent.ThickFearGasSettings
// 0x001C
struct FThickFearGasSettings
{
	struct FLinearColor                                fearGasDiffuseColor;                           // 0x0000 (0x0010) [0x0000000100000000] (CPF_Edit)    
	float                                              InsideDensity;                                 // 0x0010 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              OutsideDensity;                                // 0x0014 (0x0004) [0x0000010100000000] (CPF_Edit | CPF_Interp)
	float                                              LightingAmount;                                // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RFlaps_ConstraintSetup.RFlapsParticleReference
// 0x0010
struct FRFlapsParticleReference
{
	class FName                                        BodyName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        ParticleName;                                  // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RFlaps_BodySetup.RFlapsParticleSetup
// 0x0024
struct FRFlapsParticleSetup
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	struct FVector                                     Position;                                      // 0x0008 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              Radius;                                        // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LinearDamping;                                 // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              QuadraticDamping;                              // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              GravityEffectMultiplier;                       // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RFlaps_ConstraintSetupAnimBlend.RBlendBoneData
// 0x000C
struct FRBlendBoneData
{
	class FName                                        ConstraintFrameBoneName;                       // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              BlendWeight;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RFlapsAssetInstance.RFlapsBodyMapEntry
// 0x0010
struct FRFlapsBodyMapEntry
{
	int32_t                                            OwnerFlapsBodyIndex;                           // 0x0000 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            OwnerParticleIndex;                            // 0x0004 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            OwnerBodyIndex;                                // 0x0008 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            OwnerBoneIndex;                                // 0x000C (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.RFlapsAssetInstance.RWriteBackParticleData
// 0x0014
struct FRWriteBackParticleData
{
	int32_t                                            ParticleSystemIndex;                           // 0x0000 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            BoneIndex;                                     // 0x0004 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     Position;                                      // 0x0008 (0x000C) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.RFlapsAssetInstance.RWriteBackMapEntry
// 0x0041
struct FRWriteBackMapEntry
{
	struct FRWriteBackParticleData                     FrameControlParticleDatas[3];                  // 0x0000 (0x003C) [0x0000000000000000]               
	int32_t                                            ControlledBoneIndex;                           // 0x003C (0x0004) [0x0000000000000000]               
	uint8_t                                            PoseControlType;                               // 0x0040 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0041 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.RFlapsAssetInstance.RFlapsParticleInstanceRenderData
// 0x0028
struct FRFlapsParticleInstanceRenderData
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000400] (CPF_Transient)
	int32_t                                            BoneIndex;                                     // 0x0018 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            BodyIndex;                                     // 0x001C (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            FlapsBodyIndex;                                // 0x0020 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            ParticleIndex;                                 // 0x0024 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.RFlapsAssetInstance.RFlapsInstanceRenderData
// 0x0064
struct FRFlapsInstanceRenderData
{
	class TArray<struct FRFlapsParticleInstanceRenderData> Particles;                                     // 0x0000 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FBoneAtom>                     SpaceBases;                                    // 0x0010 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	struct FMatrix                                     LocalToWorld;                                  // 0x0020 (0x0040) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           bTeleported : 1;                               // 0x0060 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint8_t                                            MinStructAlignment[0xC];                         // 0x0064 (0x000C) ADDED PADDING
};

// ScriptStruct Engine.RFlapsAssetInstance.RAnimConstraintDataEntry
// 0x0020
struct FRAnimConstraintDataEntry
{
	struct FVector                                     PositionInFrame;                               // 0x0000 (0x000C) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     SpringPositionInFrame;                         // 0x000C (0x000C) [0x0000000000000400] (CPF_Transient)
	int32_t                                            FrameBoneIndex;                                // 0x0018 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            PSPositionConstraintIndex;                     // 0x001C (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.RFlapsAssetInstance.RAnimBlendConstraintBoneFrameDataEntry
// 0x0014
struct FRAnimBlendConstraintBoneFrameDataEntry
{
	struct FVector                                     PositionInFrame;                               // 0x0000 (0x000C) [0x0000000000000400] (CPF_Transient)
	int32_t                                            FrameBoneIndex;                                // 0x000C (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              BlendWeight;                                   // 0x0010 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.RFlapsAssetInstance.RAnimBlendConstraintDataEntry
// 0x0068
struct FRAnimBlendConstraintDataEntry
{
	struct FRAnimBlendConstraintBoneFrameDataEntry     BlendBoneDatas[5];                             // 0x0000 (0x0064) [0x0000000000000400] (CPF_Transient)
	int32_t                                            PSPositionConstraintIndex;                     // 0x0064 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.RFlapsAssetInstance.RCollisionConstraintDataEntry
// 0x0024
struct FRCollisionConstraintDataEntry
{
	int32_t                                            BoneIndices[8];                                // 0x0000 (0x0020) [0x0000000000000400] (CPF_Transient)
	int32_t                                            PSPositionConstraintIndex;                     // 0x0020 (0x0004) [0x0000000000000400] (CPF_Transient)
};

// ScriptStruct Engine.RInterpTrackDialogue.DialogueTrackKey
// 0x000C
struct FDialogueTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class UAkDialogueLineSingle*                       Line;                                          // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RInterpTrackEvidenceKeypoint.EvidenceKeypointTrackKey
// 0x0008
struct FEvidenceKeypointTrackKey
{
	float                                              mTime;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mDuration;                                     // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RInterpTrackRumble.RumbleTrackKey
// 0x0015
struct FRumbleTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Strength;                                      // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              leftStrength;                                  // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              rightStrength;                                 // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            rumbleFunction;                                // 0x0014 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.RLedgeSetup.RLedgeInfo
// 0x003C
struct FRLedgeInfo
{
	struct FVector                                     Point0;                                        // 0x0000 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Point1;                                        // 0x000C (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Normal;                                        // 0x0018 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     Normal2;                                       // 0x0024 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bDangleLedge : 1;                              // 0x0030 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bDangleLedge2 : 1;                             // 0x0030 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bUpAxis1FlipTogglesDangle : 1;                 // 0x0030 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bUpAxis2FlipTogglesDangle : 1;                 // 0x0030 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint8_t                                            UpAxis1;                                       // 0x0034 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            UpAxis2;                                       // 0x0035 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bVantagePointLocator : 1;                      // 0x0038 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.RObjectPool.REmitterPool
// 0x0964
struct FREmitterPool
{
	class AREmitter*                                   Pool[150];                                     // 0x0000 (0x04B0) [0x0000000000000000]               
	class FName                                        DebugTemplateName[150];                        // 0x04B0 (0x04B0) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0960 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RObjectPool.RAdvancedDamageInstance
// 0x002C
struct FRAdvancedDamageInstance
{
	float                                              CurrentHealth;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentDestructionStage;                       // 0x0004 (0x0004) [0x0000000000000000]               
	class UParticleSystemComponent*                    OngoingEffect;                                 // 0x0008 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URockDecalComponent*                         OngoingDecal;                                  // 0x0010 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AActor*                                      ImpactActor;                                   // 0x0018 (0x0008) [0x0000000000000000]               
	struct FVector                                     ImpactLocation;                                // 0x0020 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.RObjectPool.RDecalPool
// 0x1004
struct FRDecalPool
{
	class URockDecalComponent*                         Pool[512];                                     // 0x0000 (0x1000) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            Index;                                         // 0x1000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ROceanComponent.RockOceanSettings
// 0x007C
struct FRockOceanSettings
{
	float                                              WaveHeight;                                    // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UStaticMesh*                                 WaveStencilMesh;                               // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UTexture2D*                                  WaveTexture;                                   // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UTexture2D*                                  FoamTexture;                                   // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              FoamContactDistance;                           // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CrestFXContactDistance;                        // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ImpactFXContactDistance;                       // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ScatterBase;                                   // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FLinearColor                                WaterColAbsorption;                            // 0x002C (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FLinearColor                                WaterColTransmission;                          // 0x003C (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FLinearColor                                WaterColScatter;                               // 0x004C (0x0010) [0x0000000100000000] (CPF_Edit)    
	class UStaticMesh*                                 WaveTesselatedMeshCenter;                      // 0x005C (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 WaveTesselatedMeshRingL;                       // 0x0064 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 WaveTesselatedMeshRingR;                       // 0x006C (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 WaveTesselatedMeshSkirt;                       // 0x0074 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.ROceanComponent.RockOceanAsyncResults
// 0x002C
struct FRockOceanAsyncResults
{
	uint32_t                                           bFoundCrestCandidate : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFoundImpactCandidate : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFoundFarSprayCandidate : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            impactIndexCandidate;                          // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     crestVFXPosCandidate;                          // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     sprayFarVFXPosCandidate;                       // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     impactVFXPosCandidate;                         // 0x0020 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.ROceanAttachedToCamera.FOceanVolumeInfo
// 0x0024
struct FFOceanVolumeInfo
{
	struct FBoxSphereBounds                            Bounds;                                        // 0x0000 (0x001C) [0x0000000000000000]               
	class UTexture2D*                                  DataMap;                                       // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.ROceanHeightBlockingVolume.FOceanBlockInfo
// 0x00EC
struct FFOceanBlockInfo
{
	struct FBoxSphereBounds                            Bounds;                                        // 0x0000 (0x001C) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x4];                              // 0x001C (0x0004) MISSED OFFSET
	struct FMatrix                                     BoxToUnitCube;                                 // 0x0020 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     UnitCubeToBox;                                 // 0x0060 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     BoxBasis;                                      // 0x00A0 (0x0040) [0x0000000000000000]               
	struct FVector                                     BoxCentre;                                     // 0x00E0 (0x000C) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x4];                         // 0x00EC (0x0004) ADDED PADDING
};

// ScriptStruct Engine.RockReflectionVolume.FReflectionBoxInfo
// 0x0114
struct FFReflectionBoxInfo
{
	struct FBoxSphereBounds                            Bounds;                                        // 0x0000 (0x001C) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x4];                              // 0x001C (0x0004) MISSED OFFSET
	struct FMatrix                                     ReflectionBoxToUnitCube;                       // 0x0020 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     UnitCubeToReflectionBox;                       // 0x0060 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     BoxBasis;                                      // 0x00A0 (0x0040) [0x0000000000000000]               
	struct FVector                                     BoxCentre;                                     // 0x00E0 (0x000C) [0x0000000000000000]               
	class UTextureRenderTargetCube*                    TextureTarget;                                 // 0x00EC (0x0008) [0x0000000000000000]               
	class UTextureCube*                                TextureCube;                                   // 0x00F4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     HDRScale;                                      // 0x00FC (0x000C) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	struct FVector                                     HDROffset;                                     // 0x0108 (0x000C) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	uint8_t                                            MinStructAlignment[0xC];                         // 0x0114 (0x000C) ADDED PADDING
};

// ScriptStruct Engine.RockMapHighlight.FMapHighlightInfo
// 0x00ED
struct FFMapHighlightInfo
{
	struct FBoxSphereBounds                            Bounds;                                        // 0x0000 (0x001C) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x4];                              // 0x001C (0x0004) MISSED OFFSET
	struct FMatrix                                     HighlightBoxToUnitCube;                        // 0x0020 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     UnitCubeToHighlightBox;                        // 0x0060 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     BoxBasis;                                      // 0x00A0 (0x0040) [0x0000000000000000]               
	struct FVector                                     BoxCentre;                                     // 0x00E0 (0x000C) [0x0000000000000000]               
	uint8_t                                            Style;                                         // 0x00EC (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                         // 0x00ED (0x0003) ADDED PADDING
};

// ScriptStruct Engine.RParticleModuleTypeDataDecal.ParticleDecalData
// 0x00B0
struct FParticleDecalData
{
	struct FMatrix                                     Transform;                                     // 0x0000 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     UnscaledTransform;                             // 0x0040 (0x0040) [0x0000000000000000]               
	struct FVector                                     ClipValue;                                     // 0x0080 (0x000C) [0x0000000000000000]               
	float                                              Random;                                        // 0x008C (0x0004) [0x0000000000000000]               
	struct FVector4                                    UVScaleOffset;                                 // 0x0090 (0x0010) [0x0000000000000000]               
	struct FVector4                                    DynamicParameter;                              // 0x00A0 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.RParticleSystemEconomicalReplay.MParticleEmitterEconomicalReplayFrame
// 0x006C
struct FMParticleEmitterEconomicalReplayFrame
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000100000201] (CPF_Edit | CPF_Const | CPF_Native)
	int32_t                                            NumSpawnedParticles;                           // 0x0004 (0x0004) [0x0000000100000201] (CPF_Edit | CPF_Const | CPF_Native)
	int32_t                                            NumDiedParticles;                              // 0x0008 (0x0004) [0x0000000100000201] (CPF_Edit | CPF_Const | CPF_Native)
	class TArray<uint8_t>                              SpawnedParticleData;                           // 0x000C (0x0010) [0x0000020100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit)
	class TArray<uint8_t>                              SpawnedParticleLittleEndianData;               // 0x001C (0x0010) [0x00000A0100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit | CPF_EditorOnly)
	class TArray<uint8_t>                              SpawnedParticleBigEndianData;                  // 0x002C (0x0010) [0x00000A0100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit | CPF_EditorOnly)
	class TArray<uint8_t>                              DiedParticleData;                              // 0x003C (0x0010) [0x0000020100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit)
	class TArray<uint8_t>                              DiedParticleLittleEndianData;                  // 0x004C (0x0010) [0x00000A0100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit | CPF_EditorOnly)
	class TArray<uint8_t>                              DiedParticleBigEndianData;                     // 0x005C (0x0010) [0x00000A0100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit | CPF_EditorOnly)
};

// ScriptStruct Engine.RParticleSystemEconomicalReplay.MParticleEmitterEconomicalReplaySnapshotFrame
// 0x0034
struct FMParticleEmitterEconomicalReplaySnapshotFrame
{
	int32_t                                            NumParticles;                                  // 0x0000 (0x0004) [0x0000000100000201] (CPF_Edit | CPF_Const | CPF_Native)
	class TArray<uint8_t>                              ParticleData;                                  // 0x0004 (0x0010) [0x0000020100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit)
	class TArray<uint8_t>                              ParticleLittleEndianData;                      // 0x0014 (0x0010) [0x00000A0100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit | CPF_EditorOnly)
	class TArray<uint8_t>                              ParticleBigEndianData;                         // 0x0024 (0x0010) [0x00000A0100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit | CPF_EditorOnly)
};

// ScriptStruct Engine.RParticleSystemEconomicalReplay.MParticleEmitterEconomicalReplay
// 0x0048
struct FMParticleEmitterEconomicalReplay
{
	int32_t                                            LoopCount;                                     // 0x0000 (0x0004) [0x0000000100000201] (CPF_Edit | CPF_Const | CPF_Native)
	float                                              LastLoopDuration;                              // 0x0004 (0x0004) [0x0000000100000201] (CPF_Edit | CPF_Const | CPF_Native)
	float                                              Duration;                                      // 0x0008 (0x0004) [0x0000000100000201] (CPF_Edit | CPF_Const | CPF_Native)
	class FName                                        EmitterName;                                   // 0x000C (0x0008) [0x0000000100000201] (CPF_Edit | CPF_Const | CPF_Native)
	class TArray<struct FMParticleEmitterEconomicalReplayFrame> Frames;                                        // 0x0014 (0x0010) [0x0000020100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit)
	class TArray<struct FMParticleEmitterEconomicalReplaySnapshotFrame> SnapshotFrames;                                // 0x0024 (0x0010) [0x0000020100000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_AlwaysInit)
	class TArray<int32_t>                              SpawnedParticleIndex;                          // 0x0034 (0x0010) [0x00000A0000010400] (CPF_Transient | CPF_AlwaysInit | CPF_NeedCtorLink | CPF_EditorOnly)
	float                                              CurrentSpawnedTime;                            // 0x0044 (0x0004) [0x0000080000000400] (CPF_Transient | CPF_EditorOnly)
};

// ScriptStruct Engine.RParticleSystemEconomicalReplay.MParticleEmitterEconomicalReplayData
// 0x0014
struct FMParticleEmitterEconomicalReplayData
{
	int32_t                                            NumParticles;                                  // 0x0000 (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
	class TArray<uint8_t>                              ParticleData;                                  // 0x0004 (0x0010) [0x0000020000000201] (CPF_Const | CPF_Native | CPF_AlwaysInit)
};

// ScriptStruct Engine.RPhysicalMaterialProperty.ImpactEffectInfo
// 0x002C
struct FImpactEffectInfo
{
	class UAkEvent*                                    SoundEvent;                                    // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    RicochetSoundEvent;                            // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             ParticleEffect;                                // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInterface*                          Decal;                                         // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              DecalSizeMin;                                  // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DecalSizeMax;                                  // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           DecalRandomRotation : 1;                       // 0x0028 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.RPhysicalMaterialProperty.MaterialFootstepInfo
// 0x003C
struct FMaterialFootstepInfo
{
	uint32_t                                           bPlayParticleWhenWalking : 1;                  // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class UParticleSystem*                             ParticleEffect;                                // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             HandStepParticleEffect;                        // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             SlideParticleEffect;                           // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             WetSlideParticleEffect;                        // 0x001C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             CrouchedParticleEffect;                        // 0x0024 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             WetParticleEffect;                             // 0x002C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             FearGasParticleEffect;                         // 0x0034 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RPhysicalMaterialProperty.AdvancedImpactDecalData
// 0x0014
struct FAdvancedImpactDecalData
{
	class UMaterialInterface*                          Material;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              SizeMin;                                       // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SizeMax;                                       // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           RandomRotation : 1;                            // 0x0010 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.RPhysicalMaterialProperty.AdvancedImpactDamageStateEntryInfo
// 0x0024
struct FAdvancedImpactDamageStateEntryInfo
{
	class UParticleSystem*                             Particles;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    SoundEvent;                                    // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FAdvancedImpactDecalData                    Decal;                                         // 0x0010 (0x0014) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RPhysicalMaterialProperty.AdvancedImpactDamageStateInfo
// 0x0130
struct FAdvancedImpactDamageStateInfo
{
	float                                              Health;                                        // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FAdvancedImpactDamageStateEntryInfo         OnStateEntry;                                  // 0x0004 (0x0024) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverridePerImpactParticles : 1;               // 0x0028 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class UParticleSystem*                             OverridePerImpactParticles[7];                 // 0x002C (0x0038) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverridePerImpactSoundEvent : 1;              // 0x0064 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class UAkEvent*                                    OverridePerImpactSoundEvent[7];                // 0x0068 (0x0038) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOverridePerImpactDecal : 1;                   // 0x00A0 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	struct FAdvancedImpactDecalData                    OverridePerImpactDecal[7];                     // 0x00A4 (0x008C) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RPhysicalMaterialProperty.AdvancedImpactEffectInfo
// 0x0030
struct FAdvancedImpactEffectInfo
{
	float                                              PerImpactDamage[7];                            // 0x0000 (0x001C) [0x0000000100000000] (CPF_Edit)    
	float                                              Radius;                                        // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FAdvancedImpactDamageStateInfo> DamageStates;                                  // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.RPollenComponent.RockPollenSettings
// 0x0018
struct FRockPollenSettings
{
	float                                              Density;                                       // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Width;                                         // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UTexture2D*                                  PollenTexture;                                 // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              PollenHeightFadeStart;                         // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PollenHeightFadeEnd;                           // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.RPyroFearGasComponent.RockPyroFearGasSettings
// 0x0074
struct FRockPyroFearGasSettings
{
	float                                              WaveHeight;                                    // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UStaticMesh*                                 WaveStencilMesh;                               // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UTexture2D*                                  WaveTexture;                                   // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UTexture2D*                                  FoamTexture;                                   // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              FoamContactDistance;                           // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ScatterBase;                                   // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FLinearColor                                WaterColAbsorption;                            // 0x0024 (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FLinearColor                                WaterColTransmission;                          // 0x0034 (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FLinearColor                                WaterColScatter;                               // 0x0044 (0x0010) [0x0000000100000000] (CPF_Edit)    
	class UStaticMesh*                                 WaveTesselatedMeshCenter;                      // 0x0054 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 WaveTesselatedMeshRingL;                       // 0x005C (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 WaveTesselatedMeshRingR;                       // 0x0064 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 WaveTesselatedMeshSkirt;                       // 0x006C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.RPyroFearGasComponent.RockPyroFearGasAsyncResults
// 0x002C
struct FRockPyroFearGasAsyncResults
{
	uint32_t                                           bFoundCrestCandidate : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFoundImpactCandidate : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFoundFarSprayCandidate : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            impactIndexCandidate;                          // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     crestVFXPosCandidate;                          // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     sprayFarVFXPosCandidate;                       // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     impactVFXPosCandidate;                         // 0x0020 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.RPyroFearGasAttachedToCamera.FPyroFearGasVolumeInfo
// 0x002C
struct FFPyroFearGasVolumeInfo
{
	struct FBoxSphereBounds                            Bounds;                                        // 0x0000 (0x001C) [0x0000000000000000]               
	class UTexture2D*                                  DataMap;                                       // 0x001C (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  LightMap;                                      // 0x0024 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.RRainBlockingVolume.FRainBlockInfo
// 0x00EC
struct FFRainBlockInfo
{
	struct FBoxSphereBounds                            Bounds;                                        // 0x0000 (0x001C) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x4];                              // 0x001C (0x0004) MISSED OFFSET
	struct FMatrix                                     BoxToUnitCube;                                 // 0x0020 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     UnitCubeToBox;                                 // 0x0060 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     BoxBasis;                                      // 0x00A0 (0x0040) [0x0000000000000000]               
	struct FVector                                     BoxCentre;                                     // 0x00E0 (0x000C) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x4];                         // 0x00EC (0x0004) ADDED PADDING
};

// ScriptStruct Engine.RSkeletalMeshDrivenMaterialParameterConfig.BoneDistanceConfig
// 0x0034
struct FBoneDistanceConfig
{
	class FName                                        ScalarParameterName;                           // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        Bone1Name;                                     // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        Bone2Name;                                     // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              Threshold_FullyOff;                            // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Threshold_FullyOn;                             // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Value_FullyOn;                                 // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EaseOutSharpness;                              // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EaseInSharpness;                               // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EaseBias;                                      // 0x002C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           Bone1IgnoreAnimation : 1;                      // 0x0030 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           Bone2IgnoreAnimation : 1;                      // 0x0030 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Disable : 1;                                   // 0x0030 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.RSkeletalMeshDrivenMaterialParameterConfig.BoneRotationConfig
// 0x0030
struct FBoneRotationConfig
{
	class FName                                        ScalarParameterName;                           // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        BoneName;                                      // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            Axis;                                          // 0x0010 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            RelativeTo;                                    // 0x0011 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              Angle_FullyOff;                                // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Angle_FullyOn;                                 // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Value_FullyOn;                                 // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EaseOutSharpness;                              // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EaseInSharpness;                               // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              EaseBias;                                      // 0x0028 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           Disable : 1;                                   // 0x002C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.RSkeletalMeshDrivenMaterialParameterInstance.BoneDistanceInstance_Constants
// 0x002C
struct FBoneDistanceInstance_Constants
{
	int32_t                                            Bone1Index;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Bone2Index;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              ReferenceDistance;                             // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            ParameterIndex;                                // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Threshold_FullyOff;                            // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Threshold_FullyOn;                             // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Value_FullyOn;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              EaseOutSharpness;                              // 0x001C (0x0004) [0x0000000000000000]               
	float                                              EaseInSharpness;                               // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              EaseBias;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           Bone1IgnoreAnimation : 1;                      // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Bone2IgnoreAnimation : 1;                      // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.RSkeletalMeshDrivenMaterialParameterInstance.BoneDistanceInstance
// 0x0030
struct FBoneDistanceInstance
{
	float                                              CurrentDistanceSquared;                        // 0x0000 (0x0004) [0x0000000000000000]               
	struct FBoneDistanceInstance_Constants             Constants;                                     // 0x0004 (0x002C) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshDrivenMaterialParameterInstance.BoneRotationInstance_Constants
// 0x0040
struct FBoneRotationInstance_Constants
{
	int32_t                                            BoneIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0xC];                              // 0x0004 (0x000C) MISSED OFFSET
	struct FQuat                                       ReferenceRotation;                             // 0x0010 (0x0010) [0x0000000000000000]               
	int32_t                                            ParameterIndex;                                // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                            Axis;                                          // 0x0024 (0x0001) [0x0000000000000000]               
	uint8_t                                            RelativeTo;                                    // 0x0025 (0x0001) [0x0000000000000000]               
	float                                              Angle_FullyOff;                                // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              Angle_FullyOn;                                 // 0x002C (0x0004) [0x0000000000000000]               
	float                                              Value_FullyOn;                                 // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              EaseOutSharpness;                              // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              EaseInSharpness;                               // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              EaseBias;                                      // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshDrivenMaterialParameterInstance.BoneRotationInstance
// 0x0050
struct FBoneRotationInstance
{
	struct FQuat                                       CurrentRotation;                               // 0x0000 (0x0010) [0x0000000000000000]               
	struct FBoneRotationInstance_Constants             Constants;                                     // 0x0010 (0x0040) [0x0000000000000000]               
};

// ScriptStruct Engine.RSkeletalMeshDrivenMaterialParameterInstance.DrivenMaterialParameter
// 0x0018
struct FDrivenMaterialParameter
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              MaterialIndices;                               // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.RSnowComponent.RockSnowVolumeSettings
// 0x0024
struct FRockSnowVolumeSettings
{
	struct FVector                                     VolumeWind;                                    // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     KillBoundsMin;                                 // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     KillBoundsMax;                                 // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.RSnowComponent.RockSnowSettings
// 0x002C
struct FRockSnowSettings
{
	float                                              Density;                                       // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Width;                                         // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UTexture2D*                                  SnowTexture;                                   // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UTexture2D*                                  SnowStreakTexture;                             // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    SnowSoundBed;                                  // 0x0018 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              SnowProximityRadius;                           // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            SnowProximityRange;                            // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           StaticSnowVolume : 1;                          // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.RStaticMeshActorDecorated.RSMAD_LightAndSocketName
// 0x0028
struct FRSMAD_LightAndSocketName
{
	class FName                                        SocketName;                                    // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ULightComponent*                             Component;                                     // 0x0008 (0x0008) [0x0000004100004005] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USpriteComponent*                            Sprite;                                        // 0x0010 (0x0008) [0x0000084000004404] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline | CPF_EditorOnly)
	class UDrawLightConeComponent*                     InnerCone;                                     // 0x0018 (0x0008) [0x0000084000004404] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline | CPF_EditorOnly)
	class UDrawLightConeComponent*                     OuterCone;                                     // 0x0020 (0x0008) [0x0000084000004404] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline | CPF_EditorOnly)
};

// ScriptStruct Engine.RStaticMeshActorDecorated.RSMAD_ParticleSystemAndSocketName
// 0x0010
struct FRSMAD_ParticleSystemAndSocketName
{
	class FName                                        SocketName;                                    // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystemComponent*                    Component;                                     // 0x0008 (0x0008) [0x0000004100004005] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.RStaticMeshActorDecorated.RSMAD_AkAndSocketName
// 0x002C
struct FRSMAD_AkAndSocketName
{
	class FName                                        SocketName;                                    // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UAkEvent*>                      LoopingEvents;                                 // 0x0008 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class URAkAudible*                                 Audible;                                       // 0x0018 (0x0008) [0x0000004100010005] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	uint32_t                                           bLoopsEnabled : 1;                             // 0x0020 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	class USpriteComponent*                            Sprite;                                        // 0x0024 (0x0008) [0x0000084000004404] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline | CPF_EditorOnly)
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfoNV
// 0x0008
struct FCameraCutInfoNV
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MinViewDepth;                                  // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x0010
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Const)   
	class FName                                        LevelName;                                     // 0x0008 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.WorldAttractor.WorldAttractorData
// 0x0020
struct FWorldAttractorData
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	uint8_t                                            FalloffType;                                   // 0x0010 (0x0001) [0x0000000000000000]               
	float                                              FalloffExponent;                               // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Range;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              Strength;                                      // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	class FName                                        ClassName;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            bFallThru;                                     // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x000C
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                   // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bFallThru : 1;                                 // 0x0008 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bDefaultValue : 1;                             // 0x0008 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// 0x0010
struct FSoftBodyTetraLink
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Bary;                                          // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshOptimizationSettings
// 0x0028
struct FSkeletalMeshOptimizationSettings
{
	float                                              MaxDeviationPercentage;                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            SilhouetteImportance;                          // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            TextureImportance;                             // 0x0005 (0x0001) [0x0000000000000000]               
	uint8_t                                            ShadingImportance;                             // 0x0006 (0x0001) [0x0000000000000000]               
	uint8_t                                            SkinningImportance;                            // 0x0007 (0x0001) [0x0000000000000000]               
	uint8_t                                            NormalMode;                                    // 0x0008 (0x0001) [0x0000000000000000]               
	float                                              BoneReductionRatio;                            // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxBonesPerVertex;                             // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           UseVertexWelding : 1;                          // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<float>                                MaterialPriorities;                            // 0x0018 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.BoneBounds
// 0x001C
struct FBoneBounds
{
	int32_t                                            BoneIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FSimpleBox                                  Box;                                           // 0x0004 (0x0018) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingLodInfo
// 0x0010
struct FApexClothingLodInfo
{
	class TArray<int32_t>                              ClothingSectionInfo;                           // 0x0000 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingAssetInfo
// 0x0018
struct FApexClothingAssetInfo
{
	class TArray<struct FApexClothingLodInfo>          ClothingLodInfo;                               // 0x0000 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class FName                                        ClothingAssetName;                             // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int32_t                                            SourceIndex;                                   // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            BoneFlipAxis;                                  // 0x0004 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x0011
struct FBoneMirrorExport
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SourceBoneName;                                // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            BoneFlipAxis;                                  // 0x0010 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                         // 0x0011 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	uint8_t                                            TriangleSorting;                               // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            CustomLeftRightAxis;                           // 0x0001 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FName                                        CustomLeftRightBoneName;                       // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x00A4
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                 // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LODHysteresis;                                 // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<int32_t>                              LODMaterialMap;                                // 0x0008 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<uint32_t>                             bEnableShadowCasting;                          // 0x0018 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<uint8_t>                              TriangleSorting;                               // 0x0028 (0x0010) [0x0000080000090000] (CPF_NeedCtorLink | CPF_Deprecated | CPF_EditorOnly)
	class TArray<struct FTriangleSortSettings>         TriangleSortSettings;                          // 0x0038 (0x0010) [0x0000000300010000] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	uint32_t                                           bDisableCompression : 1;                       // 0x0048 (0x0004) [0x0000000000080000] [0x00000001] (CPF_Deprecated)
	uint32_t                                           bRockDisableCompressedPositions : 1;           // 0x0048 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bRockUseSuperCompressedPositions : 1;          // 0x0048 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bHasBeenSimplified : 1;                        // 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	class FString                                      MaxFilePath;                                   // 0x004C (0x0010) [0x0000080000010000] (CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      RootSourceFilePath;                            // 0x005C (0x0010) [0x0000080100010000] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      SourceFilePath;                                // 0x006C (0x0010) [0x0000080100010000] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      SourceFileTimestamp;                           // 0x007C (0x0010) [0x0000080500010000] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      SourceAuthor;                                  // 0x008C (0x0010) [0x0000080500010000] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	class UObject*                                     SourceImportOptions;                           // 0x009C (0x0008) [0x0000084500010004] (CPF_Edit | CPF_ExportObject | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline | CPF_EditorOnly)
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x001C
struct FClothSpecialBoneInfo
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            BoneType;                                      // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class TArray<int32_t>                              AttachedVertexIndices;                         // 0x000C (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// 0x001C
struct FSoftBodySpecialBoneInfo
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            BoneType;                                      // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class TArray<int32_t>                              AttachedVertexIndices;                         // 0x000C (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// 0x0010
struct FSkelMeshActorControlTarget
{
	class FName                                        ControlName;                                   // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      TargetActor;                                   // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshActor.CheckpointRecord
// 0x001C
struct ASkeletalMeshActor_FCheckpointRecord
{
	uint32_t                                           bReplicated : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHidden : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSavedPosition : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SoundClass.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	int32_t                                            NodePosX;                                      // 0x0000 (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
	int32_t                                            NodePosY;                                      // 0x0004 (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.SoundClass.SoundClassProperties
// 0x0020
struct FSoundClassProperties
{
	float                                              Volume;                                        // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Pitch;                                         // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StereoBleed;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LFEBleed;                                      // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              VoiceCenterChannelVolume;                      // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RadioFilterVolume;                             // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RadioFilterVolumeThreshold;                    // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bApplyEffects : 1;                             // 0x001C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAlwaysPlay : 1;                               // 0x001C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bIsUISound : 1;                                // 0x001C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bIsMusic : 1;                                  // 0x001C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bReverb : 1;                                   // 0x001C (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bCenterChannelOnly : 1;                        // 0x001C (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bApplyAmbientVolumes : 1;                      // 0x001C (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	int32_t                                            NodePosX;                                      // 0x0000 (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
	int32_t                                            NodePosY;                                      // 0x0004 (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.SoundMode.SoundClassAdjuster
// 0x001C
struct FSoundClassAdjuster
{
	uint8_t                                            SoundClassName;                                // 0x0000 (0x0001) [0x0000000100000400] (CPF_Edit | CPF_Transient)
	class FName                                        SoundClass;                                    // 0x0004 (0x0008) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	float                                              VolumeAdjuster;                                // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PitchAdjuster;                                 // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bApplyToChildren : 1;                          // 0x0014 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              VoiceCenterChannelVolumeAdjuster;              // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.SoundMode.AudioEQEffect
// 0x0024
struct FAudioEQEffect
{
	struct FDouble                                     RootTime;                                      // 0x0000 (0x0008) [0x0000000000000600] (CPF_Native | CPF_Transient)
	float                                              HFFrequency;                                   // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              HFGain;                                        // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MFCutoffFrequency;                             // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MFBandwidth;                                   // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MFGain;                                        // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LFFrequency;                                   // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LFGain;                                        // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x0024
struct FRecognisableWord
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FString                                      ReferenceWord;                                 // 0x0004 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      PhoneticWord;                                  // 0x0014 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x0060
struct FRecogVocabulary
{
	class TArray<struct FRecognisableWord>             WhoDictionary;                                 // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FRecognisableWord>             WhatDictionary;                                // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FRecognisableWord>             WhereDictionary;                               // 0x0020 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      VocabName;                                     // 0x0030 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              VocabData;                                     // 0x0040 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              WorkingVocabData;                              // 0x0050 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x0014
struct FRecogUserData
{
	int32_t                                            ActiveVocabularies;                            // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<uint8_t>                              UserData;                                      // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeedTreeComponent.SpeedTreeStaticLight
// 0x0038
struct FSpeedTreeStaticLight
{
	struct FGuid                                       Guid;                                          // 0x0000 (0x0010) [0x0000000000000001] (CPF_Const)   
	class UShadowMap1D*                                BranchShadowMap;                               // 0x0010 (0x0008) [0x0000000000000001] (CPF_Const)   
	class UShadowMap1D*                                FrondShadowMap;                                // 0x0018 (0x0008) [0x0000000000000001] (CPF_Const)   
	class UShadowMap1D*                                LeafMeshShadowMap;                             // 0x0020 (0x0008) [0x0000000000000001] (CPF_Const)   
	class UShadowMap1D*                                LeafCardShadowMap;                             // 0x0028 (0x0008) [0x0000000000000001] (CPF_Const)   
	class UShadowMap1D*                                BillboardShadowMap;                            // 0x0030 (0x0008) [0x0000000000000001] (CPF_Const)   
};

// ScriptStruct Engine.SplineActor.SplineConnection
// 0x0010
struct FSplineConnection
{
	class USplineComponent*                            SplineComponent;                               // 0x0000 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ASplineActor*                                ConnectTo;                                     // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     StartTangent;                                  // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector2D                                   StartScale;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              StartRoll;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   StartOffset;                                   // 0x0024 (0x0008) [0x0000000000000000]               
	struct FVector                                     EndPos;                                        // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     EndTangent;                                    // 0x0038 (0x000C) [0x0000000000000000]               
	struct FVector2D                                   EndScale;                                      // 0x0044 (0x0008) [0x0000000000000000]               
	float                                              EndRoll;                                       // 0x004C (0x0004) [0x0000000000000000]               
	struct FVector2D                                   EndOffset;                                     // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.SpotLightToggleable.CheckpointRecord
// 0x0004
struct ASpotLightToggleable_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{
};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{
};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x0038
struct FTerrainLayer
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UTerrainLayerSetup*                          Setup;                                         // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            AlphaMapIndex;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           Highlighted : 1;                               // 0x001C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           WireframeHighlighted : 1;                      // 0x001C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           Hidden : 1;                                    // 0x001C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	struct FColor                                      HighlightColor;                                // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FColor                                      WireframeColor;                                // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MinX;                                          // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MinY;                                          // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxX;                                          // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxY;                                          // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x0018
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              X;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Yaw;                                           // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x002C
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                       // 0x0000 (0x0008) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	float                                              MinScale;                                      // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxScale;                                      // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Density;                                       // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              SlopeRotationBlend;                            // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            RandSeed;                                      // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FTerrainDecorationInstance>    Instances;                                     // 0x001C (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x0024
struct FTerrainDecoLayer
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FTerrainDecoration>            Decorations;                                   // 0x0010 (0x0010) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	int32_t                                            AlphaMapIndex;                                 // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{
};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// 0x0000
struct ATerrain_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x000C
struct FSelectedTerrainVertex
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{
};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x0010
struct FCachedTerrainMaterialArray
{
	class TArray<struct FPointer>                      CachedMaterials;                               // 0x0000 (0x0010) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.TerrainComponent.TerrainPatchBounds
// 0x000C
struct FTerrainPatchBounds
{
	float                                              MinHeight;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxHeight;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxDisplacement;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.TerrainComponent.TerrainMaterialMask
// 0x000C
struct FTerrainMaterialMask
{
	struct FQWord                                      BitMask;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            NumBits;                                       // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x0010
struct FTerrainBVTree
{
	class TArray<int32_t>                              Nodes;                                         // 0x0000 (0x0010) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x0010
struct FFilterLimit
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              Base;                                          // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NoiseScale;                                    // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NoiseAmount;                                   // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x0058
struct FTerrainFilteredMaterial
{
	uint32_t                                           UseNoise : 1;                                  // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              NoiseScale;                                    // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NoisePercent;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FFilterLimit                                MinHeight;                                     // 0x000C (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FFilterLimit                                MaxHeight;                                     // 0x001C (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FFilterLimit                                MinSlope;                                      // 0x002C (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FFilterLimit                                MaxSlope;                                      // 0x003C (0x0010) [0x0000000100000000] (CPF_Edit)    
	float                                              Alpha;                                         // 0x004C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UTerrainMaterial*                            Material;                                      // 0x0050 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x0020
struct FSourceTexture2DRegion
{
	int32_t                                            OffsetX;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            OffsetY;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeX;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeY;                                         // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            DestOffsetX;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            DestOffsetY;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class UTexture2D*                                  Texture2D;                                     // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Trigger.CheckpointRecord
// 0x0004
struct ATrigger_FCheckpointRecord
{
	uint32_t                                           bCollideActors : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x000C
struct FLevelStreamingData
{
	uint32_t                                           bShouldBeLoaded : 1;                           // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bShouldBeVisible : 1;                          // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bShouldBlockOnLoad : 1;                        // 0x0000 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	class ULevelStreaming*                             Level;                                         // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.UIDataProvider_OnlinePlayerStorage.PlayerStorageArrayProvider
// 0x000C
struct FPlayerStorageArrayProvider
{
	int32_t                                            PlayerStorageId;                               // 0x0000 (0x0004) [0x0000000000000000]               
	class UUIDataProvider_OnlinePlayerStorageArray*    Provider;                                      // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// 0x001C
struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;                                  // 0x0000 (0x000C) [0x0000000000000800] (CPF_Config)  
	class FString                                      ButtonFontMarkupString;                        // 0x000C (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// 0x005C
struct FUIDataStoreInputAlias
{
	class FName                                        AliasName;                                     // 0x0000 (0x0008) [0x0000000000000800] (CPF_Config)  
	struct FUIInputKeyData                             PlatformInputKeys[3];                          // 0x0008 (0x0054) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	class FName                                        CurrentRepeatKey;                              // 0x0000 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
	struct FDouble                                     NextRepeatTime;                                // 0x0008 (0x0008) [0x0000020000000000] (CPF_AlwaysInit)
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004 (0x0010 - 0x0014)
struct FUIAxisEmulationData : FUIKeyRepeatData
{
	uint32_t                                           bEnabled : 1;                                  // 0x0010 (0x0004) [0x0000020000000000] [0x00000001] (CPF_AlwaysInit)
};

// ScriptStruct Engine.UISoundTheme.SoundEventMapping
// 0x0010
struct FSoundEventMapping
{
	class FName                                        SoundEventName;                                // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class USoundCue*                                   SoundToPlay;                                   // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x0014
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                      // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bEnableShadowCasting : 1;                      // 0x0008 (0x0004) [0x0000000100000200] [0x00000001] (CPF_Edit | CPF_Native)
	uint8_t                                            UnknownData00[0x4];                              // 0x000C (0x0004) MISSED OFFSET
	uint32_t                                           bEnableCollision : 1;                          // 0x0010 (0x0004) [0x0000000100000200] [0x00000001] (CPF_Edit | CPF_Native)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x0010
struct FStaticMeshLODInfo
{
	class TArray<struct FStaticMeshLODElement>         Elements;                                      // 0x0000 (0x0010) [0x0000040300000200] (CPF_Edit | CPF_EditFixedSize | CPF_Native)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
