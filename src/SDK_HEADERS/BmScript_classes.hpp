/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: BmScript_classes.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_WAYPOINT_DIST_THRESHOLD                               100.0f
#define CONST_ASSUMED_MAX_LOOT_SOURCE_DISTANCE                      30000.0f
#define CONST_MIN_STAIR_ANGLE_DEG_0                                 28.0f
#define CONST_LOOKAHEAD_DIST_2_0                                    0.0f
#define CONST_LOOKAHEAD_DIST_3_0                                    200.0f
#define CONST_kBodySearchRange                                      500
#define CONST_kMaxThrowDist                                         2000.f
#define CONST_kMaxThrowVelocity                                     1900.f
#define CONST_kMaxThrowHeight                                       500.f
#define CONST_MaxYawDeltaDeg                                        12.f
#define CONST_BlindedFlickerPeriod                                  1
#define CONST_THOUGHT_Z_OFFSET                                      -100
#define CONST_SEARCHLIGHT_COUNT                                     3
#define CONST_SEARCHLIGHT_SCAN_DISTANCE                             1375.0
#define CONST_SEARCHLIGHT_FAR_VISIBILITY                            2000.0
#define CONST_SEARCHLIGHT_LIGHT_RADIUS_INNER                        7.5
#define CONST_SEARCHLIGHT_LIGHT_RADIUS_OUTER                        15.0
#define CONST_SEARCHLIGHT_LIGHT_SOCKET                              'SearchLight0'
#define CONST_SEARCHLIGHT_WEAPON_SOCKET                             'Muzzle'
#define CONST_SEARCHLIGHT_SCAN_INTERPOLATION                        1.0
#define CONST_SEARCHLIGHT_MOVE_INTERPOLATION                        1.5
#define CONST_SEARCHLIGHT_COLOR_INTERPOLATION                       3.0
#define CONST_TARGET_REFRESH_LIST_DELAY                             0.5
#define CONST_TARGET_DEFAULT_VALIDATE_DELAY                         2.5
#define CONST_ATTACK_DISTANCE                                       1500.0
#define CONST_ATTACK_VANTAGE_POINT_MAX_DISTANCE                     800.0
#define CONST_ATTACK_VANTAGE_POINT_MIN_DISTANCE                     400.0
#define CONST_ATTACK_VANTAGE_POINT_DISTANCE                         600.0
#define CONST_ATTACK_VANTAGE_POINT_MAX_HEIGHT                       500.0
#define CONST_ATTACK_VANTAGE_POINT_MIN_HEIGHT                       100.0
#define CONST_ATTACK_VANTAGE_POINT_HEIGHT                           300.0
#define CONST_ATTACK_DEFAULT_POWERUP_TIME                           0.5
#define CONST_ATTACK_DEFAULT_WEAPON_TIME                            0.75
#define CONST_ATTACK_LONGER_WEAPON_TIME                             3.0
#define CONST_ATTACK_EXPIRE_INVISIBLE_TIME                          20.0
#define CONST_INVESTIGATE_LOCATION_TIME                             10.0
#define CONST_MALFUNCTION_MAX_VIBRATE_ANGLE                         15.0
#define CONST_CODE_DOWNLOAD_TIME                                    3.0
#define CONST_max_charges                                           64
#define CONST_MAT_LOCKED                                            0
#define CONST_MAT_OPEN                                              1
#define CONST_MAT_UNLOCKED                                          2
#define CONST_MAX_CHALLENGE_SCORE                                   100000000
#define CONST_MAX_CHALLENGE_TIME                                    5999.0

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum BmScript.RBMBehaviour_BagCarrier.eLootPointInteractDirection
enum class EeLootPointInteractDirection : uint8_t
{
	eLPIDNotSet                                        = 0,
	eLPIDStraight                                      = 1,
	eLPIDLeft                                          = 2,
	eLPIDRight                                         = 3,
	eLootPointInteractDirection_END                    = 4
};

// Enum BmScript.RSeqEvent_HelicopterDialogueTrigger.HeliDialogue
enum class EHeliDialogue : uint8_t
{
	HD_BatmanSeen                                      = 0,
	HD_BatmanCombatSeen                                = 1,
	HD_BatmanCombatFinished                            = 2,
	HD_BatmanCombatRunAway                             = 3,
	HD_BatmanOutOfSight                                = 4,
	HD_BatmanLost                                      = 5,
	HD_BatmanKilled                                    = 6,
	HD_BatmanShootingAt                                = 7,
	HD_BatmanMissileLocked                             = 8,
	HD_BatmanMissileFired                              = 9,
	HD_BatmanMissileHit                                = 10,
	HD_BatmanMissileMissed                             = 11,
	HD_BatmanSeenFirstTime                             = 12,
	HD_BatmanReacquired                                = 13,
	HD_BatmanGrapplesAboard                            = 14,
	HD_HitByRec                                        = 15,
	HD_RecoversFromRec                                 = 16,
	HD_PassiveHelicopterMadeAggro                      = 17,
	HD_HelicopterWeaponJammed                          = 18,
	HD_HelicopterWeaponRepaired                        = 19,
	HD_END                                             = 20
};

// Enum BmScript.RHelicopterIntermediate.HeliAttackMode
enum class EHeliAttackMode : uint8_t
{
	HAM_NOT_SHOOTING                                   = 0,
	HAM_SPIN_UP_CHAINGUN                               = 1,
	HAM_FIRING_CHAINGUN                                = 2,
	HAM_SPIN_DOWN_CHAINGUN                             = 3,
	HAM_DEPLOY_ROCKETS                                 = 4,
	HAM_FIRE_ROCKETS                                   = 5,
	HAM_RETRACT_ROCKETS                                = 6,
	HAM_END                                            = 7
};

// Enum BmScript.RHelicopterIntermediate.ELightColour
enum class ELightColour : uint8_t
{
	ELC_White                                          = 0,
	ELC_Orange                                         = 1,
	ELC_Red                                            = 2,
	ELC_END                                            = 3
};

// Enum BmScript.RPawnVillainThug_Robot.ELightCol
enum class ELightCol : uint8_t
{
	LC_Neutral                                         = 0,
	LC_Batman                                          = 1,
	LC_CatWoman                                        = 2,
	LC_END                                             = 3
};

// Enum BmScript.RPredatorDroneMini.LightColorState
enum class ELightColorState : uint8_t
{
	LCS_Off                                            = 0,
	LCS_Standard                                       = 1,
	LCS_Investigate                                    = 2,
	LCS_Attack                                         = 3,
	LCS_Malfunction                                    = 4,
	LCS_END                                            = 5
};

// Enum BmScript.RPredatorDroneMini.SearchLightTargetMode
enum class ESearchLightTargetMode : uint8_t
{
	SLTM_Nothing                                       = 0,
	SLTM_Standard                                      = 1,
	SLTM_AllOrNothing                                  = 2,
	SLTM_Specified                                     = 3,
	SLTM_END                                           = 4
};

// Enum BmScript.RPredatorDroneMini.MalfunctionSource
enum class EMalfunctionSource : uint8_t
{
	MALS_Generic                                       = 0,
	MALS_ControllerDisrupted                           = 1,
	MALS_ElectronicPulse                               = 2,
	MALS_END                                           = 3
};

// Enum BmScript.RSeqAct_SideStory_Update.SS_TriBool
enum class ESS_TriBool : uint8_t
{
	SS_TB_Ignore                                       = 0,
	SS_TB_False                                        = 1,
	SS_TB_True                                         = 2,
	SS_TB_END                                          = 3
};

// Enum BmScript.RSeqAct_StartGauntletMovie.PortraitNames
enum class EPortraitNames : uint8_t
{
	PN_NoPortrait                                      = 0,
	PN_Alfred                                          = 1,
	PN_ArkhamKnight                                    = 2,
	PN_Cash                                            = 3,
	PN_Catwoman                                        = 4,
	PN_Deathstroke                                     = 5,
	PN_Gordon                                          = 6,
	PN_HarleyQuinn                                     = 7,
	PN_Henry                                           = 8,
	PN_Ivy                                             = 9,
	PN_Jack                                            = 10,
	PN_Joker                                           = 11,
	PN_Lucius                                          = 12,
	PN_MadHatter                                       = 13,
	PN_Nightwing                                       = 14,
	PN_Oracle                                          = 15,
	PN_Riddler                                         = 16,
	PN_Robin                                           = 17,
	PN_Scarecrow                                       = 18,
	PN_DLC_Freeze                                      = 19,
	PN_END                                             = 20
};

// Enum BmScript.RSeqEvent_MinidroneAndThugInteractions.SACBCB_OUT_Links
enum class ESACBCB_OUT_Links : uint8_t
{
	SEMDATI_OUT_CodesDownloaded                        = 0,
	SEMDATI_OUT_TargettedByMinidrone                   = 1,
	SEMDATI_OUT_END                                    = 2
};

// Enum BmScript.RSeqAct_IsInBatmobile.EWhichBatmobileMode
enum class EWhichBatmobileMode : uint8_t
{
	EWBM_DontCare                                      = 0,
	EWBM_BattleMode                                    = 1,
	EWBM_PursuitMode                                   = 2,
	EWBM_END                                           = 3
};

// Enum BmScript.RSeqAct_MostWantedEndOfGameState.ESubChapter
enum class ESubChapter_0 : uint8_t
{
	ESubChapter_None                                   = 0,
	ESubChapter_a                                      = 1,
	ESubChapter_b                                      = 2,
	ESubChapter_c                                      = 3,
	ESubChapter_d                                      = 4,
	ESubChapter_e                                      = 5,
	ESubChapter_f                                      = 6,
	ESubChapter_g                                      = 7,
	ESubChapter_h                                      = 8,
	ESubChapter_i                                      = 9,
	ESubChapter_j                                      = 10,
	ESubChapter_k                                      = 11,
	ESubChapter_l                                      = 12,
	ESubChapter_m                                      = 13,
	ESubChapter_n                                      = 14,
	ESubChapter_o                                      = 15,
	ESubChapter_p                                      = 16,
	ESubChapter_q                                      = 17,
	ESubChapter_r                                      = 18,
	ESubChapter_s                                      = 19,
	ESubChapter_t                                      = 20,
	ESubChapter_u                                      = 21,
	ESubChapter_v                                      = 22,
	ESubChapter_w                                      = 23,
	ESubChapter_x                                      = 24,
	ESubChapter_y                                      = 25,
	ESubChapter_z                                      = 26,
	ESubChapter_END                                    = 27
};

// Enum BmScript.RSeqAct_SideStory_IconControl.SS_IconControl_Action
enum class ESS_IconControl_Action : uint8_t
{
	SS_IconControl_Action_None                         = 0,
	SS_IconControl_Action_Add                          = 1,
	SS_IconControl_Action_Remove                       = 2,
	SS_IconControl_Action_END                          = 3
};

// Enum BmScript.RSeqAct_SideStory_Query.SS_LinkIDs
enum class ESS_LinkIDs : uint8_t
{
	SS_LinkID_LT                                       = 0,
	SS_LinkID_LTEQ                                     = 1,
	SS_LinkID_EQ                                       = 2,
	SS_LinkID_NEQ                                      = 3,
	SS_LinkID_GTEQ                                     = 4,
	SS_LinkID_GT                                       = 5,
	SS_LinkID_END                                      = 6
};

// Enum BmScript.RSeqAct_SideStory_Query.SS_Query_Action
enum class ESS_Query_Action : uint8_t
{
	SS_Query_Action_None                               = 0,
	SS_Query_Action_SideStory_Exists                   = 1,
	SS_Query_Action_Locked                             = 2,
	SS_Query_Action_IdentityUnknown                    = 3,
	SS_Query_Action_HasIconNamed                       = 4,
	SS_Query_Action_Percentage                         = 5,
	SS_Query_Action_SynopsisTextId                     = 6,
	SS_Query_Action_ProgressTextId                     = 7,
	SS_Query_Action_END                                = 8
};

// Enum BmScript.RSeqAct_SideStory_UIMessage.StoryUI
enum class EStoryUI : uint8_t
{
	SUI_Open                                           = 0,
	SUI_Update                                         = 1,
	SUI_Close                                          = 2,
	SUI_END                                            = 3
};

// Enum BmScript.RSeqAct_UnlockChallenge.UnlockChallengeAction
enum class EUnlockChallengeAction : uint8_t
{
	UCA_Reveal                                         = 0,
	UCA_Unlock                                         = 1,
	UCA_RevealAndUnlock                                = 2,
	UCA_Hide                                           = 3,
	UCA_Lock                                           = 4,
	UCA_HideAndLock                                    = 5,
	UCA_END                                            = 6
};

// Enum BmScript.RHelicopterMultiRole.TankDropState
enum class ETankDropState : uint8_t
{
	TDS_None                                           = 0,
	TDS_MoveToHighPoint                                = 1,
	TDS_LowerToDropPoint                               = 2,
	TDS_ReleaseTank                                    = 3,
	TDS_ReturnToHighPoint                              = 4,
	TDS_DropComplete                                   = 5,
	TDS_END                                            = 6
};

// Enum BmScript.RSeqAct_SetMultiroleHelicopterState.HelicopterStates
enum class EHelicopterStates : uint8_t
{
	HS_HoverInCurrentLocation                          = 0,
	HS_HoverInPlace                                    = 1,
	HS_MoveToLocation                                  = 2,
	HS_PursueAndEngage                                 = 3,
	HS_StrafingRun                                     = 4,
	HS_Charge                                          = 5,
	HS_Blanket                                         = 6,
	HS_DropTankAtLocation                              = 7,
	HS_DropPassengers                                  = 8,
	HS_END                                             = 9
};

// Enum BmScript.RSeqAct_DeathstrokeTakedown.DSFinaleState
enum class EDSFinaleState : uint8_t
{
	DSFS_MoveIntoPosition                              = 0,
	DSFS_FadeDown                                      = 1,
	DSFS_Trans                                         = 2,
	DSFS_END                                           = 3
};

// Enum BmScript.RVehicleBehaviour_Patrol.VehiclePatrolState
enum class EVehiclePatrolState : uint8_t
{
	VehiclePatrolState_MoveToPoint                     = 0,
	VehiclePatrolState_AtPoint                         = 1,
	VehiclePatrolState_END                             = 2
};

// Enum BmScript.RSeqAct_WaypointTraversingTargetTracker.WaypointTrackerPhase
enum class EWaypointTrackerPhase : uint8_t
{
	WTP_Initial                                        = 0,
	WTP_Moving                                         = 1,
	WTP_ProximityPause                                 = 2,
	WTP_KismetPause                                    = 3,
	WTP_ReachedEnd                                     = 4,
	WTP_Finished                                       = 5,
	WTP_END                                            = 6
};

// Enum BmScript.RBMBehaviour_FireflyFlee.FFDialogueType
enum class EFFDialogueType : uint8_t
{
	eFFDialogueType_Ambient                            = 0,
	eFFDialogueType_LaunchedBomb                       = 1,
	eFFDialogueType_BombHit                            = 2,
	eFFDialogueType_BMClose                            = 3,
	eFFDialogueType_OutOfFuel                          = 4,
	eFFDialogueType_END                                = 5
};

// Enum BmScript.RGFxMovieUI_InstallationMessage.PopUpTypes
enum class EPopUpTypes_0 : uint8_t
{
	PT_None                                            = 0,
	PT_Error                                           = 1,
	PT_Exit                                            = 2,
	PT_END                                             = 3
};

// Enum BmScript.RSeqAct_IntegratedChallengeControl.ICC_IN_Links
enum class EICC_IN_Links : uint8_t
{
	ICC_IN_Setup                                       = 0,
	ICC_IN_StartCountdown                              = 1,
	ICC_IN_Begin                                       = 2,
	ICC_IN_StartClock                                  = 3,
	ICC_IN_PauseClock                                  = 4,
	ICC_IN_AdjustClock                                 = 5,
	ICC_IN_StopClock                                   = 6,
	ICC_IN_End                                         = 7,
	ICC_IN_ResetEnvironment                            = 8,
	ICC_IN_END                                         = 9
};

// Enum BmScript.RSeqAct_IntegratedChallengeControl.ICC_OUT_Links
enum class EICC_OUT_Links : uint8_t
{
	ICC_OUT_Setup                                      = 0,
	ICC_OUT_CountdownStarted                           = 1,
	ICC_OUT_CountdownFinished                          = 2,
	ICC_OUT_Begun                                      = 3,
	ICC_OUT_Ended                                      = 4,
	ICC_OUT_ClockStarted                               = 5,
	ICC_OUT_ClockPaused                                = 6,
	ICC_OUT_ClockStopped                               = 7,
	ICC_OUT_ClockFailure                               = 8,
	ICC_OUT_END                                        = 9
};

// Enum BmScript.RSeqAct_IntegratedChallengeControl.ChallengeHudVariation
enum class EChallengeHudVariation : uint8_t
{
	CHV_Auto                                           = 0,
	CHV_Tutorial                                       = 1,
	CHV_Standard                                       = 2,
	CHV_StarsAndGoal                                   = 3,
	CHV_Stars                                          = 4,
	CHV_Goal                                           = 5,
	CHV_END                                            = 6
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class BmScript.RBatarang_Controllable
// 0x0094 (0x0A50 - 0x0AE4)
class ARBatarang_Controllable : public ARBatarang
{
public:
	class URSpecialMoveConfig*                         CatchBatarangFrontMove;                        // 0x0A50 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangLeftMove;                         // 0x0A58 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangRightMove;                        // 0x0A60 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangBackMove;                         // 0x0A68 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangGargoyleMove;                     // 0x0A70 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangRailingMove;                      // 0x0A78 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangWireMove;                         // 0x0A80 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangCoverMove;                        // 0x0A88 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARBatarangProjectile_Controllable*           Projectile;                                    // 0x0A90 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ElectrifiedCatchAudio;                         // 0x0A98 (0x0008) [0x0000000000000000]               
	class URSpecialMoveConfig*                         RemoteControlBatarangMove;                     // 0x0AA0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      ChargingRoundTheBackarang;                     // 0x0AA8 (0x0008) [0x0000000000000000]               
	class ARSpecialMoveInstance*                       CaughtBatarangSpecialMoveInstance;             // 0x0AB0 (0x0008) [0x0000000000000000]               
	class UClass*                                      RoundTheBackarangProjectileClass;              // 0x0AB8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystemComponent*                    ElectrifiedCatchParticles;                     // 0x0AC0 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bCanUseRoundTheBackarang : 1;                  // 0x0AC8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           FireRoundTheBackarang : 1;                     // 0x0AC8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bChargingRoundTheBackarang : 1;                // 0x0AC8 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              RoundTheBackarangCharge;                       // 0x0ACC (0x0004) [0x0000000000000000]               
	float                                              RoundTheBackarangChargeTime;                   // 0x0AD0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FAkSoundHandle                              LockOnSound;                                   // 0x0AD4 (0x0010) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatarang_Controllable");
		}

		return uClassPointer;
	};


	void ExitGauntletPose();
	void DrawAimingHUD();
	class FString GetReversePromptName();
	bool GetHelpPrompt(class URHUDPrompt* HelpPrompt, bool bKismetHelpOn);
	void UpdateTarget();
	bool eventCheckAutoTarget(class AActor* BatarangTarget, struct FVector& outBatarangTargetPosition, float& optionalOutOverridePriority, float& optionalOutOverrideMaxRange, uint8_t& optionalOutDoLOSCheck);
	void PlayerTick(float DeltaTime);
	bool eventGetPotentialTargetPositions(class AActor* Target, struct FVector& outInTargetPosition, class TArray<struct FVector>& outPotentialTargetPositions, class AActor*& optionalOutLineCheckActor);
	bool UnequipSelf();
	void CancelChargingRoundTheBackarang();
	void StopChargingRoundTheBackarang(bool optionalNoThrow);
	void StartChargingRoundTheBackarang();
	bool FireGadgetCombat();
	void CatchBatarang(class ARBatarangProjectile* CatchProjectile);
	void CatchBatarangAttachAndUnAttachAfterDelay();
	void PlayElectrifiedCatchEffect();
	int32_t GetGadgetHelpStage();
	void ProjectileDestroyed();
	void GetProjectilePrompt(class URHUDPrompt* HelpPrompt, bool bKismetHelpOn);
	static class FName GetPromptName();
	EBRAECReactionType GetBRAECReactionType();
	void ThrowBatarangHand(const class FName& LaunchBone);
};
// Class BmScript.RBatarangProjectile_RoundTheBackarang
// 0x0000 (0x04EC - 0x04EC)
class ARBatarangProjectile_RoundTheBackarang : public ARBatarangProjectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatarangProjectile_RoundTheBackarang");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBatarangProjectile_ControllableBm
// 0x0000 (0x0660 - 0x0660)
class ARBatarangProjectile_ControllableBm : public ARBatarangProjectile_Controllable
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatarangProjectile_ControllableBm");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBatarangBm
// 0x0044 (0x0A50 - 0x0A94)
class ARBatarangBm : public ARBatarang
{
public:
	class URSpecialMoveConfig*                         CatchBatarangMove;                             // 0x0A50 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangGargoyleMove;                     // 0x0A58 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangRailingMove;                      // 0x0A60 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangWireMove;                         // 0x0A68 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         CatchBatarangCoverMove;                        // 0x0A70 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ElectrifiedCatchAudio;                         // 0x0A78 (0x0008) [0x0000000000000000]               
	class UClass*                                      RCBatarangProjectileClass;                     // 0x0A80 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    ElectrifiedCatchParticles;                     // 0x0A88 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bCanUseMultiBatarang : 1;                      // 0x0A90 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatarangBm");
		}

		return uClassPointer;
	};


	bool GetHelpPrompt(class URHUDPrompt* HelpPrompt, bool bKismetHelpOn);
	bool ToggleMultiBatararang();
	void NoToggleBatarang();
	void CatchBatarang(class ARBatarangProjectile* CatchProjectile);
	void PlayElectrifiedCatchEffect();
	void ProjectileDestroyed();
	void GetProjectilePrompt(class URHUDPrompt* HelpPrompt, bool bKismetHelpOn);
	void ThrowBatarangHandSecondary(const class FName& LaunchBone);
	void ThrowBatarangHand(const class FName& LaunchBone);
	void quickFire(bool optionalOverridesCombatMove);
	static class FName GetPromptName();
};
// Class BmScript.RBatarang_MultiTarget
// 0x0080 (0x0A94 - 0x0B14)
class ARBatarang_MultiTarget : public ARBatarangBm
{
public:
	int32_t                                            NumTargets;                                    // 0x0A94 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<class AActor*>                        CurrentTargets;                                // 0x0A98 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<int32_t>                              CurrentTargetParts;                            // 0x0AA8 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<int32_t>                              BatarangThrowOrder;                            // 0x0AB8 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<float>                                RopeTargetPositions;                           // 0x0AC8 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            NextBatarangToThrow;                           // 0x0AD8 (0x0004) [0x0000000000000400] (CPF_Transient)
	class FName                                        LastLaunchBone;                                // 0x0ADC (0x0008) [0x0000000000000400] (CPF_Transient)
	class USkeletalMeshComponent*                      ExtraBatarangMeshes[2];                        // 0x0AE4 (0x0010) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class AActor*>                        NumHitsWithLastThrow;                          // 0x0AF4 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            NumMissesWithLastThrow;                        // 0x0B04 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            NumBatarangsThrown;                            // 0x0B08 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            ComboLaunchId;                                 // 0x0B0C (0x0004) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           bToggleGadget : 1;                             // 0x0B10 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatarang_MultiTarget");
		}

		return uClassPointer;
	};


	bool eventCheckAutoTarget(class AActor* BatarangTarget, struct FVector& outBatarangTargetPosition, float& optionalOutOverridePriority, float& optionalOutOverrideMaxRange, uint8_t& optionalOutDoLOSCheck);
	bool ToggleMultiBatararang();
	void AttachToHand(const class FName& optionalCustomBone);
	void CalculateLaunchOrder(const class FName& LaunchBone);
	void ThrowNextBatarang();
	static class FName GetPromptName();
	void ThrowBatarangHand(const class FName& LaunchBone);
	class ARBatarangProjectile* ThrowBatarangIndex(int32_t BatarangIndex, int32_t Order);
	bool InformTargetOfMultiThrow(class AActor* MultiThrowTarget);
	void DrawAimingHUD();
	class FName GetBatarangThrowAnim(const struct FRotator& ThrowDirection, EAimingConfigDesc& outAimingConfig, EMirrorChoice& outMirroredNess);
	bool FireGadgetCombat();
	void UpdateTarget();
	void MaxNumTargetsChanged();
	void UpdateTargetsFromUnlocks(bool bQuickfire);
	void quickFire(bool optionalOverridesCombatMove);
};
// Class BmScript.RBatarangProjectileBm
// 0x0000 (0x04EC - 0x04EC)
class ARBatarangProjectileBm : public ARBatarangProjectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatarangProjectileBm");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBatarangProjectile_MultiTarget
// 0x0000 (0x04EC - 0x04EC)
class ARBatarangProjectile_MultiTarget : public ARBatarangProjectileBm
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatarangProjectile_MultiTarget");
		}

		return uClassPointer;
	};


	void VillainHit(class ARPawnVillain* Target);
	void StopSpinSound();
	void StartSpinSound();
};
// Class BmScript.RBatarang_Multi_Target_Quick
// 0x0000 (0x0B14 - 0x0B14)
class ARBatarang_Multi_Target_Quick : public ARBatarang_MultiTarget
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatarang_Multi_Target_Quick");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBatDistract
// 0x0014 (0x0A94 - 0x0AA8)
class ARBatDistract : public ARBatarangBm
{
public:
	uint32_t                                           bDetonatable : 1;                              // 0x0A94 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class URInteractionClass*                          DetonateTargets;                               // 0x0A98 (0x0008) [0x0000000000000400] (CPF_Transient)
	class URInteractionClass*                          SonicBatarangClass;                            // 0x0AA0 (0x0008) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatDistract");
		}

		return uClassPointer;
	};


	void AttachToHand(const class FName& optionalCustomBone);
	bool FireGadgetCombat();
	bool DisplayTutorial();
	class FString GetTutorialText();
	void OnRoomChange();
	void DrawTargets();
	static class FName GetPromptName();
	void ThrowBatarangHand(const class FName& LaunchBone);
	void UpgradeGadget(int32_t NewUpgradeLevel);
	bool CanThrowGadget();
	void eventPostBeginPlay();
};
// Class BmScript.RBatDistractProjectileBm
// 0x0000 (0x057C - 0x057C)
class ARBatDistractProjectileBm : public ARBatDistractProjectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatDistractProjectileBm");
		}

		return uClassPointer;
	};


	void StopSpinSound();
	void StartSpinSound();
};
// Class BmScript.RBatDistractProjectile_Detonatable
// 0x0000 (0x057C - 0x057C)
class ARBatDistractProjectile_Detonatable : public ARBatDistractProjectileBm
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatDistractProjectile_Detonatable");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBatmanForensicsDevice
// 0x0000 (0x0834 - 0x0834)
class ARBatmanForensicsDevice : public ARForensicsDevice
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatmanForensicsDevice");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBatmobileRemoteBm
// 0x0080 (0x0918 - 0x0998)
class ARBatmobileRemoteBm : public ARBatmobileRemote
{
public:
	class ARVehicleBatmobileBase*                      RiotSuppressorBatmobile;                       // 0x0918 (0x0008) [0x0000000000000000]               
	class ARVehicleBatmobileBase*                      CallingVehicle;                                // 0x0920 (0x0008) [0x0000000000000000]               
	class ARVehicleNPCBatmobile*                       NpcBatmobileTarget;                            // 0x0928 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    FireSound;                                     // 0x0930 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    CancelSound;                                   // 0x0938 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    CancelSound2;                                  // 0x0940 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    CallSound;                                     // 0x0948 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      CurrentRiotSuppressorTarget;                   // 0x0950 (0x0008) [0x0000000000000000]               
	class URSpecialMoveConfig*                         RemoteControlBatmobileMove;                    // 0x0958 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkDialogueSpeech*                           ReachedRemoteHardLimitThought;                 // 0x0960 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              JammingRange;                                  // 0x0968 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           ScreenOn : 1;                                  // 0x096C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRelativeAiming : 1;                           // 0x096C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              JammerTime;                                    // 0x0970 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CurrentJam;                                    // 0x0974 (0x0004) [0x0000000000000000]               
	float                                              CursorSpeed;                                   // 0x0978 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CursorAccel;                                   // 0x097C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CursorDecel;                                   // 0x0980 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CursorReturnFactor;                            // 0x0984 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CursorReturnDelay;                             // 0x0988 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxAimX;                                       // 0x098C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxAimY;                                       // 0x0990 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RelativeAimingCurvePower;                      // 0x0994 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatmobileRemoteBm");
		}

		return uClassPointer;
	};


	void NotifyReachedHardRemoteLimit();
	void OnGadgetWheelSelected();
	class ARPlayerController* GetPC();
	class FName GetFiringAnimationOverlay();
	void StartChargingJammer();
	void NotifyBatmanPickedUp();
	void NotifyRemoteDriveCancelled();
	void NotifyCallBatmobileToMe();
	void PowerOffScreen();
	void PowerOnScreen();
	void DontMoveCursor();
	struct FRotator GetAimAtRotation();
	void ClearTarget();
	void ShowFailIcon();
	void DrawTarget();
	void CancelCallBatmobile();
	void CallBatmobile();
	void PlayerTick(float DeltaTime);
	class FName GetFireAnim(const struct FRotator& ThrowDirection, bool Mirrored, EAimingConfigDesc& outAimingConfig);
	class FName GetPrimedPose(bool optionalInSoftCover, ECoverCornerType optionalCornerType, EPlayerWantsToCrouch& optionalOutStanceIsCrouched, EMirrorChoice& optionalOutMirroredNess, class FName& optionalOutOutCapeState, class FName& optionalOutOutCapeTransitionState);
	bool GetHelpPrompt(class URHUDPrompt* HelpPrompt, bool bKismetHelpOn);
	static class FName GetPromptName();
};
// Class BmScript.RBMAIAction_RiotFollow
// 0x0030 (0x0384 - 0x03B4)
class ARBMAIAction_RiotFollow : public ARBMAIAction_BaseMove
{
public:
	struct FVector                                     GoalPos;                                       // 0x0384 (0x000C) [0x0000000000000000]               
	struct FVector                                     DestVec;                                       // 0x0390 (0x000C) [0x0000000000000000]               
	class URBMBehaviour_GangMovementBase*              GangMovementBehaviour;                         // 0x039C (0x0008) [0x0000000000000000]               
	class ARBMPawnAI*                                  GangFollowPawn;                                // 0x03A4 (0x0008) [0x0000000000000000]               
	class URNavigationHandle*                          RepathHandle;                                  // 0x03AC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMAIAction_RiotFollow");
		}

		return uClassPointer;
	};


	bool HandlesGlance();
	EActionTickResult ActionTick(float DeltaTime);
	void MoveToInit(const class FName& IdleName);
	class URNavigationHandle* BuildHandle();
	struct FVector GetGoalPos();
	void OnDeactivate();
	void OnActivate();
};
// Class BmScript.RBMBehaviour_GangMovementBase
// 0x0098 (0x0304 - 0x039C)
class URBMBehaviour_GangMovementBase : public URBMBehaviour_GangMovementBaseBase
{
public:
	class ARGangInteractPointBase*                     DestinationActor;                              // 0x0304 (0x0008) [0x0000000000000000]               
	class URNavigationHandle*                          NavHandle;                                     // 0x030C (0x0008) [0x0000000000000000]               
	class ARBMAIAction_BaseMove*                       SavedAction;                                   // 0x0314 (0x0008) [0x0000000000000000]               
	class ARGangInteractPointBase*                     SavedSpecToPOI;                                // 0x031C (0x0008) [0x0000000000000000]               
	class FName                                        SavedMovementStance;                           // 0x0324 (0x0008) [0x0000000000000000]               
	class FName                                        SavedWeaponStance;                             // 0x032C (0x0008) [0x0000000000000000]               
	class FName                                        NewMovementStance;                             // 0x0334 (0x0008) [0x0000000000000000]               
	class FName                                        NewWeaponStance;                               // 0x033C (0x0008) [0x0000000000000000]               
	struct FVector                                     SavedTransInPoint;                             // 0x0344 (0x000C) [0x0000000000000000]               
	struct FRotator                                    SavedTransInRotation;                          // 0x0350 (0x000C) [0x0000000000000000]               
	uint32_t                                           bDetattchedFromCar : 1;                        // 0x035C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCantFleeAtTheMoment : 1;                      // 0x035C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSecondTry : 1;                                // 0x035C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bSprayingGraffiti : 1;                         // 0x035C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bHasRegisteredPointWithBrain : 1;              // 0x035C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bHasDoneWaitState : 1;                         // 0x035C (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              ChanceOfNewRunCycle;                           // 0x0360 (0x0004) [0x0000000000000000]               
	float                                              StartleFriendDistance;                         // 0x0364 (0x0004) [0x0000000000000000]               
	struct FTransitionId                               FleeReactionID;                                // 0x0368 (0x0004) [0x0000000000000000]               
	class TArray<class FName>                          FleeReactionFront;                             // 0x036C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          FleeReactionBack;                              // 0x037C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              CurrentSprayDuration;                          // 0x038C (0x0004) [0x0000000000000000]               
	float                                              CurrentSprayTime;                              // 0x0390 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentSprayIndex;                             // 0x0394 (0x0004) [0x0000000000000000]               
	int32_t                                            WaitStateFrameTimer;                           // 0x0398 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_GangMovementBase");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	class URWeaponConfig* CreateRunVariantWeaponConfig();
	void BeginHammer();
	void EndGrind();
	void BeginGrind();
	void EndWeld();
	void BeginWeld();
	void UpdateGraffiti(float DeltaTime);
	void eventGraffitiNotify(class URAnimNotify_Graffiti* GraffitiNotify);
	void IgniteFlare();
	void ExplodeMolotov();
	void IgniteMolotov();
	void eventSmashWindow();
	void eventSmashObject();
	void eventCrackOrSmashWindow();
	void eventCrackOrSmashObject();
	void eventCrackWindow();
	void eventCrackObject();
	void GetBreakVars(struct FVector& outHitLoc, struct FVector& outHitNorm, struct FVector& outHitSpeed, class AActor*& outThrownActor);
	void eventRiotPickupNotify(class URAnimNotify_PickupProp* PickupNotify);
	void SpawnObject(class ARRiotObjectBase*& outRiotObject);
	void PickupStone();
	void PickupBrick();
	void PickupSprayCan();
	void PickupPipe();
	void RiotExitBehaviour();
	void eventDettachFromCar();
	void AttachToCarSeat3();
	void AttachToCarSeat2();
	void AttachToCarSeat1();
	EEvadeVehicleType GetEvadeVehicleType(class AActor* V, float CarSpeed, bool bZap);
	void TriggerOutputEvent();
	void InteractOutput();
	bool CanLookAtPlayer();
	void HandlePathNotFound();
	void SetRunVariants(class ARBMAIAction_RiotRunBase* MoveAction);
	bool CanBeHitInCombat(class URDamageType* DamageType);
	void eventCaptainDied();
	bool eventRiotHandleSpookedBy(class AActor* Threat, bool optionalBAlertNeighours);
	void PlayFleeReaction();
	void QuickEndTransition(bool bKeepRiotMovement, bool optionalBGoingToCombat);
	void eventSetSpecCanTakeOver();
	void ClearCantFlee();
	void SetCantFlee();
	void Tick(float DeltaTime);
	void PlayerBumped(bool bFriendly);
	void HandleNoise(class ARPawnPlayer* PlayerInstigator);
	void Repath();
	void StartNavMeshSearch();
	bool VeryCloseToGoal(float CheckDist, float CheckDist2D);
	void PawnIsBeingPooled(bool bBeingStreamedOut);
	void OnEndInterrupt();
	void OnBeginInterrupt();
	void OnDeactivate();
	void SetInitialState();
	void LeaveDueToTimeout();
	void GenerateMoveToPoint();
	void OnActivate();
	struct FVector GetMoveLocation();
	class AActor* eventGetDestinationActor();
};
// Class BmScript.RBMAIAction_RiotRun
// 0x0000 (0x0560 - 0x0560)
class ARBMAIAction_RiotRun : public ARBMAIAction_RiotRunBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMAIAction_RiotRun");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMBehaviour_BagCarrier
// 0x00BC (0x02B4 - 0x0370)
class URBMBehaviour_BagCarrier : public URBMBehaviour_BagCarrierBase
{
public:
	class TArray<class ARLootSourceBase*>              allPickUpPoints;                               // 0x02B4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class ARLootDestinationBase*>         allDropOffPoints;                              // 0x02C4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class AActor*                                      ExitPoint;                                     // 0x02D4 (0x0008) [0x0000000000000000]               
	class ARLootSourceBase*                            currPickupPoint;                               // 0x02DC (0x0008) [0x0000000000000000]               
	class ARLootDestinationBase*                       currDropOffPoint;                              // 0x02E4 (0x0008) [0x0000000000000000]               
	class ARBMAIAction_StandAndShoot*                  ShootAction;                                   // 0x02EC (0x0008) [0x0000000000000000]               
	class ARTunnelGrateBase*                           GrateTarget;                                   // 0x02F4 (0x0008) [0x0000000000000000]               
	class AActor*                                      introAnimRefPoint;                             // 0x02FC (0x0008) [0x0000000000000000]               
	class ARLootSourceBase*                            OverridingPickUpPoint;                         // 0x0304 (0x0008) [0x0000000000000000]               
	class ARLootDestinationBase*                       OverridingDropOffPoint;                        // 0x030C (0x0008) [0x0000000000000000]               
	uint32_t                                           bDebug : 1;                                    // 0x0314 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bChasePlayer : 1;                              // 0x0314 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFinishedPickingUp : 1;                        // 0x0314 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bHasLootingIdleAnim : 1;                       // 0x0314 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bHasLootingOutAnim : 1;                        // 0x0314 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bGotLootPoints : 1;                            // 0x0314 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bStartedShooting : 1;                          // 0x0314 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bRandomPickupPointSelection : 1;               // 0x0314 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           bForceFirstPickupPointToBeNonRandom : 1;       // 0x0314 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           bChosenPickupPointSinceActivation : 1;         // 0x0314 (0x0004) [0x0000000000000400] [0x00000200] (CPF_Transient)
	uint32_t                                           bPlayIntroAnim : 1;                            // 0x0314 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           bEnterFromRight : 1;                           // 0x0314 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           bPlayedIntroAnim : 1;                          // 0x0314 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bTriggeredIntroAnimFinishedOutput : 1;         // 0x0314 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           inPlaceForGrateGrenadeThrow : 1;               // 0x0314 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bagVFXActive : 1;                              // 0x0314 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bUseAlternateDropoffAnim : 1;                  // 0x0314 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           cachedDestinationIsWaypoint : 1;               // 0x0314 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bNeverUseWaypoints : 1;                        // 0x0314 (0x0004) [0x0000000100000000] [0x00040000] (CPF_Edit)
	uint32_t                                           bTempDontUseWaypoints : 1;                     // 0x0314 (0x0004) [0x0000000100000000] [0x00080000] (CPF_Edit)
	uint32_t                                           bDbgDrawWaypoints : 1;                         // 0x0314 (0x0004) [0x0000000100000000] [0x00100000] (CPF_Edit)
	uint32_t                                           bSpawnedBag : 1;                               // 0x0314 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bLastAmbientDialogueWasAboutCash : 1;          // 0x0314 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bHasEverBeenInterrupted : 1;                   // 0x0314 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bDonePostInterruptRoomwideAlert : 1;           // 0x0314 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bRequestedLadderFreePath : 1;                  // 0x0314 (0x0004) [0x0000000000000000] [0x02000000] 
	struct FTransitionId                               transID;                                       // 0x0318 (0x0004) [0x0000000000000000]               
	float                                              timeSinceRepathCheck;                          // 0x031C (0x0004) [0x0000000000000000]               
	float                                              TimeTillOverlay;                               // 0x0320 (0x0004) [0x0000000000000000]               
	float                                              timeBetweenOverlaysMin;                        // 0x0324 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              timeBetweenOverlaysMax;                        // 0x0328 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeSpentPickingUp;                            // 0x032C (0x0004) [0x0000000000000000]               
	float                                              pickupDuration;                                // 0x0330 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              aimAtGrateStartTime;                           // 0x0334 (0x0004) [0x0000000000000000]               
	float                                              aimAtGrateDuration;                            // 0x0338 (0x0004) [0x0000000000000000]               
	struct FVector                                     cachedDropoffDestination;                      // 0x033C (0x000C) [0x0000000000000000]               
	int32_t                                            nextWaypointIndex;                             // 0x0348 (0x0004) [0x0000000000000000]               
	float                                              LastHUDTimerDrawTime;                          // 0x034C (0x0004) [0x0000000000000000]               
	struct FVector                                     pickupFromFloorAnimStartLoc;                   // 0x0350 (0x000C) [0x0000000000000000]               
	float                                              PostCheatChaseStartTime;                       // 0x035C (0x0004) [0x0000000000000000]               
	EeLootPointInteractDirection                       interactDirection;                             // 0x0360 (0x0001) [0x0000000000000000]               
	EePathElevation                                    FuturePathElevation;                           // 0x0361 (0x0001) [0x0000000000000000]               
	struct FVector                                     FuturePathAimPos;                              // 0x0364 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_BagCarrier");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool CheckFuturePathOrientation();
	class URNavigationHandle* BagCarrier_GetNavHandle_PathToPoint(const struct FVector& DestPos, bool optionalBAllowTraversal, const class FName& optionalClaimName);
	int32_t GetNextWaypointIndex(bool bTowardsPickUpPoint);
	float GetWaypointScore(const struct FVector& currentLoc, const struct FVector& Destination, const struct FVector& waypointLoc);
	int32_t GetBestWaypointIndex(bool bTowardsPickUpPoint);
	class ARPawn* FindClosestShootingPawnToPlayer();
	bool AreAnyPawnsCheatChasing();
	bool ShouldCheatChase();
	class ARPawn* FindClosestPawnWaitingForCurrentDropOffPoint();
	void HandlePathFail();
	bool CheckAssignBetterDropOffPoint();
	bool OkToCarryOnBagCarrying();
	void RunToExitPoint(class AActor* inExitPoint);
	void TryTriggerExitBark();
	bool SnapPointToNavMesh(struct FVector& outTestPoint);
	bool HasLineOfSightToThrowGrenadeOnGrate(class ARTunnelGrateBase* Grate);
	bool GotLOSToPlayer();
	bool ShouldStopAndShootPlayer();
	void TriggerGrateResponse(class ARTunnelGrateBase* Grate, bool optionalCanDestroy);
	void Tick(float UpdateTime);
	void UpdateBagVFX();
	void NotifyGunEmpty();
	void NotifyFailed(class ARBMAIAction* FinishedAction);
	void NotifyFinished(class ARBMAIAction* FinishedAction);
	struct FVector GetDestination(bool optionalBFinalDestQueryOnly);
	void UnlockCurrentDropoffPoint();
	void UnlockPickupPoints();
	void LockCurrentPickupPoint();
	class ARLootDestinationBase* GetBestEnabledDropOffPoint();
	void AssignPickUpPoint(class ARLootSourceBase* chosenPickUpPoint);
	void ChoosePickUpPoint();
	bool NeedsRandomPickupPoint();
	void SetOverridingDropOffPoint(class ARLootDestinationBase* dropoffPoint);
	void SetOverridingPickupPoint(class ARLootSourceBase* PickupPoint);
	struct FVector GetPickUpPointTargetLocation(class ARLootSourceBase* PickupPoint, class ARCarriableObjectBagBase*& outExistingBag);
	bool IsLocationProhibitedByTakedownVolume(const struct FVector& Location);
	class TArray<int32_t> GetLeastBusyLootSourceGroups();
	class AActor* GetActorForPredVolTest();
	bool GetJoiningLocations(class TArray<struct FVector>& outOutLocations, class TArray<class UObject*>& outOutObjects);
	void PriorityBehaviourWaiting();
	void LootBagDroppedOff();
	void DettachBagInternal(bool bEnablePhys, bool optionalBNoPoseChange);
	void DettachBagNoPhysics();
	void DettachBagNoPoseChange();
	void DettachBag();
	void DisruptedExplosion();
	void AttachBag();
	void DoPoseChange();
	void DestroyBagNoPoseChange();
	void DestroyBag();
	void SpawnBag();
	bool GetBombReactAnim(bool bFront, class FName& outAnimName);
	void OnEndInterrupt();
	void OnBeginInterrupt();
	void OnExitBehaviourCalled();
	void OnExitConditionTriggered();
	void eventOnDeactivate();
	void FinishActivation();
	void SetInitialState();
	void eventOnActivate();
	void GetLootPoints();
	bool HandlesGlance();
	void Cleanup();
	void ResetTimeTillOverlay();
	class FName GetBagCarrierWeaponStance();
	class FName GetBagCarrierMovementStance();
	class FName GetBagCarrierMovementStance_WithBag();
	class FName GetBagCarrierMovementStance_NoBag();
	class FName GetPickupOffFloorAnimName();
	class FName GetDropOffAnimName();
	EeLootPointInteractDirection ChooseDropoffDirection();
	bool HasDirectionalDropoffAnims();
	class UAnimSet* GetBagAnimSet();
	class FName GetDoorWaitIdleAnimName();
	class FName GetDoorWaitInAnimName();
	class UAnimSet* GetDoorWaitAnimSet();
	class FName GetExitAnimName(bool optionalBDeterministic);
	class FName GetEntryAnimName();
	class UAnimSet* GetEntryExitAnimSet();
	class FName GetLootingOutAnimName();
	class FName GetLootingIdleAnimName();
	class FName GetLootingInAnimName();
	class UAnimSet* GetLootingAnimSet();
	void PlayLootPointDropoffAnim();
	void PlayLootPointPickupAnim();
	void DropoffPointStateChange();
	void MainStateChange();
	void InitialStateChange();
	struct FLootingAnimInfo GetPickupPointAnimInfo();
	bool IsLongWayFromDropoff();
	float GetDistFromDropoff();
	void eventShutdownTimerHUD();
	void eventTryUpdateTimerHUD(int32_t IntRemainingTime);
	void eventInitTimerHUD();
};
// Class BmScript.RBMBehaviour_CityRunAway
// 0x0000 (0x03F0 - 0x03F0)
class URBMBehaviour_CityRunAway : public URBMBehaviour_CityRunAwayBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_CityRunAway");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMBehaviour_CityJogAway
// 0x0000 (0x03F0 - 0x03F0)
class URBMBehaviour_CityJogAway : public URBMBehaviour_CityRunAway
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_CityJogAway");
		}

		return uClassPointer;
	};


	void eventSpookedBy();
	bool UpdateThreatAndDestroyCheck(float DeltaTime);
	void PlayerBumped(bool bFriendly);
	void HandleNoise(class ARPawnPlayer* PlayerInstigator);
	bool OverrideGetupStances(class FName& outMovementStance, class FName& outWeaponStance);
	void PlayFleeReaction();
	void SetRunVariants(class ARBMAIAction_RiotRunBase* MoveAction);
	bool SetMovementSpeed();
	void OnActivate();
};
// Class BmScript.RBMBehaviour_CombatRobot
// 0x0004 (0x03FC - 0x0400)
class URBMBehaviour_CombatRobot : public URBMBehaviour_CombatAI
{
public:
	float                                              LastSideStepTime;                              // 0x03FC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_CombatRobot");
		}

		return uClassPointer;
	};


	void eventPlayStepInDirection(const struct FVector& MoveDir, const struct FVector& FrontDir, float MoveSize, float ForceSize, float MoveAmnt);
	bool ShouldUseEnvironment(float DeltaTime, bool bForceCheck);
	void ProcessTauntAnims(float DeltaTime);
	class FName GetTauntMoveStance();
	void GetPossibleMoves(class TArray<class UClass*>& outPossibleMoves);
	bool CanRepel();
};
// Class BmScript.RCombatMove_VillainRobotAttack
// 0x0000 (0x03C0 - 0x03C0)
class ARCombatMove_VillainRobotAttack : public ARCombatMove_VillainCloseAttack
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_VillainRobotAttack");
		}

		return uClassPointer;
	};


	void CanCounterStart();
};
// Class BmScript.RGangSpectatorPoint
// 0x0000 (0x0538 - 0x0538)
class ARGangSpectatorPoint : public ARGangSpectatorPointBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGangSpectatorPoint");
		}

		return uClassPointer;
	};


	void eventSetFinished(class ARBMPawnAI* P);
	void eventSetInUse(class ARBMPawnAI* UsagePawn);
	struct FVector eventGetPOILocation();
	class UClass* eventGetBehaviourClass();
	float eventGetSelectionScore();
};
// Class BmScript.RSeqEvent_GangEvent
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_GangEvent : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_GangEvent");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RRiotObject
// 0x0050 (0x0300 - 0x0350)
class ARRiotObject : public ARRiotObjectBase
{
public:
	class UParticleSystem*                             MolotovFlamePfx;                               // 0x0300 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             MolotovExplodePfx;                             // 0x0308 (0x0008) [0x0000000000000000]               
	class AEmitter*                                    FlareFlameMilitiaArch;                         // 0x0310 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             SpraycanSprayPfx;                              // 0x0318 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             GrindingPfx;                                   // 0x0320 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             WeldingPfx;                                    // 0x0328 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             HammerBeatingPfx;                              // 0x0330 (0x0008) [0x0000000000000000]               
	class TArray<class AEmitter*>                      FlareFlameArch;                                // 0x0338 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              SprayColourRand;                               // 0x0348 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPFX1AttachedToMesh : 1;                       // 0x034C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPFX2AttachedToMesh : 1;                       // 0x034C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bStopFXOnDrop : 1;                             // 0x034C (0x0004) [0x0000000000000000] [0x00000004] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RRiotObject");
		}

		return uClassPointer;
	};


	void HammerBeatingFx();
	void StopWelding();
	void StartWelding();
	void StopGrinding();
	void StartGrinding();
	void StopSprayCan();
	void StartSprayCan();
	void IgniteFlare(bool bForMilitia);
	void ExplodeMolotov();
	void IgniteMolotov();
	void SetPickup(class URAnimNotify_PickupProp* PickType);
	void SetFlare();
	void SetMolotov();
	void SetStone();
	void SetBrick();
	void SetSpraycan();
	void SetPipe();
	bool eventcanDestroy();
	void DropObject(class URAnimNotify_PickupProp* DropNotify);
	void StopAllFx();
};
// Class BmScript.RBMBehaviour_GangIdleOrGroupAnimationPoint
// 0x0018 (0x039C - 0x03B4)
class URBMBehaviour_GangIdleOrGroupAnimationPoint : public URBMBehaviour_GangMovementBase
{
public:
	int32_t                                            EventIndex;                                    // 0x039C (0x0004) [0x0000000000000000]               
	int32_t                                            NumEventsLeft;                                 // 0x03A0 (0x0004) [0x0000000000000000]               
	float                                              WaitingTimeOut;                                // 0x03A4 (0x0004) [0x0000000000000000]               
	float                                              DefaultWaitingTimeOut;                         // 0x03A8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bStartedPaired : 1;                            // 0x03AC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CustomWaitTime;                                // 0x03B0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_GangIdleOrGroupAnimationPoint");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void SpectatorCheer();
	void eventDettachFromCar();
	void AttachToCarSeat1();
	void eventTriggerOutputEvent();
	void CanSpeakInChatter();
	bool IsChattering();
	struct FRotator eventGetAnimationRefRot();
	struct FVector eventGetAnimationRefPos();
	bool StartAnimationInAnyDirection();
	void SetCustomAnyDirectionAnimSettings(const class FName& PrevState);
	struct FCustomAnimConfig GetAnimationForPaired(const class FName& AnimationName, int32_t Index);
	struct FCustomAnimConfig GetAnimation(const class FName& AnimationName);
	struct FCustomAnimConfig GetRandomAnimationFromArrayForPaired(const class TArray<class FName>& AnimationArray, int32_t Index);
	struct FCustomAnimConfig GetRandomAnimationFromArray(const class TArray<class FName>& AnimationArray);
	void OnActivate();
};
// Class BmScript.RBMBehaviour_GangSpectatorAnimationPoint
// 0x0004 (0x03B4 - 0x03B8)
class URBMBehaviour_GangSpectatorAnimationPoint : public URBMBehaviour_GangIdleOrGroupAnimationPoint
{
public:
	uint32_t                                           bHasFollowed : 1;                              // 0x03B4 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_GangSpectatorAnimationPoint");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Cheer();
	bool StartAnimationInAnyDirection();
	void SetCustomAnyDirectionAnimSettings(const class FName& PrevState);
	struct FVector GetWatchingPOILocation();
	bool SuggestPOI(class ARGangInteractPointBase* SuggestedPOI);
	bool POIStillValid();
	void OnActivate();
};
// Class BmScript.RBMBehaviour_GangFleeAnimationPoint
// 0x000C (0x03B4 - 0x03C0)
class URBMBehaviour_GangFleeAnimationPoint : public URBMBehaviour_GangIdleOrGroupAnimationPoint
{
public:
	uint32_t                                           bFleeCowering : 1;                             // 0x03B4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimeBetweenFleeTaunts;                         // 0x03B8 (0x0004) [0x0000000000000000]               
	float                                              SavedThreatDistance;                           // 0x03BC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_GangFleeAnimationPoint");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void SetRunVariants(class ARBMAIAction_RiotRunBase* MoveAction);
	bool FleePointStillValid();
};
// Class BmScript.RBMBehaviour_GangIdleOrGroupAnimationPointWeapon
// 0x0008 (0x03B4 - 0x03BC)
class URBMBehaviour_GangIdleOrGroupAnimationPointWeapon : public URBMBehaviour_GangIdleOrGroupAnimationPoint
{
public:
	class UAnimSet*                                    PickedWeaponAnimset;                           // 0x03B4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_GangIdleOrGroupAnimationPointWeapon");
		}

		return uClassPointer;
	};


	struct FCustomAnimConfig GetAnimationForPaired(const class FName& AnimationName, int32_t Index);
	struct FCustomAnimConfig GetAnimation(const class FName& AnimationName);
	struct FCustomAnimConfig GetRandomAnimationFromArrayForPaired(const class TArray<class FName>& AnimationArray, int32_t Index);
	struct FCustomAnimConfig GetRandomAnimationFromArray(const class TArray<class FName>& AnimationArray);
	class UAnimSet* GetWeaponAnimationSet();
	void SetInitialState();
	void SetRunVariants(class ARBMAIAction_RiotRunBase* MoveAction);
	class URWeaponConfig* CreateRunVariantWeaponConfig();
};
// Class BmScript.RBMBehaviour_GangPickUpObjectPoint
// 0x0024 (0x03B4 - 0x03D8)
class URBMBehaviour_GangPickUpObjectPoint : public URBMBehaviour_GangIdleOrGroupAnimationPoint
{
public:
	class ARGangInteractPointBase*                     ObjectEndPoint;                                // 0x03B4 (0x0008) [0x0000000000000000]               
	class ARGangInteractWindow*                        Window;                                        // 0x03BC (0x0008) [0x0000000000000000]               
	class ARGangInteractPointBreakableBase*            Breakable;                                     // 0x03C4 (0x0008) [0x0000000000000000]               
	class AActor*                                      SavedPickupActor;                              // 0x03CC (0x0008) [0x0000000000000000]               
	uint32_t                                           bWasInterrupted : 1;                           // 0x03D4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPickingUpObject : 1;                          // 0x03D4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bStartedPickingUpObject : 1;                   // 0x03D4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bHasObject : 1;                                // 0x03D4 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bThrowingObject : 1;                           // 0x03D4 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bHasThrownObject : 1;                          // 0x03D4 (0x0004) [0x0000000000000000] [0x00000020] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_GangPickUpObjectPoint");
		}

		return uClassPointer;
	};


	class URWeaponConfig* CreateRunVariantWeaponConfig();
	void eventSmashWindow();
	void eventCrackOrSmashWindow();
	void eventCrackWindow();
	void GetBreakVars(struct FVector& outHitLoc, struct FVector& outHitNorm, struct FVector& outHitSpeed, class AActor*& outThrownActor);
	void OnDeactivate();
	void OnBeginInterrupt();
	void eventThrowObject();
	void eventDropPickupObjectNoPhys();
	void eventDropPickupObject();
	void eventPickupObjectLeftHand();
	void eventPickupObject();
	void OnEndInterrupt();
	void SetRunVariants(class ARBMAIAction_RiotRunBase* MoveAction);
	void GenerateMoveToPoint();
	void OnActivate();
};
// Class BmScript.RGangInteractWindow
// 0x0000 (0x0568 - 0x0568)
class ARGangInteractWindow : public ARGangInteractWindowBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGangInteractWindow");
		}

		return uClassPointer;
	};


	void eventSetFinished(class ARBMPawnAI* P);
	void eventSetInUse(class ARBMPawnAI* UsagePawn);
	class UClass* eventGetBehaviourClass();
};
// Class BmScript.RBMBehaviour_GasJoker
// 0x002C (0x024C - 0x0278)
class URBMBehaviour_GasJoker : public URBMBehaviour
{
public:
	class ARPawnPlayer*                                Batman;                                        // 0x024C (0x0008) [0x0000000000000000]               
	class TArray<class FName>                          JokerOverlays;                                 // 0x0254 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class UAnimSet*>                      JokerAnimSets;                                 // 0x0264 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            PickedAnimSet;                                 // 0x0274 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_GasJoker");
		}

		return uClassPointer;
	};


	EEvadeVehicleType GetEvadeVehicleType(class AActor* V, float CarSpeed, bool bZap);
	void eventOnActivate();
};
// Class BmScript.RBMBehaviour_RiotIdle
// 0x0008 (0x0304 - 0x030C)
class URBMBehaviour_RiotIdle : public URBMBehaviour_GangMovementBaseBase
{
public:
	uint32_t                                           bRegisteredError : 1;                          // 0x0304 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ErrorTime;                                     // 0x0308 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_RiotIdle");
		}

		return uClassPointer;
	};


	bool eventRiotHandleSpookedBy(class AActor* Threat, bool optionalBAlertNeighours);
	EEvadeVehicleType GetEvadeVehicleType(class AActor* V, float CarSpeed, bool bZap);
	void PutIntoCorrectPose();
	bool CheckRiotVolume();
	void Tick(float DeltaTime);
	void OnDeactivate();
	void OnActivate();
};
// Class BmScript.RRiotZoneVolume
// 0x0000 (0x0540 - 0x0540)
class ARRiotZoneVolume : public AROverworldPopulationVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RRiotZoneVolume");
		}

		return uClassPointer;
	};


	void eventUnTouch(class AActor* Other);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SpawnDebugRunAwayThugAtLocation(const struct FVector& SpawnLocation);
	class TArray<class ARGangFleePressPointBase*> GetFleePressPoints();
	void SetThugStasis(bool bNewValue);
	void ForceRioterToSpook(class ARBMPawnAI* CurrPawn, class AActor* Attacker);
	void ThugInRiotDamagedByBatman(class AActor* Attacker);
	void SpawnLinkBehaviour(class ARPawn* TestPawn, class ARGangInteractPointBase* DestinationActor);
	void RioterFleeing(class ARBMPawnAI* FleePawn);
	void DeactivatePopulation(bool optionalBDueToStreamingOut);
	void ActivatePopulation(int32_t MaxPawnsAllowed);
};
// Class BmScript.RBMCombatPoint_FloorVent
// 0x0024 (0x03BC - 0x03E0)
class ARBMCombatPoint_FloorVent : public ARBMCombatPoint_EnvironmentAttackObject
{
public:
	class UStaticMeshComponent*                        NormalMesh;                                    // 0x03BC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        BrokenMesh;                                    // 0x03C4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        InRangeHighlightStaticMesh;                    // 0x03CC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AEmitter*                                    PfxEmitter;                                    // 0x03D4 (0x0008) [0x0000000000000000]               
	float                                              AnimYaw;                                       // 0x03DC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatPoint_FloorVent");
		}

		return uClassPointer;
	};


	bool IsValidLoc(class ARPawnPlayerCombat* TestPlayer, class ARPawnVillain* TestPawn);
	void SetControlBoxMaterial(bool bBoxActive);
	void OnToggle(class USeqAct_Toggle* Action);
	bool PlayDestroyAnim(const class FName& AnimName);
	class FName GetAnimName(class ARPawnVillain* TargetPawn, class ARPawnPlayerCombat* PlayerPawn);
	float GetAnimYaw();
	float GetMeshYawOffset();
	class AActor* SpawnSmallIceSphere(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void DeepFreeze();
	void OnFxEvent();
	void UsedByPawn(class ARPawnCombat* NewUser, class AActor* optionalNewTarget, bool optionalBUsedDuringTaunt);
	void DebugReset(class ARBMCombatManager* CM);
	void OnSwapMesh();
	void SetupHighlightMesh();
	void RegisterStasisCheckMesh();
	void PostBeginPlay();
};
// Class BmScript.RFreezeBlastIceSphere
// 0x0030 (0x02B0 - 0x02E0)
class ARFreezeBlastIceSphere : public AFogVolumeSphericalDensityInfo
{
public:
	class UFogVolumeSphericalDensityComponent*         MyDensityComponent;                            // 0x02B0 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   DefaultFogMaterial;                            // 0x02B8 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   FogMI;                                         // 0x02C0 (0x0008) [0x0000000000000000]               
	float                                              MaxIceRadius;                                  // 0x02C8 (0x0004) [0x0000000000000000]               
	float                                              MinIceRadius;                                  // 0x02CC (0x0004) [0x0000000000000000]               
	float                                              MaxIceDensity;                                 // 0x02D0 (0x0004) [0x0000000000000000]               
	float                                              IceFogDuration;                                // 0x02D4 (0x0004) [0x0000000000000001] (CPF_Const)   
	float                                              SpawnTime;                                     // 0x02D8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bActivateAutomatically : 1;                    // 0x02DC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDestroyOnDeactivate : 1;                      // 0x02DC (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RFreezeBlastIceSphere");
		}

		return uClassPointer;
	};


	void Tick(float DeltaTime);
	void Deactivate();
	void Activate();
	void PostBeginPlay();
};
// Class BmScript.RBMCombatPoint_GunDispenser
// 0x0048 (0x0304 - 0x034C)
class ARBMCombatPoint_GunDispenser : public ARBMCombatPoint_GunDispenserBase
{
public:
	uint32_t                                           bOpen : 1;                                     // 0x0304 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bGunInLocker : 1;                              // 0x0304 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              OpenTime;                                      // 0x0308 (0x0004) [0x0000000000000000]               
	int32_t                                            AnimYaw;                                       // 0x030C (0x0004) [0x0000000000000000]               
	class UAnimNodeSequence*                           AnimNode;                                      // 0x0310 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    ThugAnimSet;                                   // 0x0318 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      VoiceSynthesiserHighlightGrateMesh;            // 0x0320 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        ThugAnim_In;                                   // 0x0328 (0x0008) [0x0000000000000000]               
	class FName                                        ThugAnim_Loop;                                 // 0x0330 (0x0008) [0x0000000000000000]               
	class FName                                        ThugAnim_Open;                                 // 0x0338 (0x0008) [0x0000000000000000]               
	class FName                                        ThugAnim_GetGun;                               // 0x0340 (0x0008) [0x0000000000000000]               
	float                                              MinTimeSinceUse;                               // 0x0348 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatPoint_GunDispenser");
		}

		return uClassPointer;
	};


	void AlarmOff();
	void AlarmOn();
	void HideGun();
	void SwapGun();
	void RemoveDoor(class ARPawnVillain* DoorRemover);
	void UsedByPawn(class ARPawnCombat* NewUser, class AActor* optionalNewTarget, bool optionalBUsedDuringTaunt);
	bool CanBeUsedByPawn(class ARPawnCombat* NewUser, class AActor* TargetActor, bool bTaunting);
	struct FVector GetMoveToPoint();
	int32_t GetAnimRefYaw();
	struct FVector GetAnimRefPoint();
	void PostBeginPlay();
};
// Class BmScript.RCombatMove_VillainGunLocker
// 0x0048 (0x0308 - 0x0350)
class ARCombatMove_VillainGunLocker : public ARCombatMove
{
public:
	class ARPawnVillain*                               User;                                          // 0x0308 (0x0008) [0x0000000000000000]               
	class ARBMAIController*                            HostController;                                // 0x0310 (0x0008) [0x0000000000000000]               
	class ARBMCombatPoint_GunDispenser*                GunLocker;                                     // 0x0318 (0x0008) [0x0000000000000000]               
	class ARBMWeapon*                                  SpawnedWeapon;                                 // 0x0320 (0x0008) [0x0000000000000000]               
	class URNavigationHandle*                          NavHandle;                                     // 0x0328 (0x0008) [0x0000000000000000]               
	class UClass*                                      WeaponClass;                                   // 0x0330 (0x0008) [0x0000000000000000]               
	float                                              OpenTimer;                                     // 0x0338 (0x0004) [0x0000000000000000]               
	struct FVector                                     TargetPos;                                     // 0x033C (0x000C) [0x0000000000000000]               
	uint32_t                                           bOpenedLocker : 1;                             // 0x0348 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSwitchWeapon : 1;                             // 0x0348 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBarked : 1;                                   // 0x0348 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bUsedDuringTaunt : 1;                          // 0x0348 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FTransitionId                               OpenDoorID;                                    // 0x034C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_VillainGunLocker");
		}

		return uClassPointer;
	};


	void Explode();
	void ExitMove();
	bool GetOverrideTakedownInfo(ETakedownType& outTakedownType, struct FVector& outTakedownLocation, struct FRotator& outTakedownRotation);
	void GetCombatThoughts(class TArray<struct FThought>& outThoughtList);
	int32_t GetBatarangPriority();
	void SwapGun();
	EWeaponSwitchCallbackResult WeaponSwitchCallback(class AInventory* NewWeapon, class AInventory* OldWeapon);
	void GotoStartState();
	void ReachedGunLocker(class URNavigationHandle* NavH);
	void NoPathToGunLocker(class URNavigationHandle* NavH);
	void ReleaseNavHandle();
	float GetCameraLookAtPriority();
	void Initialise();
};
// Class BmScript.RBMCombatPoint_GunCrate
// 0x0048 (0x034C - 0x0394)
class ARBMCombatPoint_GunCrate : public ARBMCombatPoint_GunDispenser
{
public:
	float                                              Gun2XOffset;                                   // 0x034C (0x0004) [0x0000000000000000]               
	class USkeletalMeshComponent*                      GunLockerMesh;                                 // 0x0350 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      GunMesh;                                       // 0x0358 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bUseSpecialLightChannels : 1;                  // 0x0360 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bLightOn : 1;                                  // 0x0360 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bLightOffAtNextOpportunity : 1;                // 0x0360 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     BoneLocation;                                  // 0x0364 (0x000C) [0x0000000000000000]               
	class UPointLightComponent*                        Light1;                                        // 0x0370 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ALight*                                      LightArchetype;                                // 0x0378 (0x0008) [0x0000000000000000]               
	class ARPawnVillain*                               UserForJammedExplosion;                        // 0x0380 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ExplodeEvent;                                  // 0x0388 (0x0008) [0x0000000000000000]               
	float                                              CurrLightTimer;                                // 0x0390 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatPoint_GunCrate");
		}

		return uClassPointer;
	};


	class UMeshComponent* eventGetDisruptorTargetMesh();
	void eventPreStreamOut();
	void eventDestroyed();
	void UsedByPawn(class ARPawnCombat* NewUser, class AActor* optionalNewTarget, bool optionalBUsedDuringTaunt);
	void UpdateLight(float DeltaTime);
	void AlarmOff();
	void AlarmOn();
	void HideGun();
	void SwapGun();
	bool CanBeUsedByPawn(class ARPawnCombat* NewUser, class AActor* NewTarget, bool bTaunting);
	void JamExplosionTimer();
	void SpawnJammedExplosion();
	void GrabGunSpawnJammedExplosion(class ARPawnVillain* GunGrabber);
	void RemoveDoor(class ARPawnVillain* DoorRemover);
	void Tick(float DeltaTime);
	struct FVector GetMoveToPoint();
	struct FVector GetAnimRefPoint();
	void PostBeginPlay();
};
// Class BmScript.RBMCombatPoint_LoFuseBox
// 0x0028 (0x03BC - 0x03E4)
class ARBMCombatPoint_LoFuseBox : public ARBMCombatPoint_EnvironmentAttackObject
{
public:
	class UStaticMeshComponent*                        NormalMesh;                                    // 0x03BC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      BrokenSkeletalMesh;                            // 0x03C4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        SocketName;                                    // 0x03CC (0x0008) [0x0000000000000000]               
	class UStaticMeshComponent*                        InRangeHighlightStaticMesh;                    // 0x03D4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AEmitter*                                    PfxEmitter;                                    // 0x03DC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatPoint_LoFuseBox");
		}

		return uClassPointer;
	};


	bool IsValidLoc(class ARPawnPlayerCombat* TestPlayer, class ARPawnVillain* TestPawn);
	bool PlayDestroyAnim(const class FName& AnimName);
	class FName GetAnimName(class ARPawnVillain* TargetPawn, class ARPawnPlayerCombat* PlayerPawn);
	float GetMeshYawOffset();
	void StopElectric();
	void OnFxEvent();
	void UsedByPawn(class ARPawnCombat* NewUser, class AActor* optionalNewTarget, bool optionalBUsedDuringTaunt);
	void DebugReset(class ARBMCombatManager* CM);
	void OnSwapMesh();
	void SetupHighlightMesh();
	void RegisterStasisCheckMesh();
};
// Class BmScript.RBMCombatPoint_LoPipes
// 0x0024 (0x03BC - 0x03E0)
class ARBMCombatPoint_LoPipes : public ARBMCombatPoint_EnvironmentAttackObject
{
public:
	class USkeletalMeshComponent*                      PipesMesh;                                     // 0x03BC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      InRangeHighlightSkeletalMesh;                  // 0x03C4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AEmitter*                                    PfxEmitter;                                    // 0x03CC (0x0008) [0x0000000000000000]               
	class FName                                        SocketName;                                    // 0x03D4 (0x0008) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x03DC (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatPoint_LoPipes");
		}

		return uClassPointer;
	};


	bool IsValidLoc(class ARPawnPlayerCombat* TestPlayer, class ARPawnVillain* TestPawn);
	void OnToggle(class USeqAct_Toggle* Action);
	bool PlayDestroyAnim(const class FName& AnimName);
	class FName GetAnimName(class ARPawnVillain* TargetPawn, class ARPawnPlayerCombat* PlayerPawn);
	void StopElectric();
	void OnFxEvent();
	void UsedByPawn(class ARPawnCombat* NewUser, class AActor* optionalNewTarget, bool optionalBUsedDuringTaunt);
	void DebugReset(class ARBMCombatManager* CM);
	void OnSwapMesh();
	void SetMyPylon();
	void SetupHighlightMesh();
	void RegisterStasisCheckMesh();
};
// Class BmScript.RBMCombatPoint_LoPipesControlBox
// 0x0014 (0x02C0 - 0x02D4)
class ARBMCombatPoint_LoPipesControlBox : public ARBMCombatPoint
{
public:
	int32_t                                            PipesId;                                       // 0x02C0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UStaticMeshComponent*                        ControlBoxMesh;                                // 0x02C4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        DamagedControlBoxMesh;                         // 0x02CC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatPoint_LoPipesControlBox");
		}

		return uClassPointer;
	};


	void DebugReset(class ARBMCombatManager* CM);
	void OnFxEvent();
	void SetControlBoxMaterial(bool bBoxActive);
	void OnToggle(class USeqAct_Toggle* Action);
	void PostBeginPlay();
};
// Class BmScript.RBMCombatPoint_LoSpotLight
// 0x0038 (0x03BC - 0x03F4)
class ARBMCombatPoint_LoSpotLight : public ARBMCombatPoint_EnvironmentAttackObject
{
public:
	class UStaticMeshComponent*                        SpotLightMesh;                                 // 0x03BC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        SpotLightMeshBroken;                           // 0x03C4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        InRangeHighlightMesh;                          // 0x03CC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AEmitter*                                    VFxEmitter;                                    // 0x03D4 (0x0008) [0x0000000000000000]               
	class UMaterialInstance*                           LightOnMaterial;                               // 0x03DC (0x0008) [0x0000000000000000]               
	class UMaterialInstance*                           LightOffMaterial;                              // 0x03E4 (0x0008) [0x0000000000000000]               
	class UArrowComponent*                             FacingDirArrow;                                // 0x03EC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatPoint_LoSpotLight");
		}

		return uClassPointer;
	};


	float GetAnimYaw();
	bool PlayDestroyAnim(const class FName& AnimName);
	class FName GetAnimName(class ARPawnVillain* TargetPawn, class ARPawnPlayerCombat* PlayerPawn);
	void OnDroppedObject(class ARPawnPlayerCombat* PlayerPawn);
	void UsedByPawn(class ARPawnCombat* NewUser, class AActor* optionalNewTarget, bool optionalBUsedDuringTaunt);
	void OnToggle(class USeqAct_Toggle* Action);
	void DebugReset(class ARBMCombatManager* CM);
	void OnSwapMesh();
	void SetMyPylon();
	void SetupHighlightMesh();
	void RegisterStasisCheckMesh();
};
// Class BmScript.RBMCombatThrownObject_DroneRemote
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_DroneRemote : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_DroneRemote");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatThrownObject_PredatorRifle
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_PredatorRifle : public ARBMCombatThrownObject_Predator
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_PredatorRifle");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponRiflePredFull
// 0x0008 (0x078C - 0x0794)
class ARBMWeaponRiflePredFull : public ARBMWeaponRiflePredThug
{
public:
	class ULensFlareComponent*                         PredLensFlareFX;                               // 0x078C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponRiflePredFull");
		}

		return uClassPointer;
	};


	void DetachWeapon();
	void AttachWeapon();
	class URWeaponConfig* GetSentryGunWeaponConfig();
	class URWeaponConfig* CreateWeaponConfig(class UObject* NewOwner);
	void SetHidden(bool bNewHidden);
	void ShowWeapon();
	void HideWeapon();
};
// Class BmScript.RBmStealthTakedownStage_ChainTakedown_LRRailingTakedown
// 0x0000 (0x0734 - 0x0734)
class ARBmStealthTakedownStage_ChainTakedown_LRRailingTakedown : public ARStealthTakedownStage_ChainTakedown_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBmStealthTakedownStage_ChainTakedown_LRRailingTakedown");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBmStealthTakedownStage_ChainTakedown_LRLedgeTakedown
// 0x0000 (0x0734 - 0x0734)
class ARBmStealthTakedownStage_ChainTakedown_LRLedgeTakedown : public ARBmStealthTakedownStage_ChainTakedown_LRRailingTakedown
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBmStealthTakedownStage_ChainTakedown_LRLedgeTakedown");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBmStealthTakedownStage_LRLedgeTakedown
// 0x0000 (0x06BC - 0x06BC)
class ARBmStealthTakedownStage_LRLedgeTakedown : public ARStealthTakeDownStage_LedgeAttack
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBmStealthTakedownStage_LRLedgeTakedown");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBmStealthTakedownStage_LRLedgeTakedownSuccess
// 0x0000 (0x06BC - 0x06BC)
class ARBmStealthTakedownStage_LRLedgeTakedownSuccess : public ARStealthTakeDownStage_GrabFromCrouch2
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBmStealthTakedownStage_LRLedgeTakedownSuccess");
		}

		return uClassPointer;
	};


	void GotoStageEx(EStealthTakeDownStages NextStageClass, bool optionalBClientRequest, const struct FEnvironmentSpecialMoveLocator& optionalEscapeLoc, bool optionalBEscapeTakedown, bool optionalBNextStageIsFearTakedown, bool optionalBNextStageIsKnockoutSmash);
};
// Class BmScript.RBmStealthTakedownStage_LRRailingTakedown
// 0x0040 (0x06A4 - 0x06E4)
class ARBmStealthTakedownStage_LRRailingTakedown : public ARStealthTakedownStageQuickBase
{
public:
	uint32_t                                           RopesReleased : 1;                             // 0x06A4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           AttachRope : 1;                                // 0x06A4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           DisableCutRope : 1;                            // 0x06A4 (0x0004) [0x0000000000000000] [0x00000004] 
	class URSimpleRopeComponent*                       MyRope;                                        // 0x06A8 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              RopeLength;                                    // 0x06B0 (0x0004) [0x0000000000000000]               
	struct FVector                                     RopeAttachPoint;                               // 0x06B4 (0x000C) [0x0000000000000000]               
	struct FVector                                     RopeRenderAttachPoint;                         // 0x06C0 (0x000C) [0x0000000000000000]               
	struct FVector                                     RopeRenderStartOffset;                         // 0x06CC (0x000C) [0x0000000000000000]               
	struct FVector                                     RopePhysStartOffset;                           // 0x06D8 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBmStealthTakedownStage_LRRailingTakedown");
		}

		return uClassPointer;
	};


	class FName GetFinishState();
	void Begin();
	void Cancel(bool optionalSetState, bool optionalBAbandonVictims, bool optionalBResetPlayerPose);
	void UnEquipBatclawForTakedown();
	void EquipBatclawForTakedown();
	void ReleaseClaws();
	void AttachBatclaw();
	void FindRopeAttachPoints();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RBmStealthTakeDownStage_VentAttack
// 0x0000 (0x0698 - 0x0698)
class ARBmStealthTakeDownStage_VentAttack : public ARStealthTakedownStage_VentAttack
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBmStealthTakeDownStage_VentAttack");
		}

		return uClassPointer;
	};


	void OverrideChosenAnim(int32_t& outAnim);
};
// Class BmScript.RPawnVillainGunPredAsset
// 0x0000 (0x1A88 - 0x1A88)
class ARPawnVillainGunPredAsset : public ARPawnVillainGunPredBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainGunPredAsset");
		}

		return uClassPointer;
	};


	void InitialisePlayerSpecificAnimsets(class ARPawnPlayerCombat* NewPlayer, int32_t PlayerIndex);
	void AddPawnProps();
};
// Class BmScript.RPawnVillainGunPredFull
// 0x0010 (0x1A88 - 0x1A98)
class ARPawnVillainGunPredFull : public ARPawnVillainGunPredAsset
{
public:
	class FName                                        ArmbandSocket;                                 // 0x1A88 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   ArmbandMIC;                                    // 0x1A90 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainGunPredFull");
		}

		return uClassPointer;
	};


	class URWeaponConfig* CreateFullPanicWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2, class UAnimSet* AnimSet3, class UAnimSet* AnimSet4, class UAnimSet* TurnAnimSet2, class UAnimSet* TerrorTurnAnims, class UAnimSet* JammerPackAnims, class UAnimSet* ManDownAnims, class UAnimSet* MedicAnims, class UAnimSet* MineLayerAnims, class UAnimSet* ThermalAnims, class UAnimSet* GuardAnims, class UAnimSet* DroneAnims);
	static class URAimingConfig* GetRailPeekAimingConfig();
	class UAnimSet* GetDisruptorReactionAnimset();
	class UAnimSet* GetVoiceSynthAnimSet();
	class UAnimSet* GetTerrorGuardAnimSet();
	class UAnimSet* GetVaultExplosivesAnimSet();
	class UAnimSet* GetCorePredAnimSet();
	class UAnimSet* GetManDownAnimSet();
	class UAnimSet* GetGrateLookAnimSet();
	class UAnimSet* GetLedgeLookAnimSet();
	class UAnimSet* GetBuddyBumpAnimset();
	class UAnimSet* GetBuddyJoinAnimset();
	class UAnimSet* GetSideRoomSearchAnimSet();
	class UAnimSet* GetPairedCornerAnimSet();
	class UAnimSet* GetSoloCornerAnimSet();
	void MineLayerSpawnedInPredVolume();
	bool DoGrenadeVentThrow(const struct FVector& ThrowVel, const struct FRotator& SpawnRot, const struct FVector& TargetLoc, class ARProjectile_GrenadeBase*& optionalOutNadeProj);
	void eventSetArmBandMineSynced();
	void eventSetArmBandNormal();
	void SurrenderGun();
	class ARBMWeapon* eventCreateWeapon();
	void eventOnFootstepNotify(EFoot Foot, EContactType Contact, EFootstepSurfaceFinder SurfaceFinder, const struct FVector& FootLocation, float BlendWeight);
	class ARVantageMineBase* SpawnVantageMine();
	class UClass* GetIncendiaryGrenadeClass();
	class UClass* GetSentryGunSpawnClass();
	class UClass* GetSentryGunPlacementBehaviourClass();
	bool CanPlaceSentryGun();
	class UAnimSet* GetDetectiveModeDetectorAnimSet();
	class UAnimSet* GetMedicAnimSet();
};
// Class BmScript.RProjectile_Grenade
// 0x0024 (0x03E0 - 0x0404)
class ARProjectile_Grenade : public ARProjectile_GrenadeBase
{
public:
	class UAkEvent*                                    ExplodeEvent;                                  // 0x03E0 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    BounceSound;                                   // 0x03E8 (0x0008) [0x0000000000000000]               
	class UAkParameterName*                            BounceSoundParam;                              // 0x03F0 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             ExplosionParticleSystem;                       // 0x03F8 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSetExplodeTimer : 1;                          // 0x0400 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RProjectile_Grenade");
		}

		return uClassPointer;
	};


	bool GetBounceLandLoc(const struct FVector& StartPos, const struct FVector& BounceVel, struct FVector& outResult);
	bool DamagePlayersInRange();
	void DoBlast();
	void eventHitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp);
	void eventTick(float DeltaTime);
	void PostBeginPlay();
};
// Class BmScript.RChallengeModeStartPoint
// 0x002C (0x05E8 - 0x0614)
class ARChallengeModeStartPoint : public ARChallengeModeStartPointBase
{
public:
	uint32_t                                           bCompletionFailed : 1;                         // 0x05E8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAbortChallenge : 1;                           // 0x05E8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bRestartChallenge : 1;                         // 0x05E8 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           DoFadeOnSuccess : 1;                           // 0x05E8 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           DoFadeOnFail : 1;                              // 0x05E8 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           DoFadeOnAbort : 1;                             // 0x05E8 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           DoFadeOnRestart : 1;                           // 0x05E8 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	class FString                                      sCompletionDebriefMessage;                     // 0x05EC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            AfterFadeEventToTrigger;                       // 0x05FC (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              TimeSpentInWaitState;                          // 0x0600 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FScriptDelegate                             __CompleteRestartOrAbort__Delegate;            // 0x0604 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RChallengeModeStartPoint");
		}

		return uClassPointer;
	};


	void Music_RemoveCustom();
	void Music_ChallengeFail();
	void Music_ChallengeSuccess();
	void Music_ResetForChallenge();
	bool AllowLongRangeInteraction(class ARPlayerController* PC);
	void PostBeginPlay();
	void UpdateChallengeInRGameInfo();
	void OnToggle(class USeqAct_Toggle* Action);
	void OnBackscreen();
	void OnChallengeCompletion(bool bFailed, const class FString& sCustomMessage);
	void TimerChallengeCompletionDelay();
	void TimerEndingChallenge();
	void FadeBackIn();
	void AbortChallenge(int32_t nTriggerEvent, bool bPlayAbortedDialog);
	EAkDialogueCallbackResult StopSpeechCallback(int32_t speechId, bool interrupted);
	void FlushLoading();
	void AfterFinishedDialogue();
	void TimerAfterAbortFadeOut();
	void TimerAfterAbortFadeOutAfterSwitchToGameMaps();
	void RestartChallenge();
	void TimerAfterRestartFadeOut();
	void TimerAfterRestartFadeOutAfterRespawn();
	void RespawnPlayer();
	void InitiateScreenMode(EChallengeScreenModes eMode, bool bAccepted, bool bInGameStart);
	void TimerAfterStartFadeOut();
	void MovePlayerHere();
	void eventTriggerEvent(int32_t OutputIndex);
	void eventClearChallengeMiniScreen();
	void eventSetChallengeMiniScreen();
	void TriggerChallengeAwardPointNotification();
	void eventClearChallengeScreen();
	void eventSetChallengeScreen(EChallengeScreenModes selected_mode);
	bool OverridePreviousLines();
	EInteractableItemFaceButton GetInteractButton(class ARPlayerController* PC);
	class FString GetUpperPrompt();
	float OverridesRun(class ARPlayerController* PC);
	bool CanReachItem(class APawn* CheckingPawn);
	struct FVector GetLocationOffset();
	bool CanUseInCinematicMode();
	bool MustBeCrouched(class ARPlayerController* PC);
	bool IsButtonPrompt();
	float GetPriority();
	float GetFOVDegrees(class ARPlayerController* PC);
	float GetHeightRange();
	float GetRange();
	void Interact(class ARPlayerController* PC);
	bool IsActive(class ARPlayerController* PC);
	class FString GetPrompt(class APlayerController* PC);
	void CompleteRestartOrAbort();
};
// Class BmScript.RSeqEvent_ChallengeMode
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_ChallengeMode : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_ChallengeMode");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RCharacter_MultiStage
// 0x0008 (0x0180 - 0x0188)
class URCharacter_MultiStage : public URCharacter_Thug
{
public:
	class UAkSwitchName*                               TypeSwitchName;                                // 0x0180 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCharacter_MultiStage");
		}

		return uClassPointer;
	};

};
// Class BmScript.RCharacter_MultiStageMilitia
// 0x0000 (0x0188 - 0x0188)
class URCharacter_MultiStageMilitia : public URCharacter_MultiStage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCharacter_MultiStageMilitia");
		}

		return uClassPointer;
	};

};
// Class BmScript.RCharacter_Robot
// 0x0008 (0x0180 - 0x0188)
class URCharacter_Robot : public URCharacter_Thug
{
public:
	class FName                                        CanOnlyBeHitBy;                                // 0x0180 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCharacter_Robot");
		}

		return uClassPointer;
	};


	static class UAkEvent* GetStrikeImpactCue_BodyKick();
	static class UAkEvent* GetStrikeImpactCue_BodyPunchQuick();
	static class UAkEvent* GetStrikeImpactCue_BodyPunch();
	static class UAkEvent* GetStrikeImpactCue_HeadKick();
	static class UAkEvent* GetStrikeImpactCue_HeadPunchQuick();
	static class UAkEvent* GetStrikeImpactCue_HeadPunch();
	static class UAkEvent* GetStrikeImpactCue_CounterBlock();
	static class UAkEvent* GetStrikeImpactCue_FinishingBlow();
};
// Class BmScript.RCinematicBatman
// 0x0000 (0x0420 - 0x0420)
class ARCinematicBatman : public ARCinematicBatmanBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCinematicBatman");
		}

		return uClassPointer;
	};

};
// Class BmScript.RCombatMove_MinigunThugClash
// 0x0020 (0x0394 - 0x03B4)
class ARCombatMove_MinigunThugClash : public ARCombatMove_VillainClash
{
public:
	class ARPawnVillainGunPredMiniGunBase*             MinigunTg;                                     // 0x0394 (0x0008) [0x0000000000000000]               
	class URBMBehaviour_CombatMoveControlled*          MinigunTgBehaviour;                            // 0x039C (0x0008) [0x0000000000000000]               
	class TArray<float>                                CamStartTime;                                  // 0x03A4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_MinigunThugClash");
		}

		return uClassPointer;
	};


	void PlayCounter();
	bool DetectRun();
	void UpdateFOV(float DeltaTime);
	void ExitMinigunTgBehaviour();
	void ExitMoveForPawn(class ARPawnCombat* ExitingPawn);
	class UAnimSet* GetCameraAnimset();
	void IncrementClash();
	int32_t GetCurrClash();
	void Initialise();
	void FinalHit();
	void IntoClashHit();
	void Hit();
	void HitLight();
};
// Class BmScript.RCombatMove_MultiStageChargeAttack
// 0x0003 (0x0321 - 0x0324)
class ARCombatMove_MultiStageChargeAttack : public ARCombatMove_VillainAttack
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_MultiStageChargeAttack");
		}

		return uClassPointer;
	};

};
// Class BmScript.RCombatMove_MultiStageRepel
// 0x0024 (0x0308 - 0x032C)
class ARCombatMove_MultiStageRepel : public ARCombatMove
{
public:
	class ARPawnVillainMultiStage*                     MWLt;                                          // 0x0308 (0x0008) [0x0000000000000000]               
	class ARPawnPlayerCombat*                          Target;                                        // 0x0310 (0x0008) [0x0000000000000000]               
	struct FVector                                     KnockBackDir;                                  // 0x0318 (0x000C) [0x0000000000000000]               
	struct FTransitionId                               AnimId;                                        // 0x0324 (0x0004) [0x0000000000000000]               
	float                                              RepelRange;                                    // 0x0328 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_MultiStageRepel");
		}

		return uClassPointer;
	};


	void ExitMove();
	void Initialise();
	void Zap();
};
// Class BmScript.RPawnVillainMultiStage
// 0x00C8 (0x1A90 - 0x1B58)
class ARPawnVillainMultiStage : public ARPawnVillainMultiStageBase
{
public:
	class UMaterialInstanceConstant*                   ArmourMic;                                     // 0x1A90 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    ShieldAnimset;                                 // 0x1A98 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    ArmourAnimset;                                 // 0x1AA0 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    BladeAnimset;                                  // 0x1AA8 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    BlockSound;                                    // 0x1AB0 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    BladeTrail;                                    // 0x1AB8 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URInteractionComponent*                      BatarangOverride;                              // 0x1AC0 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ArmourParam;                                   // 0x1AC8 (0x0004) [0x0000000000000000]               
	float                                              TargetArmourParam;                             // 0x1ACC (0x0004) [0x0000000000000000]               
	class TArray<class FName>                          ShieldStepList;                                // 0x1AD0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        ShieldForwardStepName;                         // 0x1AE0 (0x0008) [0x0000000000000000]               
	class TArray<class FName>                          ArmourStepList;                                // 0x1AE8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        ArmourForwardStepName;                         // 0x1AF8 (0x0008) [0x0000000000000000]               
	class TArray<class FName>                          BladeStepList;                                 // 0x1B00 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        BladeForwardStepName;                          // 0x1B10 (0x0008) [0x0000000000000000]               
	class FName                                        ThrowInAnimName;                               // 0x1B18 (0x0008) [0x0000000000000000]               
	int32_t                                            TakedownDamageAmount;                          // 0x1B20 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCanBeBataranged : 1;                          // 0x1B24 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSetHealthMaterial : 1;                        // 0x1B24 (0x0004) [0x0000000000000000] [0x00000002] 
	class TArray<int32_t>                              ShieldMaterialIds;                             // 0x1B28 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              HandMaterialIds;                               // 0x1B38 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              BladeMaterialIds;                              // 0x1B48 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainMultiStage");
		}

		return uClassPointer;
	};


	void SetMultiWeaponXrays();
	void SetUpXrayMaterials(bool bPutInForeground);
	void PlaySound_ImpactAIWin(class AActor* playOn, bool bIsStrike, bool bFinishingBlow, bool bIsHeadImpact, bool bIsPunch, bool bIsStrong, bool bIsBlocked, bool optionalBCanEmote, bool optionalBIsQuick, bool optionalBPlayerAttacked, bool optionalBForceEmote);
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	bool eventIsCharging();
	class UAnimSet* GetFallingTakedownAttackerAnimset(class ARPawnPlayer* Attacker);
	class UAnimSet* GetFallingTakedownAnimset(class ARPawnPlayer* Attacker);
	class URWeaponConfig* CreateRagdollWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2, class UAnimSet* optionalAnimSet3);
	class URWeaponConfig* CreateMultiStageWeaponConfig(class UObject* NewOwner);
	class URWeaponConfig* CreateWeaponConfigUnarmed(class UObject* NewOwner);
	class URAimingConfig* GetCombatAimingConfig();
	void InitialisePlayerSpecificAnimsets(class ARPawnPlayerCombat* NewPlayer, int32_t PlayerIndex);
	bool SpawnOverrideDualTakedown(class ARPawnPlayerCombat* PlayerPawn);
	class UClass* GetBatClawHitReactionClass();
	class UClass* GetRECHitReactionClass();
	bool RagdollOnREC();
	bool CanBlockDuringHitReaction(const struct FDamageInfo& HitReactionDmgInfo);
	class FName GetBlockInAnimName();
	class FName GetBlockIdleAnimName();
	class FName GetAerialAttackAnimName(bool bFinisher, class ARPawnPlayerCombat* Attacker);
	class FName GetAerialEvadeInToTargetAnimName(class ARPawnPlayerCombat* Attacker);
	class FName GetAerialJumpOnTargetAnimName();
	class UAnimSet* GetStateHitReactionAnimset(EThugState NewThugState);
	class FName GetRECHitReactionAnimName();
	class FName GetBeatdownHitReactionName(const class FName& DefaultName, class UClass* StrikeDmgType);
	void SetBatarangable(bool bSetOn);
	bool GetOverrideTakedownInfo(class ARPawnPlayerCombat* Attacker, ETakedownType& outTakedownType, struct FVector& outTakedownLocation, struct FRotator& outTakedownRotation, int32_t& optionalOutDamageAmount);
	bool WillTakedownKill(class ARPawnPlayerCombat* Attacker);
	bool ShouldComboTakedownKill(const struct FDamageInfo& DmgInfo);
	struct FVector GetDeadThugPickupPoint(class ARPawnVillain* DeadThug);
	class ARPawnCombat* FindThugToThrow();
	bool CanAerialRedirect();
	class UAnimSet* GetBlockAnimset(EThugState BlockState);
	class UAnimSet* GetUnarmedHitReactionAnimset();
	class FName GetForwardStepName();
	class UAnimSet* GetCombatMovementAnimset();
	class TArray<class FName> GetStepList(bool optionalBLongStep);
	bool IsMilitia();
	void eventPostInitCharacter();
	void RepelAttack(class ARPawnCombat* Attacker);
	void GetMultiAttackAnimSets(class ARPawnCombat* PlayerPawn, class UAnimSet*& outVillainAnimSet, class UAnimSet*& outPlayerAnimset);
	void GetMultiAttackAnimNames(class ARPawnPlayerCombat* Player, class FName& outIntroName, class FName& outAttackName, class FName& outFailName, class FName& outCounterName);
	void EFistHitTarget(const class FName& DamageBone);
	void PlayHitReaction(const struct FDamageInfo& DmgInfo);
	bool CanRepelDuringHitReaction(const struct FDamageInfo& NewDmgInfo);
	bool CanRepelAttack(class ARPawnCombat* Attacker, class UClass* DamageType);
	bool CanRepel();
	class FName GetStunnedWeaponStance(const struct FDamageInfo& DmgInfo);
	ETargetStrikeResponse TargettedBy(class ARPawnCombat* NewAttacker, class UClass* dmgType, bool optionalBFar);
	void GetPossibleMoves(EThugState CurrThugState, class TArray<class UClass*>& outPossibleMoves);
	EHudWeaponType GetHudWeaponType();
	class UClass* GetThrowThugAttackClass();
	void SetArmour(bool bOn);
	void ResetSpeed();
	void ResetInvincibility();
	class UClass* GetDodgeClass();
	bool CanTakeSlideAttack();
	float GetFreezeBlastPriority();
	float GetBatClawPriority();
	float eventGetTargetPriority(class ARPawnCombat* Attacker, class UClass* dmgType);
	bool CanBlockAttack(class ARPawnCombat* Attacker, class UClass* DamageType);
	void ModifyDamageAmount(class UClass* dmgType, float& outDmgAmount);
	void WeaponChanged(class ARBMWeapon* NewWeapon);
	void Tick(float DeltaTime);
	void SetCombatMirrored();
	void TempDisableEFist();
	void StopBladeTrailR();
	void StopBladeTrailL();
	void StartBladeTrailR();
	void StartBladeTrailL();
	void StopEFistFx();
	void StartEFistFx();
};
// Class BmScript.RCombatMove_MultiStageShieldAttack
// 0x0000 (0x0374 - 0x0374)
class ARCombatMove_MultiStageShieldAttack : public ARCombatMove_VillainShieldAttack
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_MultiStageShieldAttack");
		}

		return uClassPointer;
	};


	void DamageCollisionBetween(class ARPawnCombat* Pawn1, class ARPawnCombat* Pawn2, const struct FVector& DamageDir);
};
// Class BmScript.RCombatMove_VillainStunStickAttack
// 0x0037 (0x0321 - 0x0358)
class ARCombatMove_VillainStunStickAttack : public ARCombatMove_VillainAttack
{
public:
	float                                              MoveTimeout;                                   // 0x0324 (0x0004) [0x0000000000000000]               
	class TArray<class ARPawnCombat*>                  HitTargets;                                    // 0x0328 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bStopMovement : 1;                             // 0x0338 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTrackTarget : 1;                              // 0x0338 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCollisionDeactivated : 1;                     // 0x0338 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bBotRedirected : 1;                            // 0x0338 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     FirstTransitionLocation;                       // 0x033C (0x000C) [0x0000000000000000]               
	float                                              FirstTransitionYaw;                            // 0x0348 (0x0004) [0x0000000000000000]               
	int32_t                                            ForceHitFrames;                                // 0x034C (0x0004) [0x0000000000000000]               
	struct FTransitionId                               StrikeID;                                      // 0x0350 (0x0004) [0x0000000000000000]               
	float                                              WaitTimer;                                     // 0x0354 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_VillainStunStickAttack");
		}

		return uClassPointer;
	};


	void ExitMove();
	void EarlyExit();
	bool CanRepel();
	bool IsAttacking();
	void DamageCollisionBetween(class ARPawnCombat* Pawn1, class ARPawnCombat* Pawn2, const struct FVector& DamageDir);
	bool TargetMovingAway();
	void DamageCollisionDeactivated();
	void ForceHitTarget();
	void CombatAnimHit();
	ECounterLimb GetCounterLimb(class ARPawnCombat* TestPawn);
	void Initialise();
	static bool CanBeUsed(class ARBMCombatManager* CombatManager, class ARPawnCombat* User, class ARPawnCombat* NewTarget);
};
// Class BmScript.RCombatMove_MultiStageStunStickAttack
// 0x0008 (0x0358 - 0x0360)
class ARCombatMove_MultiStageStunStickAttack : public ARCombatMove_VillainStunStickAttack
{
public:
	class FName                                        CurrentDamageBone;                             // 0x0358 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_MultiStageStunStickAttack");
		}

		return uClassPointer;
	};


	void DamageCollisionBetween(class ARPawnCombat* Pawn1, class ARPawnCombat* Pawn2, const struct FVector& DamageDir);
	void CombatAnimHitRight();
	void CombatAnimHitLeft();
	static bool CanBeUsed(class ARBMCombatManager* CombatManager, class ARPawnCombat* User, class ARPawnCombat* NewTarget);
};
// Class BmScript.RCombatMove_MultiStageThrowThugAttack
// 0x0067 (0x0321 - 0x0388)
class ARCombatMove_MultiStageThrowThugAttack : public ARCombatMove_VillainAttack
{
public:
	class ARPawnVillainMultiStage*                     MultiWeaponTg;                                 // 0x0324 (0x0008) [0x0000000000000000]               
	class ARPawnVillain*                               TargetThug;                                    // 0x032C (0x0008) [0x0000000000000000]               
	class TArray<class ARPawnCombat*>                  HitTargets;                                    // 0x0334 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FTransitionId                               MWAnimId;                                      // 0x0344 (0x0004) [0x0000000000000000]               
	struct FVector                                     ThugPickUpPoint;                               // 0x0348 (0x000C) [0x0000000000000000]               
	struct FVector                                     MWFacing;                                      // 0x0354 (0x000C) [0x0000000000000000]               
	uint32_t                                           bAiming : 1;                                   // 0x0360 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTurnLeftThrow : 1;                            // 0x0360 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCanRedirect : 1;                              // 0x0360 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsAttacking : 1;                              // 0x0360 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIsThrowAligned : 1;                           // 0x0360 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bTurnStarted : 1;                              // 0x0360 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bTargetThugHitSomeone : 1;                     // 0x0360 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bDamageOn : 1;                                 // 0x0360 (0x0004) [0x0000000000000000] [0x00000080] 
	float                                              AnimTurnYaw;                                   // 0x0364 (0x0004) [0x0000000000000000]               
	float                                              ThrowYawOffset;                                // 0x0368 (0x0004) [0x0000000000000000]               
	struct FVector                                     ThrowVelocity;                                 // 0x036C (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetLocation;                                // 0x0378 (0x000C) [0x0000000000000000]               
	int32_t                                            TargetYaw;                                     // 0x0384 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_MultiStageThrowThugAttack");
		}

		return uClassPointer;
	};


	void ExitMove();
	void StartPickup();
	bool IsBatmanInteruptable();
	bool IsBatmanTooClose();
	void DamageCollisionWithObject(class AActor* Object);
	EDamageResult DamageOtherThug(class ARPawnCombat* DamageReceiver);
	EDamageResult DamagePlayer(class ARPawnCombat* DamageReceiver);
	bool IsAttacking();
	void EnableRedirect();
	struct FVector GetClampedThrowDirection(const struct FVector& ThrowPos, const struct FVector& Heading, const struct FVector& TargetPos);
	void SetAimingOff();
	void SetAimingOn();
	void CheckExtendShield();
	void CheckChargeUpThug();
	void LetGoThug();
	void OnAbortRelease();
	void OnThrowRelease();
	void Initialise();
	static bool CanBeUsed(class ARBMCombatManager* CombatManager, class ARPawnCombat* User, class ARPawnCombat* NewTarget);
};
// Class BmScript.RDisruptorSniperBm
// 0x0000 (0x0C80 - 0x0C80)
class ARDisruptorSniperBm : public ARDisruptorSniper
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RDisruptorSniperBm");
		}

		return uClassPointer;
	};

};
// Class BmScript.RDmgType_Flamethrower
// 0x0000 (0x00DC - 0x00DC)
class URDmgType_Flamethrower : public URDmgType_Ranged
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RDmgType_Flamethrower");
		}

		return uClassPointer;
	};

};
// Class BmScript.RDmgType_PredatorMiniDrone
// 0x0000 (0x00DC - 0x00DC)
class URDmgType_PredatorMiniDrone : public URDmgType_Electricity
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RDmgType_PredatorMiniDrone");
		}

		return uClassPointer;
	};

};
// Class BmScript.RExplosiveGooMineBm
// 0x0014 (0x0448 - 0x045C)
class ARExplosiveGooMineBm : public ARExplosiveGooMine
{
public:
	class UNxForceFieldRadialComponent*                ForceField;                                    // 0x0448 (0x0008) [0x0000104100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline | CPF_NotForConsole)
	uint32_t                                           bMovePerformed : 1;                            // 0x0450 (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystem*                             LethalExplosion;                               // 0x0454 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RExplosiveGooMineBm");
		}

		return uClassPointer;
	};


	bool SlowMoProhibitted();
	void eventDestroyed();
	void TickAudio(float DeltaTime);
	void eventTick(float DeltaTime);
	void EndGelSpray2();
	void StartGelSpray2();
	void EndGelSpray();
	void StartGelSpray();
	void DamageVictim(class ARPawnVillain* Victim, bool bLethal);
	bool ShouldDoDamageToThug(class ARPawnVillain* TestThug);
	void SetVillainExplosionVisuals(class ARPawnVillain* Victim, float VictimDistance);
	void PlayExplosionSound();
	void ExplodeVantagePoint(class ARHidePoint_Mesh* TargetHidePoint);
	void RegisterWallUsedForTakedown(class AActor* Wall);
	void Explode();
};
// Class BmScript.RWaterVolume
// 0x0000 (0x0380 - 0x0380)
class ARWaterVolume : public ARWaterVolumeBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RWaterVolume");
		}

		return uClassPointer;
	};

};
// Class BmScript.RExplosiveGooMine_Combat
// 0x0000 (0x045C - 0x045C)
class ARExplosiveGooMine_Combat : public ARExplosiveGooMineBm
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RExplosiveGooMine_Combat");
		}

		return uClassPointer;
	};

};
// Class BmScript.RFloatingIceRaft
// 0x0064 (0x0598 - 0x05FC)
class ARFloatingIceRaft : public ARFloatingRaft
{
public:
	float                                              DesiredDrawScale;                              // 0x0598 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ScaleCorrectionSpeed;                          // 0x059C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FullDrawScale;                                 // 0x05A0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FadeInTime;                                    // 0x05A4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CurrentDmgValue;                               // 0x05A8 (0x0004) [0x0000000000000000]               
	class TArray<float>                                DmgValues;                                     // 0x05AC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UMaterialInstanceConstant*                   IceMaterial;                                   // 0x05BC (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   InternalIceMaterial;                           // 0x05C4 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      GrenadeCore;                                   // 0x05CC (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    IdleFX;                                        // 0x05D4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     LastImpactLoc;                                 // 0x05DC (0x000C) [0x0000000000000000]               
	class TArray<class UStaticMesh*>                   IceChunkMeshes;                                // 0x05E8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              CurrentOpacity;                                // 0x05F8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RFloatingIceRaft");
		}

		return uClassPointer;
	};


	void SetDamageFx(const struct FVector& HitLocation, float Degree);
	void Tick(float DeltaTime);
	void DestroyNow();
	void DestroyRaft();
	void eventDestroyed();
	void FadeInDone();
	void GrowRaft();
	void Initialise(class ARPawnPlayer* NewPlayer);
};
// Class BmScript.RFreezeClusterGrenadeBm
// 0x0014 (0x0A74 - 0x0A88)
class ARFreezeClusterGrenadeBm : public ARFreezeClusterGrenade
{
public:
	class UParticleSystemComponent*                    HandDryIce;                                    // 0x0A74 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     HandDryIceOffset;                              // 0x0A7C (0x000C) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RFreezeClusterGrenadeBm");
		}

		return uClassPointer;
	};


	void SpawnIceSphere(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	struct FVector GetProjectileTargetLocation();
	bool GetHelpPrompt(class URHUDPrompt* HelpPrompt, bool bKismetHelpOn);
	class FName GetPrimedPose(bool optionalInSoftCover, ECoverCornerType optionalCornerType, EPlayerWantsToCrouch& optionalOutStanceIsCrouched, EMirrorChoice& optionalOutMirroredNess, class FName& optionalOutOutCapeState, class FName& optionalOutOutCapeTransitionState);
	void PostBeginPlay();
	class UAkEvent* GetStopFreezeIceBubbleAkEvent();
	class UAkEvent* GetPlayFreezeIceBubbleAkEvent();
};
// Class BmScript.RFreezeClusterGrenadeProjectileBm
// 0x0000 (0x0448 - 0x0448)
class ARFreezeClusterGrenadeProjectileBm : public ARFreezeClusterGrenadeProjectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RFreezeClusterGrenadeProjectileBm");
		}

		return uClassPointer;
	};


	void DestroyProjectile();
	void Detonate(bool optionalNoGroundParticles, bool optionalProximityDetonate);
	class AActor* SpawnSmallIceSphere(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
};
// Class BmScript.RFreezeClusterTrap
// 0x0040 (0x02AC - 0x02EC)
class ARFreezeClusterTrap : public ARFreezeClusterTrapBase
{
public:
	uint32_t                                           bActivated : 1;                                // 0x02AC (0x0004) [0x0000000100000400] [0x00000001] (CPF_Edit | CPF_Transient)
	uint32_t                                           bSecondaryFire : 1;                            // 0x02AC (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              PostActivationDestroyPause;                    // 0x02B0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PostActivationDestroyDelay;                    // 0x02B4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    VictimHitReactionAnimSet;                      // 0x02B8 (0x0008) [0x0000000000000000]               
	class ARPawnVillain*                               HitThisVillainInFlight;                        // 0x02C0 (0x0008) [0x0000000000000000]               
	class ARFreezeBlastIceSphere*                      IceSphere;                                     // 0x02C8 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      ProjectileMesh;                                // 0x02D0 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              SecondaryModeActivationDelay;                  // 0x02D8 (0x0004) [0x0000000000000000]               
	class TArray<class ARPawnVillain*>                 HitPawns;                                      // 0x02DC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RFreezeClusterTrap");
		}

		return uClassPointer;
	};


	void StartleNearbyThugs(class ARPawnVillain* Victim);
	void DrawCollisionCylinders();
	void Destroyed();
	void DestroySelf();
	void OnActivated();
	void OnTouchVillain(class ARPawnVillain* touchVillain);
	void SpawnIceSphere(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Initialise(bool bSecondary);
	void PostBeginPlay();
};
// Class BmScript.RFreezeSprayBm
// 0x0028 (0x0A90 - 0x0AB8)
class ARFreezeSprayBm : public ARFreezeSpray
{
public:
	class UParticleSystemComponent*                    HandDryIce;                                    // 0x0A90 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     HandDryIceOffset;                              // 0x0A98 (0x000C) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             NVHandDryIceParticleSystem;                    // 0x0AA4 (0x0008) [0x0000000000000000]               
	class AEmitter*                                    NVHandDryIceEmitter;                           // 0x0AAC (0x0008) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           NVAttachedToHandTrigger : 1;                   // 0x0AB4 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RFreezeSprayBm");
		}

		return uClassPointer;
	};


	void SpawnIceSphere(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
	void AttachToBelt();
	void AttachToHand(const class FName& optionalCustomBone);
	void Tick(float DeltaTime);
	struct FVector GetProjectileTargetLocation();
	bool GetHelpPrompt(class URHUDPrompt* HelpPrompt, bool bKismetHelpOn);
	class FName GetPrimedPose(bool optionalInSoftCover, ECoverCornerType optionalCornerType, EPlayerWantsToCrouch& optionalOutStanceIsCrouched, EMirrorChoice& optionalOutMirroredNess, class FName& optionalOutOutCapeState, class FName& optionalOutOutCapeTransitionState);
	class UAkEvent* GetStopFreezeIceBubbleAkEvent();
	class UAkEvent* GetPlayFreezeIceBubbleAkEvent();
	void PostBeginPlay();
};
// Class BmScript.RFreezeSprayProjectileBm
// 0x0000 (0x0468 - 0x0468)
class ARFreezeSprayProjectileBm : public ARFreezeSprayProjectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RFreezeSprayProjectileBm");
		}

		return uClassPointer;
	};


	void SuperComboBlast(class ARPawnVillain* Victim);
	class AActor* SpawnSmallIceSphere(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SpawnIceSphere(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
};
// Class BmScript.RGangInteractPoint
// 0x0000 (0x0518 - 0x0518)
class ARGangInteractPoint : public ARGangInteractPointBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGangInteractPoint");
		}

		return uClassPointer;
	};


	void eventSetFinished(class ARBMPawnAI* P);
	void eventSetInUse(class ARBMPawnAI* UsagePawn);
	struct FVector eventGetPOILocation();
	float eventGetSelectionScore();
	class UClass* eventGetBehaviourClass();
};
// Class BmScript.RGFxMovieBackScreen_Normal
// 0x025C (0x06B0 - 0x090C)
class URGFxMovieBackScreen_Normal : public URGFxMovieBackScreen
{
public:
	uint32_t                                           bReadPending : 1;                              // 0x06B0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMovedUserMarker : 1;                          // 0x06B0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCreatedIcons : 1;                             // 0x06B0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPanEnabled : 1;                               // 0x06B0 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bPanEnabledLast : 1;                           // 0x06B0 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bPanNoFirstEntryDelay : 1;                     // 0x06B0 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bPanTweenElevationToo : 1;                     // 0x06B0 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bUpgradeCommitted : 1;                         // 0x06B0 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           BioAutoSelect : 1;                             // 0x06B0 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           BiobAutoPlay : 1;                              // 0x06B0 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           RumbleActive : 1;                              // 0x06B0 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bManualOpen : 1;                               // 0x06B0 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bSaveGameWhenClosed : 1;                       // 0x06B0 (0x0004) [0x0000000000000000] [0x00001000] 
	int32_t                                            ChallengeID;                                   // 0x06B4 (0x0004) [0x0000000000000000]               
	class FString                                      LeaderboardPath;                               // 0x06B8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              LerpRatio;                                     // 0x06C8 (0x0004) [0x0000000000000000]               
	int32_t                                            ChapterId;                                     // 0x06CC (0x0004) [0x0000000000000000]               
	class FString                                      ASClassPathTmp;                                // 0x06D0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FSubMapDefault>                SubMapDefaults;                                // 0x06E0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FDialogEntry>                  Dialogs;                                       // 0x06F0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              SpeechIdsActive;                               // 0x0700 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            IdOfGlobalSpeechPlaying;                       // 0x0710 (0x0004) [0x0000000000000000]               
	int32_t                                            IndexOfLastGlobalSpeech;                       // 0x0714 (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        MapRiddleIconsInSubLocations;                  // 0x0718 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      CachedFunction_SetThreatLevel;                 // 0x0728 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            ThreatLevelAreaLast;                           // 0x0738 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              ThreatLevels;                                  // 0x073C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              ThreatLevelsLast;                              // 0x074C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        OW_IncludeTheseExceptions;                     // 0x075C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        OW_ExcludeTheseExceptions;                     // 0x076C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      MapScreenBasePath;                             // 0x077C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      MapScript;                                     // 0x078C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      MapCallback;                                   // 0x079C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              TweenInRate;                                   // 0x07AC (0x0004) [0x0000000000000000]               
	float                                              TweenOutRate;                                  // 0x07B0 (0x0004) [0x0000000000000000]               
	float                                              DefaultHeight;                                 // 0x07B4 (0x0004) [0x0000000000000000]               
	float                                              DefaultElevation;                              // 0x07B8 (0x0004) [0x0000000000000000]               
	float                                              DefaultDistance;                               // 0x07BC (0x0004) [0x0000000000000000]               
	struct FVector                                     StickLocation;                                 // 0x07C0 (0x000C) [0x0000000000000000]               
	float                                              StickRotation;                                 // 0x07CC (0x0004) [0x0000000000000000]               
	float                                              StickElevation;                                // 0x07D0 (0x0004) [0x0000000000000000]               
	float                                              StickDistance;                                 // 0x07D4 (0x0004) [0x0000000000000000]               
	struct FVector                                     TweenSourceLocation;                           // 0x07D8 (0x000C) [0x0000000000000000]               
	struct FRotator                                    TweenSourceRotation;                           // 0x07E4 (0x000C) [0x0000000000000000]               
	float                                              TweenSourceFOV;                                // 0x07F0 (0x0004) [0x0000000000000000]               
	struct FVector                                     TweenTargetLocation;                           // 0x07F4 (0x000C) [0x0000000000000000]               
	struct FRotator                                    TweenTargetRotation;                           // 0x0800 (0x000C) [0x0000000000000000]               
	float                                              TweenTargetFOV;                                // 0x080C (0x0004) [0x0000000000000000]               
	struct FVector                                     CityOffset;                                    // 0x0810 (0x000C) [0x0000000000000000]               
	class TArray<class FString>                        PanToIcons;                                    // 0x081C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     PanReturnToLocation;                           // 0x082C (0x000C) [0x0000000000000000]               
	struct FVector                                     PanDelta;                                      // 0x0838 (0x000C) [0x0000000000000000]               
	struct FVector                                     PanXYZTarget;                                  // 0x0844 (0x000C) [0x0000000000000000]               
	int32_t                                            PanStep;                                       // 0x0850 (0x0004) [0x0000000000000000]               
	int32_t                                            PanWait;                                       // 0x0854 (0x0004) [0x0000000000000000]               
	float                                              PanRate;                                       // 0x0858 (0x0004) [0x0000000000000000]               
	float                                              PanDeltaElev;                                  // 0x085C (0x0004) [0x0000000000000000]               
	class TArray<class ARockMapHighlight*>             VolumeActors;                                  // 0x0860 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      TargettedIconLast;                             // 0x0870 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        RiddlerItems_InBuildings;                      // 0x0880 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        RiddlerItem_OffsetNames;                       // 0x0890 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              RiddlerItem_OffsetValues;                      // 0x08A0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      CachedFunction_UpgradeScreen;                  // 0x08B0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<struct FPromptEntry>                  UpgradePrompts;                                // 0x08C0 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            BioLocIndex;                                   // 0x08D0 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              BioIndex;                                      // 0x08D4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            BioPageId;                                     // 0x08E4 (0x0004) [0x0000000000000000]               
	int32_t                                            BioTapeId;                                     // 0x08E8 (0x0004) [0x0000000000000000]               
	class FString                                      CachedFunction_RiddlerScreen;                  // 0x08EC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              FlashRumbleValueLeft;                          // 0x08FC (0x0004) [0x0000000000000000]               
	float                                              FlashRumbleValueRight;                         // 0x0900 (0x0004) [0x0000000000000000]               
	class UForceFeedbackWaveform*                      MinigameFFWaveForm;                            // 0x0904 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGFxMovieBackScreen_Normal");
		}

		return uClassPointer;
	};


	class FString XI_GetSideOverlay();
	EAkDialogueCallbackResult XI_OnLineStopped(class UAkDialogueLine* dlgLine, class UAkDialogueEvent* dlgEvent, class UObject* dlgSpeaker, bool interrupted);
	EAkDialogueCallbackResult XI_OnLineStarted(class UAkDialogueLine* dlgLine, class UAkDialogueEvent* dlgEvent, class UObject* dlgSpeaker, bool bBarkSquelch);
	EAkDialogueCallbackResult XI_OnSpeechStopped(int32_t speechId, bool interrupted);
	EAkDialogueCallbackResult XI_OnSpeechStarted(int32_t speechId);
	bool XI_IsDialogActive();
	void XI_StopDialog();
	class FString XI_PlayDialog(const class FString& RefName);
	void LeaderboardTick();
	bool IsPollingBoards();
	void FetchLeaderboard();
	void UC_TriggerLeaderboard(int32_t FriendCount);
	void SendLeaderBoardToFlash(int32_t Id, int32_t total, const class TArray<int32_t>& FriendIndex, const class TArray<struct FUniqueNetId>& NetIDs, const class TArray<int32_t>& Ranks, const class TArray<class FString>& NickNames, const class TArray<int32_t>& Medals, const class TArray<float>& Scores, const class TArray<int32_t>& RivalPoints, const class TArray<float>& Story, const class TArray<float>& MW, const class TArray<float>& AR);
	void UC_SetLeaderboardLine(int32_t Index, int32_t Rank, const class FString& NickName, int32_t Medals, const class FString& Score, bool bIsMe);
	void XI_RegisterLeaderboardPath(const class FString& TargetPath);
	class FString XI_GetVideoProgressName(const class FString& MissionName);
	void XI_OpenScreen(const class FString& ScreenName, bool bIsFirstScreen);
	void XI_Tick();
	void XI_PromptClicked(int32_t PromptId);
	void XI_OnOut();
	int32_t XI_SetupTabMenu(const class FString& TargetPath);
	void PlayAzraelMinigameDialogue(uint8_t dialogue_index);
	void XI_SetRumbleFromFlash(float left_rumble, float right_rumble);
	void SetMouseCursorEnabled(bool is_enabled);
	void PreemptivelyBlockInputForMinigame();
	void PrepBatmanChallengeRequirements(class TArray<int32_t>& outAreNotPossible);
	bool XI_RiddlerScreenShowMapItemSecret(const class FString& sItemName);
	void XI_RiddlerScreenGotoReward(const class FString& sReward);
	void XI_RiddlerScreenUnlockReward(const class FString& sReward);
	void XI_RiddlerScreenSetPieceCompleted(int32_t nPuzzle, int32_t nPiece);
	void XI_RiddlerScreenSetPieceViewed(int32_t nPuzzle, int32_t nPiece);
	void XI_RiddlerScreenSetPieceActive(int32_t nPuzzle, int32_t nPiece);
	void XI_RiddlerScreenRequestData(const class FString& TargetPath);
	void UC_RiddlerScreenSetSelection(int32_t nPuzzleId, int32_t nPieceIndex, bool bImmediate);
	void UC_RiddlerScreenAddPuzzle(int32_t nId, const class FString& sCategory, const class FString& sPuzzle, const class FString& sPrize);
	void XI_CitySave(int32_t Index, int32_t PageIndex, int32_t TapeIndex);
	void XI_BioSave(int32_t LocIndex, int32_t Loc0Index, int32_t Loc1Index, int32_t Loc2Index, int32_t PageIndex, int32_t TapeIndex);
	void XI_ClearCityStoryNew(int32_t Index);
	void XI_ClearBioNew(int32_t Index);
	void XI_RequestBiosLocNews(const class FString& TargetPath);
	void XI_RequestBiosData(int32_t PageId, const class FString& TargetPath);
	void XI_RequestBiosBaseData(const class FString& TargetPath);
	void GetBioCharacterList(class TArray<class FString>& outCharList);
	void XI_UpgradeScreenCommit(const class FString& sUpgrade, int32_t nValue);
	void XI_UpgradeScreenRequestPage(const class FString& sPage);
	void XI_UpgradeScreenRequestExperience();
	void XI_UpgradeScreenSetup(const class FString& sPath);
	void XI_UpgradeScreenViewedItem(const class FString& sUpgrade);
	void UC_UpgradeAddNode(int32_t nX, int32_t nY, int32_t nDX, int32_t nDY, const class FString& sUpgrade, const class FString& sIcon, const class FString& sBackground, const class FString& sState, const class FString& sAction, int32_t nValue, int32_t nTotal, float fScale);
	void UC_UpgradeAddHeader(int32_t nNodeX, int32_t nNodeY, const class FString& sHeader, bool bLeftJustify, float fOX, float fOY, float fTX, float fTY);
	void UC_UpgradeSetExperience(int32_t nAwards, int32_t nPoints, int32_t nTotal, const class FString& sDescription, int32_t iPlayerLevel, int32_t iUpgradesRemaining);
	bool XI_GetFanActive(int32_t FloorNumber);
	float XI_GetBatmobileScrewState();
	void XI_GetStickAngMag(const class FString& TargetBasePath);
	float GetCameraRotation(int32_t Axis);
	class FString GetPlayerRoomDescription();
	class FString XI_RiddleNameCorrect(const class FString& ItemName, const class FString& InName);
	void XI_SetCustomWaypointSideStoryInfo(const class FString& SS_Character, const class FString& VisibleFlag, const class FString& DoneFlag, const class FString& StatesNew);
	void XI_SetIconState(bool bVisible);
	void XI_SetCustomWaypoint(bool bEnabled, float atX, float atY, float atZ, const class FString& WaypointName, const class FString& WaypointTypeName);
	void XI_OnCustomWaypointDisabled(const class FString& WaypointName, const class FString& WaypointTypeName);
	void XI_GetFloorZAtPosition(float atX, float atY, float atZ);
	void XI_ChangeIconFilter(int32_t FilterId);
	class TArray<int32_t> GetActiveFilters();
	void XI_RemoveMapObj(const class FString& ItemName);
	void XI_MapSave(int32_t DBIndex);
	void XI_RequestMapIconData(const class FString& MapName, const class FString& TargetBasePath);
	void RequestMapFlagData(const class FString& TargetBasePath);
	void XI_RequestMapData(const class FString& TargetBasePath);
	void XI_FetchSelectedItemData(const class FString& TargetBasePath);
	void UC_SetIconInfo(int32_t Index, const class FString& TypeName, const class FString& instancename, int32_t X, int32_t Y, int32_t Z, int32_t Flags, const class FString& RemapTypeName, const class FString& RemapInstanceName);
	class FString XI_GetHowToUnlockMsg(const class FString& instancename);
	bool XI_IsChallengeUnLocked(const class FString& instancename);
	bool XI_IsChallengeRevealed(const class FString& instancename);
	class FString XI_GetMedalCount(const class FString& instancename);
	int32_t GetARChallengeMedalCount(const class FString& instancename);
	class FString XI_GetActualChallengeDesc(const class FString& instancename);
	class FString XI_GetActualChallengeName(const class FString& instancename, bool bMixedCase);
	class FString GetCoOrdStr();
	int32_t XI_Map3DMoveBy(float DX, float DY, float dRotation, float dElevation, float dDistance);
	int32_t ApplyLimits();
	void XI_GetScreenSize(const class FString& TargetBasePath);
	void XI_GetMouseCoodinates(const class FString& TargetBasePath);
	void XI_GetbUsingGamepad(const class FString& TargetBasePath);
	void UC_Map3DCityArea(const class FString& sArea);
	void XI_GetMap3DCoordinates();
	void UC_Map3DMoved(float ToPosX, float ToPosY, float ToPosZ, float toRot, float ToElev, float ToDist, const class FString& CoOrdStr);
	void UC_PushCoOrd(const class FString& CoOrdStr, bool bMoving, bool bTilting);
	struct FVector FindFloor(const struct FVector& pos, const struct FVector& Dest);
	int32_t XI_CalcMapScreenStick();
	void SetupNextPanTarget();
	void SetPanWait();
	void XI_PanToXYZ(float X, float Y, float Z);
	void XI_CenterMap();
	bool XI_CanCenter();
	int32_t FindItemInList(const class FString& ItemName);
	class FString XI_GetDroneDifficulty(const class FString& IconInstanceName);
	class FString XI_GetRiddlerInfoFor(const class FString& ItemTypeName, const class FString& ItemName, bool bIs2DMap);
	bool XI_FetchSecretsCountFor(const class FString& PrevLocName, const class FString& NextLocName, const class FString& TargetPath);
	class FString GetSecretsLocationName(const class FString& sName);
	bool XI_SecretsCounterAvailable();
	void SetMap3DThreatLevel(int32_t Area, bool bAllowThreats);
	void UpdateThreatMeter(int32_t NewArea, bool optionalTutorialMode);
	void DoThreatLevelIntroAnim();
	void SetThreatLevel(const class FString& sCityName, const class FString& sThreats, bool bBatmobileAvailable, bool bTutorialMode);
	void XI_RegisterThreatLevelMeter(const class FString& TargetPath);
	void XI_RefreshThreatLevelMeter(int32_t AreaId);
	int32_t RoughlyCalcCityArea(float PosX, float PosY);
	bool XI_OutroTween();
	void XI_OnOutro();
	bool XI_IntroTween();
	void XI_OnIn();
	void XI_OnIntro();
	void SetMap3DRenderingCustomWaypoint();
	void Setup3DAutopan(bool bIsSubMap);
	void RequestStickCameraData(const class FString& TargetPath);
	void UpdateVolumes(const class FString& PlayerMap, const class FString& TargettedIcon);
	void ClearMeshVolumes();
	void FindHighlightVolumeActors();
	void XI_RequestMapScreen3DData(const class FString& TargetBasePath);
	class FString GetObjectiveStyleWin();
	bool IsOverworldGameplay();
	void XI_RequestMapScreenData(const class FString& TargetBasePath);
	int32_t XI_RequestObjectiveData(const class FString& TargetBasePath);
	void StoreVariablesToPData();
	void SetVariablesFromPData();
	void SetVariablesFromPDD();
};
// Class BmScript.RGooSprayBm
// 0x0000 (0x0B5C - 0x0B5C)
class ARGooSprayBm : public ARGooSpray
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGooSprayBm");
		}

		return uClassPointer;
	};


	void PlayedHostageInDangerLine();
	void PlayHostageInDangerLine();
	void PlayDetonateAudio();
};
// Class BmScript.RGrappleGunBm
// 0x0028 (0x0E54 - 0x0E7C)
class ARGrappleGunBm : public ARGrappleGun
{
public:
	class UParticleSystemComponent*                    MuzzleFlash;                                   // 0x0E54 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class USkeletalMesh*>                 UpgradeMeshes;                                 // 0x0E5C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UMaterialInterface*>            UpgradeMaterials;                              // 0x0E6C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGrappleGunBm");
		}

		return uClassPointer;
	};


	bool eventUpdateGrappleBoostLevel();
	void eventDestroyed();
	void AttachToBelt();
	void TurnOffProjectiles();
	void FireProjectile(const struct FVector& ProjectileTarget);
	void SucceedBoost();
	void GrappleBoostFailTimeout();
	void FailedBoost();
	void AttachToHand(const class FName& optionalCustomBone);
	void PostBeginPlay();
};
// Class BmScript.RGrappleProjectileBm
// 0x0000 (0x0360 - 0x0360)
class ARGrappleProjectileBm : public ARGrappleProjectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGrappleProjectileBm");
		}

		return uClassPointer;
	};

};
// Class BmScript.RHarpoonGunBm
// 0x0000 (0x0964 - 0x0964)
class ARHarpoonGunBm : public ARHarpoonGun
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHarpoonGunBm");
		}

		return uClassPointer;
	};


	void ReSpawnProjectile();
	void PostBeginPlay();
};
// Class BmScript.RHarpoonProjectileBm
// 0x0000 (0x03AC - 0x03AC)
class ARHarpoonProjectileBm : public ARHarpoonProjectile
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHarpoonProjectileBm");
		}

		return uClassPointer;
	};

};
// Class BmScript.RHelicopterHangPoint
// 0x000C (0x0514 - 0x0520)
class ARHelicopterHangPoint : public ARHangPointSpawnable
{
public:
	class URSpecialMoveConfig*                         GrappleToChopperMove;                          // 0x0514 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bControlChopper : 1;                           // 0x051C (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHelicopterHangPoint");
		}

		return uClassPointer;
	};


	bool WillSmashIfShot();
	void eventSetInvestigateHighlighted(class UMaterialInstanceConstant* highMat, bool On);
	void SetHangpointUnusable(bool unusable);
	void MovePawnTo(class APawn* PawnToMove);
};
// Class BmScript.RSeqEvent_HelicopterDialogueTrigger
// 0x0004 (0x017C - 0x0180)
class URSeqEvent_HelicopterDialogueTrigger : public USequenceEvent
{
public:
	uint32_t                                           DialogueEnabled : 1;                           // 0x017C (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_HelicopterDialogueTrigger");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RHelicopterIntermediate
// 0x028C (0x09C0 - 0x0C4C)
class ARHelicopterIntermediate : public ARHelicopterIntermediateBase
{
public:
	class ARPatrolPoint*                               StartPoint;                                    // 0x09C0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARDroneChaseVolume*                          ChaseVolumeBounds;                             // 0x09C8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARRiotZoneVolume*                            CurrentRiotZone;                               // 0x09D0 (0x0008) [0x0000000000000000]               
	class URSeqEvent_HelicopterDialogueTrigger*        DialogueTriggerEvent;                          // 0x09D8 (0x0008) [0x0000000000000000]               
	class ARHangPointSpawnable*                        HelicopterHangPoint;                           // 0x09E0 (0x0008) [0x0000000000000000]               
	class ARHelicopterControlVolume*                   CurrentControlVolume;                          // 0x09E8 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ChaingunFiringEvent;                           // 0x09F0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    RocketLockonEvent;                             // 0x09F8 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    RocketLockonEventStop;                         // 0x0A00 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ChaingunSpinUpEvent;                           // 0x0A08 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ChaingunSpinDownEvent;                         // 0x0A10 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    BlindedLoop;                                   // 0x0A18 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SpottedEvent;                                  // 0x0A20 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             HitByRECFx;                                    // 0x0A28 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   SearchLightMIC;                                // 0x0A30 (0x0008) [0x0000000000000000]               
	class URSpecialMoveConfig*                         BatmanKnockbackMove;                           // 0x0A38 (0x0008) [0x0000000000000000]               
	class ARDummyTarget*                               KnockbackSentryLookAtDefault;                  // 0x0A40 (0x0008) [0x0000000000000000]               
	class ARDeadVehicle*                               DeadVehicleArchetype;                          // 0x0A48 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URInteractionComponent*                      PlayerInteractions;                            // 0x0A50 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<struct FHelicopterHighPriorityTarget> HighPriorityTargets;                           // 0x0A58 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            CurrentHighPriorityTarget;                     // 0x0A68 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasMachineGun : 1;                            // 0x0A6C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bWatchBatmanFight : 1;                         // 0x0A6C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bAttackBatman : 1;                             // 0x0A6C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bHasRockets : 1;                               // 0x0A6C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bAllowGrappleTo : 1;                           // 0x0A6C (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bIgnoreGadgets : 1;                            // 0x0A6C (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bWatchRiotZones : 1;                           // 0x0A6C (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bBlindFireEnabled : 1;                         // 0x0A6C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           RocketLeftRightToggle : 1;                     // 0x0A6C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bTemporarilyAllowedToAttack : 1;               // 0x0A6C (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           CollisionAlwaysOn : 1;                         // 0x0A6C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           ChaseMovementPathingFailed : 1;                // 0x0A6C (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bForceHighDetail : 1;                          // 0x0A6C (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bWasWaitingWhenBatmanSpotted : 1;              // 0x0A6C (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           BatmanHasBeenSeenEver : 1;                     // 0x0A6C (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           ChaingunJammed : 1;                            // 0x0A6C (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           HiddenLastUpdate : 1;                          // 0x0A6C (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           BlindedLastUpdate : 1;                         // 0x0A6C (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           BlindedFlicker : 1;                            // 0x0A6C (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           ChainGunEffectsActive : 1;                     // 0x0A6C (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           ChainGunJammingEffectsActive : 1;              // 0x0A6C (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           RocketLockonActive : 1;                        // 0x0A6C (0x0004) [0x0000000000000400] [0x00200000] (CPF_Transient)
	uint32_t                                           ChaingunIsSpinning : 1;                        // 0x0A6C (0x0004) [0x0000000000000400] [0x00400000] (CPF_Transient)
	uint32_t                                           AnnouncedBatmanKilled : 1;                     // 0x0A6C (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           SearchlightViewingBatman : 1;                  // 0x0A6C (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bSavedAttackEnabled : 1;                       // 0x0A6C (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bHandleLightsInChild : 1;                      // 0x0A6C (0x0004) [0x0000000000000000] [0x04000000] 
	uint32_t                                           HighSpeedPursuit : 1;                          // 0x0A6C (0x0004) [0x0000000000000000] [0x08000000] 
	uint32_t                                           StrafeGunsOn : 1;                              // 0x0A6C (0x0004) [0x0000000000000000] [0x10000000] 
	uint32_t                                           InitialiseInGuardAndKnockbackState : 1;        // 0x0A6C (0x0004) [0x0000000000000000] [0x20000000] 
	uint32_t                                           bInXrayMode : 1;                               // 0x0A6C (0x0004) [0x0000000000000400] [0x40000000] (CPF_Transient)
	float                                              GunShotTime;                                   // 0x0A70 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RocketShotTime;                                // 0x0A74 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RocketShotTimeDoubleShot;                      // 0x0A78 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FString                                      InvestigateTitle;                              // 0x0A7C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      InvestigateDetail;                             // 0x0A8C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              RiotLostContactTimer;                          // 0x0A9C (0x0004) [0x0000000000000000]               
	float                                              TimeWatchingRiot;                              // 0x0AA0 (0x0004) [0x0000000000000000]               
	float                                              TimeWatchingRioter;                            // 0x0AA4 (0x0004) [0x0000000000000000]               
	float                                              GunDamage;                                     // 0x0AA8 (0x0004) [0x0000000000000000]               
	float                                              RocketDamage;                                  // 0x0AAC (0x0004) [0x0000000000000000]               
	float                                              RocketDamageRadius;                            // 0x0AB0 (0x0004) [0x0000000000000000]               
	int32_t                                            RocketSalvoSize;                               // 0x0AB4 (0x0004) [0x0000000000000000]               
	float                                              fAnnoyedByGadget;                              // 0x0AB8 (0x0004) [0x0000000000000000]               
	float                                              WindFrequency;                                 // 0x0ABC (0x0004) [0x0000000000000000]               
	float                                              WindStrength;                                  // 0x0AC0 (0x0004) [0x0000000000000000]               
	struct FRotator                                    WindDirection;                                 // 0x0AC4 (0x000C) [0x0000000000000000]               
	float                                              PauseTime;                                     // 0x0AD0 (0x0004) [0x0000000000000000]               
	float                                              LastSeenTime;                                  // 0x0AD4 (0x0004) [0x0000000000000000]               
	float                                              TimeWatchingBatman;                            // 0x0AD8 (0x0004) [0x0000000000000000]               
	float                                              LookAtTime;                                    // 0x0ADC (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              LookAtOrder;                                   // 0x0AE0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            LookAtIndex;                                   // 0x0AF0 (0x0004) [0x0000000000000000]               
	float                                              LastTimeWatchingBatman;                        // 0x0AF4 (0x0004) [0x0000000000000000]               
	float                                              DialogueTimeStamp;                             // 0x0AF8 (0x0004) [0x0000000000000000]               
	float                                              MinPeriodBetweenDialogue;                      // 0x0AFC (0x0004) [0x0000000100000000] (CPF_Edit)    
	EHeliDialogue                                      MostRecentDialogueEnum;                        // 0x0B00 (0x0001) [0x0000000000000000]               
	EHeliAttackMode                                    CurrentAttackMode;                             // 0x0B01 (0x0001) [0x0000000000000000]               
	EHeliAttackMode                                    TargetAttackMode;                              // 0x0B02 (0x0001) [0x0000000000000000]               
	ELightColour                                       UnawareColour;                                 // 0x0B03 (0x0001) [0x0000000000000000]               
	float                                              LastSniperEventTime;                           // 0x0B04 (0x0004) [0x0000000000000000]               
	float                                              ChaingunRepairTimestamp;                       // 0x0B08 (0x0004) [0x0000000000000000]               
	float                                              ChaingunRepairPeriod;                          // 0x0B0C (0x0004) [0x0000000000000000]               
	float                                              JammingImmunityPeriod;                         // 0x0B10 (0x0004) [0x0000000000000000]               
	int32_t                                            UniqueIndex;                                   // 0x0B14 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UMaterialInterface*>            OldMaterials;                                  // 0x0B18 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              BlindedTransitionTimer;                        // 0x0B28 (0x0004) [0x0000000000000000]               
	float                                              DistSquaredForHighDetail;                      // 0x0B2C (0x0004) [0x0000000000000000]               
	float                                              CannotChangeAttackModeTimer;                   // 0x0B30 (0x0004) [0x0000000000000000]               
	class TArray<class UAkEvent*>                      AudioMovementLoops;                            // 0x0B34 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              ChainGunDeployPeriod;                          // 0x0B44 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RocketDeployPeriod;                            // 0x0B48 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RocketLockonTime;                              // 0x0B4C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaterialStartIndex;                            // 0x0B50 (0x0004) [0x0000000000000000]               
	int32_t                                            MaterialEndIndex;                              // 0x0B54 (0x0004) [0x0000000000000000]               
	int32_t                                            MaterialExclude;                               // 0x0B58 (0x0004) [0x0000000000000000]               
	int32_t                                            MaterialExclude2;                              // 0x0B5C (0x0004) [0x0000000000000000]               
	float                                              PursuitAltitude;                               // 0x0B60 (0x0004) [0x0000000000000000]               
	float                                              PursuitDistance;                               // 0x0B64 (0x0004) [0x0000000000000000]               
	float                                              StrafeAngle;                                   // 0x0B68 (0x0004) [0x0000000000000000]               
	float                                              StrafeAngleCos;                                // 0x0B6C (0x0004) [0x0000000000000000]               
	float                                              StrafeAngleSin;                                // 0x0B70 (0x0004) [0x0000000000000000]               
	float                                              KnockbackThreatenRange;                        // 0x0B74 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              KnockbackShootRange;                           // 0x0B78 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              KnockbackGrappleRange;                         // 0x0B7C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              KnockbackSpread;                               // 0x0B80 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    KnockbackInitialLookAt;                        // 0x0B84 (0x000C) [0x0000000000000400] (CPF_Transient)
	int32_t                                            KnockbackInitialPitch;                         // 0x0B90 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     KnockbackInitialPosition;                      // 0x0B94 (0x000C) [0x0000000000000400] (CPF_Transient)
	float                                              maxGuardVelocity;                              // 0x0BA0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DeathImpulse;                                  // 0x0BA4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DeathImpulseRadius;                            // 0x0BA8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FBMScreenShakeStruct                        ExplosionScreenShake;                          // 0x0BAC (0x009C) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            BatmanVehicleState;                            // 0x0C48 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHelicopterIntermediate");
		}

		return uClassPointer;
	};


	void eventFlyingVehicleAudioResume();
	void eventFlyingVehicleAudioSuspend();
	bool eventFlyingVehicleSuspendOnManyTanks();
	void StartleNearbyCrows();
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	bool IsTargetatble();
	float GetBatarangSpeedBoost();
	bool ForceHitAtEndOfFlight();
	float GetBatarangPriority();
	bool IsBatarangable();
	struct FVector GetBatarangTargetPosition(const struct FVector& AimLocation, const struct FVector& AimDirection, bool optionalBDuringTargetPhase);
	void ChangeHelicopterDPG(ESceneDepthPriorityGroup NewDPG);
	void eventSetBlindedAudioEnabled(bool bIsBlinded);
	void SmashIntoBits();
	void TouchedRiotZone(class AROverworldPopulationVolume* RiotVolume, bool bEntering);
	bool CanChangeToWatchRiot();
	void SetHelicopterControlVolume(class ARHelicopterControlVolume* ControlVolume, bool bEntering);
	void SetOverrideSpeed(float _override_speed);
	void eventBump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	void SetGrapplePointEnabled(bool make_enabled);
	void SetupPlayerGrapplePoint();
	void GetActorThoughts(const class FString& optionalIndentString, class TArray<struct FThought>& outThoughtList, struct FVector& outThoughtLocationOverride);
	void StopHelicopterDialogue();
	void PlayHelicopterDialogue(EHeliDialogue DialogueEnum, bool optionalPlayEvenIfTooSoon);
	bool IsSameDialogue(EHeliDialogue DialogueEnum1, EHeliDialogue DialogueEnum2);
	bool FindDialogueTriggerEvent();
	void SpawnBulletFX(const struct FVector& StartLoc, const struct FImpactInfo& Impact);
	class URPhysicalMaterialProperty* GetImpactMaterial(const struct FImpactInfo& Impact);
	void DoShotFX(bool bForceMiss, bool bForceHit);
	struct FImpactInfo CalcImpact(const struct FVector& StartTrace, const struct FVector& EndTrace, bool bForceMiss);
	struct FVector GetRandDeviance(const struct FRotator& Heading);
	void ReportRocketSuccess(bool was_successful);
	class ARHelicopterRocket* FireRocket(bool TargetBatman, const struct FVector& optionalStaticTarget);
	void eventTickWeapons(float DeltaTime);
	bool TickWeaponsForGuardWithKnockback(float DeltaTime);
	struct FVector GetLookAtLocation();
	void SetRocketLockon(bool is_active, float Proportion);
	void SetChainGunSpinning(bool is_active);
	void SetChainGunJammingEffect(bool is_active);
	void SetChainGunActive(bool is_active);
	void AdvanceAttackMode(float DeltaTime);
	void DeployRocketPods(bool do_deploy);
	void SetCurrentAttackMode(EHeliAttackMode attack_mode);
	void NotifyUnderFire();
	void SetRocketInitialSalvoSize();
	void SetTargetAttackMode(EHeliAttackMode attack_mode);
	struct FVector GetRocketSocketOrigin(bool left_socket);
	bool KeepChasing();
	void StandardSearchLightSweep(float DeltaTime);
	void GotoNextPoint();
	void SetTurningDistance(float NewTurningDistance);
	bool IsBMInLineOfSight();
	bool IsBMInSearchLight();
	void UpdateDustEffect();
	void OnToggleHidden(class USeqAct_ToggleHidden* Action);
	void OnUnHidden();
	void StrafePathGunsOff();
	void StrafePathGunsOn();
	void StrafePathEnd();
	void StrafePathBegin(float fStrafeAngleInDegrees);
	void BeginPursueActor(class AActor* the_actor, float pursuit_altitude, float pursuit_distance, bool GoReallyFast);
	void WatchPlayer();
	void TakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	bool CanBeDisrupted(class ARJammerGadget* JammerGadget);
	bool HitByDisruptorGadgetCharge();
	void eventRecoveredFromREC();
	void AlertToBatmansPosition();
	void AnnoyWithGadget(float annoyance_value);
	void PointReached();
	void ChangePath(class ARPatrolPoint* NewStartPoint, bool bTeleport);
	void SetAggressionLevels(bool ChaingunEnabled, bool MissilesEnabled);
	void HelicopterDismounted();
	void HelicopterBoarded();
	void ForceLowQualityLight();
	void ForceHighQualityLight();
	void ExitLowDetail();
	void EnterLowDetail();
	void DrawDebugGraphics();
	bool CanFireRocketsAtPlayer();
	void SetAggroHelicopter(bool is_aggro);
	bool IsFirstTimeBatmanSeen();
	void SetViewingBatman(bool IsViewingBatman);
	void eventTick(float DeltaTime);
	void UpdateDistanceFromCamera();
	void TickPointOfInterest(float DeltaTime);
	void SetSearchlightOnOff(bool OnOff);
	void VisualContactChangesTo(bool is_visible);
	bool ShouldForceMissedShot();
	bool eventIsAttackEnabled();
	bool IsViewablePlayerCharacter();
	void eventDestroyed();
	void eventEncroachedBy(class AActor* Other);
	void GotoInitialState();
	void FindControlBones();
	void eventPostBeginPlay();
	void SetChaseVolumeBounds(class ARDroneChaseVolume* NewChaseVolumeBounds);
	void SetStartPoint(class ARPatrolPoint* start_point);
	void SetLightColour(ELightColour Colour);
	void SetInvestigationStrings(const class FString& IS_InfoTitle, const class FString& IS_Info);
	void ApplyXrayMat(class UMaterialInstanceConstant* NewXrayMat);
	void SetXrayMeshLevel(bool optionalBForce);
	void SetInXrayMode(bool On, bool bForceOff);
	void DifficultySetup();
	void SetDroneSpawner(class URSeqAct_SpawnDrone* SpawnAct);
	void ClearHighPriorityTargets();
	void AddHighPriorityTarget(class AActor* the_actor, float hz_radius, bool ignore_los);
};
// Class BmScript.RSeqAct_SpawnDrone
// 0x003C (0x01B4 - 0x01F0)
class URSeqAct_SpawnDrone : public URSeqAct_SpawnDroneBase
{
public:
	class ARPatrolPoint*                               PatrolStart;                                   // 0x01B4 (0x0008) [0x0000000000000000]               
	class AActor*                                      SpawnPoint;                                    // 0x01BC (0x0008) [0x0000000000000000]               
	class ARHelicopterIntermediate*                    SpawnedDrone;                                  // 0x01C4 (0x0008) [0x0000000000000000]               
	class ARHelicopterIntermediate*                    ArchetypeToSpawn;                              // 0x01CC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URThreatBaseAsset*                           ThreatAsset;                                   // 0x01D4 (0x0008) [0x0000000000000000]               
	class ARDroneChaseVolume*                          ChaseVolumeBounds;                             // 0x01DC (0x0008) [0x0000000000000000]               
	class ARDummyTarget*                               KnockbackSentryLookAtDefault;                  // 0x01E4 (0x0008) [0x0000000000000000]               
	uint32_t                                           setBAllowedToChatter : 1;                      // 0x01EC (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           KnockbackSentry : 1;                           // 0x01EC (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           DisableSpotlightSweep : 1;                     // 0x01EC (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SpawnDrone");
		}

		return uClassPointer;
	};


	void NotifyDestroyed();
	void NotifyBlinded();
	void NotifyHitByDisruptor();
	void eventActivated();
	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RHelicopterRocket
// 0x009C (0x0300 - 0x039C)
class ARHelicopterRocket : public ARHelicopterRocketBase
{
public:
	class UParticleSystemComponent*                    ExplosionFX;                                   // 0x0300 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    FuseFX;                                        // 0x0308 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ExplosionRadius;                               // 0x0310 (0x0004) [0x0000000000000000]               
	float                                              explosionDamage;                               // 0x0314 (0x0004) [0x0000000000000000]               
	float                                              explosionImpulse;                              // 0x0318 (0x0004) [0x0000000000000000]               
	float                                              Lifetime;                                      // 0x031C (0x0004) [0x0000000000000000]               
	float                                              fPlayerPromiximityProportionForAutoExplode;    // 0x0320 (0x0004) [0x0000000000000000]               
	uint32_t                                           bExploded : 1;                                 // 0x0324 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHitBatman : 1;                                // 0x0324 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           FuseFired : 1;                                 // 0x0324 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bTargetPlayer : 1;                             // 0x0324 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bLowDetail : 1;                                // 0x0324 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bNeedToDisableCollision : 1;                   // 0x0324 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           RocketFloorEnabled : 1;                        // 0x0324 (0x0004) [0x0000000000000000] [0x00000040] 
	class ARPlayerController*                          RPC;                                           // 0x0328 (0x0008) [0x0000000000000000]               
	class ARHelicopterIntermediate*                    Helicopter;                                    // 0x0330 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ExplodeEvent;                                  // 0x0338 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    EngineWhooshEvent;                             // 0x0340 (0x0008) [0x0000000000000000]               
	struct FVector                                     RocketDirection;                               // 0x0348 (0x000C) [0x0000000000000000]               
	struct FVector                                     FlightTarget;                                  // 0x0354 (0x000C) [0x0000000000000000]               
	struct FVector                                     WaypointTarget;                                // 0x0360 (0x000C) [0x0000000000000000]               
	float                                              WaypointRangeSq;                               // 0x036C (0x0004) [0x0000000000000000]               
	float                                              RocketTurnRate;                                // 0x0370 (0x0004) [0x0000000000000000]               
	float                                              FlightSpeed;                                   // 0x0374 (0x0004) [0x0000000000000000]               
	float                                              FlightSpeedMax;                                // 0x0378 (0x0004) [0x0000000000000000]               
	float                                              GravityAcceleration;                           // 0x037C (0x0004) [0x0000000000000000]               
	struct FVector                                     InitialMomentum;                               // 0x0380 (0x000C) [0x0000000000000000]               
	float                                              MomentumCountdown;                             // 0x038C (0x0004) [0x0000000000000000]               
	float                                              PostFireGravityPeriod;                         // 0x0390 (0x0004) [0x0000000000000000]               
	float                                              fPlayerLockonDistance;                         // 0x0394 (0x0004) [0x0000000000000000]               
	float                                              RocketFloor;                                   // 0x0398 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHelicopterRocket");
		}

		return uClassPointer;
	};


	void RemoveRocket();
	void eventHurtBatman();
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void eventHitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp);
	void eventHitLevel(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Explode(const struct FRotator& HitRotator);
	void InitialiseRocket();
	void eventTick(float DeltaTime);
	void UpdateMoveTarget(float DeltaTime);
	void SetLowDetailNoCollision();
	void SetRocketFloor(float FloorValue);
	void SetWaypoint(const struct FVector& Waypoint, float optionalRangeForReached);
	void AutoWaypoint(bool LeftSide, float optionalMinDistHoriz, float optionalRangeDistHoriz, float optionalRangeDistVert, float optionalRangeForReached);
	void CheckDistanceToTargets();
};
// Class BmScript.RHidePointLineLauncher_RopeComponent
// 0x0000 (0x02A8 - 0x02A8)
class URHidePointLineLauncher_RopeComponent : public URHidePointRope_RopeComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHidePointLineLauncher_RopeComponent");
		}

		return uClassPointer;
	};

};
// Class BmScript.RHidePoint_LineLauncherWire
// 0x0000 (0x0570 - 0x0570)
class ARHidePoint_LineLauncherWire : public ARHidePoint_RopeBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHidePoint_LineLauncherWire");
		}

		return uClassPointer;
	};


	void SetPerfectConcealment(bool bNewPerfectConcealment);
	void eventAttach(class AActor* Other);
	void SetLightEnvironmentBounds(const struct FBoxSphereBounds& Bounds);
	void eventTick(float DeltaTime);
	void eventDestroyed();
	void eventBump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	void DestroyLLWire();
	void BMLeft();
};
// Class BmScript.RPawnPlayerBm
// 0x006C (0x280C - 0x2878)
class ARPawnPlayerBm : public ARPawnPlayerBmBase
{
public:
	float                                              OverrideWalkSpeed;                             // 0x280C (0x0004) [0x0000000000000000]               
	float                                              OverrideRunSpeed;                              // 0x2810 (0x0004) [0x0000000000000000]               
	float                                              OverrideStealthSpeed;                          // 0x2814 (0x0004) [0x0000000000000000]               
	uint32_t                                           bTempDebugReAddDefaultInventory : 1;           // 0x2818 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           TurningFingersOn : 1;                          // 0x2818 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           TurningFingersOff : 1;                         // 0x2818 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bFingersAttached : 1;                          // 0x2818 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bSwitchCharInXRay : 1;                         // 0x2818 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bRadioModeEyes : 1;                            // 0x2818 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bInvestigateModeEyes : 1;                      // 0x2818 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              CloakingDuration;                              // 0x281C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CloakingBlend;                                 // 0x2820 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInstanceConstant*                   FaceMaterial;                                  // 0x2824 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   CloakingMaterial;                              // 0x282C (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      FingersMesh;                                   // 0x2834 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      CloakingAuraCapeMesh;                          // 0x283C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      CloakingAuraSecondaryMesh;                     // 0x2844 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      CloakingAuraMesh;                              // 0x284C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UClass*                                      IceSphereClass;                                // 0x2854 (0x0008) [0x0000000000000000]               
	class TArray<class ARFreezeBlastIceSphere*>        IceSpheres;                                    // 0x285C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            MaxIceSpheres;                                 // 0x286C (0x0004) [0x0000000000000001] (CPF_Const)   
	float                                              CurrentFingerTime;                             // 0x2870 (0x0004) [0x0000000000000000]               
	float                                              RadioEyeLevel;                                 // 0x2874 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnPlayerBm");
		}

		return uClassPointer;
	};


	class UAnimSet* GetSuperStunAnimSet(bool bHasWeapon);
	void CrackCommanderScreen();
	bool IsBatmanInsideWhipRappelVolume();
	class FName GetPylonReactionName();
	class UAnimSet* GetPipeCombatAnimset();
	void GetFailedPairedAnimMoveAnimset(class ARPawnCombat* OtherPawn, class UAnimSet*& outMyAnimset);
	void BreakNewGamePlusLine();
	void PlayWouldBreakNewGamePlusLine();
	void SpawnBatclawRedirect(class ARPawnCombat* TargetPawn);
	void SpawnSuperBatclawSlam(class ARPawnCombat* TargetPawn, class UClass* dmgType);
	void SpawnBatclawSlam(class ARPawnCombat* TargetPawn, class UClass* dmgType);
	void PlayedRedHoodGadgetLine();
	void TriedToUseGadgetOnRedHood();
	void PlayedHostageInDangerLine();
	void TriedToUseGadgetOnHostageTaker();
	int32_t GetUnlockedMeleeArmourLevel();
	int32_t GetUnlockedBallisticArmourLevel();
	void SetPersistentMeleeArmour(int32_t armour);
	void SetPersistentBallisticArmour(int32_t armour);
	int32_t GetPersistentMeleeArmour();
	int32_t GetPersistentBallisticArmour();
	void GiveUnlockableGadget(const class FName& UnlockName);
	void ThrowFatalBatarang(class ARPawnVillain* Victim, const struct FVector& TargetLocation);
	class UClass* UpdateInvClass(class UClass* InvClass);
	void InvestigateModeEyes(bool bOnOrOff);
	void RadioModeEyesAndEffects(bool bOnOrOff);
	void UpdateRadioEyes(float DeltaTime);
	void InvestigateModeEyesInternal(bool bOnOrOff);
	void eventEyeMaterialUpdated();
	void UnPossessed();
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void SetSwitchCharacterInXray(bool On, bool bForceOff);
	void TakeFallingDamage();
	void DebugGiveFreezeBlast();
	void DebugGiveAllGadgets();
	void AddDefaultInventoryAfterInit();
	void AddDefaultInventory();
	void SetOwnerNoSee(bool bNewOwnerNoSee);
	void OnPlayerHasBeenMoved();
	class USkeletalMeshComponent* AttachTransparentSkeletalMesh(class USkeletalMesh* SkeletalMesh, class USkeletalMeshComponent* ParentAnimComponent, class UMaterialInterface* optionalOverrideMaterial);
	void RemoveCloakingAura();
	void ActivateCloakingAura(class UMaterialInterface* AuraMat);
	void TriggerHeatConcealEffect();
	void Tick(float DeltaTime);
	class AFogVolumeSphericalDensityInfo* SpawnIceSphere(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SetupPlayerSpecificCombatAnimsets();
	void PostBeginPlay();
	bool CheckDemonDeath(class AActor* HitObj);
	void PlayZappedEmote();
	void UpdateFingers(float DeltaTime);
	void DetachScanFingers();
	void AttachScanFingers();
	void eventEndFingerEffectInstant();
	void eventEndFingerEffect();
	void eventDoFingerEffect();
	bool CanDoSecondaryGroupCombatMove();
	void eventPreBeginPlay();
};
// Class BmScript.RPawnPlayer_Azrael
// 0x0014 (0x2878 - 0x288C)
class ARPawnPlayer_Azrael : public ARPawnPlayerBm
{
public:
	float                                              lastEmoteWhenHurtTime;                         // 0x2878 (0x0004) [0x0000000000000400] (CPF_Transient)
	class TArray<class USkeletalMeshComponent*>        XrayMaskExtraMeshes;                           // 0x287C (0x0010) [0x0000004000014004] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnPlayer_Azrael");
		}

		return uClassPointer;
	};


	bool eventCanPerformFearTakedowns();
	void eventTakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	bool CanDoThrowCounter();
	void DebugGiveAllGadgets();
	void AddDefaultInventory();
	void SetSwitchCharacterInXray(bool On, bool bForceOff);
	void SetInXrayMode(bool On, bool bForceOff);
	void PostBeginPlay();
};
// Class BmScript.RIncendiaryGrenadeCharge
// 0x003C (0x02C0 - 0x02FC)
class ARIncendiaryGrenadeCharge : public ARIncendiaryGrenadeCharge_Base
{
public:
	class ARTunnelGrateBase*                           Grate;                                         // 0x02C0 (0x0008) [0x0000000000000000]               
	class ARAEC_IncendiaryStartle*                     IncendiaryStartleAEC;                          // 0x02C8 (0x0008) [0x0000000000000000]               
	class URBMRoomAIState*                             RoomState;                                     // 0x02D0 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    endCapFire;                                    // 0x02D8 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    FireFX;                                        // 0x02E0 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    gasFX;                                         // 0x02E8 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              DamagePerSecond;                               // 0x02F0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              grateTravelTime;                               // 0x02F4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bOpenAbove : 1;                                // 0x02F8 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RIncendiaryGrenadeCharge");
		}

		return uClassPointer;
	};


	void SetAudioState(EeIncendiaryGrenadeState AudioState);
	void eventDestroyed();
	bool IsValidIncendiaryStartleThug(class ARPawnVillain* TestThug);
	void FindIncendiaryStartleThugs(class TArray<class ARPawnVillain*>& outThugList);
	void TryStartleThugs();
	void ExtinguishFire();
	void IgniteGas();
	void SpawnGas();
	void eventTick(float DeltaTime);
	void Init(int32_t distFromBlast, class ARTunnelGrateBase* grateAbove, ESceneDepthPriorityGroup DPG, const struct FVector& optionalFromLoc, bool optionalOpenAbove);
	void eventPostBeginPlay();
};
// Class BmScript.RJammerGadgetBm
// 0x0000 (0x092C - 0x092C)
class ARJammerGadgetBm : public ARJammerGadget
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RJammerGadgetBm");
		}

		return uClassPointer;
	};

};
// Class BmScript.RLineLauncherBm
// 0x0000 (0x09A0 - 0x09A0)
class ARLineLauncherBm : public ARLineLauncher
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLineLauncherBm");
		}

		return uClassPointer;
	};


	void FireDualProjectiles();
	class UAkEvent* GetImpactAudioEvent(EAkWorldMaterial Mat);
	void PostBeginPlay();
};
// Class BmScript.RLineLauncherProjectile
// 0x0000 (0x0354 - 0x0354)
class ARLineLauncherProjectile : public ARProjectileWithRope
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLineLauncherProjectile");
		}

		return uClassPointer;
	};


	void ReachedDest();
	void eventPostBeginPlay();
};
// Class BmScript.RMagBlastLight
// 0x0018 (0x029C - 0x02B4)
class ARMagBlastLight : public AActor
{
public:
	float                                              Brightness;                                    // 0x029C (0x0004) [0x0000000000000000]               
	float                                              CurrentRadius;                                 // 0x02A0 (0x0004) [0x0000000000000000]               
	float                                              MaxRadius;                                     // 0x02A4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UPointLightComponent*                        CheapLightComponent;                           // 0x02A8 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FColor                                      LightColor;                                    // 0x02B0 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RMagBlastLight");
		}

		return uClassPointer;
	};


	void UpdateLight(float DeltaTime, const struct FVector& Position, float NewRadius, float Power);
	void StartLight();
	void PostBeginPlay();
};
// Class BmScript.RMagneticBlastBm
// 0x0000 (0x0A08 - 0x0A08)
class ARMagneticBlastBm : public ARMagneticBlast
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RMagneticBlastBm");
		}

		return uClassPointer;
	};


	class UAkEvent* GetImpactAudioEvent(EAkWorldMaterial Mat);
	void PostBeginPlay();
};
// Class BmScript.RMagneticBlastReceiverBm
// 0x000C (0x04C4 - 0x04D0)
class ARMagneticBlastReceiverBm : public ARMagneticBlastReceiver
{
public:
	uint32_t                                           bDebugLight : 1;                               // 0x04C4 (0x0004) [0x0000000000000000] [0x00000001] 
	class ARMagBlastLight*                             Light;                                         // 0x04C8 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RMagneticBlastReceiverBm");
		}

		return uClassPointer;
	};


	void Destroyed();
	void Tick(float DeltaTime);
	void SpawnLight();
	void GetActorThoughts(const class FString& optionalIndentString, class TArray<struct FThought>& outThoughtList, struct FVector& outThoughtLocationOverride);
	void SuperComboBlast(class ARPawnVillain* Victim);
	void Detonate();
	void PostBeginPlay();
};
// Class BmScript.RSmokeBombBm
// 0x0000 (0x0A44 - 0x0A44)
class ARSmokeBombBm : public ARSmokeBomb
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSmokeBombBm");
		}

		return uClassPointer;
	};

};
// Class BmScript.RRHDBm
// 0x0000 (0x0A00 - 0x0A00)
class ARRHDBm : public ARRHD
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RRHDBm");
		}

		return uClassPointer;
	};


	void ConversationReTriggerTimeout();
	void PlayCodesNeededDialogue();
};
// Class BmScript.RVoiceSynthesiserBm
// 0x0003 (0x0A41 - 0x0A44)
class ARVoiceSynthesiserBm : public ARVoiceSynthesiser
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVoiceSynthesiserBm");
		}

		return uClassPointer;
	};

};
// Class BmScript.RResonatorTunerBm
// 0x0000 (0x099C - 0x099C)
class ARResonatorTunerBm : public ARResonatorTuner
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RResonatorTunerBm");
		}

		return uClassPointer;
	};


	void ConversationReTriggerTimeout();
	void PlayCodesNeededDialogue();
};
// Class BmScript.RPawnVillainMilitiaCaptain
// 0x0034 (0x1A28 - 0x1A5C)
class ARPawnVillainMilitiaCaptain : public ARPawnVillainThug
{
public:
	class TArray<class URSpecialMoveConfig*>           DestroyMineController;                         // 0x1A28 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class URSpecialMoveConfig*                         DestroyMineControllerNoCamera;                 // 0x1A38 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ProximitySFX;                                  // 0x1A40 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    ControllerDevicePFX;                           // 0x1A48 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MineControllerIndex;                           // 0x1A50 (0x0004) [0x0000000000000000]               
	float                                              InteractRange;                                 // 0x1A54 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDMVisThroughWalls_Suppressed : 1;             // 0x1A58 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDMVisThroughWalls_Old : 1;                    // 0x1A58 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainMilitiaCaptain");
		}

		return uClassPointer;
	};


	void eventSuppressDetectiveModeVisibilityThroughWalls(bool bSuppress);
	void UnregisterDMThroughWallsSuppressable();
	void RegisterDMThroughWallsSuppressable();
	void eventDestroyed();
	void eventPreStreamOut();
	void PostBeginPlay();
	void eventPostInitCharacter();
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void Mine_Controller_Crushed();
	void HideMineController();
	void AttachProps();
	void AddPawnProps();
	class FString GetPrompt(class APlayerController* PC);
	float GetRange();
	void Interact(class ARPlayerController* PC);
	bool IsActive(class ARPlayerController* PC);
	bool ActiveCombatantsIncludesSpawnedThug();
	struct FVector GetLocationOffset();
	void StopScreenBeep();
};
// Class BmScript.RPawnVillainMilitiaCaptainPred
// 0x0034 (0x1A98 - 0x1ACC)
class ARPawnVillainMilitiaCaptainPred : public ARPawnVillainGunPredFull
{
public:
	class TArray<class URSpecialMoveConfig*>           DestroyMineController;                         // 0x1A98 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class URSpecialMoveConfig*                         DestroyMineControllerNoCamera;                 // 0x1AA8 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ProximitySFX;                                  // 0x1AB0 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    ControllerDevicePFX;                           // 0x1AB8 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MineControllerIndex;                           // 0x1AC0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlockInteract : 1;                            // 0x1AC4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              InteractRange;                                 // 0x1AC8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainMilitiaCaptainPred");
		}

		return uClassPointer;
	};


	void OnToggle(class USeqAct_Toggle* Action);
	float GetRange();
	void eventPostInitCharacter();
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void Mine_Controller_Crushed();
	void HideMineController();
	void AttachProps();
	void AddPawnProps();
	class FString GetPrompt(class APlayerController* PC);
	void Interact(class ARPlayerController* PC);
	bool IsActive(class ARPlayerController* PC);
	bool ActiveCombatantsIncludesSpawnedThug();
	struct FVector GetLocationOffset();
	void StopScreenBeep();
};
// Class BmScript.RStealthTakedownStage_ChainTakedown_FearFromAbove
// 0x0034 (0x0680 - 0x06B4)
class ARStealthTakedownStage_ChainTakedown_FearFromAbove : public ARStealthTakeDownStage
{
public:
	ETakedownFeature_Type                              TakedownFeatureType;                           // 0x0680 (0x0001) [0x0000000000000000]               
	EStealthTakeDownStages                             OnSpotNextStage;                               // 0x0681 (0x0001) [0x0000000000000000]               
	class TArray<class FName>                          PlayerAnimationsByType;                        // 0x0684 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FName>                          PlayerOnSpotAnimationsByType;                  // 0x0694 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        VictimFrontAnimation;                          // 0x06A4 (0x0008) [0x0000000000000000]               
	class FName                                        VictimBackAnimation;                           // 0x06AC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_ChainTakedown_FearFromAbove");
		}

		return uClassPointer;
	};


	void GotoStage(EStealthTakeDownStages NextStageClass);
	void FireGrapple();
	void Begin();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakedownStage_ChainTakedown_FearFromAboveEnd
// 0x0000 (0x0734 - 0x0734)
class ARStealthTakedownStage_ChainTakedown_FearFromAboveEnd : public ARStealthTakedownStage_ChainTakedown_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_ChainTakedown_FearFromAboveEnd");
		}

		return uClassPointer;
	};


	void FinishGrapple();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakedownStage_ChainTakedown_FearFromAboveOnSpotEnd
// 0x0000 (0x0734 - 0x0734)
class ARStealthTakedownStage_ChainTakedown_FearFromAboveOnSpotEnd : public ARStealthTakedownStage_ChainTakedown_FearFromAboveEnd
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_ChainTakedown_FearFromAboveOnSpotEnd");
		}

		return uClassPointer;
	};


	int32_t GetStageAnim();
};
// Class BmScript.RStealthTakedownStage_SilentFromAboveEndSuccess
// 0x0000 (0x0734 - 0x0734)
class ARStealthTakedownStage_SilentFromAboveEndSuccess : public ARStealthTakedownStage_ChainTakedown_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_SilentFromAboveEndSuccess");
		}

		return uClassPointer;
	};


	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakedownStage_ChainTakedown_GrappleBoostTakedown
// 0x0000 (0x0734 - 0x0734)
class ARStealthTakedownStage_ChainTakedown_GrappleBoostTakedown : public ARStealthTakedownStage_ChainTakedown_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_ChainTakedown_GrappleBoostTakedown");
		}

		return uClassPointer;
	};


	bool FinishAttackVictim(int32_t iVictimNumber);
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakedownStage_ChainTakedown_LineLauncherAttack
// 0x0000 (0x0734 - 0x0734)
class ARStealthTakedownStage_ChainTakedown_LineLauncherAttack : public ARStealthTakedownStage_ChainTakedown_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_ChainTakedown_LineLauncherAttack");
		}

		return uClassPointer;
	};


	bool FinishAttackVictim(int32_t iVictimNumber);
	void TurnOffRopes();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
	void OverrideChosenAnim(int32_t& outAnim);
};
// Class BmScript.RStealthTakeDownStage_BmDoubleTunnelGrateGrab
// 0x0000 (0x0734 - 0x0734)
class ARStealthTakeDownStage_BmDoubleTunnelGrateGrab : public ARStealthTakeDownStageDoubleBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakeDownStage_BmDoubleTunnelGrateGrab");
		}

		return uClassPointer;
	};


	void StartFearTakedownFinaleCamera();
	void GotoStage(EStealthTakeDownStages NextStageClass);
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakeDownStage_BmDoubleTunnelGrateGrabEnd
// 0x001C (0x0734 - 0x0750)
class ARStealthTakeDownStage_BmDoubleTunnelGrateGrabEnd : public ARStealthTakeDownStageDoubleBase
{
public:
	uint32_t                                           bUseEnvironment : 1;                           // 0x0734 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     EnvironmentRefLocation;                        // 0x0738 (0x000C) [0x0000000000000000]               
	struct FRotator                                    EnvironmentRefRotation;                        // 0x0744 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakeDownStage_BmDoubleTunnelGrateGrabEnd");
		}

		return uClassPointer;
	};


	bool FinishAttackVictim(int32_t iVictimNumber);
	void SwitchToFinalCamera();
	void Begin();
	void OverrideChosenAnim(int32_t& outAnim);
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
	int32_t GetStageAnim();
};
// Class BmScript.RStealthTakeDownStage_HidePointGrateAbove
// 0x0014 (0x0680 - 0x0694)
class ARStealthTakeDownStage_HidePointGrateAbove : public ARStealthTakeDownStage
{
public:
	class ARHidePoint_GrateBase*                       CeilingGrate;                                  // 0x0680 (0x0008) [0x0000000000000000]               
	struct FRotator                                    rGrateOpenRotation;                            // 0x0688 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakeDownStage_HidePointGrateAbove");
		}

		return uClassPointer;
	};


	void PlayGrateAnim();
	int32_t GetStageAnim();
	void Begin();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakeDownStage_ChainTakedown_HidePointGrateAbove
// 0x0000 (0x0694 - 0x0694)
class ARStealthTakeDownStage_ChainTakedown_HidePointGrateAbove : public ARStealthTakeDownStage_HidePointGrateAbove
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakeDownStage_ChainTakedown_HidePointGrateAbove");
		}

		return uClassPointer;
	};


	void GotoStage(EStealthTakeDownStages NextStageClass);
};
// Class BmScript.RStealthTakeDownStage_ChainTakedown_HidePointGrateAboveEnd
// 0x0008 (0x0734 - 0x073C)
class ARStealthTakeDownStage_ChainTakedown_HidePointGrateAboveEnd : public ARStealthTakedownStage_ChainTakedown_Base
{
public:
	class ARHidePoint_GrateBase*                       flipGrate;                                     // 0x0734 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakeDownStage_ChainTakedown_HidePointGrateAboveEnd");
		}

		return uClassPointer;
	};


	bool FinishAttackVictim(int32_t iVictimNumber);
	void BackToPlayerCamera();
	void PlayGrateAnim();
	int32_t GetStageAnim();
	void Begin();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakedownStage_SilentFromAbove
// 0x0024 (0x0680 - 0x06A4)
class ARStealthTakedownStage_SilentFromAbove : public ARStealthTakeDownStage
{
public:
	ETakedownFeature_Type                              TakedownFeatureType;                           // 0x0680 (0x0001) [0x0000000000000000]               
	class TArray<class FName>                          PlayerAnimationsByType;                        // 0x0684 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        VictimFrontAnimation;                          // 0x0694 (0x0008) [0x0000000000000000]               
	class FName                                        VictimBackAnimation;                           // 0x069C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_SilentFromAbove");
		}

		return uClassPointer;
	};


	bool BlockPlayerFromForceCrouching();
	void FireGrapple();
	void Begin();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakedownStage_SilentFromAboveEnd
// 0x0024 (0x06A4 - 0x06C8)
class ARStealthTakedownStage_SilentFromAboveEnd : public ARStealthTakedownStageQuickBase
{
public:
	class FName                                        nFoundFreeSpotAnimation;                       // 0x06A4 (0x0008) [0x0000000000000000]               
	uint32_t                                           bFoundRagdollFreeZone : 1;                     // 0x06AC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAlreadyGotReferencePosition : 1;              // 0x06AC (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     vPreviousReferencePosition;                    // 0x06B0 (0x000C) [0x0000000000000000]               
	struct FRotator                                    rPreviousReferenceRotation;                    // 0x06BC (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_SilentFromAboveEnd");
		}

		return uClassPointer;
	};


	bool BlockPlayerFromForceCrouching();
	bool FinishAttackVictim(int32_t iVictimNumber);
	void GotoStageEx(EStealthTakeDownStages NextStageClass, bool optionalBClientRequest, const struct FEnvironmentSpecialMoveLocator& optionalEscapeLoc, bool optionalBEscapeTakedown, bool optionalBNextStageIsFearTakedown, bool optionalBNextStageIsKnockoutSmash);
	void Cancel(bool optionalSetState, bool optionalBAbandonVictims, bool optionalBResetPlayerPose);
	void FinishGrapple();
	void OverrideChosenAnim(int32_t& outAnim);
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakeDownStage_BmTunnelGrateGrab
// 0x0000 (0x0680 - 0x0680)
class ARStealthTakeDownStage_BmTunnelGrateGrab : public ARStealthTakeDownStage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakeDownStage_BmTunnelGrateGrab");
		}

		return uClassPointer;
	};


	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakedownStage_GlideBoostTackle
// 0x000C (0x0680 - 0x068C)
class ARStealthTakedownStage_GlideBoostTackle : public ARStealthTakeDownStage_FallingTakeDown
{
public:
	float                                              BowlingRadius;                                 // 0x0680 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              BowlingImpulse;                                // 0x0684 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           DoGroundCorrection : 1;                        // 0x0688 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_GlideBoostTackle");
		}

		return uClassPointer;
	};


	class FName GetWritheAnim();
	bool FinishAttackVictim(int32_t iVictimNumber);
	void NotifyBump(class AActor* Other, const struct FVector& HitNormal);
	void Tick(float DeltaTime);
	void Cancel(bool optionalSetState, bool optionalBAbandonVictims, bool optionalBResetPlayerPose);
	void Begin();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
	int32_t GetStageAnim();
};
// Class BmScript.RStealthTakedownStage_SuperGlideTakedown
// 0x001C (0x068C - 0x06A8)
class ARStealthTakedownStage_SuperGlideTakedown : public ARStealthTakedownStage_GlideBoostTackle
{
public:
	class TArray<class ARPawnVillain*>                 AttackTargets;                                 // 0x068C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class AEmitter*                                    TrailEmitter;                                  // 0x069C (0x0008) [0x0000000000000400] (CPF_Transient)
	int32_t                                            KOdVillains;                                   // 0x06A4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_SuperGlideTakedown");
		}

		return uClassPointer;
	};


	void FinishAttackAttacker();
	void Cancel(bool optionalSetState, bool optionalBAbandonVictims, bool optionalBResetPlayerPose);
	bool FinishAttackVictim(int32_t iVictimNumber);
	void Tick(float DeltaTime);
	void Begin();
	int32_t GetStageAnim();
};
// Class BmScript.RStealthTakedownStage_GrappleBoostTakedown
// 0x0000 (0x0680 - 0x0680)
class ARStealthTakedownStage_GrappleBoostTakedown : public ARStealthTakeDownStage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_GrappleBoostTakedown");
		}

		return uClassPointer;
	};


	bool FinishAttackVictim(int32_t iVictimNumber);
	void Begin();
	void eventTick(float DeltaTime);
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakedownStage_LineLauncherAttack
// 0x0000 (0x0680 - 0x0680)
class ARStealthTakedownStage_LineLauncherAttack : public ARStealthTakeDownStage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_LineLauncherAttack");
		}

		return uClassPointer;
	};


	bool FinishAttackVictim(int32_t iVictimNumber);
	void TurnOffRopes();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
	void OverrideChosenAnim(int32_t& outAnim);
};
// Class BmScript.RStealthTakeDownStage_BmTunnelGrateGrabEnd
// 0x0000 (0x06A4 - 0x06A4)
class ARStealthTakeDownStage_BmTunnelGrateGrabEnd : public ARStealthTakedownStageQuickBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakeDownStage_BmTunnelGrateGrabEnd");
		}

		return uClassPointer;
	};


	void PlayGrateAnim();
	void SwitchToFinalCamera();
	void Begin();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RStealthTakedownStage_BmTunnelGrateAlignedFinish
// 0x0008 (0x0680 - 0x0688)
class ARStealthTakedownStage_BmTunnelGrateAlignedFinish : public ARStealthTakeDownStage
{
public:
	class ARPawnPlayer*                                Attacker;                                      // 0x0680 (0x0008) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_BmTunnelGrateAlignedFinish");
		}

		return uClassPointer;
	};


	bool FinishAttackVictim(int32_t iVictimNumber);
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
	void Begin();
};
// Class BmScript.RStealthTakedownStage_GrateInvertedTakedown
// 0x0000 (0x0680 - 0x0680)
class ARStealthTakedownStage_GrateInvertedTakedown : public ARStealthTakeDownStage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_GrateInvertedTakedown");
		}

		return uClassPointer;
	};


	void FireGrapple();
	int32_t GetStageAnim();
	bool PlaySpecialCameraAnim(const class FName& AnimName, bool bCamMirrored, bool optionalCameraCollision, float optionalFOV, class UAnimSet* optionalCustomAnimSet, float optionalBlendTime, bool optionalBBlendCameraBackToPlayerCameraWhenFinished, bool optionalBUseBatmanAsCameraCollisionTargetInsteadOfVictim);
	void AttackerDamaged();
	void Begin();
	void CalcRopeLength();
};
// Class BmScript.RStealthTakedownStage_GrateInvertedTakedownEnd
// 0x0020 (0x0680 - 0x06A0)
class ARStealthTakedownStage_GrateInvertedTakedownEnd : public ARStealthTakeDownStage
{
public:
	class FName                                        RopeBoneAttachName;                            // 0x0680 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              RopeAttachConnectionDistance;                  // 0x0688 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FRopeExtraAttachConnection>    RopeExtraAttachConnections;                    // 0x068C (0x0010) [0x0000000100014000] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	uint32_t                                           bConstraintAttached : 1;                       // 0x069C (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint32_t                                           bUseRopeAtEnd : 1;                             // 0x069C (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_GrateInvertedTakedownEnd");
		}

		return uClassPointer;
	};


	void GrappleStopSound();
	void GrappleStartSound();
	void FinishGrapple();
	class FName GetFinishState();
	void AttackerDamaged();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
	bool ResetCameraBehindBatman(struct FRotator& optionalOutOut_ResetRotation);
	void Begin();
	void HideMove(class ARHidePoint* NewHidePoint, float TravelTime, class ARPawnPlayer* Pawn);
	void End(bool optionalBLastStage);
	bool FinishAttackVictim(int32_t iVictimNumber);
	class FName GetWritheAnim();
	void ServerCreateRope();
};
// Class BmScript.RStealthTakeDownStage_HidePointGrateAboveEnd
// 0x0008 (0x0680 - 0x0688)
class ARStealthTakeDownStage_HidePointGrateAboveEnd : public ARStealthTakeDownStage
{
public:
	class ARHidePoint_GrateBase*                       flipGrate;                                     // 0x0680 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakeDownStage_HidePointGrateAboveEnd");
		}

		return uClassPointer;
	};


	bool FinishAttackVictim(int32_t iVictimNumber);
	void BackToPlayerCamera();
	void PlayGrateAnim();
	int32_t GetStageAnim();
	void Begin();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
};
// Class BmScript.RSentryGun
// 0x0010 (0x060C - 0x061C)
class ARSentryGun : public ARSentryGunBase
{
public:
	class ARSentryGunLights*                           lightsArchetype;                               // 0x060C (0x0008) [0x0000000000000000]               
	uint32_t                                           bFiringComponentsAttached : 1;                 // 0x0614 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAllowedInChallengeMode : 1;                   // 0x0614 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bValidVoiceSynthesiserTarget : 1;              // 0x0614 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bDMVisThroughWalls_Suppressed : 1;             // 0x0614 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDMVisThroughWalls_Old : 1;                    // 0x0614 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              SelfDestructTimer;                             // 0x0618 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSentryGun");
		}

		return uClassPointer;
	};


	void Interact(class ARPlayerController* PC);
	void eventSuppressDetectiveModeVisibilityThroughWalls(bool bSuppress);
	void UnregisterDMThroughWallsSuppressable();
	void RegisterDMThroughWallsSuppressable();
	void eventDetachFiringComponents();
	void eventAttachFiringComponents();
	void eventDestroyed();
	void eventPreStreamOut();
	void DestroyPlayerIceRaft(class ARPawnPlayer* Player);
	void eventTriggerShootingSeqEvent(bool bStartedShooting);
	void Tick(float DeltaTime);
	void PropagateMeshDPGToComponents();
	void PostBeginPlay_Delayed();
	void PostBeginPlay();
};
// Class BmScript.RProjectile_Grenade_Incendiary
// 0x182C (0x0404 - 0x1C30)
class ARProjectile_Grenade_Incendiary : public ARProjectile_Grenade
{
public:
	int32_t                                            Range;                                         // 0x0404 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<int32_t>                              shortestDistToSpawnedCharges;                  // 0x0408 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bDrawDebug : 1;                                // 0x0418 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTriggeredExplodedCallback : 1;                // 0x0418 (0x0004) [0x0000000000000000] [0x00000002] 
	class USkeletalMeshComponent*                      SkelMeshComp;                                  // 0x041C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FchargeInfo                                 chargeInfoList[64];                            // 0x0424 (0x1800) [0x0000000000000000]               
	int32_t                                            numChargesSpawned;                             // 0x1C24 (0x0004) [0x0000000000000000]               
	int32_t                                            numChargesInList;                              // 0x1C28 (0x0004) [0x0000000000000000]               
	int32_t                                            currentDepth;                                  // 0x1C2C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RProjectile_Grenade_Incendiary");
		}

		return uClassPointer;
	};


	void eventDestroyed();
	bool CheckLocationForCharge(const struct FVector& CheckLoc);
	class ARIncendiaryGrenadeCharge* DeployCharge_OpenSpace(const struct FVector& prevLoc, const struct FVector& currentLoc, int32_t Depth, struct FVector toNeighbourOffsets[4]);
	class ARIncendiaryGrenadeCharge* DeployCharge_Grate(class ARTunnelGrateBase* currentGrate, int32_t Depth);
	void SpawnCharges();
	void AddToList_OpenSpace(const struct FVector& prevLoc, const struct FVector& currentLoc, int32_t Depth, struct FVector toNeighbourOffsets[4]);
	void AddToList_Grate(class ARTunnelGrateBase* Grate, int32_t Depth);
	void GetOffsetsFromNorthRot(const struct FRotator& NorthRot, struct FVector* outToNeighbourOffsets_4);
	void StopAudio();
	void DoBlast();
	void PostBeginPlay();
};
// Class BmScript.RVantageMine
// 0x0000 (0x0358 - 0x0358)
class ARVantageMine : public ARVantageMineBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVantageMine");
		}

		return uClassPointer;
	};

};
// Class BmScript.RPawnVillainGunMiniDroneController
// 0x0058 (0x1A98 - 0x1AF0)
class ARPawnVillainGunMiniDroneController : public ARPawnVillainGunPredFull
{
public:
	class FName                                        nHandBoneToAttachControllerTo;                 // 0x1A98 (0x0008) [0x0000000000000000]               
	class FName                                        nBeltSocketToAttachControllerTo;               // 0x1AA0 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               ControllerSkeletalMesh;                        // 0x1AA8 (0x0008) [0x0000000000000000]               
	class UPhysicsAsset*                               ControllerPhysicsAsset;                        // 0x1AB0 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   ControllerXrayMIC;                             // 0x1AB8 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   ControllerDisruptedXrayMIC;                    // 0x1AC0 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             JammedExplosionVFX;                            // 0x1AC8 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    JammedExplodeEvent;                            // 0x1AD0 (0x0008) [0x0000000000000000]               
	class ARDeferred_SpotLight_Shadowed_Spawnable*     LightArchetype;                                // 0x1AD8 (0x0008) [0x0000000000000000]               
	class ARDeferred_SpotLight_Shadowed_Spawnable*     lightInstance;                                 // 0x1AE0 (0x0008) [0x0000000000000000]               
	int32_t                                            iMiniDroneControllerIndex;                     // 0x1AE8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bMyMiniDroneHasExploded : 1;                   // 0x1AEC (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainGunMiniDroneController");
		}

		return uClassPointer;
	};


	int32_t GetEquipmentPropSkeletalsIndex();
	void InformOfDroneExploding();
	void CodesHaveFinishedDownloading();
	class ARHelicopterBase* FindMiniDrone();
	struct FVector GetControllerToMiniDroneLineStartLocation();
	bool HasDroneRemoteInHand();
	class ARHelicopterBase* GetMyMiniDrone();
	bool eventIsMinidroneController();
	void ThrowRemoteAway();
	bool HasRemoteBeenThrownAway();
	bool IsMiniDroneDisabledByREC();
	void MiniDroneRecoveredFromDisruptor();
	void MiniDroneHitByDisruptor();
	void SpawnJammedExplosion();
	void MiniDroneAttackingTarget();
	void MiniDroneFoundCasualty(class ARPawnVillain* Casualty);
	void GetDisruptedEquipmentLocationAndRotation(struct FVector& outVLocation, struct FRotator& outRRotation);
	void DisruptorDisableEquipment();
	void eventUnequipMiniDroneController();
	void eventEquipMiniDroneController();
	void RestoreDisruptorDisabledEquipment();
	class UAnimSet* GetDroneControllerAnimset();
	void AddPawnProps();
	void AttachProps();
	void PostBeginPlay();
};
// Class BmScript.RPredatorDroneMini
// 0x021C (0x0C4C - 0x0E68)
class ARPredatorDroneMini : public ARHelicopterIntermediate
{
public:
	class URSeqAct_SpawnDrone*                         m_hSpawner;                                    // 0x0C4C (0x0008) [0x0000000000000000]               
	class ARPawnVillainGunMiniDroneController*         m_hController;                                 // 0x0C54 (0x0008) [0x0000000000000000]               
	class ARPawnVillainGunPredBase*                    m_hArkhamKnightController;                     // 0x0C5C (0x0008) [0x0000000000000000]               
	class ARPatrolPoint*                               m_hBehaviorMeanderPatrolPoint;                 // 0x0C64 (0x0008) [0x0000000000000000]               
	class AActor*                                      m_hBehaviorInvestigateTarget;                  // 0x0C6C (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   m_XrayMIC_Normal;                              // 0x0C74 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   m_XrayMIC_Disrupted;                           // 0x0C7C (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   m_XrayMIC_Blinded;                             // 0x0C84 (0x0008) [0x0000000000000000]               
	class UAkDialogueSpeech*                           m_hCodesHaventBeenDownloadedYetThought;        // 0x0C8C (0x0008) [0x0000000000000000]               
	class AActor*                                      m_hSearchLightSpecifiedTarget;                 // 0x0C94 (0x0008) [0x0000000000000000]               
	class URInteractionClass*                          m_ExplosionCachedTargetClass;                  // 0x0C9C (0x0008) [0x0000000000000400] (CPF_Transient)
	class UAkEvent*                                    AudioMovementLoopingEvent;                     // 0x0CA4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    AudioDestroyEvent;                             // 0x0CAC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    AudioElectrocuteLoopingEvent;                  // 0x0CB4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    AudioAlarm;                                    // 0x0CBC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ZapClosePlayerSound;                           // 0x0CC4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystemComponent*                    m_MiniDroneToControllerLinePSC;                // 0x0CCC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URInteractionComponent*                      RHDInteractions;                               // 0x0CD4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    m_hElectricShield;                             // 0x0CDC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    m_hWeaponFlareEffect;                          // 0x0CE4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    m_hWeaponPowerUpEffect;                        // 0x0CEC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           m_bBehaviorMeanderReturnToPath : 1;            // 0x0CF4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bBehaviorPursueAllowFreeForm : 1;            // 0x0CF4 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bBehaviorPursueTargetsAlertPlayerToRoom : 1; // 0x0CF4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bBehaviorPursueTargetsAlertSoundPlayed : 1;  // 0x0CF4 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           m_bBehaviorAttackAllTargets : 1;               // 0x0CF4 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           m_bBehaviorAttackThenSelfDestruct : 1;         // 0x0CF4 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           m_bBehaviorAttackPoweredUp : 1;                // 0x0CF4 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           m_bBehaviorAttackRoomNotified : 1;             // 0x0CF4 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           m_bBehaviorMeanderKeepAllTargets : 1;          // 0x0CF4 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           m_bBehaviorArrivedAtInvestigateLocation : 1;   // 0x0CF4 (0x0004) [0x0000000000000400] [0x00000200] (CPF_Transient)
	uint32_t                                           m_bMovementPursueFreeForm : 1;                 // 0x0CF4 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           m_bMovementMalfunctionVibrateCycle : 1;        // 0x0CF4 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           m_bCodesDownloaded : 1;                        // 0x0CF4 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           m_bCanSelfDestruct : 1;                        // 0x0CF4 (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           m_bNeverTargetPlayer : 1;                      // 0x0CF4 (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           bDeliberatelyAbandoned : 1;                    // 0x0CF4 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           m_bInDetectiveMode : 1;                        // 0x0CF4 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           m_bRHDTarget : 1;                              // 0x0CF4 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           m_bMiniDroneToControllerLineActive : 1;        // 0x0CF4 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           m_bMiniDroneToControllerLineInDetectiveMode : 1;// 0x0CF4 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           m_bSpecialTutorialMiniDrone : 1;               // 0x0CF4 (0x0004) [0x0000000100000000] [0x00100000] (CPF_Edit)
	EMalfunctionSource                                 m_eBehaviorStunnedSource;                      // 0x0CF8 (0x0001) [0x0000000000000000]               
	ESearchLightTargetMode                             m_eSearchLightTargetMode;                      // 0x0CF9 (0x0001) [0x0000000000000000]               
	float                                              m_fBehaviorPursueTargetsAttackDelay;           // 0x0CFC (0x0004) [0x0000000000000000]               
	float                                              m_fBehaviorAttackPowerUpTime;                  // 0x0D00 (0x0004) [0x0000000000000000]               
	float                                              m_fBehaviorAttackWeaponTime;                   // 0x0D04 (0x0004) [0x0000000000000000]               
	float                                              m_fBehaviorInvestigateLocationTime;            // 0x0D08 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_vMovementMeanderSourcePosition;              // 0x0D0C (0x000C) [0x0000000000000000]               
	struct FVector                                     m_vMovementMeanderOffsetPosition;              // 0x0D18 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_vMovementMeanderFacingDirection;             // 0x0D24 (0x000C) [0x0000000000000000]               
	float                                              m_fMovementMeanderFacingTime;                  // 0x0D30 (0x0004) [0x0000000000000000]               
	float                                              m_fMovementMeanderDuration;                    // 0x0D34 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_vMovementPursueVantagePoint;                 // 0x0D38 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_vMovementPursueVantageTarget;                // 0x0D44 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_vMovementPursueFacingDirection;              // 0x0D50 (0x000C) [0x0000000000000000]               
	float                                              m_fMovementPursueRePathTime;                   // 0x0D5C (0x0004) [0x0000000000000000]               
	struct FVector                                     m_vMovementUncontrolledStrayDirection;         // 0x0D60 (0x000C) [0x0000000000000000]               
	float                                              m_fMovementUncontrolledStraySwagger;           // 0x0D6C (0x0004) [0x0000000000000000]               
	float                                              m_fMovementUncontrolledTime;                   // 0x0D70 (0x0004) [0x0000000000000000]               
	float                                              m_fMovementUncontrolledVelocity;               // 0x0D74 (0x0004) [0x0000000000000000]               
	float                                              m_fMovementUncontrolledSwagger;                // 0x0D78 (0x0004) [0x0000000000000000]               
	int32_t                                            m_nMovementUncontrolledSpin;                   // 0x0D7C (0x0004) [0x0000000000000000]               
	struct FVector                                     m_vMovementMalfunctionOriginPosition;          // 0x0D80 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_vMovementMalfunctionShiftPosition;           // 0x0D8C (0x000C) [0x0000000000000000]               
	float                                              m_fMovementMalfunctionShiftAmount;             // 0x0D98 (0x0004) [0x0000000000000000]               
	float                                              m_fMovementMalfunctionShiftDelay;              // 0x0D9C (0x0004) [0x0000000000000000]               
	float                                              m_fMovementMalfunctionVibrateDelay;            // 0x0DA0 (0x0004) [0x0000000000000000]               
	float                                              m_fMovementMalfunctionVibrateAmount;           // 0x0DA4 (0x0004) [0x0000000000000000]               
	float                                              m_fMovementMalfunctionVibrateDelta;            // 0x0DA8 (0x0004) [0x0000000000000000]               
	float                                              m_fMovementMalfunctionDuration;                // 0x0DAC (0x0004) [0x0000000000000000]               
	float                                              m_fCodesDownloadTime;                          // 0x0DB0 (0x0004) [0x0000000000000000]               
	float                                              m_fMaximumMiniDroneControllerInteractionDistance;// 0x0DB4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FSearchLightData>              m_aSearchLights;                               // 0x0DB8 (0x0010) [0x0000000000014000] (CPF_Component | CPF_NeedCtorLink)
	int32_t                                            m_nSearchLightTargets;                         // 0x0DC8 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_vSearchLightSourcePosition;                  // 0x0DCC (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_rSearchLightSourceRotation;                  // 0x0DD8 (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_rSearchLightSourceDirection;                 // 0x0DE4 (0x000C) [0x0000000000000000]               
	float                                              m_fSearchLightMoveInterpolationSpeed;          // 0x0DF0 (0x0004) [0x0000000000000000]               
	float                                              m_fSearchLightScanTiltDesired;                 // 0x0DF4 (0x0004) [0x0000000000000000]               
	float                                              m_fSearchLightScanTiltCurrent;                 // 0x0DF8 (0x0004) [0x0000000000000000]               
	float                                              m_fSearchLightScanBaseAngle;                   // 0x0DFC (0x0004) [0x0000000000000000]               
	float                                              m_fSearchLightScanOffsetAngle;                 // 0x0E00 (0x0004) [0x0000000000000000]               
	float                                              m_fSearchLightScanRotateSpeedDesired;          // 0x0E04 (0x0004) [0x0000000000000000]               
	float                                              m_fSearchLightScanRotateSpeedCurrent;          // 0x0E08 (0x0004) [0x0000000000000000]               
	float                                              m_fSearchLightScanSpreadDesired;               // 0x0E0C (0x0004) [0x0000000000000000]               
	float                                              m_fSearchLightScanSpreadCurrent;               // 0x0E10 (0x0004) [0x0000000000000000]               
	float                                              m_fSearchLightBlindDelay;                      // 0x0E14 (0x0004) [0x0000000000000000]               
	class TArray<struct FTargetData>                   m_aTargetList;                                 // 0x0E18 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class AActor*>                        m_aTargetIgnoreList;                           // 0x0E28 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              m_fTargetRefreshDelay;                         // 0x0E38 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_vTargetSourcePosition;                       // 0x0E3C (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_vTargetSourceRotation;                       // 0x0E48 (0x000C) [0x0000000000000000]               
	class FName                                        m_ExplosionTargetClass;                        // 0x0E54 (0x0008) [0x0000000000000000]               
	class FName                                        m_ExplosionCachedTargetClassName;              // 0x0E5C (0x0008) [0x0000000000000400] (CPF_Transient)
	float                                              m_fExplosionKillRange;                         // 0x0E64 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPredatorDroneMini");
		}

		return uClassPointer;
	};


	void AlertToBatmansPosition();
	void ZapTimer();
	void ZapClosePlayer(class ARPawnPlayer* Player);
	void eventBump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	bool CanBasePawn(class APawn* P);
	void ChangeHelicopterDPG(ESceneDepthPriorityGroup NewDPG);
	void KillMinidroneToMinidroneControllerLine();
	void UpdateMinidroneToMinidroneControllerLine();
	void MinidroneIsBeingTargetedByRHD();
	void SetInXrayMode(bool On, bool bForceOff);
	void HitByDisruptor(const struct FVector& ShotDirection);
	bool _QueryIsOneOfBestTargets(class AActor* hActor);
	void _QueryGetVantagePointToTargets(struct FVector& outVVantagePoint, struct FVector& optionalOutVVantageTarget);
	int32_t GetVantageTarget(struct FVector& outVVantageTarget);
	struct FVector _QueryGetAimLocation(class AActor* hActor);
	bool _QueryIsCurious(class AActor* hActor);
	bool _QueryIsEnemy(class AActor* hActor);
	bool event_QueryIsIgnored(class AActor* hActor);
	bool _QueryIsWithinRange(const struct FVector& vA, const struct FVector& vB, float fDistance);
	bool _QueryAllTargetsWithinRange(const struct FVector& vPosition, float fDistance, float optionalFHeightMin, float optionalFHeightMax);
	void _WeaponNotifyRoomOfAttack();
	void _WeaponDoDamage(class AActor* hActor);
	void _KillNearbyThugsWithExplosion();
	void _ObjectStateExplode(bool optionalBAlertOfExplosion);
	bool _ObjectStateCollide(const struct FVector& vSource, const struct FVector& vDestination, struct FVector& optionalOutHitLocation, struct FVector& optionalOutHitNormal);
	void _UpdateTargetsSearchLightPosition();
	int32_t _UpdateTargetsVisibility(float fDeltaTime, bool optionalBExpireTargets);
	void _UpdateTargetsOfSearchLights(float fDeltaTime);
	class FName GetInvestigateState();
	class FName GetPursueTargetsState();
	void _UpdateTargetsRefreshListWithDelay(float fDeltaTime);
	void _UpdateTargetsSourceLocation();
	void _UpdateSearchLightVisuals(float fDeltaTime);
	void _UpdateSearchLightRandomPositions();
	void _UpdateSearchLightRadialScanPositions(float fDeltaTime);
	void _UpdateSearchLightSourceLocation(float fDeltaTime);
	bool _UpdateMovementPursueTargets(float fDeltaTime);
	bool _UpdateMovementMalfunction(float fDeltaTime);
	bool _UpdateMovementTowardPositionWithFacing(float fDeltaTime, float fVelocity, const struct FVector& vPosition, const struct FVector& vFacing, bool bSlowOnApproach);
	bool _UpdateMovementTowardNextPoint(float fDeltaTime, float fVelocity);
	bool _UpdateStateMeander(float fDeltaTime, bool bLookAtTargets);
	void _InitializeMalfunctionProperties(float fDuration, float optionalFIntensity);
	void _InitializeMeanderProperties(float optionalFOverrideTime);
	void _InitializeSearchLightColors(ELightColorState eState);
	void _InitializeAllSearchLightTargets();
	void _InitializeSearchLightTarget(int32_t nIndex, class AActor* hActor);
	void _ValidatePlayerCharacter();
	void AlertRoomToBatman(int32_t CallbackFlags, const struct FAkSoundHandle& SoundHandle, int32_t MarkerID, int32_t MarkerTypeID, float Duration);
	bool IsSpecialTutorialMinidrone();
	void AbandonedByController();
	void AttackTargets(bool optionalBSelfDestruct);
	void GetTargets(class TArray<class AActor*>& outTargets);
	bool IsLockedOntoTarget(class AActor* hActor);
	void SetTargetMode(ESearchLightTargetMode eSearchLightTargetMode, class AActor* optionalHTarget);
	int32_t GetNumberOfMinidroneSearchLightTargets();
	class AActor* GetControlActor();
	void SetControlActor(class ARPawnVillainGunMiniDroneController* hController);
	void SetArkhamKnightControlActor(class ARPawnVillainGunPredBase* hController);
	bool TriggerSecondary(class ARPlayerController* PC);
	bool Trigger(class ARPlayerController* PC);
	bool CanTrigger(class ARPlayerController* PC);
	class FString GetInteractionPromptSecondary();
	bool ShouldInteractionPromptBeDisplayedInCentreOfScreen();
	class FString GetInteractionPrompt();
	class FString GetDisplayDescription();
	struct FVector GetDisplayTargetLocation();
	bool CanInvestigateLocation();
	bool CanBeTargettedByRHD(class ARPlayerController* PC);
	bool RequiresBlindDroneUpgrade();
	bool NeedDisplayRefresh();
	class FString GetDisplayIconName();
	class FString GetDisplayLockOnState();
	bool CanTargetTroughWalls();
	EOmnitronInteractionType GetInteractionType();
	void GetMiniGameHelpPrompt(class URHUDPrompt* HelpPrompt, bool bKismetHelpOn);
	void TriggerRight(class ARPlayerController* PC);
	void TriggerLeft(class ARPlayerController* PC);
	void SetupPlayerGrapplePoint();
	float GetMaximumMiniDroneControllerInteractionDistance();
	class UAkDialogueSpeech* GetCodesHaventBeenDownloadedYetBatmanThought();
	bool HaveCodesFinishedDownloading();
	float DownloadCodes(float fDelta);
	void eventUnBlind();
	void SetXrayMeshLevel(bool optionalBForce);
	float GetBlindedTimeRemaining();
	bool eventIsBlinded();
	void ControllerWasHitByDisruptor(float fDisruptorTime);
	float GetStunnedByRECDuration();
	void HitByREC(const struct FVector& vHitLocation, const struct FVector& vAttackerLocation);
	void OnToggleHidden(class USeqAct_ToggleHidden* iAction);
	void SetDroneSpawner(class URSeqAct_SpawnDrone* SpawnAct);
	EWeaponDamageResult eventTakeDamageFromWeapon(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser, bool optionalBHeadShot);
	bool eventFlyingVehicleSuspendOnManyTanks();
	void eventPostBeginPlay();
	void SetInThermalMode(bool On, bool bForceOff);
};
// Class BmScript.RPawnVillainThug_Robot
// 0x0045 (0x1A28 - 0x1A6D)
class ARPawnVillainThug_Robot : public ARPawnVillainThug
{
public:
	class UMaterialInstanceConstant*                   EyeGlowMIC;                                    // 0x1A28 (0x0008) [0x0000000000000000]               
	class AEmitter*                                    PfxReviveEmitter;                              // 0x1A30 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    HitFx;                                         // 0x1A38 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPointLightComponent*                        StomachLight;                                  // 0x1A40 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              PowerUpVal;                                    // 0x1A48 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPoweringUp : 1;                               // 0x1A4C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLightsOff : 1;                                // 0x1A4C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bLightsOffPermanently : 1;                     // 0x1A4C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              StomachLightBrightnessMul;                     // 0x1A50 (0x0004) [0x0000000000000000]               
	float                                              DestStomachLightBrightnessMul;                 // 0x1A54 (0x0004) [0x0000000000000000]               
	float                                              ShowColourChangeTime;                          // 0x1A58 (0x0004) [0x0000000000000000]               
	float                                              ToggleTime;                                    // 0x1A5C (0x0004) [0x0000000000000000]               
	class FName                                        PrevOnlyCanBeHitBy;                            // 0x1A60 (0x0008) [0x0000000000000000]               
	float                                              InvincibleTime;                                // 0x1A68 (0x0004) [0x0000000000000000]               
	ELightCol                                          LightCol;                                      // 0x1A6C (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainThug_Robot");
		}

		return uClassPointer;
	};


	class UAnimSet* GetReactAnimSet();
	class FName GetReactAnimName();
	class UAnimSet* GetPlayerEnvTakedownAnimset(class ARPawnPlayerCombat* PlayerPawn);
	class UAnimSet* GetVillainEnvTakedownAnimset(class ARPawnPlayerCombat* PlayerPawn);
	void InitialisePlayerSpecificAnimsets(class ARPawnPlayerCombat* NewPlayer, int32_t PlayerIndex);
	bool eventCanBeInSimultaneousAttack(class ARPawnPlayerCombat* AttackingPlayer);
	class AActor* GetRiddlerTrophy();
	void RiddlerTrophyPickedUpByPlayer();
	void DropRiddlerTrophy();
	void PickupRiddlerTrophy(class ARPickup_Riddler* Trophy);
	bool VoiceControlTo(const struct FVector& NewLocation, class AActor* NewActor, const class TArray<class ARPawnVillain*>& ThugList, bool bNewUseDestinationTargetMarkerVFX, const struct FVector& vNewDestinationTargetMarkerLocation, class UParticleSystem* DestinationTargetMarkerTemplate, class UParticleSystem* BeamTemplate, class UParticleSystem* SelectedEnemyTemplate, const struct FVector& vNewImpactedWallNormal, class ARVoiceSynthesiser* NewVoiceSynthesiser);
	bool CanBeVoiceControlled();
	void eventPlayCombatBark(const class FName& EventName, bool bUseWeapon, class ARBMWeapon* optionalOverrideWeapon, const class FName& optionalOverrideWeaponFlag, EFlagTypeEnum optionalFlagType, const class FName& optionalFlagValue, class ARPawnPlayer* optionalOverridePlayer);
	bool IsDamageAllowed(const struct FDamageInfo& DmgInfo);
	bool RagdollOnREC();
	void TakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void SetGoodAsDead();
	void OnSpawnHitParticles(bool StrongHit, bool FinalBlow);
	void PopulateCombatTauntList(class UAnimSet* TestAnimSet, class TArray<struct FTauntAnimInfo>& outOutTauntList);
	void Tick(float DeltaTime);
	bool CanBlockCounter(class ARPawnCombat* Attacker);
	void RepelledAttacker(class ARPawnCombat* Attacker);
	bool CanRepelAttack(class ARPawnCombat* Attacker, class UClass* DamageType);
	bool CanRepel();
	bool CanBlockDamageType(class ARPawnCombat* Attacker, class UClass* dmgType);
	void PlaySoundCounterKOWin();
	void PlaySoundStrikeKOWin();
	class URWeaponConfig* CreateMechCombatWeaponConfig(class UObject* NewOwner, class UAnimSet* CombatAnimset);
	class URWeaponConfig* CreateWeaponConfigUnarmed(class UObject* NewOwner);
	bool ShouldGoRagdoll(class UClass* dmgType, float DamageAmount);
	EDamageResult ProcessDamagedBy(struct FDamageInfo& outDmgInfo);
	void SetMaterialColour(const struct FLinearColor& NewCol, float PowerVal);
	void UpdatePoweringUp(float DeltaTime);
	void SetHostile(bool bNewValue, const class FName& optionalNewNotHostileReason);
	bool eventIsCharging();
	bool CanBlock();
	bool CanPlayBark();
	void ColourHasSwitched();
	void SetCanOnlyBeHitBy(const class FName& OnlyHitBy);
	void DoColourBlink();
	void RestoreCanOnlyBeHitBy();
	void SetTempInvincibility();
	void OnFinishGettingUpFromRagdoll();
	void WakeFromDead(class ARPawnCharacter* optionalNewGetUpMaster, const struct FTransitionId& optionalNewGetUpMasterAnimID, class UAnimSet* optionalNewGetUpAnimset, const class FName& optionalNewGetUpAnimName, const class FName& optionalGetUpMovementStance, bool optionalBDoAnim, bool optionalBAnimImmediate);
	void LightsOut();
	void LightsOutPermanently();
	void WakeFromChargeWall();
	void eventPostInitCharacter();
	class UClass* GetSmokeBombReactionClass();
};
// Class BmScript.RSpecialMoveConfig_CalibrateVoiceSynthesiserForRobot
// 0x0000 (0x01C8 - 0x01C8)
class URSpecialMoveConfig_CalibrateVoiceSynthesiserForRobot : public URSpecialMoveConfig_RelativeAnimMove
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveConfig_CalibrateVoiceSynthesiserForRobot");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveInstance_CalibrateVoiceSynthesiserForRobot
// 0x0000 (0x03DC - 0x03DC)
class ARSpecialMoveInstance_CalibrateVoiceSynthesiserForRobot : public ARSpecialMoveInstance_RelativeAnimMove
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveInstance_CalibrateVoiceSynthesiserForRobot");
		}

		return uClassPointer;
	};


	void FinishSpecialMove();
};
// Class BmScript.RPawnVillainThug_RobotPuzzle
// 0x000F (0x1A6D - 0x1A7C)
class ARPawnVillainThug_RobotPuzzle : public ARPawnVillainThug_Robot
{
public:
	class URSpecialMoveConfig*                         VoiceSynthSpecialMoveConfig;                   // 0x1A70 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSetFinishedCombatSpecialMove : 1;             // 0x1A78 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainThug_RobotPuzzle");
		}

		return uClassPointer;
	};


	void WakeFromDead(class ARPawnCharacter* optionalNewGetUpMaster, const struct FTransitionId& optionalNewGetUpMasterAnimID, class UAnimSet* optionalNewGetUpAnimset, const class FName& optionalNewGetUpAnimName, const class FName& optionalGetUpMovementStance, bool optionalBDoAnim, bool optionalBAnimImmediate);
	void ColourHasSwitched();
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void SetGoodAsDead();
	void SetFinishedCombatSpecialMove(class UClass* DamageType);
	class URWeaponConfig* CreateWeaponConfigUnarmed(class UObject* NewOwner);
};
// Class BmScript.RPredatorDroneMiniSpotlight
// 0x0000 (0x0334 - 0x0334)
class URPredatorDroneMiniSpotlight : public USpotLightComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPredatorDroneMiniSpotlight");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqEvent_MinidroneAndThugInteractions
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_MinidroneAndThugInteractions : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_MinidroneAndThugInteractions");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqEvent_PredatorDroneHasAttackedObject
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_PredatorDroneHasAttackedObject : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_PredatorDroneHasAttackedObject");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RRbStealthTakedownStage_OrderedTakedown
// 0x0140 (0x0680 - 0x07C0)
class ARRbStealthTakedownStage_OrderedTakedown : public ARStealthTakeDownStage
{
public:
	struct FTakeDownStageAnimSet                       RobinFrontTakedowns;                           // 0x0680 (0x0134) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     LastWindowCheckLocation;                       // 0x07B4 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RRbStealthTakedownStage_OrderedTakedown");
		}

		return uClassPointer;
	};


	void eventTick(float DeltaTime);
	bool FinishAttackVictim(int32_t iVictimNumber);
	void Begin();
	void EquipGrappleGun();
	void TakedownFireGrappleGun();
	void GetReferencePosition(struct FVector& outReferencePosition, struct FRotator& outReferenceRotation);
	void OverrideChosenAnim(int32_t& outAnim);
	void FillInAnimNames();
};
// Class BmScript.RVehicleBehaviour_DriveToRiotPoint
// 0x0000 (0x0294 - 0x0294)
class URVehicleBehaviour_DriveToRiotPoint : public URVehicleBehaviour_DriveToGoalPoint
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVehicleBehaviour_DriveToRiotPoint");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSentryGunLights
// 0x0000 (0x02E0 - 0x02E0)
class ARSentryGunLights : public ARSentryGunLightsBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSentryGunLights");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqEvent_SentryGunEvent
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_SentryGunEvent : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_SentryGunEvent");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RSeqAct_AddBatmobileWeapon
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_AddBatmobileWeapon : public USequenceAction
{
public:
	class FString                                      BatmobileWeapon;                               // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_AddBatmobileWeapon");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_AnyButtonSkips
// 0x0004 (0x0178 - 0x017C)
class URSeqAct_AnyButtonSkips : public USeqAct_Latent
{
public:
	uint32_t                                           bOnlyAandBButton : 1;                          // 0x0178 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bOnlyAandYButton : 1;                          // 0x0178 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bIncludeSticks : 1;                            // 0x0178 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bOnlySticks : 1;                               // 0x0178 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bIncludeTriggers : 1;                          // 0x0178 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bNewVersion : 1;                               // 0x0178 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bNewCheckA : 1;                                // 0x0178 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bNewCheckB : 1;                                // 0x0178 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           bNewCheckX : 1;                                // 0x0178 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           bNewCheckY : 1;                                // 0x0178 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           bNewCheckLT : 1;                               // 0x0178 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           bNewCheckRT : 1;                               // 0x0178 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           bNewCheckLS : 1;                               // 0x0178 (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           bNewCheckRS : 1;                               // 0x0178 (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           bNewCheckRB : 1;                               // 0x0178 (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           bNewCheckLB : 1;                               // 0x0178 (0x0004) [0x0000000100000000] [0x00008000] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_AnyButtonSkips");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool CheckButtonsOld();
	bool CheckButtonsNew();
	bool eventUpdate(float DeltaTime);
};
// Class BmScript.RSeqAct_GiveUpUtilityBelt
// 0x001C (0x0160 - 0x017C)
class URSeqAct_GiveUpUtilityBelt : public USequenceAction
{
public:
	class ARPlayerController*                          RPC;                                           // 0x0160 (0x0008) [0x0000000000000000]               
	class ARSkeletalMeshActor*                         LevelBeltMesh;                                 // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARCinematicBatman*                           CineBat;                                       // 0x0170 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bAlsoHideBelt : 1;                             // 0x0178 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_GiveUpUtilityBelt");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_MostWantedSelectMission
// 0x001C (0x0160 - 0x017C)
class URSeqAct_MostWantedSelectMission : public USequenceAction
{
public:
	class ARPlayerController*                          RPC;                                           // 0x0160 (0x0008) [0x0000000000000000]               
	class FString                                      MissionName;                                   // 0x0168 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           PickExactIcon : 1;                             // 0x0178 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           TurnToObjective : 1;                           // 0x0178 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           ShowObjectiveUIMessage : 1;                    // 0x0178 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_MostWantedSelectMission");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SelectNonSideStoryMapMarker
// 0x0014 (0x0160 - 0x0174)
class URSeqAct_SelectNonSideStoryMapMarker : public USequenceAction
{
public:
	class FString                                      MapMarkerName;                                 // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           AddAndRemoveMarker : 1;                        // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           TurnToFace : 1;                                // 0x0170 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           ForceClearMarkerEvenIfNotSetToThis : 1;        // 0x0170 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SelectNonSideStoryMapMarker");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SideStory_Update
// 0x00A0 (0x0160 - 0x0200)
class URSeqAct_SideStory_Update : public USequenceAction
{
public:
	class FString                                      SideStoryName;                                 // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bAllowAddIfNew : 1;                            // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAddToPercent : 1;                             // 0x0170 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	int32_t                                            Percentage;                                    // 0x0174 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Optional_VariableProgressionThreshold;         // 0x0178 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            PercentageGainedWhenBelowThreshold;            // 0x017C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            PercentageGainedFromThresholdOnwards;          // 0x0180 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            SynopsisTextId;                                // 0x0184 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ProgressTextId;                                // 0x0188 (0x0004) [0x0000000100000000] (CPF_Edit)    
	ESS_TriBool                                        bLocked;                                       // 0x018C (0x0001) [0x0000000100000000] (CPF_Edit)    
	ESS_TriBool                                        bIdentityUnknown;                              // 0x018D (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FString                                      VideoProgressName;                             // 0x0190 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      JokerVideoProgressName;                        // 0x01A0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            BoardTitleId;                                  // 0x01B0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            BoardSynopsisId;                               // 0x01B4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            BoardImageId;                                  // 0x01B8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            BoardTickerId;                                 // 0x01BC (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FString                                      WaynetechMessageTitle;                         // 0x01C0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      WaynetechMessagePrefix;                        // 0x01D0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      WaynetechMessagePrefixMultiple;                // 0x01E0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      WaynetechPromptString;                         // 0x01F0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SideStory_Update");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool ShowDiscoveryElementOnHudIfNew();
	void Activated();
};
// Class BmScript.RSeqAct_StartGauntletMovie
// 0x001D (0x0174 - 0x0191)
class URSeqAct_StartGauntletMovie : public URSeqAct_StartGauntletMovieBase
{
public:
	class FString                                      GauntletMovie;                                 // 0x0174 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           ForceOpaque : 1;                               // 0x0184 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bConnectionFailed : 1;                         // 0x0184 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bSkipIntro : 1;                                // 0x0184 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	class ASkeletalMeshActor*                          actorToAttachTo;                               // 0x0188 (0x0008) [0x0000000000000000]               
	EPortraitNames                                     PortraitName;                                  // 0x0190 (0x0001) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_StartGauntletMovie");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	class FString ResolvePortraitNames();
	void Activated();
	void EndMovie();
	void StartMovie(bool bAutoPause);
};
// Class BmScript.RSeqEvent_DisabledControlChopper
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_DisabledControlChopper : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_DisabledControlChopper");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSmokeScreenBM
// 0x0010 (0x031C - 0x032C)
class ARSmokeScreenBM : public ARSmokeScreen
{
public:
	class UParticleSystem*                             UpgradedAOESmokeFX;                            // 0x031C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             UpgradedDurationSmokeFX;                       // 0x0324 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSmokeScreenBM");
		}

		return uClassPointer;
	};


	void InitSmoke(bool bHitWall, bool bSmokePellet);
};
// Class BmScript.RSmokeBombProjectileBm
// 0x0000 (0x03A0 - 0x03A0)
class ARSmokeBombProjectileBm : public ARGadgetProjectileBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSmokeBombProjectileBm");
		}

		return uClassPointer;
	};


	void eventBump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void eventHitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp);
	void Deploy(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};
// Class BmScript.RSpecialMoveConfig_HangOnHelicopter
// 0x0094 (0x021C - 0x02B0)
class URSpecialMoveConfig_HangOnHelicopter : public URSpecialMoveConfig_PlaceGooMine
{
public:
	class FName                                        GrappleIn;                                     // 0x021C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        HelicopterIdle;                                // 0x0224 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        DropOff;                                       // 0x022C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        RemoveControlModule;                           // 0x0234 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           CanUseExplosiveGel : 1;                        // 0x023C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           OneShotAnim : 1;                               // 0x023C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	class FName                                        ExplosiveGelIdleAnim;                          // 0x0240 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        ExplosiveGelIdleInAnim;                        // 0x0248 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        ExplosiveGelIdleOutAnim;                       // 0x0250 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        ExplosiveGelSprayAnim;                         // 0x0258 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARExplosiveGooMine*                          GooMineArchetype;                              // 0x0260 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    GelDummyAnimset;                               // 0x0268 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        GelDummyAnim;                                  // 0x0270 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        GForceFwdAnim;                                 // 0x0278 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        GForceLeftAnim;                                // 0x0280 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        GForceRightAnim;                               // 0x0288 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        GForceBackAnim;                                // 0x0290 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FGlideOutAnim>                 GlideOut;                                      // 0x0298 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        RemoveControlModuleCamera;                     // 0x02A8 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveConfig_HangOnHelicopter");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveInstance_HangOnHelicopter
// 0x00C0 (0x0428 - 0x04E8)
class ARSpecialMoveInstance_HangOnHelicopter : public ARSpecialMoveInstance_PlaceGooMine
{
public:
	struct FTransitionId                               CurrentTransition;                             // 0x0428 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastHeliAccel;                                 // 0x042C (0x000C) [0x0000000000000400] (CPF_Transient)
	int32_t                                            screenShakeID;                                 // 0x0438 (0x0004) [0x0000000000000000]               
	struct FBMScreenShakeStruct                        ScreenShake;                                   // 0x043C (0x009C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bStopAligningWithHeli : 1;                     // 0x04D8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRotator                                    UpdatedReferenceRotation;                      // 0x04DC (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveInstance_HangOnHelicopter");
		}

		return uClassPointer;
	};


	bool CanDoCombat(bool optionalCheckForEvade);
	void StopAnimFollowingHeli();
	void GelSprayOff();
	void GelSprayOn();
	void UpdateGForceAnims();
	struct FGlideOutAnim GetGlideOutAnim();
	void StartScan();
	class ARHelicopterBase* GetHelicopter();
	void eventCancelSpecialMove(class URSpecialMoveConfig* NextSpecialMove);
	void FinishSpecialMove();
	class FName GetGelDummyAnim();
	void TriggerSpecialMove(const struct FEnvironmentSpecialMoveLocator& MoveLocation);
};
// Class BmScript.RSpecialMoveConfig_PlaceGooOnEnemy
// 0x002C (0x01C8 - 0x01F4)
class URSpecialMoveConfig_PlaceGooOnEnemy : public URSpecialMoveConfig_RelativeAnimMove
{
public:
	class FName                                        CrouchedAnim;                                  // 0x01C8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        StandingAnim;                                  // 0x01D0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    VictimAnimSet;                                 // 0x01D8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        VictimAnim;                                    // 0x01E0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    RotationOffset;                                // 0x01E8 (0x000C) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveConfig_PlaceGooOnEnemy");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveInstance_PlaceGooOnEnemy
// 0x00A8 (0x03DC - 0x0484)
class ARSpecialMoveInstance_PlaceGooOnEnemy : public ARSpecialMoveInstance_RelativeAnimMove
{
public:
	class URSpecialMoveConfig_PlaceGooOnEnemy*         MyConfig;                                      // 0x03DC (0x0008) [0x0000000000000000]               
	class ARPawnVillain*                               Victim;                                        // 0x03E4 (0x0008) [0x0000000000000000]               
	class ARExplosiveGelBomb*                          StickyBomb;                                    // 0x03EC (0x0008) [0x0000000000000000]               
	struct FEnvironmentSpecialMoveLocator              Loc;                                           // 0x03F4 (0x0084) [0x0000000000000000]               
	class FName                                        GooMineSocket;                                 // 0x0478 (0x0008) [0x0000000000000000]               
	uint32_t                                           PlaceOnBack : 1;                               // 0x0480 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveInstance_PlaceGooOnEnemy");
		}

		return uClassPointer;
	};


	void PlaceBomb();
	void eventCancelSpecialMove(class URSpecialMoveConfig* NextSpecialMove);
	void FinishSpecialMove();
	bool UpdateSpecialMove(float DeltaTime);
	void TriggerSpecialMove(const struct FEnvironmentSpecialMoveLocator& MoveLocation);
};
// Class BmScript.RSpecialMoveConfig_TakedownSentryGun
// 0x0008 (0x0190 - 0x0198)
class URSpecialMoveConfig_TakedownSentryGun : public URSpecialMoveConfig
{
public:
	class UAnimSet*                                    BMAnimSet;                                     // 0x0190 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveConfig_TakedownSentryGun");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveInstance_TakedownSentryGun
// 0x0028 (0x0384 - 0x03AC)
class ARSpecialMoveInstance_TakedownSentryGun : public ARSpecialMoveInstance_TakedownSentryGunBase
{
public:
	uint32_t                                           bWaitingTostart : 1;                           // 0x0384 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     OrigLoc;                                       // 0x0388 (0x000C) [0x0000000000000000]               
	struct FRotator                                    OrigRot;                                       // 0x0394 (0x000C) [0x0000000000000000]               
	class ARSentryGunBase*                             SentryGun;                                     // 0x03A0 (0x0008) [0x0000000000000000]               
	int32_t                                            AnimIndex;                                     // 0x03A8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveInstance_TakedownSentryGun");
		}

		return uClassPointer;
	};


	bool ForceShootStumble();
	void PlayAnims();
	bool UpdateSpecialMove(float DeltaTime);
	void eventCancelSpecialMove(class URSpecialMoveConfig* NextSpecialMove);
	void FinishSpecialMove();
	void SentryGunGoPhysics();
	void SentryGunTakenOut();
	void TriggerSpecialMove(const struct FEnvironmentSpecialMoveLocator& MoveLocation);
};
// Class BmScript.RSpecialMoveInstance_GrappleThruGrate
// 0x0000 (0x03DC - 0x03DC)
class ARSpecialMoveInstance_GrappleThruGrate : public ARSpecialMoveInstance_RelativeAnimMove
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveInstance_GrappleThruGrate");
		}

		return uClassPointer;
	};


	void FinishSpecialMove();
	void TriggerSpecialMove(const struct FEnvironmentSpecialMoveLocator& MoveLocation);
};
// Class BmScript.RTunnelGrateShared
// 0x000C (0x0440 - 0x044C)
class ARTunnelGrateShared : public ARTunnelGrateBase
{
public:
	uint32_t                                           bDontBlockDuringCombat : 1;                    // 0x0440 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllwaysClimbOutForwards : 1;                  // 0x0440 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           DelayPlayingAnim : 1;                          // 0x0440 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bForceInteractPromptToBeDisplayedEvenIfInteractionIsProhibited : 1;// 0x0440 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	class UPointLightComponent*                        XrayLight;                                     // 0x0444 (0x0008) [0x0000004500004005] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RTunnelGrateShared");
		}

		return uClassPointer;
	};


	void Tick(float DeltaTime);
	class FString GetPrompt(class APlayerController* PC);
	float OverridesRun(class ARPlayerController* PC);
	bool CanReachItem(class APawn* CheckingPawn);
	EInteractableItemFaceButton GetInteractButton(class ARPlayerController* PC);
	bool MustBeCrouched(class ARPlayerController* PC);
	bool IsActive(class ARPlayerController* PC);
	void Interact(class ARPlayerController* PC);
	void TriggerFarMove(class ARPlayerController* PC);
	void TriggerSpecialMove(class APlayerController* PC);
	float GetFOVDegrees(class ARPlayerController* PC);
	float GetHeightRange();
	void eventPostBeginPlay_Delayed();
};
// Class BmScript.MSeqCond_IsDetectiveVisionActivated
// 0x0000 (0x0144 - 0x0144)
class UMSeqCond_IsDetectiveVisionActivated : public USequenceCondition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.MSeqCond_IsDetectiveVisionActivated");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RAmbient_DirectionalLight
// 0x0000 (0x02B4 - 0x02B4)
class ARAmbient_DirectionalLight : public ADirectionalLight
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RAmbient_DirectionalLight");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBabyProofingVolume
// 0x0000 (0x02EC - 0x02EC)
class ARBabyProofingVolume : public ABlockingVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBabyProofingVolume");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBatarangCameraVolume
// 0x0000 (0x02E4 - 0x02E4)
class ARBatarangCameraVolume : public AVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatarangCameraVolume");
		}

		return uClassPointer;
	};


	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void OnToggle(class USeqAct_Toggle* Action);
};
// Class BmScript.RBMBehaviour_AbandonedVehicleAnimationPoint
// 0x00CC (0x039C - 0x0468)
class URBMBehaviour_AbandonedVehicleAnimationPoint : public URBMBehaviour_GangMovementBase
{
public:
	uint32_t                                           bInTransOut : 1;                               // 0x039C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bStartedPaired : 1;                            // 0x039C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            EventIndex;                                    // 0x03A0 (0x0004) [0x0000000000000000]               
	int32_t                                            NumEventsLeft;                                 // 0x03A4 (0x0004) [0x0000000000000000]               
	class ARAbandonedVehicle*                          Car;                                           // 0x03A8 (0x0008) [0x0000000000000000]               
	class ARGangInteractPointAbandonedVehicle*         DestinationCarActor;                           // 0x03B0 (0x0008) [0x0000000000000000]               
	int32_t                                            CurrentBuddies;                                // 0x03B8 (0x0004) [0x0000000000000000]               
	float                                              IdleTime;                                      // 0x03BC (0x0004) [0x0000000000000000]               
	struct FTransitionId                               WaitingTransId;                                // 0x03C0 (0x0004) [0x0000000000000000]               
	struct FCarAnimationDetails                        CarAnimDetail;                                 // 0x03C4 (0x003C) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FMultiStageAnim                             CarMultiStageInfo;                             // 0x0400 (0x0068) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_AbandonedVehicleAnimationPoint");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void MovingCarOver();
	void WarnMovingCar();
	void StartSiren();
	void eventCrackObjectRightHand();
	void eventCrackObject();
	void ExplodeMolotov();
	void SmashDriversPassengerWindow();
	void SmashDriversWindow();
	void CrackWindscreen();
	void CarOnRoof();
	void CarOnSide();
	void CarToLoopAnim();
	void CarToAnim();
	void CarToPhysics();
	void Cheer();
	void SpectatorCheer();
	void eventDettachFromCar();
	void AttachToCarSeat1();
	void eventTriggerOutputEvent();
	bool CanPlayWaitingAnimation();
	void FastExitBuddies();
	void RiotExitBehaviour();
	bool eventRiotHandleSpookedBy(class AActor* Threat, bool optionalBAlertNeighbours);
	EEvadeVehicleType GetEvadeVehicleType(class AActor* V, float CarSpeed, bool bZap);
	void OnDeactivate();
	void OnActivate();
};
// Class BmScript.RGangInteractPointAbandonedVehicle
// 0x0004 (0x0570 - 0x0574)
class ARGangInteractPointAbandonedVehicle : public ARGangInteractPointAbandonedVehicleBase
{
public:
	int32_t                                            PutOnSideStage;                                // 0x0570 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGangInteractPointAbandonedVehicle");
		}

		return uClassPointer;
	};


	void eventTick(float UpdateTime);
	void eventPreBeginPlay();
	void eventSetFinished(class ARBMPawnAI* P);
	void eventSetInUse(class ARBMPawnAI* UsagePawn);
	struct FVector eventGetPOILocation();
	float eventGetSelectionScore();
	class UClass* eventGetBehaviourClass();
};
// Class BmScript.RBMBehaviour_JokerRooftop
// 0x000C (0x024C - 0x0258)
class URBMBehaviour_JokerRooftop : public URBMBehaviour_JokerRooftopBase
{
public:
	class ARJokerRooftopPoint*                         JokerPoint;                                    // 0x024C (0x0008) [0x0000000000000000]               
	uint32_t                                           bFadedIn : 1;                                  // 0x0254 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_JokerRooftop");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool JokerInShot();
	void BeginOverlay();
	bool DoesJokerTypeTrumpMine(const class FString& NewCaseIdentifier);
	void MeetingPointHit();
	void OnDeactivate();
	void OnActivate();
};
// Class BmScript.RJokerRooftopPoint
// 0x0000 (0x0300 - 0x0300)
class ARJokerRooftopPoint : public ARJokerRooftopPointBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RJokerRooftopPoint");
		}

		return uClassPointer;
	};


	void OnToggle(class USeqAct_Toggle* Action);
};
// Class BmScript.RBMBehaviour_JumpOutOfVan
// 0x0028 (0x024C - 0x0274)
class URBMBehaviour_JumpOutOfVan : public URBMBehaviour
{
public:
	class ASkeletalMeshActor*                          Train;                                         // 0x024C (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    JumpAnimset;                                   // 0x0254 (0x0008) [0x0000000000000000]               
	int32_t                                            Seat;                                          // 0x025C (0x0004) [0x0000000000000000]               
	float                                              ActiveTimer;                                   // 0x0260 (0x0004) [0x0000000000000000]               
	float                                              DropTimer;                                     // 0x0264 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDropped : 1;                                  // 0x0268 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bStartedFalling : 1;                           // 0x0268 (0x0004) [0x0000000000000000] [0x00000002] 
	class FName                                        JumpAnimName;                                  // 0x026C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_JumpOutOfVan");
		}

		return uClassPointer;
	};


	void eventOnDeactivate();
	void OnBeginInterrupt();
	void Drop();
	void GotoCombat();
	void Tick(float DeltaTime);
	bool CanBeHitInCombat(class URDamageType* DamageType);
	void eventOnActivate();
};
// Class BmScript.RBMBehaviour_RiotFlee
// 0x0044 (0x0304 - 0x0348)
class URBMBehaviour_RiotFlee : public URBMBehaviour_GangMovementBaseBase
{
public:
	class ARBMAIAction_BaseMove*                       SavedAction;                                   // 0x0304 (0x0008) [0x0000000000000000]               
	class AActor*                                      SavedThreat;                                   // 0x030C (0x0008) [0x0000000000000000]               
	class ARGangFleePressPointBase*                    PressPoint;                                    // 0x0314 (0x0008) [0x0000000000000000]               
	struct FVector                                     GoalPos;                                       // 0x031C (0x000C) [0x0000000000000000]               
	float                                              SavedThreatDistance;                           // 0x0328 (0x0004) [0x0000000000000000]               
	struct FVector                                     PressPointLoc;                                 // 0x032C (0x000C) [0x0000000000000000]               
	int32_t                                            PressPointAnimationIndex;                      // 0x0338 (0x0004) [0x0000000000000000]               
	float                                              WaitTime;                                      // 0x033C (0x0004) [0x0000000000000000]               
	uint32_t                                           bDidRunAwayCheck : 1;                          // 0x0340 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ChanceOfRunAway;                               // 0x0344 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_RiotFlee");
		}

		return uClassPointer;
	};


	bool eventRiotHandleSpookedBy(class AActor* Threat, bool optionalBAlertNeighours);
	bool DoesDestGoPastBm(const struct FVector& DestPoint);
	struct FVector GetMoveLocation();
	EEvadeVehicleType GetEvadeVehicleType(class AActor* V, float CarSpeed, bool bZap);
	void Tick(float DeltaTime);
	void OnDeactivate();
	void OnActivate();
};
// Class BmScript.RBMCombatThrownObject_Baton
// 0x0000 (0x04A4 - 0x04A4)
class ARBMCombatThrownObject_Baton : public ARBMCombatThrownObject_BatDestroyed
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_Baton");
		}

		return uClassPointer;
	};


	void SpawnAttachment();
};
// Class BmScript.RBMCombatThrownObject_BatonPart1
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_BatonPart1 : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_BatonPart1");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponBat
// 0x0000 (0x06E4 - 0x06E4)
class ARBMWeaponBat : public ARBMWeaponBatBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponBat");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponBaton
// 0x0000 (0x06E4 - 0x06E4)
class ARBMWeaponBaton : public ARBMWeaponBat
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponBaton");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatThrownObject_Bottle
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_Bottle : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_Bottle");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponKnifeBase
// 0x0000 (0x06D4 - 0x06D4)
class ARBMWeaponKnifeBase : public ARBMWeaponMelee
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponKnifeBase");
		}

		return uClassPointer;
	};


	void InitialisePlayerSpecificAnimsets(class ARPawnPlayerCombat* NewPlayer, int32_t PlayerIndex);
	void GetMultiAttackAnimNames(class ARPawnPlayerCombat* Player, class FName& outIntroName, class FName& outAttackName, class FName& outFailName, class FName& outCounterName);
	class UClass* GetAttackMoveClass();
	class URWeaponConfig* CreateWeaponConfig(class UObject* NewOwner);
	static class URWeaponConfig* CreateCombatWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2, class UAnimSet* AnimSet3, class UAnimSet* AnimSet4);
	static class URAimingConfig* GetCombatAimingConfig();
};
// Class BmScript.RBMWeaponBottle
// 0x0000 (0x06D4 - 0x06D4)
class ARBMWeaponBottle : public ARBMWeaponKnifeBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponBottle");
		}

		return uClassPointer;
	};


	void PlaySmashFX();
	void Smash();
	void Unsmash();
};
// Class BmScript.RBMCombatThrownObject_BottleDestroyed
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_BottleDestroyed : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_BottleDestroyed");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatThrownObject_HeavyObject
// 0x000C (0x04A0 - 0x04AC)
class ARBMCombatThrownObject_HeavyObject : public ARBMCombatThrownObject
{
public:
	uint32_t                                           bPlayedSound : 1;                              // 0x04A0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAttackingPSActive : 1;                        // 0x04A0 (0x0004) [0x0000000000000000] [0x00000002] 
	class UParticleSystemComponent*                    HeadPSC;                                       // 0x04A4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_HeavyObject");
		}

		return uClassPointer;
	};


	void CaughtByPlayer();
	void HitSomething(class ARPawnCombat* HitPawn, float Speed);
	void HitPawnValueChanged();
	void StopAttackingFX(bool optionalBSuccessfulCounter);
	void StartAttackingFX();
	bool eventCanStillBeUsedByPlayer();
	void EnableStasis();
	void DelayedSetCanHitPawn();
	void SetCanHitPawn(bool bNewValue);
	void PostBeginPlay();
};
// Class BmScript.RBMCombatThrownObject_Knife
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_Knife : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_Knife");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponKnife
// 0x0000 (0x06D4 - 0x06D4)
class ARBMWeaponKnife : public ARBMWeaponKnifeBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponKnife");
		}

		return uClassPointer;
	};


	class UAnimSet* GetFearTakedownReactionAnimset();
};
// Class BmScript.RBMCombatThrownObject_KnifeDestroyed
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_KnifeDestroyed : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_KnifeDestroyed");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatThrownObject_PredatorShotgun
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_PredatorShotgun : public ARBMCombatThrownObject_Predator
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_PredatorShotgun");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponShotgun
// 0x0004 (0x0794 - 0x0798)
class ARBMWeaponShotgun : public ARBMWeaponRiflePredFull
{
public:
	float                                              BuckSpreadShotDeviance;                        // 0x0794 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponShotgun");
		}

		return uClassPointer;
	};


	float GetDamage(class AActor* Target);
	void DoShotFX(class AActor* optionalHitTarget, bool optionalBShouldHit);
	class FName GetRECHitReactionAnimName();
};
// Class BmScript.RBMCombatThrownObject_RocketLauncher
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_RocketLauncher : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_RocketLauncher");
		}

		return uClassPointer;
	};


	class ARBMWeapon* CreateWeaponFor(class ARBMPawnAI* HostPawn);
};
// Class BmScript.RBMWeaponRocketLauncher
// 0x0018 (0x06E8 - 0x0700)
class ARBMWeaponRocketLauncher : public ARBMWeaponRocketLauncherBase
{
public:
	class UParticleSystemComponent*                    LaserSight;                                    // 0x06E8 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URAkAudible*                                 LaserAudible;                                  // 0x06F0 (0x0008) [0x0000004000010004] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	uint32_t                                           bShowVisibleLaserSight : 1;                    // 0x06F8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisibleTime;                                   // 0x06FC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponRocketLauncher");
		}

		return uClassPointer;
	};


	class ARBMCombatThrownObject* CreateAndInitThrownObject();
	struct FVector GetLaunchLocation();
	void FireHomingRocket(class AActor* TargetActor, const struct FVector& optionalFireDirection);
	void FireFastRocket(const struct FVector& optionalFireDirection);
	void FireRocket(const struct FVector& optionalFireDirection);
	void Tick(float DeltaTime);
	struct FVector GetLookFromLocation();
	void TurnOffVisibleSight();
	void TurnOnVisibleSight();
	class ARBMCombatThrownObject* Drop();
	void AttachWeapon();
	static bool CanBeUsedByFriendly();
	class URWeaponConfig* CreateWeaponConfig(class UObject* NewOwner);
	static class URWeaponConfig* CreateCombatWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2, class UAnimSet* AnimSet3, class UAnimSet* AnimSet4, class UAnimSet* AnimSet5);
	class URWeaponConfig* CreateBasicGunWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2, class UAnimSet* optionalAnimSet3);
};
// Class BmScript.RBMCombatThrownObject_ShotgunDestroyed
// 0x0000 (0x04AC - 0x04AC)
class ARBMCombatThrownObject_ShotgunDestroyed : public ARBMCombatThrownObject_GunDestroyed
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_ShotgunDestroyed");
		}

		return uClassPointer;
	};


	void PostBeginPlay();
};
// Class BmScript.RBMCombatThrownObject_ShotgunDestroyedPart3
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_ShotgunDestroyedPart3 : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_ShotgunDestroyedPart3");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatThrownObject_ShotgunDestroyedPart1
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_ShotgunDestroyedPart1 : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_ShotgunDestroyedPart1");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatThrownObject_ShotgunDestroyedPart2
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_ShotgunDestroyedPart2 : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_ShotgunDestroyedPart2");
		}

		return uClassPointer;
	};

};
// Class BmScript.RCombatMove_VillainSmokeBombReaction_Knife
// 0x0000 (0x046C - 0x046C)
class ARCombatMove_VillainSmokeBombReaction_Knife : public ARCombatMove_VillainSmokeBombReaction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_VillainSmokeBombReaction_Knife");
		}

		return uClassPointer;
	};


	void SetCounterInfo(bool bMirrored);
	void CombatAnimHitStart();
	bool ShouldMirror();
};
// Class BmScript.RBMWeaponHeavyObject
// 0x0000 (0x06D4 - 0x06D4)
class ARBMWeaponHeavyObject : public ARBMWeaponMelee
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponHeavyObject");
		}

		return uClassPointer;
	};


	void OnWeaponDestroy(const struct FVector& SmashVel);
	class URWeaponConfig* CreateWeaponConfig(class UObject* NewOwner);
	class URWeaponConfig* CreateCombatWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2);
	static class URAimingConfig* GetWeaponUpAimingConfig();
};
// Class BmScript.RBMWeaponPipe
// 0x0000 (0x06E4 - 0x06E4)
class ARBMWeaponPipe : public ARBMWeaponBaton
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponPipe");
		}

		return uClassPointer;
	};

};
// Class BmScript.RPrototank_Missile
// 0x002C (0x0348 - 0x0374)
class ARPrototank_Missile : public ARProjectile
{
public:
	class AActor*                                      Target;                                        // 0x0348 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             Explosion;                                     // 0x0350 (0x0008) [0x0000000000000000]               
	float                                              TurnRateDegree;                                // 0x0358 (0x0004) [0x0000000000000000]               
	class FName                                        TargetBone;                                    // 0x035C (0x0008) [0x0000000000000000]               
	float                                              BlastRadiusInner;                              // 0x0364 (0x0004) [0x0000000000000000]               
	float                                              BlastRadiusOuter;                              // 0x0368 (0x0004) [0x0000000000000000]               
	float                                              MaxExplosionImpulse;                           // 0x036C (0x0004) [0x0000000000000000]               
	float                                              MinExplosionImpulse;                           // 0x0370 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPrototank_Missile");
		}

		return uClassPointer;
	};


	void Tick(float DeltaTime);
	void DamagePlayersInRange();
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal, bool optionalBPlayExplosionSound);
	void ExplodeSound();
	void StopActualSoundEffect();
	void StartActualSoundEffect();
	void SetTargetBone(const class FName& tgtBone);
	void SetTarget(class AActor* tgt);
};
// Class BmScript.RBreakableVentLight
// 0x0008 (0x02C4 - 0x02CC)
class ARBreakableVentLight : public ARBreakableVentLightBase
{
public:
	class UPointLightComponent*                        LightComp;                                     // 0x02C4 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBreakableVentLight");
		}

		return uClassPointer;
	};


	void HitByGrenade();
};
// Class BmScript.RCarListenerInterface
// 0x0000 (0x0054 - 0x0054)
class URCarListenerInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCarListenerInterface");
		}

		return uClassPointer;
	};


	void BatmanLeftCar();
};
// Class BmScript.RCheckpointBlockade
// 0x0038 (0x0320 - 0x0358)
class ARCheckpointBlockade : public ARCheckpointBlockadeBase
{
public:
	class UStaticMeshComponent*                        BarrierCollisionMesh;                          // 0x0320 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      BarrierMesh;                                   // 0x0328 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        DownAnim;                                      // 0x0330 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        UpAnim;                                        // 0x0338 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              NeonLightVal;                                  // 0x0340 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasSetMaterials : 1;                          // 0x0344 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bStartDown : 1;                                // 0x0344 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bUnhideOnDisableTick : 1;                      // 0x0344 (0x0004) [0x0000000000000000] [0x00000004] 
	class TArray<class UMaterialInstanceConstant*>     MicArray;                                      // 0x0348 (0x0010) [0x0000004100010004] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCheckpointBlockade");
		}

		return uClassPointer;
	};


	void SetBarrierState(bool bNewVal);
	void SetMaterialICs();
	void eventTick(float DeltaTime);
	void OnToggle(class USeqAct_Toggle* Action);
	void PostBeginPlay();
};
// Class BmScript.RCheckPointMineLights
// 0x0028 (0x029C - 0x02C4)
class ARCheckPointMineLights : public AActor
{
public:
	class UPointLightComponent*                        PointLight_Active;                             // 0x029C (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPointLightComponent*                        PointLight_Neutral;                            // 0x02A4 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterial*                                   Material_Active;                               // 0x02AC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterial*                                   Material_Neutral;                              // 0x02B4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterial*                                   Material_Damaged;                              // 0x02BC (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCheckPointMineLights");
		}

		return uClassPointer;
	};

};
// Class BmScript.RCheckPointMine
// 0x00C0 (0x02C4 - 0x0384)
class ARCheckPointMine : public ARCheckPointMineBase
{
public:
	class UParticleSystem*                             AttackParticleSystem;                          // 0x02C4 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    IdleSound;                                     // 0x02CC (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    AttackSound;                                   // 0x02D4 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    DestroyedSound;                                // 0x02DC (0x0008) [0x0000000000000000]               
	class UMaterialInterface*                          XrayMat;                                       // 0x02E4 (0x0008) [0x0000000000000000]               
	class URSeqAct_CheckPointMine*                     SeqAct;                                        // 0x02EC (0x0008) [0x0000000000000000]               
	class ARCheckPointMineLights*                      lightsArchetype;                               // 0x02F4 (0x0008) [0x0000000000000000]               
	class ARCheckPointMineLights*                      lightsInstance;                                // 0x02FC (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           AnimNode;                                      // 0x0304 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   minorDamageMIC;                                // 0x030C (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      damagedMesh;                                   // 0x0314 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URInteractionComponent*                      interactionComponent;                          // 0x031C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      Mesh;                                          // 0x0324 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    ShotByBMBLParticleSystem;                      // 0x032C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    AttackParticleSystem_Mine;                     // 0x0334 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    WarningParticleSystem_DetectiveMode;           // 0x033C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    DestroyedVFX;                                  // 0x0344 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    WarningParticleSystem_BMBL;                    // 0x034C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bAttachedShotByBMBLParticleSystem : 1;         // 0x0354 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bInCarWarningFXEnabled : 1;                    // 0x0354 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDetectiveModeWarningFXEnabled : 1;            // 0x0354 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWarningFXBlue : 1;                            // 0x0354 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIdleAudioPlaying : 1;                         // 0x0354 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bReloadAnimRequired : 1;                       // 0x0354 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bSwappedToMinorDamageMIC : 1;                  // 0x0354 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bDMVisThroughWalls_Suppressed : 1;             // 0x0354 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bDMVisThroughWalls_Old : 1;                    // 0x0354 (0x0004) [0x0000000000000000] [0x00000100] 
	float                                              stayNeutralTime;                               // 0x0358 (0x0004) [0x0000000000000000]               
	float                                              timeSinceFriendlyInRange;                      // 0x035C (0x0004) [0x0000000000000000]               
	float                                              timeTillCanAttack;                             // 0x0360 (0x0004) [0x0000000000000000]               
	float                                              warningPFXBaseRadius;                          // 0x0364 (0x0004) [0x0000000000000000]               
	int32_t                                            mineHealth;                                    // 0x0368 (0x0004) [0x0000000000000000]               
	float                                              reloadDuration;                                // 0x036C (0x0004) [0x0000000000000000]               
	float                                              reloadTimeRemaining;                           // 0x0370 (0x0004) [0x0000000000000000]               
	class FName                                        ReloadAnimName;                                // 0x0374 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ReloadAnimDuration;                            // 0x037C (0x0004) [0x0000000000000000]               
	float                                              ReloadAnimPlayRate;                            // 0x0380 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCheckPointMine");
		}

		return uClassPointer;
	};


	void eventSuppressDetectiveModeVisibilityThroughWalls(bool bSuppress);
	void UnregisterDMThroughWallsSuppressable();
	void RegisterDMThroughWallsSuppressable();
	bool ShouldBeInNeutralState();
	bool ShouldBeInPoweredDownState();
	float GetHostileRange();
	float GetFriendlyRange();
	class UMeshComponent* eventGetDisruptorTargetMesh();
	void eventSetXrayHighlight(bool bEnabled);
	class FString GetDamagedFlagName();
	bool IsDamagedFlagSet();
	void UpdateFXState(bool bInCar, bool bInDetectiveMode, bool bNeutralMode);
	bool IsReloading();
	void TriggerReload();
	void UpdateReloading(float DeltaTime);
	void TriggerNPCVehicleAttack(class ARVehicle* Vehicle);
	void TriggerBMBLAttack(class ARVehicleBatmobileBase* Bmbl);
	void SetDamagedState(bool bDamagedState, bool optionalBSilent);
	void eventTakeDamage(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void eventDestroyed();
	void eventPreStreamOut();
	void PostBeginPlay();
};
// Class BmScript.RSeqAct_CheckPointMine
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_CheckPointMine : public USequenceAction
{
public:
	class TArray<class ARCheckPointMine*>              Mines;                                         // 0x0160 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_CheckPointMine");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void HandleInputLinks();
	void eventActivated();
};
// Class BmScript.RDestructibleProp_TakeoverVideoScreen
// 0x0018 (0x06BC - 0x06D4)
class ARDestructibleProp_TakeoverVideoScreen : public ARDestructibleProp
{
public:
	class UMaterialInterface*                          prevMaterial;                                  // 0x06BC (0x0008) [0x0000000000000000]               
	class UTexture*                                    TextureToRevertTo;                             // 0x06C4 (0x0008) [0x0000000000000000]               
	int32_t                                            videoMaterialIndex;                            // 0x06CC (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bTakeoverInProgress : 1;                       // 0x06D0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanBeTakenOverByRiddler : 1;                  // 0x06D0 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bCanBeTakenOverByScarecrow : 1;                // 0x06D0 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RDestructibleProp_TakeoverVideoScreen");
		}

		return uClassPointer;
	};


	void Destroyed();
	void PreStreamOut();
	void PreBeginPlay();
	void SetOverrideMaterial();
	void SetStaticTransitionParameter(float val);
	void RevertToStandardTexture();
	void SetTakeoverTexture(class UTextureRenderTarget2D* takeoverTexture);
	bool CanBeTakenOverByScarecrow();
	bool CanBeTakenOverByRiddler();
};
// Class BmScript.RDmgType_DiveBoostShockwave
// 0x0000 (0x00EC - 0x00EC)
class URDmgType_DiveBoostShockwave : public URDmgType_HeavyStrike
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RDmgType_DiveBoostShockwave");
		}

		return uClassPointer;
	};

};
// Class BmScript.RDynamicBlockingVolumeDisabled
// 0x0000 (0x02FC - 0x02FC)
class ARDynamicBlockingVolumeDisabled : public ARDynamicBlockingVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RDynamicBlockingVolumeDisabled");
		}

		return uClassPointer;
	};

};
// Class BmScript.RExplosiveGooMine_SprayOnObject
// 0x0000 (0x045C - 0x045C)
class ARExplosiveGooMine_SprayOnObject : public ARExplosiveGooMineBm
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RExplosiveGooMine_SprayOnObject");
		}

		return uClassPointer;
	};

};
// Class BmScript.RFearGasNoEntryVolume
// 0x0000 (0x02E4 - 0x02E4)
class ARFearGasNoEntryVolume : public AVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RFearGasNoEntryVolume");
		}

		return uClassPointer;
	};


	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};
// Class BmScript.RGangFleePressPoint
// 0x0000 (0x030C - 0x030C)
class ARGangFleePressPoint : public ARGangFleePressPointBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGangFleePressPoint");
		}

		return uClassPointer;
	};


	class UClass* eventGetBehaviourClass();
};
// Class BmScript.RGangInteractBillboard
// 0x0020 (0x0524 - 0x0544)
class ARGangInteractBillboard : public ARGangInteractPointBreakableBase
{
public:
	int32_t                                            SmashIndex;                                    // 0x0524 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCreatedMIC : 1;                               // 0x0528 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInstanceConstant*                   BillboardMat;                                  // 0x052C (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             BillboardSmashEffect;                          // 0x0534 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    CrackSfx;                                      // 0x053C (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGangInteractBillboard");
		}

		return uClassPointer;
	};


	void eventSetFinished(class ARBMPawnAI* P);
	void eventSetInUse(class ARBMPawnAI* UsagePawn);
	void CrackObject(const struct FVector& SmashLocation, const struct FVector& SmashNormal, const struct FVector& SmashSpeed, bool bCanSmash, bool bForceSmash, class AActor* optionalSmashActor);
};
// Class BmScript.RGangInteractChineseStandGlass
// 0x0020 (0x0524 - 0x0544)
class ARGangInteractChineseStandGlass : public ARGangInteractPointBreakableBase
{
public:
	int32_t                                            SmashIndex;                                    // 0x0524 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCreatedMIC : 1;                               // 0x0528 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInstanceConstant*                   GlassMat;                                      // 0x052C (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             GlassSmashEffect;                              // 0x0534 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    CrackSfx;                                      // 0x053C (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGangInteractChineseStandGlass");
		}

		return uClassPointer;
	};


	void eventSetFinished(class ARBMPawnAI* P);
	void eventSetInUse(class ARBMPawnAI* UsagePawn);
	void CrackObject(const struct FVector& SmashLocation, const struct FVector& SmashNormal, const struct FVector& SmashSpeed, bool bCanSmash, bool bForceSmash, class AActor* optionalSmashActor);
	class UClass* eventGetBehaviourClass();
};
// Class BmScript.RGangRunAwayPoint
// 0x0004 (0x029C - 0x02A0)
class ARGangRunAwayPoint : public ARDummyTarget
{
public:
	float                                              AreaRadius;                                    // 0x029C (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGangRunAwayPoint");
		}

		return uClassPointer;
	};

};
// Class BmScript.RHidePoint_Grate
// 0x0034 (0x0618 - 0x064C)
class ARHidePoint_Grate : public ARHidePoint_GrateBase
{
public:
	class URSpecialMoveConfig*                         GrateGrappleOnTopMove;                         // 0x0618 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GrateGrappleToCrawlSpaceMove;                  // 0x0620 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         SpecialGrappleOnTopMove;                       // 0x0628 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UPointLightComponent*                        XrayLight;                                     // 0x0630 (0x0008) [0x0000004500004005] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline)
	class FString                                      SpecialGrappleOnTopFlag;                       // 0x0638 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           AlwaysExitForwards : 1;                        // 0x0648 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHidePoint_Grate");
		}

		return uClassPointer;
	};


	void MovePawnTo(class APawn* PawnToMove);
	class ARPawnVillain* FindTargetAboveGrate(class ARPlayerController* CheckingController);
};
// Class BmScript.RHidePoint_OWGargoyle
// 0x0000 (0x0564 - 0x0564)
class ARHidePoint_OWGargoyle : public ARHidePoint_GargoyleBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHidePoint_OWGargoyle");
		}

		return uClassPointer;
	};


	bool WillSmashIfShot();
	void SetInThermalMode(bool On, bool bForceOff);
	void eventSetInvestigateHighlighted(class UMaterialInstanceConstant* highMat, bool On);
};
// Class BmScript.RHidePoint_Rope
// 0x0000 (0x0570 - 0x0570)
class ARHidePoint_Rope : public ARHidePoint_RopeBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHidePoint_Rope");
		}

		return uClassPointer;
	};

};
// Class BmScript.RHidePointWire_RopeComponent
// 0x0000 (0x02A8 - 0x02A8)
class URHidePointWire_RopeComponent : public URHidePointRope_RopeComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHidePointWire_RopeComponent");
		}

		return uClassPointer;
	};

};
// Class BmScript.RHidePoint_Wire
// 0x0000 (0x0570 - 0x0570)
class ARHidePoint_Wire : public ARHidePoint_Rope
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHidePoint_Wire");
		}

		return uClassPointer;
	};

};
// Class BmScript.RLadder
// 0x0000 (0x0364 - 0x0364)
class ARLadder_BmScript : public ARLadder_BmGame
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLadder");
		}

		return uClassPointer;
	};

};
// Class BmScript.RLevelTransitionDoorBunkerBase
// 0x0061 (0x031C - 0x037D)
class ARLevelTransitionDoorBunkerBase : public ARLevelTransitionDoorBunkerNativeBase
{
public:
	uint32_t                                           StartedStreamingWait : 1;                      // 0x031C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           SupportsSlowOpen : 1;                          // 0x031C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsSlowOpening : 1;                            // 0x031C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bBlockVillains : 1;                            // 0x031C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	class FName                                        AnimOpen;                                      // 0x0320 (0x0008) [0x0000000000000000]               
	class FName                                        AnimClose;                                     // 0x0328 (0x0008) [0x0000000000000000]               
	class FName                                        AnimOpenSlowStart;                             // 0x0330 (0x0008) [0x0000000000000000]               
	class FName                                        AnimOpenSlowLoop;                              // 0x0338 (0x0008) [0x0000000000000000]               
	class FName                                        AnimOpenSlowEnd;                               // 0x0340 (0x0008) [0x0000000000000000]               
	class FName                                        AnimOpenSlowClose;                             // 0x0348 (0x0008) [0x0000000000000000]               
	float                                              NextInstallCheckTime;                          // 0x0350 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   DoorMaterial;                                  // 0x0354 (0x0008) [0x0000000000000000]               
	class UStaticMeshComponent*                        InvestigationMesh2;                            // 0x035C (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        InvestigationMesh1;                            // 0x0364 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class UMaterialInterface*>            OldMaterials;                                  // 0x036C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	EInstallChunk                                      InstallChunkRequired;                          // 0x037C (0x0001) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLevelTransitionDoorBunkerBase");
		}

		return uClassPointer;
	};


	bool AllowLongRangeInteraction(class ARPlayerController* PC);
	void PostBeginPlay();
	void eventDetachVisibleComponents();
	void eventAttachVisibleComponents();
	void ExitPlayerFromTransition();
	void HandleKismetAction(int32_t Index, class URSeqAct_ModifyDoor* Action);
	void eventPassedThroughDoor(class ARPlayerController* PC);
	void eventFinishedClosingDoor();
	bool eventAttemptToCloseDoor(bool optionalInstantly);
	void eventAttemptToOpenDoor(class ARPlayerController* PC);
	void eventAttemptingToUseWhenSideStoriesDisabled();
	bool eventUsedWhenLocked();
	void eventDoorsClosed();
	void eventDoorOpen();
	void DoorClosing();
	void DoorOpening();
	void UpdateLockedLight();
	void eventSetInvestigateHighlighted(class UMaterialInstanceConstant* highMat, bool On);
	void StartLevelFromHere(bool optionalLevelStart);
	void MovePlayerHere();
	bool eventAllowedToBeOpen(class ARPlayerController* PC);
	bool CanReachItem(class APawn* CheckingPawn);
	float OverridesRun(class ARPlayerController* PC);
	bool CanUseInCinematicMode();
	bool MustBeCrouched(class ARPlayerController* PC);
	bool IsButtonPrompt();
	float GetPriority();
	float GetFOVDegrees(class ARPlayerController* PC);
	float GetHeightRange();
	float GetRange();
	struct FVector GetLocationOffset();
	void Interact(class ARPlayerController* PC);
	bool IsActive(class ARPlayerController* PC);
	class FString GetUpperPrompt();
	bool OverridePreviousLines();
	EInteractableItemFaceButton GetInteractButton(class ARPlayerController* PC);
	class FString GetPrompt(class APlayerController* PC);
	ECombatLockType ShouldLockDoors();
};
// Class BmScript.RLevelTransitionDoubleDoors
// 0x0003 (0x03F1 - 0x03F4)
class ARLevelTransitionDoubleDoors : public ARLevelTransitionDoorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLevelTransitionDoubleDoors");
		}

		return uClassPointer;
	};


	void PostBeginPlay();
};
// Class BmScript.RLevelTransitionShutterDoors
// 0x0013 (0x037D - 0x0390)
class ARLevelTransitionShutterDoors : public ARLevelTransitionDoorBunkerBase
{
public:
	class UAkEvent*                                    DoorOpeningLoop;                               // 0x0380 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    DoorClosingLoop;                               // 0x0388 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLevelTransitionShutterDoors");
		}

		return uClassPointer;
	};


	bool IsButtonPrompt();
	bool IsActive(class ARPlayerController* PC);
	EInteractableItemFaceButton GetInteractButton(class ARPlayerController* PC);
	class FString GetPrompt(class APlayerController* PC);
	bool ShouldShowCallBatmobilePrompt(class APlayerController* PC);
	void eventDoorsClosed();
	void DoorClosing();
	void eventDoorOpen();
	void DoorOpening();
};
// Class BmScript.RLevelTransitionShutterDoorsRiddler
// 0x0040 (0x0390 - 0x03D0)
class ARLevelTransitionShutterDoorsRiddler : public ARLevelTransitionShutterDoors
{
public:
	class FString                                      UnlockFlag;                                    // 0x0390 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      RiddlerfyFlag;                                 // 0x03A0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      KeepClosedWhenFlagSet;                         // 0x03B0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class ARDeferred_PointLight*                       RiddlerfiedLight;                              // 0x03C0 (0x0008) [0x0000000000000000]               
	class UMaterialInterface*                          RiddlerfiedMat;                                // 0x03C8 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLevelTransitionShutterDoorsRiddler");
		}

		return uClassPointer;
	};


	void PostBeginPlay();
	bool IsActive(class ARPlayerController* PC);
	void CheckForRiddlerfy();
	void CheckForUnlock();
	void SetRiddlerfied();
	bool eventAllowedToBeOpen(class ARPlayerController* PC);
	ECombatLockType ShouldLockDoors();
	bool eventDisabledByPassenger(class ARPlayerController* PC);
};
// Class BmScript.RLevelVolumeOverride
// 0x0014 (0x02E4 - 0x02F8)
class ARLevelVolumeOverride : public AVolume
{
public:
	class FString                                      MapAreaID;                                     // 0x02E4 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bDoNotShowRoomName : 1;                        // 0x02F4 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bDoNotShowRoomNameIfReentering : 1;            // 0x02F4 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bShowRoomNameEvenInCinematicMode : 1;          // 0x02F4 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bMustBeInLevelVolumeOW : 1;                    // 0x02F4 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLevelVolumeOverride");
		}

		return uClassPointer;
	};


	void eventPostBeginPlay();
	void eventUnTouch(class AActor* Other);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};
// Class BmScript.RLiftBrakeSwitch
// 0x0040 (0x0388 - 0x03C8)
class ARLiftBrakeSwitch : public ARInteractableItem
{
public:
	float                                              TimeTillReset;                                 // 0x0388 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bLightOn : 1;                                  // 0x038C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBatarangTurnsOff : 1;                         // 0x038C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bAllowUseWhenDeactive : 1;                     // 0x038C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bMustBeInControlledBatarangCamera : 1;         // 0x038C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	class UMaterialInstanceConstant*                   LightMat;                                      // 0x0390 (0x0008) [0x0000000000000000]               
	class UStaticMeshComponent*                        UsedStateMesh;                                 // 0x0398 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPointLightComponent*                        XrayLight;                                     // 0x03A0 (0x0008) [0x0000004500004005] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline)
	class UPointLightComponent*                        ButtonLight;                                   // 0x03A8 (0x0008) [0x0000004500004005] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline)
	struct FColor                                      ButtonLightColorOn;                            // 0x03B0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FColor                                      ButtonLightColorOff;                           // 0x03B4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FString                                      DisabledPrompt;                                // 0x03B8 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLiftBrakeSwitch");
		}

		return uClassPointer;
	};


	bool UsedBy(class APawn* User);
	void PostBeginPlay();
	bool IsActive(class ARPlayerController* PC);
	void Interact(class ARPlayerController* PC);
	void OnToggle(class USeqAct_Toggle* Action);
	void ChangeLight(bool bNewState, bool optionalBInstant);
	void ChangeLightReal();
	void TurnOn();
	void TurnOff();
	void UpdateLightColor();
	class FString GetPrompt(class APlayerController* PC);
};
// Class BmScript.RockDecalToggleable
// 0x0000 (0x02D8 - 0x02D8)
class ARockDecalToggleable : public ARockDecal
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RockDecalToggleable");
		}

		return uClassPointer;
	};


	void OnToggle(class USeqAct_Toggle* Action);
};
// Class BmScript.RPickup_MilitiaShield
// 0x0030 (0x02F4 - 0x0324)
class ARPickup_MilitiaShield : public ARPickup_MilitiaShieldBase
{
public:
	class FString                                      pickupUniqueName;                              // 0x02F4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      locatedFlagName;                               // 0x0304 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UAkEvent*                                    LoopSfx;                                       // 0x0314 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ExplodeSfx;                                    // 0x031C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPickup_MilitiaShield");
		}

		return uClassPointer;
	};


	void BreakMe();
	bool EarlyDestroy();
	void InitialFlagCheckHack();
	void InitialFlagCheck();
	void eventPostBeginPlay();
	void TakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
};
// Class BmScript.RPredatorGunLockerMesh
// 0x002C (0x03C4 - 0x03F0)
class ARPredatorGunLockerMesh : public ARPredatorGunLockerBase
{
public:
	class URAggGeomCollisionComponent*                 CollisionGeometry;                             // 0x03C4 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     BoneLocation;                                  // 0x03CC (0x000C) [0x0000000000000000]               
	class TArray<class UMaterialInterface*>            OldMaterials;                                  // 0x03D8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UPointLightComponent*                        XrayLight;                                     // 0x03E8 (0x0008) [0x0000004500004005] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPredatorGunLockerMesh");
		}

		return uClassPointer;
	};


	class UMeshComponent* eventGetDisruptorTargetMesh();
	int32_t GetAnimRefYaw();
	struct FVector GetAnimRefPoint();
	struct FVector GetMoveLoc();
	void PostBeginPlay();
};
// Class BmScript.RPredatorGunLocker
// 0x0000 (0x03F0 - 0x03F0)
class ARPredatorGunLocker : public ARPredatorGunLockerMesh
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPredatorGunLocker");
		}

		return uClassPointer;
	};

};
// Class BmScript.RPresurePad
// 0x00F8 (0x02E0 - 0x03D8)
class ARPresurePad : public ARPresurePadBase
{
public:
	class UStaticMeshComponent*                        BaseMesh;                                      // 0x02E0 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        PadMesh;                                       // 0x02E8 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bDeactivateWhenPlayerTouchesGround : 1;        // 0x02F0 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bTriggered : 1;                                // 0x02F0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bValidVoiceSynthesiserTarget : 1;              // 0x02F0 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	float                                              DeactivateDelay;                               // 0x02F4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    AudioSwitchActivated;                          // 0x02F8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    AudioSwitchActivatedOff;                       // 0x0300 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    AudioSwitchActivated2nd;                       // 0x0308 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    AudioSwitchActivated3rd;                       // 0x0310 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URInteractionClass*                          ActivePads;                                    // 0x0318 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   TurnedOffMIC;                                  // 0x0320 (0x0008) [0x0000000000000000]               
	class URInteractionComponent*                      VoiceSynthesiserInteractionComponent;          // 0x0328 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URInteractionComponent*                      interactionComponent;                          // 0x0330 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class AActor*>                        ValidAttached;                                 // 0x0338 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FPressurePadMICList                         MICList[9];                                    // 0x0348 (0x0090) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPresurePad");
		}

		return uClassPointer;
	};


	void OnTogglePressurePad(class URSeqAct_TogglePressurePad* ToggleAction);
	void OnToggleValidVoiceSynthesiserTarget(class URSeqAct_ToggleValidVoiceSynthesiserTarget* ToggleAction);
	void eventTick(float DeltaTime);
	void eventDetach(class AActor* Other);
	void eventAttach(class AActor* Other);
	void ResetPressurePadToWaitingForInputState(bool optionalBSilent);
	void SetActivatedMat();
	void TriggerPressurePad(class AActor* Other);
	void eventPostBeginPlay();
};
// Class BmScript.RSeqEvt_PressurePad
// 0x0004 (0x017C - 0x0180)
class URSeqEvt_PressurePad : public USequenceEvent
{
public:
	uint32_t                                           Bats : 1;                                      // 0x017C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Cats : 1;                                      // 0x017C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           Mobile : 1;                                    // 0x017C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           Robot : 1;                                     // 0x017C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           Monkey : 1;                                    // 0x017C (0x0004) [0x0000000000000000] [0x00000010] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvt_PressurePad");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RSeqAct_TogglePressurePad
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_TogglePressurePad : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_TogglePressurePad");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RRadarTower
// 0x0074 (0x029C - 0x0310)
class ARRadarTower : public ARRadarTowerBase
{
public:
	class USkeletalMeshComponent*                      Mesh;                                          // 0x029C (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      DestroyedMesh;                                 // 0x02A4 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URSpecialMoveConfig*                         GelInControlPanelMove;                         // 0x02AC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             ExplosionTemplate;                             // 0x02B4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimNodeSequence*                           BaseAnimNode;                                  // 0x02BC (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           DestroyedMeshBaseAnimNode;                     // 0x02C4 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ExplosionSweetener;                            // 0x02CC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    destroyedSFXLoop;                              // 0x02D4 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    destroyedSFXFire;                              // 0x02DC (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   XrayMat;                                       // 0x02E4 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    RedPulseFX;                                    // 0x02EC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URInteractionComponent*                      PlayerInteractions;                            // 0x02F4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bNeedToClearAreaToInteract : 1;                // 0x02FC (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bInteractionToggledOff : 1;                    // 0x02FC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDetonated : 1;                                // 0x02FC (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDMVisThroughWalls_Suppressed : 1;             // 0x02FC (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDMVisThroughWalls_Old : 1;                    // 0x02FC (0x0004) [0x0000000000000000] [0x00000010] 
	class FString                                      DestroyedFlagName;                             // 0x0300 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RRadarTower");
		}

		return uClassPointer;
	};


	void eventSuppressDetectiveModeVisibilityThroughWalls(bool bSuppress);
	void UnregisterDMThroughWallsSuppressable();
	void RegisterDMThroughWallsSuppressable();
	void eventSetXrayMaterials(bool bHighlight);
	void HidePanel();
	void EnterDamagedState(bool bInstant);
	bool InValidPositionToPlaceGel(class ARPawnPlayer* Player);
	void DetonateGel();
	bool PlaceExplosiveGel(class ARPawnPlayer* Player);
	void OnToggle(class USeqAct_Toggle* Action);
	bool IsTowerDestroyed();
	void SetTowerDestroyedFlag();
	void eventTick(float DeltaTime);
	void eventDestroyed();
	void eventPreStreamOut();
	void PostBeginPlay();
};
// Class BmScript.RRiddlerRewardCage
// 0x0028 (0x029C - 0x02C4)
class ARRiddlerRewardCage : public AActor
{
public:
	class ARPickupBase*                                QuestionMark;                                  // 0x029C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    RewardOpenSfx;                                 // 0x02A4 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                         // 0x02AC (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              OpenTime;                                      // 0x02B4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CurrentTimeOpen;                               // 0x02B8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bOpen : 1;                                     // 0x02BC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDontPlayRewardOpenAudio : 1;                  // 0x02BC (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	int32_t                                            bFirstTick;                                    // 0x02C0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RRiddlerRewardCage");
		}

		return uClassPointer;
	};


	void eventTick(float DeltaTime);
	void OnToggle(class USeqAct_Toggle* Action);
	bool CanClose();
	void PostBeginPlay();
	void Close();
	void Open();
	void ResetStasis();
	void BlendToOpen();
	void BlendToClose();
	void eventEndMatineeControl(class UInterpGroup* InInterpGroup, class UInterpGroupInst* InInterpGroupInst);
	void eventBeginMatineeControl(class UInterpGroup* InInterpGroup, class UInterpGroupInst* InInterpGroupInst);
};
// Class BmScript.RSeqAct_AssignToGuardVolume
// 0x0014 (0x0160 - 0x0174)
class URSeqAct_AssignToGuardVolume : public USequenceAction
{
public:
	class ARGuardVolume*                               TargetGuardVolume;                             // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARPawnVillainGunBase*                        GuardThug;                                     // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bDoWhileCocky : 1;                             // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_AssignToGuardVolume");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_ChatterBox
// 0x0000 (0x0274 - 0x0274)
class URSeqAct_ChatterBox : public URSeqAct_ChatterBoxBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_ChatterBox");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool BlockLevelName();
	void eventShutdownHUD();
	void eventInitHUD();
	void PreRender(class UCanvas* Canvas);
	void DrawHUD(class UCanvas* Canvas);
	void eventDrawDebug();
	bool eventUpdate(float DeltaTime);
	void Deactivated();
	void Activated();
};
// Class BmScript.RSeqAct_CheckKnightFallState
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_CheckKnightFallState : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_CheckKnightFallState");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_CheckThreatAsset
// 0x0008 (0x0160 - 0x0168)
class URSeqAct_CheckThreatAsset : public USequenceAction
{
public:
	class UObject*                                     ThreatAsset;                                   // 0x0160 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_CheckThreatAsset");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_CountThreatAssets
// 0x0009 (0x0160 - 0x0169)
class URSeqAct_CountThreatAssets : public USequenceAction
{
public:
	uint32_t                                           bDrones : 1;                                   // 0x0160 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bCheckpoints : 1;                              // 0x0160 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bWatchTowers : 1;                              // 0x0160 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bCommandBeacons : 1;                           // 0x0160 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	int32_t                                            ResultInt;                                     // 0x0164 (0x0004) [0x0000000000000000]               
	EDistrict                                          TestDistrict;                                  // 0x0168 (0x0001) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_CountThreatAssets");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_DisableSideStories
// 0x0014 (0x0160 - 0x0174)
class URSeqAct_DisableSideStories : public USequenceAction
{
public:
	uint32_t                                           bFullyDisablePlayerMapSelection : 1;           // 0x0160 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowAutosavesWhileDisabled : 1;              // 0x0160 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bAllowSideStoryLevelsToUnload : 1;             // 0x0160 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	class FString                                      ReasonConversation;                            // 0x0164 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_DisableSideStories");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_DriveBatmobileToLocation
// 0x0040 (0x0178 - 0x01B8)
class URSeqAct_DriveBatmobileToLocation : public USeqAct_Latent
{
public:
	class ARVehicleBatmobileBase*                      Batmobile;                                     // 0x0178 (0x0008) [0x0000000000000000]               
	class AActor*                                      destActor;                                     // 0x0180 (0x0008) [0x0000000000000000]               
	class AActor*                                      DestActor2;                                    // 0x0188 (0x0008) [0x0000000000000000]               
	class AActor*                                      CurDestActor;                                  // 0x0190 (0x0008) [0x0000000000000000]               
	struct FVector                                     WantDir;                                       // 0x0198 (0x000C) [0x0000000000000000]               
	uint32_t                                           UsePursuitMode : 1;                            // 0x01A4 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           EndInPursuitMode : 1;                          // 0x01A4 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           DontRotate : 1;                                // 0x01A4 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           DontPickUpBatman : 1;                          // 0x01A4 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           AbortMe : 1;                                   // 0x01A4 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              AtLocationTolerance;                           // 0x01A8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              UsePursuitModeMaxAngle;                        // 0x01AC (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RotationDamping;                               // 0x01B0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StuckTime;                                     // 0x01B4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_DriveBatmobileToLocation");
		}

		return uClassPointer;
	};


	bool eventUpdate(float DeltaTime);
	void Activated();
	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RSeqAct_FlashTextureMovieControl
// 0x0044 (0x0160 - 0x01A4)
class URSeqAct_FlashTextureMovieControl : public URSeqAct_FlashTextureMovieControlBase
{
public:
	class USwfMovie*                                   TheGFxMovieInstance;                           // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UTextureRenderTarget2D*                      TheTextureRenderTarget;                        // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URGFxMovieVideoPlayer*                       MovieUI;                                       // 0x0170 (0x0008) [0x0000000000000000]               
	EGFxRenderTextureMode                              TheTextureRenderMode;                          // 0x0178 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FString                                      USM_MovieName;                                 // 0x017C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              USM_BufferSize;                                // 0x018C (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bLoop : 1;                                     // 0x0190 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           UseDuckingSource : 1;                          // 0x0190 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bDuckedDialogue : 1;                           // 0x0190 (0x0004) [0x0000000000000400] [0x00000004] (CPF_Transient)
	uint32_t                                           bUseSubtitles : 1;                             // 0x0190 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	class TArray<class AActor*>                        AudioSources;                                  // 0x0194 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_FlashTextureMovieControl");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void FetchAudioSource(class TArray<float>& outPos, class TArray<float>& outRot);
	void AtEndClose();
	void Activated();
};
// Class BmScript.RSeqAct_ForceNoStasis
// 0x0014 (0x0160 - 0x0174)
class URSeqAct_ForceNoStasis : public USequenceAction
{
public:
	class TArray<class AActor*>                        TestActors;                                    // 0x0160 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bAffectAllCurrentPawns : 1;                    // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_ForceNoStasis");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_GetNumSecretsFound
// 0x0008 (0x0160 - 0x0168)
class URSeqAct_GetNumSecretsFound : public USequenceAction
{
public:
	int32_t                                            NumSecrets;                                    // 0x0160 (0x0004) [0x0000000000000000]               
	int32_t                                            NumSecretsLeft;                                // 0x0164 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_GetNumSecretsFound");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_GetTransInFromGangPoint
// 0x0018 (0x0160 - 0x0178)
class URSeqAct_GetTransInFromGangPoint : public USequenceAction
{
public:
	class ARGangInteractPointBase*                     RiotPoint;                                     // 0x0160 (0x0008) [0x0000000000000000]               
	class FString                                      AnimNameString;                                // 0x0168 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_GetTransInFromGangPoint");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_GetZoneWithMostSecretsLeft
// 0x0008 (0x0160 - 0x0168)
class URSeqAct_GetZoneWithMostSecretsLeft : public USequenceAction
{
public:
	int32_t                                            NumTimesCalled;                                // 0x0160 (0x0004) [0x0000000000000000]               
	int32_t                                            NumSecretsLeftInSelectedZone;                  // 0x0164 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_GetZoneWithMostSecretsLeft");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_GFxMovieUI
// 0x0044 (0x0160 - 0x01A4)
class URSeqAct_GFxMovieUI : public USequenceAction
{
public:
	class USwfMovie*                                   TheMovieInstance;                              // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UTextureRenderTarget2D*                      RenderTexture;                                 // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URGFxMovieUI*                                MovieUI;                                       // 0x0170 (0x0008) [0x0000000000000000]               
	class UClass*                                      TheClass;                                      // 0x0178 (0x0008) [0x0000000100000000] (CPF_Edit)    
	EGFxRenderTextureMode                              RenderTextureMode;                             // 0x0180 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FString                                      BackScreenCmd;                                 // 0x0184 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UObject*>                       AssetReferences;                               // 0x0194 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_GFxMovieUI");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_GivenPlayerUpgrade
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_GivenPlayerUpgrade : public USequenceAction
{
public:
	class FString                                      UnlockFlag;                                    // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_GivenPlayerUpgrade");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_IsChallengeActive
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_IsChallengeActive : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_IsChallengeActive");
		}

		return uClassPointer;
	};


	bool InChallengeMode();
	void eventActivated();
};
// Class BmScript.RSeqAct_IsCurrentObjective
// 0x000C (0x0160 - 0x016C)
class URSeqAct_IsCurrentObjective : public USequenceAction
{
public:
	class FName                                        ObjectiveMarkerName;                           // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           DeactivateMarkerIfNotMainPath : 1;             // 0x0168 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_IsCurrentObjective");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_IsHeavyTankEncounterActive
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_IsHeavyTankEncounterActive : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_IsHeavyTankEncounterActive");
		}

		return uClassPointer;
	};


	void eventActivated();
};
// Class BmScript.RSeqAct_IsInBatmobile
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_IsInBatmobile : public USequenceAction
{
public:
	class ARPlayerController*                          TargetPlayer;                                  // 0x0160 (0x0008) [0x0000000000000000]               
	EWhichBatmobileMode                                WhichMode;                                     // 0x0168 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMustHaveFinishedGetInAnim : 1;                // 0x016C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_IsInBatmobile");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_IsLowUrgencyObjectiveActive
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_IsLowUrgencyObjectiveActive : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_IsLowUrgencyObjectiveActive");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_IsPlayerLockedInBatmobile
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_IsPlayerLockedInBatmobile : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_IsPlayerLockedInBatmobile");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_JokerRooftopController
// 0x0004 (0x0288 - 0x028C)
class URSeqAct_JokerRooftopController : public URSeqAct_JokerRooftopControllerBase
{
public:
	int32_t                                            CurrentSideStorySelectedLine;                  // 0x0288 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_JokerRooftopController");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	class ARJokerRooftopPoint* FindSpawnPoint(bool optionalBHightLightSpheres);
	void eventSpawnRooftopJoker();
	bool GetSideStoryDialogue();
	bool IsMissionFinished(class URPersistentData* pData, int32_t missionIndex);
	int32_t GetNumConvForSideStory(int32_t SideIdx);
	class FString GetSideStoryNameForIndex(int32_t SideIdx);
	float GetTimeSinceUpdate(class URPersistentData* pData, int32_t missionIndex);
	bool IsMissionEligibleForUpdateMovie(class URPersistentData* pData, int32_t missionIndex);
	int32_t GetNumValidSideStoryLines(float Perc, int32_t StoryId);
	bool GetCh7Dialogue();
	bool GetChapterDialogue();
	int32_t GetNumConvForChapter(int32_t ChIdx);
	int32_t GetAdjustedChapterNumber();
	bool NextDialogueIsChapter();
	void eventPlayDialogue();
	void eventStartNextDialogue();
	void eventSpawnAllJokers();
	class ARJokerRooftopPointBase* eventGetJokerPointFromBehaviour(class URBMBehaviour* JokerBehav);
	void eventDrawTestingSpheres();
	bool eventJokerInView(float DeltaTime);
};
// Class BmScript.RSeqAct_MakeBatmanFaceObject
// 0x000C (0x0160 - 0x016C)
class URSeqAct_MakeBatmanFaceObject : public USequenceAction
{
public:
	class AActor*                                      FaceAtActor;                                   // 0x0160 (0x0008) [0x0000000000000000]               
	uint32_t                                           bOverrideFinishedCombatMove : 1;               // 0x0168 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_MakeBatmanFaceObject");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void eventActivated();
};
// Class BmScript.RSeqAct_MostWantedEndOfGameState
// 0x0018 (0x0160 - 0x0178)
class URSeqAct_MostWantedEndOfGameState : public USequenceAction
{
public:
	class ARPlayerController*                          RPC;                                           // 0x0160 (0x0008) [0x0000000000000000]               
	class URFlagManager*                               FlagMan;                                       // 0x0168 (0x0008) [0x0000000000000000]               
	ESideStory                                         SideStory;                                     // 0x0170 (0x0001) [0x0000000000000000]               
	ESubChapter_0                                      SubChapter;                                    // 0x0171 (0x0001) [0x0000000000000000]               
	int32_t                                            Chapter;                                       // 0x0174 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_MostWantedEndOfGameState");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_ObjectiveFailed
// 0x0038 (0x0178 - 0x01B0)
class URSeqAct_ObjectiveFailed : public USeqAct_Latent
{
public:
	class FString                                      GameOverSequence;                              // 0x0178 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FString>                        OptionalAdditionalRandomisedGameOverSequences; // 0x0188 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      HintForNextTime;                               // 0x0198 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           FadeAudio : 1;                                 // 0x01A8 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              Time;                                          // 0x01AC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_ObjectiveFailed");
		}

		return uClassPointer;
	};


	bool eventUpdate(float DeltaTime);
	class FString GetGameOverSequence();
	void Activated();
	class ARPlayerController* GetPC();
};
// Class BmScript.RSeqAct_Ocean
// 0x0084 (0x0160 - 0x01E4)
class URSeqAct_Ocean : public USequenceAction
{
public:
	struct FRockOceanSettings                          OceanSettings;                                 // 0x0160 (0x007C) [0x0000000100000000] (CPF_Edit)    
	class UTexture2D*                                  OverrideDataMap;                               // 0x01DC (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_Ocean");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void eventActivated();
};
// Class BmScript.RSeqAct_OverrideDetectiveMaterials
// 0x0028 (0x0160 - 0x0188)
class URSeqAct_OverrideDetectiveMaterials : public USequenceAction
{
public:
	class ARBMPawnAIAnim*                              OverridePawn;                                  // 0x0160 (0x0008) [0x0000000000000000]               
	class UMaterialInterface*                          XRayNormalMaterial;                            // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInterface*                          XRayNormalBoneMaterial;                        // 0x0170 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInterface*                          XRayDangerMaterial;                            // 0x0178 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInterface*                          XRayDangerBoneMaterial;                        // 0x0180 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_OverrideDetectiveMaterials");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_PenguinCarChase
// 0x00D0 (0x0178 - 0x0248)
class URSeqAct_PenguinCarChase : public USeqAct_Latent
{
public:
	uint32_t                                           bRunning : 1;                                  // 0x0178 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDrawDebug : 1;                                // 0x0178 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bAwareOfPlayer : 1;                            // 0x0178 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bAbandonmentCriteriaCurrentlyMet : 1;          // 0x0178 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bFleeing : 1;                                  // 0x0178 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bPlayerInVehicle : 1;                          // 0x0178 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bSuspendedExceptHUD : 1;                       // 0x0178 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bSpawnedPassengers : 1;                        // 0x0178 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           prevCarCountsAsVisible : 1;                    // 0x0178 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bForceStopFleeing : 1;                         // 0x0178 (0x0004) [0x0000000000000000] [0x00000200] 
	class AActor*                                      Car;                                           // 0x017C (0x0008) [0x0000000000000000]               
	class AActor*                                      Driver;                                        // 0x0184 (0x0008) [0x0000000000000000]               
	class AActor*                                      Passenger;                                     // 0x018C (0x0008) [0x0000000000000000]               
	class ARVehicleNPC*                                CarVehicle;                                    // 0x0194 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 BoxMesh;                                       // 0x019C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARBatmanForensicsDevice*                     forensicsDevice;                               // 0x01A4 (0x0008) [0x0000000000000000]               
	class URVehicleSimCarNPC*                          SimCarNPC;                                     // 0x01AC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            CurrentLane;                                   // 0x01B4 (0x0004) [0x0000000000000000]               
	float                                              NextLaneSwapDelay;                             // 0x01B8 (0x0004) [0x0000000000000000]               
	float                                              SpookedAudioTimer;                             // 0x01BC (0x0004) [0x0000000000000000]               
	float                                              viewConeAngle;                                 // 0x01C0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              awareOfBMBLRange;                              // 0x01C4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              minDist2D;                                     // 0x01C8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              minDistZ;                                      // 0x01CC (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              maxDist2D;                                     // 0x01D0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              minFleeTime;                                   // 0x01D4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              introFleeTime;                                 // 0x01D8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              fUntrackedAndOutOfSightTimeThreshold;          // 0x01DC (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              fleeTimeRemaining;                             // 0x01E0 (0x0004) [0x0000000000000000]               
	float                                              playerDist2D;                                  // 0x01E4 (0x0004) [0x0000000000000000]               
	float                                              playerDistZ;                                   // 0x01E8 (0x0004) [0x0000000000000000]               
	float                                              throttleScaleNear;                             // 0x01EC (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              throttleScaleFar;                              // 0x01F0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              throttleScaleNearDist;                         // 0x01F4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              throttleScaleFarDist;                          // 0x01F8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              distanceProportion;                            // 0x01FC (0x0004) [0x0000000000000000]               
	float                                              SpeedScale;                                    // 0x0200 (0x0004) [0x0000000000000000]               
	float                                              TimeStarted;                                   // 0x0204 (0x0004) [0x0000000000000000]               
	struct FVector                                     boxSpawnOffset;                                // 0x0208 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              boxSpawnIntervalMin;                           // 0x0214 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              boxSpawnIntervalMax;                           // 0x0218 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              boxSpawnMinVanSpeed;                           // 0x021C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              boxLifeTime;                                   // 0x0220 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            maxBoxes;                                      // 0x0224 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              nextBoxSpawnTime;                              // 0x0228 (0x0004) [0x0000000000000000]               
	class TArray<struct FdroppedBoxInfo>               droppedBoxes;                                  // 0x022C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              prevLosLockon;                                 // 0x023C (0x0004) [0x0000000000000000]               
	float                                              lowLOSThreshold;                               // 0x0240 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StartedRunningTime;                            // 0x0244 (0x0004) [0x0000800000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_PenguinCarChase");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool BlockLevelName();
	void eventShutdownHUD();
	void eventInitHUD();
	void DrawHUD(class UCanvas* Canvas);
	void PreRender(class UCanvas* Canvas);
	void DrawDebug();
	void Deactivated();
	void Activated();
	void CheckInputs();
	void CheckForBMBL();
	void CheckDistances();
	void SetCarSpeedScale(float interpolant);
	void DestroyAllBoxes();
	void CheckLOSOutputs();
	bool eventUpdate(float DeltaTime);
};
// Class BmScript.RSeqAct_PenguinIntel
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_PenguinIntel : public USequenceAction
{
public:
	class FString                                      GlobalFlagReqdToProceed;                       // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_PenguinIntel");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_PlayVehicleBark
// 0x0018 (0x0160 - 0x0178)
class URSeqAct_PlayVehicleBark : public USequenceAction
{
public:
	class ARVehicleNPC*                                Vehicle;                                       // 0x0160 (0x0008) [0x0000000000000000]               
	class FName                                        BarkId;                                        // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            PassengerSlot;                                 // 0x0170 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            BarkPriority;                                  // 0x0174 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_PlayVehicleBark");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_RemoveHighlightFromXrayWire
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_RemoveHighlightFromXrayWire : public USequenceAction
{
public:
	class TArray<class ARXrayInterpActor*>             xrayActors;                                    // 0x0160 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_RemoveHighlightFromXrayWire");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_RiddlerSpeaking
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_RiddlerSpeaking : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_RiddlerSpeaking");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_RiotPropHasBeenRemoved
// 0x0008 (0x0160 - 0x0168)
class URSeqAct_RiotPropHasBeenRemoved : public USequenceAction
{
public:
	class ARDestructibleProp*                          Prop;                                          // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_RiotPropHasBeenRemoved");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SetAllowedToChatter
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_SetAllowedToChatter : public USequenceAction
{
public:
	class TArray<class ARBMPawnAI*>                    Pawns;                                         // 0x0160 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetAllowedToChatter");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SetBatmobilePassenger
// 0x002C (0x0160 - 0x018C)
class URSeqAct_SetBatmobilePassenger : public USequenceAction
{
public:
	class ARBMPawnAI*                                  Passenger;                                     // 0x0160 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    PassengerAnimSet;                              // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            PassengerSlot;                                 // 0x0170 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        PassengerAnimName;                             // 0x0174 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FBatmobilePassengerNoise>      PassengerNoise;                                // 0x017C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetBatmobilePassenger");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_SetBatmobileState
// 0x001C (0x0160 - 0x017C)
class URSeqAct_SetBatmobileState : public USequenceAction
{
public:
	class ARVehicleBatmobileBase*                      Batmobile;                                     // 0x0160 (0x0008) [0x0000000000000000]               
	class UAnimTree*                                   NewAnimTreeTemplate;                           // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           EnableBattleMode : 1;                          // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           EnablePursuitMode : 1;                         // 0x0170 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           EnableInfiniteBoost : 1;                       // 0x0170 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           DisableInfiniteBoost : 1;                      // 0x0170 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           SetIsDisabledByEMP : 1;                        // 0x0170 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           SetNotDisabledByEMP : 1;                       // 0x0170 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           SetRepairable : 1;                             // 0x0170 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           SetIsVulnerableToEMP : 1;                      // 0x0170 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           EnableJumpCamera : 1;                          // 0x0170 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           DisableJumpCamera : 1;                         // 0x0170 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           SetIsStolen : 1;                               // 0x0170 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           SetIsNotStolen : 1;                            // 0x0170 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           EnableForceWheelspin : 1;                      // 0x0170 (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           DisableForceWheelspin : 1;                     // 0x0170 (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           EnableWinchHelpText : 1;                       // 0x0170 (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           DisableWinchHelpText : 1;                      // 0x0170 (0x0004) [0x0000000100000000] [0x00008000] (CPF_Edit)
	uint32_t                                           EnableSceneryCollision : 1;                    // 0x0170 (0x0004) [0x0000000100000000] [0x00010000] (CPF_Edit)
	uint32_t                                           DisableSceneryCollision : 1;                   // 0x0170 (0x0004) [0x0000000100000000] [0x00020000] (CPF_Edit)
	uint32_t                                           EnableSatNav : 1;                              // 0x0170 (0x0004) [0x0000000100000000] [0x00040000] (CPF_Edit)
	uint32_t                                           DisableSatNav : 1;                             // 0x0170 (0x0004) [0x0000000100000000] [0x00080000] (CPF_Edit)
	uint32_t                                           EnableUnderAttackWarning : 1;                  // 0x0170 (0x0004) [0x0000000100000000] [0x00100000] (CPF_Edit)
	uint32_t                                           DisableUnderAttackWarning : 1;                 // 0x0170 (0x0004) [0x0000000100000000] [0x00200000] (CPF_Edit)
	uint32_t                                           DisablebRemoteDriveBatmanTracker : 1;          // 0x0170 (0x0004) [0x0000000100000000] [0x00400000] (CPF_Edit)
	uint32_t                                           EnableRemoteDriveBatmanTracker : 1;            // 0x0170 (0x0004) [0x0000000100000000] [0x00800000] (CPF_Edit)
	uint32_t                                           DisablebProximityPickup : 1;                   // 0x0170 (0x0004) [0x0000000100000000] [0x01000000] (CPF_Edit)
	uint32_t                                           EnableProximityPickup : 1;                     // 0x0170 (0x0004) [0x0000000100000000] [0x02000000] (CPF_Edit)
	uint32_t                                           bLockInBattleMode : 1;                         // 0x0170 (0x0004) [0x0000000100000000] [0x04000000] (CPF_Edit)
	uint32_t                                           DetachWinch : 1;                               // 0x0170 (0x0004) [0x0000000100000000] [0x08000000] (CPF_Edit)
	float                                              ScaleTopSpeed;                                 // 0x0174 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PreventModeSwitchDuration;                     // 0x0178 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetBatmobileState");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void UsedWhenStolen();
	void Activated();
};
// Class BmScript.RSeqAct_SetHeartbeatType
// 0x000D (0x0160 - 0x016D)
class URSeqAct_SetHeartbeatType : public USequenceAction
{
public:
	class ARBMPawnAI*                                  NPC;                                           // 0x0160 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSetOverrideHeartbeat : 1;                     // 0x0168 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	ENpcHeartBeatType                                  HeartBeat;                                     // 0x016C (0x0001) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetHeartbeatType");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SetHelicopterPointOfInterestActive
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_SetHelicopterPointOfInterestActive : public USequenceAction
{
public:
	class TArray<class ARHelicopterPointOfInterest*>   PointsOfInterest;                              // 0x0160 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetHelicopterPointOfInterestActive");
		}

		return uClassPointer;
	};


	void SetPointsActive(bool _active);
	void eventActivated();
};
// Class BmScript.RSeqAct_SetHostile
// 0x000C (0x0160 - 0x016C)
class URSeqAct_SetHostile : public USequenceAction
{
public:
	class ARBMPawnAI*                                  PawnAI;                                        // 0x0160 (0x0008) [0x0000000000000000]               
	uint32_t                                           bAttackImmediately : 1;                        // 0x0168 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetHostile");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_SetSideStoryWithoutMapMarker
// 0x0002 (0x0160 - 0x0162)
class URSeqAct_SetSideStoryWithoutMapMarker : public USequenceAction
{
public:
	EActiveSideStoryEnum                               TheSideStory;                                  // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EActiveSideStoryEnum                               OnlyIfCurrentSideStory;                        // 0x0161 (0x0001) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetSideStoryWithoutMapMarker");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SetVehicleProperties
// 0x0018 (0x0160 - 0x0178)
class URSeqAct_SetVehicleProperties : public USequenceAction
{
public:
	class TArray<class ARVehicle*>                     Vehicles;                                      // 0x0160 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           SetDestroyMinPlayerRange : 1;                  // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           SetHeavyTankWeakPointRevealed : 1;             // 0x0170 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           SetHeavyTankWeakPointNotRevealed : 1;          // 0x0170 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           SetEscortIgnoreBatmobile : 1;                  // 0x0170 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           SetEscortDontIgnoreBatmobile : 1;              // 0x0170 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           DisableBarks : 1;                              // 0x0170 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           EnableBarks : 1;                               // 0x0170 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           DisableRFlaps : 1;                             // 0x0170 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           EnableRFlaps : 1;                              // 0x0170 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           SetIgnoreBatmobileWeaponSounds : 1;            // 0x0170 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           SetDontIgnoreBatmobileWeaponSounds : 1;        // 0x0170 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           HideSkidMarks : 1;                             // 0x0170 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           CantUseDisruptor : 1;                          // 0x0170 (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           CanUseDisruptor : 1;                           // 0x0170 (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           DestroyWhenOffScreen : 1;                      // 0x0170 (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           PenguinVanBothDoorsOpen : 1;                   // 0x0170 (0x0004) [0x0000000100000000] [0x00008000] (CPF_Edit)
	float                                              DestroyMinPlayerRange;                         // 0x0174 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetVehicleProperties");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RVehicleHush
// 0x0004 (0x1E34 - 0x1E38)
class ARVehicleHush : public ARVehicleHushBase
{
public:
	uint32_t                                           bBlownUp : 1;                                  // 0x1E34 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           BothDoorsOpen : 1;                             // 0x1E34 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVehicleHush");
		}

		return uClassPointer;
	};


	void eventFinishAnimControl(class UInterpGroup* InInterpGroup, class UInterpGroupInst* InInterpGroupInst);
	void eventTakeDamage(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void PostBeginPlay();
};
// Class BmScript.RSeqAct_ShowTextOverFade
// 0x0018 (0x0178 - 0x0190)
class URSeqAct_ShowTextOverFade : public USeqAct_Latent
{
public:
	class FString                                      TextToShow;                                    // 0x0178 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              DurationInSeconds;                             // 0x0188 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeRemaining;                                 // 0x018C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_ShowTextOverFade");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool Update(float DeltaTime);
	void Activated();
};
// Class BmScript.RSeqAct_ShowVehicleOnHUD
// 0x001C (0x0160 - 0x017C)
class URSeqAct_ShowVehicleOnHUD : public USequenceAction
{
public:
	class ARVehicleNPC*                                Vehicle;                                       // 0x0160 (0x0008) [0x0000000000000000]               
	uint32_t                                           bUseBatmobileTracker : 1;                      // 0x0168 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bCanLoseTarget : 1;                            // 0x0168 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bCanUntagTarget : 1;                           // 0x0168 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	class FString                                      ObjectiveName;                                 // 0x016C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_ShowVehicleOnHUD");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_SideStory_IconControl
// 0x0038 (0x0160 - 0x0198)
class URSeqAct_SideStory_IconControl : public USequenceAction
{
public:
	class FString                                      SideStoryName;                                 // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           ActuallyAddThisToMap : 1;                      // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           TellPlayerThisIconJustDiscovered : 1;          // 0x0170 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bClearObjectivePansBeforeAdd : 1;              // 0x0170 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           MakeUnavailableInsteadOfActuallyRemoved : 1;   // 0x0170 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bAddIconNameToAutoPan : 1;                     // 0x0170 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           AutoSelect : 1;                                // 0x0170 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	ESS_IconControl_Action                             IconAction;                                    // 0x0174 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FString                                      IconName;                                      // 0x0178 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FSS_IconEntry>                 IconList;                                      // 0x0188 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SideStory_IconControl");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SideStory_Query
// 0x0028 (0x0160 - 0x0188)
class URSeqAct_SideStory_Query : public USequenceAction
{
public:
	class FString                                      SideStoryName;                                 // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	ESS_Query_Action                                   QueryAction;                                   // 0x0170 (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            CompareValue;                                  // 0x0174 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FString                                      IconNamed;                                     // 0x0178 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SideStory_Query");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void CompareByValue(int32_t Value);
	void Activated();
};
// Class BmScript.RSeqAct_SideStory_Switch
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_SideStory_Switch : public USequenceAction
{
public:
	class FString                                      DLCName;                                       // 0x0160 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SideStory_Switch");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SideStory_UIMessage
// 0x005C (0x0160 - 0x01BC)
class URSeqAct_SideStory_UIMessage : public USequenceAction
{
public:
	uint32_t                                           DisplayMessage : 1;                            // 0x0160 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bMapPrompt : 1;                                // 0x0160 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bClearObjectivePans : 1;                       // 0x0160 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	class FString                                      SideStoryName;                                 // 0x0164 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	EStoryUI                                           UI_Shown;                                      // 0x0174 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EObjIcon                                           IconType;                                      // 0x0175 (0x0001) [0x0000000000000000]               
	float                                              ShowTimeSeconds;                               // 0x0178 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FString                                      SDB_Title;                                     // 0x017C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      SDB_Description;                               // 0x018C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      SideObjectiveIcon;                             // 0x019C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      MapPromptAdditional;                           // 0x01AC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SideStory_UIMessage");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SideStoryCooldownTimer
// 0x000C (0x0178 - 0x0184)
class URSeqAct_SideStoryCooldownTimer : public USeqAct_Latent
{
public:
	EeSideStoryCooldownTimer                           SideStory;                                     // 0x0178 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              Duration;                                      // 0x017C (0x0004) [0x0000000000000000]               
	float                                              CurrentTimer;                                  // 0x0180 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SideStoryCooldownTimer");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool eventUpdate(float DeltaTime);
};
// Class BmScript.RSeqAct_UnlockAchievement
// 0x0008 (0x0160 - 0x0168)
class URSeqAct_UnlockAchievement : public USequenceAction
{
public:
	EAchievementID                                     AchievementId;                                 // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Value;                                         // 0x0164 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_UnlockAchievement");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_UnlockChallenge
// 0x0048 (0x0160 - 0x01A8)
class URSeqAct_UnlockChallenge : public USequenceAction
{
public:
	EUnlockChallengeAction                             ChallengeAction;                               // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class TArray<int32_t>                              ChallengeIds;                                  // 0x0164 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           MessageThePlayer : 1;                          // 0x0174 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           EnablePrerequisite : 1;                        // 0x0174 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	int32_t                                            MaxMessageCount;                               // 0x0178 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            DisplaySeconds;                                // 0x017C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NumChallengesRevealed;                         // 0x0180 (0x0004) [0x0000000000000400] (CPF_Transient)
	class FString                                      ChallengeGroup;                                // 0x0184 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      ChallengeGroupCached;                          // 0x0194 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            SingleChallengeRevealedId;                     // 0x01A4 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_UnlockChallenge");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_UnlockCharacterBio
// 0x0008 (0x0160 - 0x0168)
class URSeqAct_UnlockCharacterBio : public USequenceAction
{
public:
	EBioCharacter                                      Character;                                     // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bUnknownCharacter : 1;                         // 0x0164 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bDontDisplayMessage : 1;                       // 0x0164 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bDontShowBackPrompt : 1;                       // 0x0164 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_UnlockCharacterBio");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_UnlockShowcaseCharacter
// 0x0008 (0x0160 - 0x0168)
class URSeqAct_UnlockShowcaseCharacter : public USequenceAction
{
public:
	EShowcaseCharacter                                 Character;                                     // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bDontDisplayMessage : 1;                       // 0x0164 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_UnlockShowcaseCharacter");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_UnlockShowcaseVehicle
// 0x0008 (0x0160 - 0x0168)
class URSeqAct_UnlockShowcaseVehicle : public USequenceAction
{
public:
	EShowcaseVehicle                                   Vehicle;                                       // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bDontDisplayMessage : 1;                       // 0x0164 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_UnlockShowcaseVehicle");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_WaitForHud
// 0x000C (0x0178 - 0x0184)
class URSeqAct_WaitForHud : public USeqAct_Latent
{
public:
	class ARPlayerController*                          RPC;                                           // 0x0178 (0x0008) [0x0000000000000000]               
	uint32_t                                           WaitForCrimeSceneInfoModule : 1;               // 0x0180 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           WaitForDetectiveModeModule : 1;                // 0x0180 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           WaitForExtraSequenceModule : 1;                // 0x0180 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           WaitForDownloadProgressModule : 1;             // 0x0180 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           WaitForBatmobileModule : 1;                    // 0x0180 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           WaitForDetectiveModeJammingModule : 1;         // 0x0180 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           WaitForScannerModule : 1;                      // 0x0180 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           WaitForForensicDetailModule : 1;               // 0x0180 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           WaitForObjectivesModule : 1;                   // 0x0180 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           WaitForRoomNameModule : 1;                     // 0x0180 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           WaitForBespokeModule : 1;                      // 0x0180 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           WaitForLocalRadarModule : 1;                   // 0x0180 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           WaitForChallengeModeModule : 1;                // 0x0180 (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           WaitForAlertsAndSurveillanceModule : 1;        // 0x0180 (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           WaitForBossModule : 1;                         // 0x0180 (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           WaitForForensicBeaconModule : 1;               // 0x0180 (0x0004) [0x0000000100000000] [0x00008000] (CPF_Edit)
	uint32_t                                           WaitForHeavyTankScanModule : 1;                // 0x0180 (0x0004) [0x0000000100000000] [0x00010000] (CPF_Edit)
	uint32_t                                           WaitForSuicideCarsModule : 1;                  // 0x0180 (0x0004) [0x0000000100000000] [0x00020000] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_WaitForHud");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool IsSpecifyModuleMissing();
	bool eventUpdate(float DeltaTime);
};
// Class BmScript.RSeqCond_CheckChapter
// 0x0008 (0x0144 - 0x014C)
class URSeqCond_CheckChapter : public USequenceCondition
{
public:
	ESideStory                                         SideStory;                                     // 0x0144 (0x0001) [0x0000000100000000] (CPF_Edit)    
	ESubChapter_0                                      SubChapter;                                    // 0x0145 (0x0001) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Chapter;                                       // 0x0148 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqCond_CheckChapter");
		}

		return uClassPointer;
	};


	void eventActivated();
};
// Class BmScript.RSeqEvent_BatmobileStuck
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_BatmobileStuck : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_BatmobileStuck");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqEvent_BatmobileWrongWay
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_BatmobileWrongWay : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_BatmobileWrongWay");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqEvent_CantPull
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_CantPull : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_CantPull");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqEvent_CustomBackscreenRequested_Normal
// 0x0010 (0x0180 - 0x0190)
class URSeqEvent_CustomBackscreenRequested_Normal : public URSeqEvent_CustomBackscreenRequested
{
public:
	class FString                                      FlagName;                                      // 0x0180 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_CustomBackscreenRequested_Normal");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	EBackscreenAvailability GetAvailability();
};
// Class BmScript.RSeqEvent_EnteredBatmobile
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_EnteredBatmobile : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_EnteredBatmobile");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RSeqEvent_WinchAborted
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_WinchAborted : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_WinchAborted");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSmokeScreenFireEx
// 0x0000 (0x031C - 0x031C)
class ARSmokeScreenFireEx : public ARSmokeScreen
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSmokeScreenFireEx");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveConfig_GrappleThruGrate
// 0x0000 (0x01C8 - 0x01C8)
class URSpecialMoveConfig_GrappleThruGrate : public URSpecialMoveConfig_RelativeAnimMove
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveConfig_GrappleThruGrate");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveConfig_OpenGrate
// 0x00A4 (0x0190 - 0x0234)
class URSpecialMoveConfig_OpenGrate : public URSpecialMoveConfig
{
public:
	class FName                                        StruggleStartPose;                             // 0x0190 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        StruggleEndPose;                               // 0x0198 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SucceedTransitionName;                         // 0x01A0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        FailTransitionName;                            // 0x01A8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        EndMovementStance;                             // 0x01B0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        SuccessTransition;                             // 0x01B8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bTurnOffCollision : 1;                         // 0x01C0 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bNoiseLevelUsed : 1;                           // 0x01C0 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bFromHarpoon : 1;                              // 0x01C0 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bUse2Sticks : 1;                               // 0x01C0 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	float                                              StartDistance;                                 // 0x01C4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StartHeight;                                   // 0x01C8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NoiseIncrease;                                 // 0x01CC (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              NoiseDecay;                                    // 0x01D0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    YankSound;                                     // 0x01D4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    FinalYankSound;                                // 0x01DC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    PullTension;                                   // 0x01E4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    RopePullTension;                               // 0x01EC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            PullTensionParam;                              // 0x01F4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UForceFeedbackWaveform*                      WaveForm;                                      // 0x01FC (0x0008) [0x0000004100000000] (CPF_Edit | CPF_EditInline)
	class TArray<struct FYankStage>                    YankStages;                                    // 0x0204 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              StruggleSpeedDecay;                            // 0x0214 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinStruggleSpeed;                              // 0x0218 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxStruggleSpeed;                              // 0x021C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StruggleButtonBonus;                           // 0x0220 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FStruggleSequence>             StruggleSequences;                             // 0x0224 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveConfig_OpenGrate");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveInstance_OpenGrate
// 0x00CB (0x0391 - 0x045C)
class ARSpecialMoveInstance_OpenGrate : public ARSpecialMoveInstance_HarpoonBase
{
public:
	uint32_t                                           bFirstFrameSucceeded : 1;                      // 0x0394 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint32_t                                           bNoiseBoxFlash : 1;                            // 0x0394 (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
	uint32_t                                           DrawYankPrompt : 1;                            // 0x0394 (0x0004) [0x0000000000000400] [0x00000004] (CPF_Transient)
	uint32_t                                           LeftHandOnRope : 1;                            // 0x0394 (0x0004) [0x0000000000000400] [0x00000008] (CPF_Transient)
	uint32_t                                           RightHandOnRope : 1;                           // 0x0394 (0x0004) [0x0000000000000400] [0x00000010] (CPF_Transient)
	uint32_t                                           bCanPull : 1;                                  // 0x0394 (0x0004) [0x0000000000000400] [0x00000020] (CPF_Transient)
	uint32_t                                           bPullButtonPressed : 1;                        // 0x0394 (0x0004) [0x0000000000000400] [0x00000040] (CPF_Transient)
	uint32_t                                           bClawReleased : 1;                             // 0x0394 (0x0004) [0x0000000000000400] [0x00000080] (CPF_Transient)
	uint32_t                                           bStartedStraining : 1;                         // 0x0394 (0x0004) [0x0000000000000400] [0x00000100] (CPF_Transient)
	float                                              FlashTime;                                     // 0x0398 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              NoiseLevel;                                    // 0x039C (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     EndPosition;                                   // 0x03A0 (0x000C) [0x0000000000000000]               
	int32_t                                            EndYaw;                                        // 0x03AC (0x0004) [0x0000000000000000]               
	float                                              YankAmount;                                    // 0x03B0 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              MinYankAmount;                                 // 0x03B4 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              MinYankTime;                                   // 0x03B8 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              LastYankAmount;                                // 0x03BC (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            CurrentYankStage;                              // 0x03C0 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              StruggleScore;                                 // 0x03C4 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              StruggleSpeed;                                 // 0x03C8 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FTransitionId                               TransitionId;                                  // 0x03CC (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     CameraLocation;                                // 0x03D0 (0x000C) [0x0000000000000400] (CPF_Transient)
	struct FRotator                                    CameraRotation;                                // 0x03DC (0x000C) [0x0000000000000400] (CPF_Transient)
	struct FStruggleSequence                           ChosenSequence;                                // 0x03E8 (0x003C) [0x0000000000000400] (CPF_Transient)
	class UForceFeedbackWaveform*                      CurrentWaveForm;                               // 0x0424 (0x0008) [0x0000000000000400] (CPF_Transient)
	float                                              TimeAtMinSpeed;                                // 0x042C (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              TimeAtMaxSpeed;                                // 0x0430 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              LastButtonSpeed;                               // 0x0434 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              FallingTimer;                                  // 0x0438 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FAkSoundHandle                              GrateTensionSoundHandle;                       // 0x043C (0x0010) [0x0000000000000400] (CPF_Transient)
	struct FAkSoundHandle                              RopeTensionSoundHandle;                        // 0x044C (0x0010) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveInstance_OpenGrate");
		}

		return uClassPointer;
	};


	bool AllowKismetHelpText(class URSeqAct_HelpText* HelpAction);
	void PressingButtons();
	void UpdateRumbleStrength(float Strength);
	void ChoosePullSequence(const struct FVector& TargetLocation);
	bool PlayGratePullCameraAnim(const class FName& AnimName, bool bPlaying, float optionalFOV);
	void FirstFrameSucceeded();
	void StopRumble();
	void AllowPull();
	bool UpdateSpecialMove(float DeltaTime);
	void PlayGrateAnim(const class FName& AnimName, bool optionalBAnimMirrored, float optionalStartTime);
	void FinalYank();
	void Yank();
	void eventCancelSpecialMove(class URSpecialMoveConfig* NextSpecialMove);
	void FinishSpecialMove();
	void PlayReleaseSound();
	void TriggerSpecialMove(const struct FEnvironmentSpecialMoveLocator& MoveLocation);
};
// Class BmScript.RSpecialMoveConfig_ShockwaveLand
// 0x0048 (0x0260 - 0x02A8)
class URSpecialMoveConfig_ShockwaveLand : public URSpecialMoveConfig_Land
{
public:
	float                                              SmashRadius;                                   // 0x0260 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinShockwaveRadius;                            // 0x0264 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxShockwaveRadius;                            // 0x0268 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ShockwaveRadiusPower;                          // 0x026C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ShockwaveForce;                                // 0x0270 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ShockwaveTan;                                  // 0x0274 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ShockwaveUpgradeDelay;                         // 0x0278 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bTriggerSecondaryShockwave : 1;                // 0x027C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class UParticleSystem*                             ShockwaveUpgradeFX;                            // 0x0280 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ShockwaveChargeSound;                          // 0x0288 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ShockwaveBlastSound;                           // 0x0290 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UForceFeedbackWaveform*                      Rumble;                                        // 0x0298 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ShockwaveFXRadius;                             // 0x02A0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ChargeSoundDuration;                           // 0x02A4 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveConfig_ShockwaveLand");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveInstance_ShockwaveLand
// 0x0008 (0x0384 - 0x038C)
class ARSpecialMoveInstance_ShockwaveLand : public ARSpecialMoveInstance_Land
{
public:
	uint32_t                                           bChargingShockwave : 1;                        // 0x0384 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint32_t                                           bCanSpecialCancel : 1;                         // 0x0384 (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
	uint32_t                                           bFiredShockWave : 1;                           // 0x0384 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              FallingTimer;                                  // 0x0388 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveInstance_ShockwaveLand");
		}

		return uClassPointer;
	};


	bool UpdateSpecialMove(float DeltaTime);
	void FallTimeOut();
	void ShockwaveAttack();
	bool CanDoCombat(bool optionalBCheckForEvade);
	void SpecialCancel();
	void GetHelpPrompt(class URHUDPrompt* HelpPrompt, bool bKismetHelpOn);
	void HandleAction(const class FName& InputAction);
	void ChargeShockwave();
	void EnableCombat();
	void ShockwaveUpgrade();
	void TriggerSpecialMove(const struct FEnvironmentSpecialMoveLocator& MoveLocation);
};
// Class BmScript.RTakeoverVideoScreen
// 0x0008 (0x02E4 - 0x02EC)
class ARTakeoverVideoScreen : public ARTakeoverVideoScreenBase
{
public:
	class UMaterialInterface*                          prevMaterial;                                  // 0x02E4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RTakeoverVideoScreen");
		}

		return uClassPointer;
	};


	void SetOverrideMaterial();
	void SetStaticTransitionParameter(float val);
	void RevertToStandardTexture();
	void SetTakeoverTexture(class UTextureRenderTarget2D* takeoverTexture);
};
// Class BmScript.RTunnelGrate
// 0x0000 (0x044C - 0x044C)
class ARTunnelGrate : public ARTunnelGrateShared
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RTunnelGrate");
		}

		return uClassPointer;
	};


	void eventPostBeginPlay_Delayed();
};
// Class BmScript.RTunnelMesh
// 0x0000 (0x02D0 - 0x02D0)
class ARTunnelMesh : public ARTunnelMeshBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RTunnelMesh");
		}

		return uClassPointer;
	};

};
// Class BmScript.RTurret_Watchtower
// 0x0004 (0x069C - 0x06A0)
class ARTurret_Watchtower : public ARTurret_WatchtowerBase
{
public:
	uint32_t                                           bDMVisThroughWalls_Suppressed : 1;             // 0x069C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDMVisThroughWalls_Old : 1;                    // 0x069C (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RTurret_Watchtower");
		}

		return uClassPointer;
	};


	void eventSuppressDetectiveModeVisibilityThroughWalls(bool bSuppress);
	void UnregisterDMThroughWallsSuppressable();
	void RegisterDMThroughWallsSuppressable();
	void eventDetachFiringComponents();
	void eventAttachFiringComponents();
	bool CanDamagePlayer();
	bool ShouldForceMissedShot(class ARPawnPlayer* TargetPlayer);
	void ClearInvestigateData();
	void eventDoShotFX(const struct FVector& TargetLoc, bool bDoImpactFX);
	void eventStoppedShooting();
	void eventStartedShooting();
	void eventRemoveInvalidTargets();
	bool StopsProjectile(class AProjectile* P, class UPrimitiveComponent* optionalHitComponent);
	void ShieldCooldown();
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void WatchtowerTakenOut(bool bForceSilent);
	void eventDestroyed();
	void eventPreStreamOut();
	void PostBeginPlay();
	void SwitchOff();
	void SwitchOn();
	struct FVector GetDisplayTargetLocation();
	bool Trigger(class ARPlayerController* PC);
};
// Class BmScript.RVehicleBatmobile
// 0x0120 (0x20A0 - 0x21C0)
class ARVehicleBatmobile : public ARVehicleBatmobileBase
{
public:
	class URSpecialMoveConfig*                         GetInMove;                                     // 0x20A0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GlideInMove;                                   // 0x20A8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GlideBoostInMove;                              // 0x20B0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         FallInMove;                                    // 0x20B8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GetOutMove;                                    // 0x20C0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GetOutToStandFastMove;                         // 0x20C8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GetOutOnTopMove;                               // 0x20D0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GetOutOnTopOnSteepInclineMove;                 // 0x20D8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         EjectUpMove;                                   // 0x20E0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         EjectForwardMove;                              // 0x20E8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GetInRemoteMoveFront;                          // 0x20F0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GetInRemoteMoveBack;                           // 0x20F8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         JumpInBatmobileSkidStopMove;                   // 0x2100 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GetInWithoutAnimMove;                          // 0x2108 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         EjectWhenBatmobileVerticalMove;                // 0x2110 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         EjectUpWhenBatmobileVerticalMove;              // 0x2118 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GetInWhenBatmbileVerticalMove;                 // 0x2120 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         SwingInBatmobileAbseilingMove;                 // 0x2128 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         EjectToSpotMove;                               // 0x2130 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GetInOnSideMove;                               // 0x2138 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         GetOutOnSideMove;                              // 0x2140 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         HighSpeedPickupMove;                           // 0x2148 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UForceFeedbackWaveform*                      AfterburnerFFWaveForm;                         // 0x2150 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    TaserSound;                                    // 0x2158 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSeqAct_SetBatmobileState*                  StolenAction;                                  // 0x2160 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    DisabledByEmpFx;                               // 0x2168 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            GetOutOnTopOnSteepInclinePitch;                // 0x2170 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           GlidingIn : 1;                                 // 0x2174 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAfterburnerIsOn : 1;                          // 0x2174 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBattleModeAfterBurnerIsOn : 1;                // 0x2174 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bAfterburnerIsWarming : 1;                     // 0x2174 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           XrayMaterialsAssigned : 1;                     // 0x2174 (0x0004) [0x0000000000000000] [0x00000010] 
	class TArray<class URCarListenerInterface*>        LeaveCarListeners;                             // 0x2178 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              fAfterburnerStartTime;                         // 0x2188 (0x0004) [0x0000000000000000]               
	float                                              fAfterBurnerRumbleStartStrength;               // 0x218C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              fAfterBurnerRumbleStrengthTimeMultiplier;      // 0x2190 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              fAfterburnerCutoffStartTime;                   // 0x2194 (0x0004) [0x0000000000000000]               
	float                                              fAfterBurnerRumbleCutoffStartStrength;         // 0x2198 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              fAfterBurnerRumbleCutoffTimeMultiplier;        // 0x219C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<float>                                UpgradedGeneratorBonus;                        // 0x21A0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<float>                                UpgradedGeneratorShielding;                    // 0x21B0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVehicleBatmobile");
		}

		return uClassPointer;
	};


	bool IsBatmobileTouchingAGlideOutOfBoundsVolume();
	void CheckForUpgrades(class ARPlayerController* PC);
	class FName GetOverrideCamera();
	void GrappleSwingIn(class ARPawnPlayer* PlayerPawn);
	void SpawnThugStunEffect(class ARBMPawnAI* Thug, const struct FVector& ThugDiveDirection);
	void StopWaterImpactEffect();
	void eventSpawnWaterImpactEffect(const struct FVector& HitLocation, class ACamera* PlayerCamera);
	void SpawnAbseilImpactRear();
	void SpawnAbseilImpactFront();
	void UsedWhenStolen();
	void SetIsStolen(bool Stolen, class USequenceAction* Action);
	void SetDisabledByEMP(bool Disabled);
	void UpdateBatmanPickupRoute();
	void EjectToSpot(const struct FVector& EjectTarget, class ARPawnPlayer* Batman, class URSpecialMoveConfig* optionalOverrideMove);
	void PickUpPlayer(class ARPawnPlayer* PlayerToPickUp, bool optionalHighSpeedPickup);
	void DestReachedWithoutPlayer();
	void eventDestReachedBrakeToStop();
	void SkidToStopJumpIn();
	void eventDestReachedSkidToStop();
	bool CanEnterVehicle(class APawn* P);
	void eventPancakeOther(class APawn* Other);
	bool FindExitLocation(struct FEnvironmentSpecialMoveLocator& outLoc);
	bool eventDriverLeave(bool bForceLeave, bool optionalBReallyForceLeave);
	void AlertBatmanLeftCar();
	bool RescueMe(bool optionalFindOffScreenLocation);
	int32_t ChooseAlternateSpawnPoint(struct FVector& outPos, struct FRotator& outRot);
	void TriggerWrongWayEvent();
	void eventTick(float DeltaTime);
	void eventDoXrayUpdate();
	void TestTightAreas();
	void eventOnSleepRBPhysics();
	void eventOnWakeRBPhysics();
	void DriverLeft();
	bool DriverEnter(class APawn* P);
	void eventSpawnRightExhaustBurst();
	void eventSpawnLeftExhaustBurst();
	void eventSpawnSideExhaustBurst();
	void eventSpawnExhaustBurst(bool bFront, bool bDoSideExhaustBurst);
	void eventSlipstreamOff();
	void eventSlipstreamOn();
	void eventAfterburnerWarmupOff();
	void eventAfterburnerWarmupOn();
	void SetAfterBurnerRumble(bool bPlay, float fRumbleStrength);
	void eventAfterburnerOff();
	void eventAfterburnerOn(bool optionalBFront, bool optionalBDoSideExhaustBurst);
	void eventAfterburnerOnForDuration(float Duration, bool optionalBFront);
	void eventHeadlightsOff();
	void ActivateBoostWarmup(bool Activate);
	void TriggerBoost();
	void TryToFallIn(class ARPawnPlayer* Player);
	void TryToGlideIn(class ARPawnPlayer* Player);
	bool TryToDrive(class APawn* P);
	void eventGetInBatmobileInstant(class ARPawnPlayer* PlayerGettingIn, bool optionalBEndOfMatinee);
	void GetInBatmobile(class APawn* PlayerGettingIn);
	EBatmobileGetOutSpace CheckSpaceToGetOutOfBatmobileFromKismet();
	void eventPostBeginPlay();
};
// Class BmScript.RVehicleBehaviour_APCRunAway
// 0x0004 (0x03AC - 0x03B0)
class URVehicleBehaviour_APCRunAway : public URVehicleBehaviour_RunAway
{
public:
	int32_t                                            OverrideChapterDifficulty;                     // 0x03AC (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVehicleBehaviour_APCRunAway");
		}

		return uClassPointer;
	};


	void ExitBehaviour(class URVehicleBehaviour* NextBehaviour);
	void EnterBehaviour(class URVehicleBehaviour* PreviousBehaviour);
	void Tick(float DeltaTime);
};
// Class BmScript.RVehicleBehaviour_Parked
// 0x0004 (0x0260 - 0x0264)
class URVehicleBehaviour_Parked : public URVehicleBehaviour
{
public:
	float                                              GotoCombatBehaviourIfBatmobileInRange;         // 0x0260 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVehicleBehaviour_Parked");
		}

		return uClassPointer;
	};


	void Tick(float DeltaTime);
	void eventEnterBehaviour(class URVehicleBehaviour* PreviousBehaviour);
};
// Class BmScript.RVehicleBehaviour_StopAndSpawnHushBadGuys
// 0x0004 (0x0274 - 0x0278)
class URVehicleBehaviour_StopAndSpawnHushBadGuys : public URVehicleBehaviour_StopAndSpawnBase
{
public:
	float                                              TimeStopped;                                   // 0x0274 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVehicleBehaviour_StopAndSpawnHushBadGuys");
		}

		return uClassPointer;
	};


	void eventTick(float DeltaTime);
};
// Class BmScript.RWinchableJunctionBox
// 0x0094 (0x02E8 - 0x037C)
class ARWinchableJunctionBox : public ARWinchableJunctionBoxBase
{
public:
	class ASkeletalMeshActor*                          GaugesActor;                                   // 0x02E8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    PowerStartEvent;                               // 0x02F0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    VehiclePowerStartEvent;                        // 0x02F8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            PowerRevsParamName;                            // 0x0300 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARPlayerController*                          RevsController;                                // 0x0308 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   GuagesMat;                                     // 0x0310 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   LightMat;                                      // 0x0318 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   PoweredLightMat;                               // 0x0320 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    ElectricityEffectComp;                         // 0x0328 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            GaugeMaterialIndex;                            // 0x0330 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        GaugePowerInputName;                           // 0x0334 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        GaugePowerOutputName;                          // 0x033C (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           PoweredUp : 1;                                 // 0x0344 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           ReleaseWinchOnPoweredUp : 1;                   // 0x0344 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           SwitchOffLightsOnPoweredUp : 1;                // 0x0344 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           PreventManualWinchReleaseWhenPoweredUp : 1;    // 0x0344 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           PowerRevsGlobal : 1;                           // 0x0344 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	float                                              RevsMultiplier;                                // 0x0348 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxRevs;                                       // 0x034C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxRevsHoldTime;                               // 0x0350 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RevsVelLimit;                                  // 0x0354 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RetainPowerDuration;                           // 0x0358 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CurrentRevsVel;                                // 0x035C (0x0004) [0x0000000000000000]               
	float                                              CurrentMaxRevsTime;                            // 0x0360 (0x0004) [0x0000000000000000]               
	int32_t                                            LightMaterialIndex;                            // 0x0364 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        LightParameterName;                            // 0x0368 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            PoweredLightMaterialIndex;                     // 0x0370 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        PoweredLightParameterName;                     // 0x0374 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RWinchableJunctionBox");
		}

		return uClassPointer;
	};


	void ApplyRevs(float Revs, class ARPlayerController* Controller);
	float GetRevsMaxDelta();
	float GetRevs();
	bool IsPoweredUp();
	void StopElectricityEffects();
	void StartElectricityEffects();
	void EndRetainPower();
	void WinchAborted(int32_t Reason);
	void WinchReleased(class ARBatmobileWinch* Winch);
	void WinchAttached(class ARBatmobileWinch* Winch);
	void Tick(float DeltaTime);
	bool ShouldPreventManualWinchRelease();
	void UpdatePoweredLight();
	void UpdateLight();
	void OnToggle(class USeqAct_Toggle* Action);
	bool RestorePoweredUpState();
	void PostBeginPlay();
};
// Class BmScript.RWinchableRamp
// 0x00AC (0x0314 - 0x03C0)
class ARWinchableRamp : public ARWinchableWallBase
{
public:
	class USkeletalMeshComponent*                      MeshCompRamp;                                  // 0x0314 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      MeshCompHook;                                  // 0x031C (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      MeshCompDownHook;                              // 0x0324 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USeqAct_Interp*                              MatineeAction;                                 // 0x032C (0x0008) [0x0000000000000000]               
	class ADynamicSMActor*                             MatineeStaticMesh;                             // 0x0334 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARSkeletalMeshActor*                         MatineeSkelMesh;                               // 0x033C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UMaterialInstanceConstant*                   BreakMaterial;                                 // 0x0344 (0x0008) [0x0000000000000400] (CPF_Transient)
	class UAkEvent*                                    StartFallingSound;                             // 0x034C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    FallingCrashSound;                             // 0x0354 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimNodeSequence*                           RampAnimSeq;                                   // 0x035C (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           HookAnimSeq;                                   // 0x0364 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           DownHookAnimSeq;                               // 0x036C (0x0008) [0x0000000000000000]               
	class AVolume*                                     PreventCrushBatmanVolume;                      // 0x0374 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              DamageMin;                                     // 0x037C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinWinchRange;                                 // 0x0380 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        RampLowToMidAnimName;                          // 0x0384 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        RampMidToHighAnimName;                         // 0x038C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        BreakMaterialParamName;                        // 0x0394 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            BreakMaterialIndex;                            // 0x039C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FallingCrashSoundVelThreshold;                 // 0x03A0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           UpperStage : 1;                                // 0x03A4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           AllowFalling : 1;                              // 0x03A4 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           IsFalling : 1;                                 // 0x03A4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           CanPullDown : 1;                               // 0x03A4 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           PullingDown : 1;                               // 0x03A4 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           AllowLowering : 1;                             // 0x03A4 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           CannotBeBroken : 1;                            // 0x03A4 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	float                                              FallRate;                                      // 0x03A8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FallAccel;                                     // 0x03AC (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FallingVel;                                    // 0x03B0 (0x0004) [0x0000000000000000]               
	uint8_t                                            InitialTick;                                   // 0x03B4 (0x0001) [0x0000000000000000]               
	float                                              InitialPosition;                               // 0x03B8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              InteractEventPosition;                         // 0x03BC (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RWinchableRamp");
		}

		return uClassPointer;
	};


	bool CanDecreaseDamage();
	void Broken(class ARPlayerController* Controller);
	bool IncreaseDamage(float Amount, class ARPlayerController* optionalController);
	void WinchReleased(class ARBatmobileWinch* Winch);
	void UpdateInvestigateOffset();
	void UpdateAnims();
	void Tick(float DeltaTime);
	struct FVector GetWinchSecondaryTargetLocation();
	struct FRotator GetWinchTargetRotation();
	struct FVector GetWinchTargetLocation();
	void WinchAttached(class ARBatmobileWinch* Winch);
	void WinchFailedToAttach(class ARBatmobileWinch* Winch);
	void WinchFiredAtMe(class ARBatmobileWinch* Winch);
	bool IsBatmobileInAngleLimitsSecondary(class AActor* Batmobile, class ARBatmobileWinch* Winch, struct FVector& outLimitVec);
	bool IsBatmobileInAngleLimits(class AActor* Batmobile, class ARBatmobileWinch* Winch, struct FVector& outLimitVec);
	bool ShouldPreventBatmanExitingBatmobile();
	bool ShouldPreventManualWinchRelease();
	void DestroyMe();
	void PostBeginPlay();
	void ClearMatinee();
	void SetMatinee(class USeqAct_Interp* M);
	class UPrimitiveComponent* GetWinchSubTargetComponent();
	int32_t GetActiveSubTargetIndex();
	void SetActiveSubTargetIndex(int32_t Index);
	void UpdateBasedPlayer();
};
// Class BmScript.RHidePoint_Batmobile
// 0x0000 (0x0508 - 0x0508)
class ARHidePoint_Batmobile : public ARHidePoint
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHidePoint_Batmobile");
		}

		return uClassPointer;
	};


	void MovePawnTo(class APawn* PawnToMove);
};
// Class BmScript.RSeqAct_PauseGameOnLoad
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_PauseGameOnLoad : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_PauseGameOnLoad");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_SelectLoadingScreen
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_SelectLoadingScreen : public USequenceAction
{
public:
	class FString                                      LoadingMovie;                                  // 0x0160 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SelectLoadingScreen");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_Rain
// 0x0064 (0x0160 - 0x01C4)
class URSeqAct_Rain : public USequenceAction
{
public:
	struct FRockRainSettings                           RainSettings;                                  // 0x0160 (0x0040) [0x0000000100000000] (CPF_Edit)    
	struct FRockRainMapSettings                        RainMap;                                       // 0x01A0 (0x0024) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_Rain");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void eventActivated();
};
// Class BmScript.RSeqAct_SetRainCullDistance
// 0x000C (0x0160 - 0x016C)
class URSeqAct_SetRainCullDistance : public USequenceAction
{
public:
	class ARainVolume*                                 TargetVolume;                                  // 0x0160 (0x0008) [0x0000000000000000]               
	float                                              RainCullingDistance;                           // 0x0168 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetRainCullDistance");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RHelicopter
// 0x0000 (0x0C4C - 0x0C4C)
class ARHelicopter : public ARHelicopterIntermediate
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHelicopter");
		}

		return uClassPointer;
	};

};
// Class BmScript.RHelicopterMultiRole
// 0x0104 (0x0C4C - 0x0D50)
class ARHelicopterMultiRole : public ARHelicopter
{
public:
	uint32_t                                           CanTrackPlayerWithoutVisualContact : 1;        // 0x0C4C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           OnlyVulnerableToExplosives : 1;                // 0x0C4C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           EnableRedHoodDialogue : 1;                     // 0x0C4C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           StrafeClockwise : 1;                           // 0x0C4C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           UseMoveToRotation : 1;                         // 0x0C4C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           MaintainLookatEvenWithoutVisualContact : 1;    // 0x0C4C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           PayAttentionToPlayer : 1;                      // 0x0C4C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           AllowAttack : 1;                               // 0x0C4C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           SwitchToPursuitIfVisualContactGained : 1;      // 0x0C4C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           AbortPursuitIfVisualContactLost : 1;           // 0x0C4C (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bChaingunSelected : 1;                         // 0x0C4C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bAttackEngaged : 1;                            // 0x0C4C (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           Invulnerable : 1;                              // 0x0C4C (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bCurrentlyTalking : 1;                         // 0x0C4C (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bHasPlayedLine_Heli_MinorDamage : 1;           // 0x0C4C (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bHasPlayedLine_Heli_MajorDamage : 1;           // 0x0C4C (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bHasPlayedLine_Batman_MinorDamage : 1;         // 0x0C4C (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bHasPlayedLine_Batman_MediumDamage : 1;        // 0x0C4C (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bHasPlayedLine_Batman_MajorDamage : 1;         // 0x0C4C (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           HelicopterDamageFlag : 1;                      // 0x0C4C (0x0004) [0x0000000000000000] [0x00080000] 
	float                                              MaxVelocity;                                   // 0x0C50 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              StrafeVelocity;                                // 0x0C54 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RocketAttackRange;                             // 0x0C58 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              RocketAttackMinRange;                          // 0x0C5C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ChaingunAttackRange;                           // 0x0C60 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ChaingunAttackMinRange;                        // 0x0C64 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            RocketsPerSalvo;                               // 0x0C68 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            RocketsPerSalvoDuringStrafingRun;              // 0x0C6C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            RocketsPerSalvoDuringBlanketAttack;            // 0x0C70 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            RocketsHorizontalSpreadDuringBlanket;          // 0x0C74 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            HelicopterArmour;                              // 0x0C78 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class AVolume*                                     DoNotLeaveThisVolume;                          // 0x0C7C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSeqAct_SetMultiroleHelicopterState*        CurrentStateController;                        // 0x0C84 (0x0008) [0x0000000000000000]               
	class ARVehicleNPC*                                AttachedTank;                                  // 0x0C8C (0x0008) [0x0000000000000000]               
	class TArray<class ARHelicopterControlVolume*>     VerticallyAvoidTheseVolumes;                   // 0x0C94 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              HeightAboveBatmanForAttack;                    // 0x0CA4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              HorizontalDistanceFromBatmanForAttack;         // 0x0CA8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              lowestDeltaT;                                  // 0x0CAC (0x0004) [0x0000000000000000]               
	float                                              OverrideSpeed;                                 // 0x0CB0 (0x0004) [0x0000000000000000]               
	struct FVector                                     FreeMoveLocation;                              // 0x0CB4 (0x000C) [0x0000000000000000]               
	float                                              UpdateFreeMoveTimeStamp;                       // 0x0CC0 (0x0004) [0x0000000000000000]               
	float                                              UpdateFreeMovePeriod;                          // 0x0CC4 (0x0004) [0x0000000000000000]               
	struct FRotator                                    MoveToRotation;                                // 0x0CC8 (0x000C) [0x0000000000000000]               
	struct FVector                                     FreeMoveOrigin;                                // 0x0CD4 (0x000C) [0x0000000000000000]               
	struct FVector                                     StrafingTargetPoint;                           // 0x0CE0 (0x000C) [0x0000000000000000]               
	struct FVector                                     StrafingFireDirectionVector;                   // 0x0CEC (0x000C) [0x0000000000000000]               
	float                                              StrafingFireDirectionRandomOffsetAngle;        // 0x0CF8 (0x0004) [0x0000000000000000]               
	struct FVector                                     BlanketOrigin;                                 // 0x0CFC (0x000C) [0x0000000000000000]               
	struct FVector                                     BlanketTargetPoint;                            // 0x0D08 (0x000C) [0x0000000000000000]               
	float                                              RocketMaxDistance;                             // 0x0D14 (0x0004) [0x0000000000000000]               
	float                                              fCurrentWeaponRangeMin;                        // 0x0D18 (0x0004) [0x0000000000000000]               
	float                                              fCurrentWeaponRangeMax;                        // 0x0D1C (0x0004) [0x0000000000000000]               
	EHeliAttackMode                                    CurrentWeaponAttackMode;                       // 0x0D20 (0x0001) [0x0000000000000000]               
	ETankDropState                                     CurrentDropState;                              // 0x0D21 (0x0001) [0x0000000000000000]               
	float                                              MovementModifierWhenTankAttached;              // 0x0D24 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            BlanketCounter;                                // 0x0D28 (0x0004) [0x0000000000000000]               
	float                                              fPostTalkTimer;                                // 0x0D2C (0x0004) [0x0000000000000000]               
	int32_t                                            BatmanHealthValueCached;                       // 0x0D30 (0x0004) [0x0000000000000000]               
	int32_t                                            HelicopterArmourInitial;                       // 0x0D34 (0x0004) [0x0000000000000000]               
	float                                              maxPOIDist;                                    // 0x0D38 (0x0004) [0x0000000000000000]               
	float                                              TankDropTimer;                                 // 0x0D3C (0x0004) [0x0000000000000000]               
	float                                              TankDropAltitudeHighBeginEnd;                  // 0x0D40 (0x0004) [0x0000000000000000]               
	float                                              TankDropAltitudeToDropAt;                      // 0x0D44 (0x0004) [0x0000000000000000]               
	class FName                                        PendingState;                                  // 0x0D48 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHelicopterMultiRole");
		}

		return uClassPointer;
	};


	void Destroyed();
	void PreStreamOut();
	float GetArmour();
	bool eventIsPlayerInvisible();
	EWeaponDamageResult eventTakeDamageFromWeapon(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser, bool optionalBHeadShot);
	void eventSetPointOfInterestBatman(bool TrueFalse);
	void eventSetPointOfInterest(class AActor* TheActor, EHelicopterPointOfInterestTypes PoiType);
	void SpeakLine(class UAkDialogueLine* the_line);
	void Tick(float DeltaTime);
	void TickPointOfInterest(float DeltaTime);
	bool eventIsValidPointOfInterest(class AActor* TheActor, EHelicopterPointOfInterestTypes PoiType);
	void ChinookTick(float DeltaTime);
	bool WithinRangeOfStateTarget();
	bool HasCompletedState();
	void CheckStateComplete();
	void UpdateLookAtTarget();
	void MoveTowardsWithModifiedAltitude(float DeltaTime);
	void DetachTank();
	void AttachTank(class ARVehicleNPC* TankActor);
	void MultiplyMovementVars(float Scalar);
	void SetStateFromSeqAct(const class FName& the_state, class URSeqAct_SetMultiroleHelicopterState* state_controller);
	void FindClosestSafePosition(const struct FVector& TargetPosition, float StartingAngle, float HorzDist, float Altitude, struct FVector& outSafePosition);
	bool CheckPointForInVolumeAndLos(const struct FVector& test_point, const struct FVector& TargetPosition);
	void SetEngaged(bool engaged);
	void UpdateWeaponSelection();
	void SetWeaponToChaingun(bool setchaingun);
	bool ShouldForceMissedShot();
	void SetHelicopterControlVolume(class ARHelicopterControlVolume* ControlVolume, bool bEntering);
	class ARHelicopterRocket* FireRocket(bool TargetBatman, const struct FVector& optionalStaticTarget);
	void SetRocketInitialSalvoSize();
	bool IsWithinRange(const struct FVector& TargetPosition, float fMaxRange, float optionalFMinRange, bool optionalHorizontalOnly);
	bool eventIsAttackEnabled();
	void SetViewingBatmanAuto();
	void DrawDebugGraphics();
	void eventPostBeginPlay();
	void GotoInitialState();
};
// Class BmScript.RSeqAct_SetMultiroleHelicopterState
// 0x0054 (0x0160 - 0x01B4)
class URSeqAct_SetMultiroleHelicopterState : public USequenceAction
{
public:
	class ARHelicopterMultiRole*                       OptionalHelicopter;                            // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARHelicopterMultiRole*                       HelicopterVariable;                            // 0x0168 (0x0008) [0x0000000000000000]               
	class AActor*                                      OriginLocation;                                // 0x0170 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      TargetLocation;                                // 0x0178 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      LookAtObject;                                  // 0x0180 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      ChargeReferenceCentrePoint;                    // 0x0188 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      TankDropHeightReference;                       // 0x0190 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARVehicleNPC*                                TankActor;                                     // 0x0198 (0x0008) [0x0000000000000000]               
	EHelicopterStates                                  PrimaryState;                                  // 0x01A0 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           PayAttentionToPlayer : 1;                      // 0x01A4 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           SwitchToPursuitIfVisualContactGained : 1;      // 0x01A4 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           SetRotationBasedOnDestinationActor : 1;        // 0x01A4 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           TankDropFaceBatmanOnDescent : 1;               // 0x01A4 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           ConsiderAltitudeWhenDeterminingWhetherMovetoIsComplete : 1;// 0x01A4 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           ConsiderAngleToTargetDeterminingWhetherMovetoIsComplete : 1;// 0x01A4 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	float                                              ProximityAtWhichToTriggerOutput;               // 0x01A8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TankDropSecondsBeforeReascend;                 // 0x01AC (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            HelicopterArmour;                              // 0x01B0 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetMultiroleHelicopterState");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void NotifyStateCompleted(bool optionalFullyComplete_NotSuspended);
	void Activated();
	void SetStateForHelicopter();
};
// Class BmScript.RSeqEvent_HelicopterDefeatedWithMissiles
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_HelicopterDefeatedWithMissiles : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_HelicopterDefeatedWithMissiles");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RPredatorDrone
// 0x0024 (0x0C4C - 0x0C70)
class ARPredatorDrone : public ARHelicopterIntermediate
{
public:
	class UPointLightComponent*                        XrayLight;                                     // 0x0C4C (0x0008) [0x0000004500004005] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline)
	class URSpecialMoveConfig*                         LandOnDroneMove;                               // 0x0C54 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSeqAct_SpawnDrone*                         Spawner;                                       // 0x0C5C (0x0008) [0x0000000000000000]               
	uint32_t                                           bDisruptorMeshSet : 1;                         // 0x0C64 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlindedMeshSet : 1;                           // 0x0C64 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDMVisThroughWalls_Suppressed : 1;             // 0x0C64 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDMVisThroughWalls_Old : 1;                    // 0x0C64 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              RandomSecondsOffsetForSearchLight;             // 0x0C68 (0x0004) [0x0000000000000000]               
	float                                              RandomDistanceOffsetForSearchLight;            // 0x0C6C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPredatorDrone");
		}

		return uClassPointer;
	};


	void eventSuppressDetectiveModeVisibilityThroughWalls(bool bSuppress);
	void UnregisterDMThroughWallsSuppressable();
	void RegisterDMThroughWallsSuppressable();
	void HitByDisruptor(const struct FVector& ShotDirection);
	void eventBump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	void GlideLandOnHelicopter(class ARPawnPlayer* LandingPlayer);
	bool IsControlledByHuman();
	void SetXrayMeshLevel(bool optionalBForce);
	void SetAggroHelicopter(bool is_aggro);
	void VisualContactChangesTo(bool is_visible);
	void StandardSearchLightSweep(float DeltaTime);
	void eventTick(float DeltaTime);
	void DestroyHelicopter();
	void SetCurrentAttackMode(EHeliAttackMode attack_mode);
	void SetTargetAttackMode(EHeliAttackMode attack_mode);
	EWeaponDamageResult eventTakeDamageFromWeapon(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser, bool optionalBHeadShot);
	void RecoveredFromBeingBlinded();
	bool Trigger(class ARPlayerController* PC);
	void HitByREC(const struct FVector& HitLocation, const struct FVector& AttackerLocation);
	void Explode();
	void SetupPlayerGrapplePoint();
	void SetDroneSpawner(class URSeqAct_SpawnDrone* SpawnAct);
	void SetGrapplePointEnabled(bool make_enabled);
	void eventDestroyed();
	void eventPreStreamOut();
	void eventPostBeginPlay();
	bool eventFlyingVehicleSuspendOnManyTanks();
};
// Class BmScript.RSeqAct_PlayCameraOverlay
// 0x0030 (0x0160 - 0x0190)
class URSeqAct_PlayCameraOverlay : public USequenceAction
{
public:
	class FName                                        OverlayName;                                   // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    OverlayAnimSet;                                // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARPlayerController*                          TargetPlayer;                                  // 0x0170 (0x0008) [0x0000000000000000]               
	class FName                                        OverlayAnimationName;                          // 0x0178 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x0180 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x0184 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bLooping : 1;                                  // 0x0188 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              OverlayWeight;                                 // 0x018C (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_PlayCameraOverlay");
		}

		return uClassPointer;
	};


	void eventActivated();
};
// Class BmScript.RCinematicBatmobile
// 0x0000 (0x03F8 - 0x03F8)
class ARCinematicBatmobile : public ARCinematicBatmobileBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCinematicBatmobile");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqAct_DeathstrokeTakedown
// 0x0110 (0x0178 - 0x0288)
class URSeqAct_DeathstrokeTakedown : public USeqAct_Latent
{
public:
	class UAnimSet*                                    AnimSetBM;                                     // 0x0178 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    AnimSetBMBL;                                   // 0x0180 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    AnimSetDS;                                     // 0x0188 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    AnimSetCamera;                                 // 0x0190 (0x0008) [0x0000000000000000]               
	class UAnimSet*                                    AnimSetTank;                                   // 0x0198 (0x0008) [0x0000000000000000]               
	class ARPlayerController*                          PC;                                            // 0x01A0 (0x0008) [0x0000000000000000]               
	class ARPawnFriendly*                              Deathstroke;                                   // 0x01A8 (0x0008) [0x0000000000000000]               
	class ARPawnPlayer*                                BM;                                            // 0x01B0 (0x0008) [0x0000000000000000]               
	class ARVehicleBatmobileBase*                      Bmbl;                                          // 0x01B8 (0x0008) [0x0000000000000000]               
	class ARVehicleHeavyTank*                          Tank;                                          // 0x01C0 (0x0008) [0x0000000000000000]               
	class AActor*                                      BatmobileDrivePoint;                           // 0x01C8 (0x0008) [0x0000000000000000]               
	class AActor*                                      matineeOriginActor;                            // 0x01D0 (0x0008) [0x0000000000000000]               
	class ARInGameCinematicCam*                        CinematicCamera;                               // 0x01D8 (0x0008) [0x0000000000000000]               
	class FName                                        LaunchAnimName;                                // 0x01E0 (0x0008) [0x0000000000000000]               
	class FName                                        LandAnimName;                                  // 0x01E8 (0x0008) [0x0000000000000000]               
	EDSFinaleState                                     CurrentState;                                  // 0x01F0 (0x0001) [0x0000000000000000]               
	float                                              TooLongForLosTime;                             // 0x01F4 (0x0004) [0x0000000000000000]               
	float                                              CurrentStateTime;                              // 0x01F8 (0x0004) [0x0000000000000000]               
	float                                              FadeDownTime;                                  // 0x01FC (0x0004) [0x0000000000000000]               
	struct FTransitionId                               DSAnimID;                                      // 0x0200 (0x0004) [0x0000000000000000]               
	struct FVector                                     carInitialDestinationLoc;                      // 0x0204 (0x000C) [0x0000000000000000]               
	struct FRotator                                    carInitialDestinationRot;                      // 0x0210 (0x000C) [0x0000000000000000]               
	struct FVector                                     firstAnimRefLoc;                               // 0x021C (0x000C) [0x0000000000000000]               
	struct FRotator                                    firstAnimRefRot;                               // 0x0228 (0x000C) [0x0000000000000000]               
	struct FRotator                                    IdealTankRotation;                             // 0x0234 (0x000C) [0x0000000000000000]               
	struct FVector                                     matineeRefLoc;                                 // 0x0240 (0x000C) [0x0000000000000000]               
	struct FRotator                                    matineeRefRot;                                 // 0x024C (0x000C) [0x0000000000000000]               
	float                                              StateTimer;                                    // 0x0258 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDrawDebug : 1;                                // 0x025C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              minDistBetweenLandingAndTank;                  // 0x0260 (0x0004) [0x0000000000000000]               
	struct FRotator                                    TankTurretRotOff;                              // 0x0264 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              LosTimer;                                      // 0x0270 (0x0004) [0x0000000000000000]               
	struct FVector                                     SavedBmPointForTurret;                         // 0x0274 (0x000C) [0x0000000000000000]               
	int32_t                                            TankLevelIndex;                                // 0x0280 (0x0004) [0x0000000000000000]               
	int32_t                                            MatineeLevelIndex;                             // 0x0284 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_DeathstrokeTakedown");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void TriggerLaunchAnims();
	void StopCar();
	void ClearAreaAroundLandingLocation();
	void ChooseLandingLoc();
	bool TrySnapToGround(struct FVector& outVec);
	bool DriveCarToStartPoint();
	bool BatmanHasLOSToTankAggressive();
	bool BatmanHasLOSToTank();
	void FadeIn();
	void FadeOut();
	void Init();
	void UpdateTankRotation(float DeltaTime);
	bool eventUpdate(float DeltaTime);
	void eventActivated();
};
// Class BmScript.RSeqAct_PutPlayerInBatmobile
// 0x0018 (0x0168 - 0x0180)
class URSeqAct_PutPlayerInBatmobile : public URSeqAct_OverrideBatmobileEject
{
public:
	uint32_t                                           GlideIn : 1;                                   // 0x0168 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           PlayGetInAnim : 1;                             // 0x0168 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bForceCurrentPawn : 1;                         // 0x0168 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bRemoteDrive : 1;                              // 0x0168 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bCallBatmobileIfFarAway : 1;                   // 0x0168 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bFakeRemoteDrive : 1;                          // 0x0168 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	float                                              BatmobileFarAwayDistanceThreshold;             // 0x016C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class ARVehicleBatmobile*                          AttachedBatmobile;                             // 0x0170 (0x0008) [0x0000000000000000]               
	class URSpecialMoveConfig*                         SpecialGetInMove;                              // 0x0178 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_PutPlayerInBatmobile");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void eventActivated();
};
// Class BmScript.RVehicleBehaviour_Patrol
// 0x0038 (0x0260 - 0x0298)
class URVehicleBehaviour_Patrol : public URVehicleBehaviour
{
public:
	EVehiclePatrolState                                PatrolState;                                   // 0x0260 (0x0001) [0x0000000000000000]               
	float                                              SpeedFactor;                                   // 0x0264 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           TankTurnOnSpot : 1;                            // 0x0268 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bPingPong : 1;                                 // 0x0268 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           DriveOnCorrectSide : 1;                        // 0x0268 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           ReturnTurretToNeutralWhenMoving : 1;           // 0x0268 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bPong : 1;                                     // 0x0268 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              SeeBatmanDistance;                             // 0x026C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LookAtTargetDuration;                          // 0x0270 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LookAtTargetTurretSpeed;                       // 0x0274 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class ARRoadNetwork*                               Roads;                                         // 0x0278 (0x0008) [0x0000000000000000]               
	class ARPatrolPoint*                               TargetPatrolPoint;                             // 0x0280 (0x0008) [0x0000000000000000]               
	int32_t                                            TargetRoadPoint;                               // 0x0288 (0x0004) [0x0000000000000000]               
	float                                              PauseAtPatrolPoint;                            // 0x028C (0x0004) [0x0000000000000000]               
	int32_t                                            LookTargetIndex;                               // 0x0290 (0x0004) [0x0000000000000000]               
	float                                              LookTargetTime;                                // 0x0294 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVehicleBehaviour_Patrol");
		}

		return uClassPointer;
	};


	bool eventHandlesTurretAndShooting();
	void TickAtPoint(float DeltaTime);
	void GotoAtPoint();
	void TickMoveToPoint(float DeltaTime);
	void GotoMoveToPoint();
	void GotoNextPoint();
	void Tick(float DeltaTime);
	void eventExitBehaviour(class URVehicleBehaviour* NextBehaviour);
	void eventEnterBehaviour(class URVehicleBehaviour* PreviousBehaviour);
};
// Class BmScript.RManBatAppearanceVolume
// 0x0000 (0x02E4 - 0x02E4)
class ARManBatAppearanceVolume : public AROverrideGrappleVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RManBatAppearanceVolume");
		}

		return uClassPointer;
	};


	bool OverrideGrapple(class ARPawnPlayer* GrapplingPlayer, class ARGrappleGun* GrappleGun);
};
// Class BmScript.RSeqEvt_ManBatAppearance
// 0x0000 (0x017C - 0x017C)
class URSeqEvt_ManBatAppearance : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvt_ManBatAppearance");
		}

		return uClassPointer;
	};

};
// Class BmScript.RManbatPatrolPoint
// 0x0000 (0x02C8 - 0x02C8)
class ARManbatPatrolPoint : public ARPatrolPoint
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RManbatPatrolPoint");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqAct_IsCurrentMostWantedMission
// 0x0001 (0x0160 - 0x0161)
class URSeqAct_IsCurrentMostWantedMission : public USequenceAction
{
public:
	EActiveSideStoryEnum                               MissionName;                                   // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_IsCurrentMostWantedMission");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_WaypointTraversingTargetTracker
// 0x0051 (0x0178 - 0x01C9)
class URSeqAct_WaypointTraversingTargetTracker : public USeqAct_Latent
{
public:
	class TArray<class ARWaypointTraversalTrailNode*>  waypoints;                                     // 0x0178 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class AActor*                                      OptionalStartPosition;                         // 0x0188 (0x0008) [0x0000000000000000]               
	class ARPlayerController*                          RPC;                                           // 0x0190 (0x0008) [0x0000000000000000]               
	float                                              TotalPathLength;                               // 0x0198 (0x0004) [0x0000000000000000]               
	uint32_t                                           ForceStopAtEveryNode : 1;                      // 0x019C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           IsActive : 1;                                  // 0x019C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            CurrentNodeIndex;                              // 0x01A0 (0x0004) [0x0000000000000000]               
	float                                              CurrentDistanceAlongPath;                      // 0x01A4 (0x0004) [0x0000000000000000]               
	struct FVector                                     CurrentLocation;                               // 0x01A8 (0x000C) [0x0000000000000000]               
	float                                              CurrentDistanceToBatman;                       // 0x01B4 (0x0004) [0x0000000000000000]               
	float                                              MaximumDistanceToBatman;                       // 0x01B8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinimumDistanceToBatman;                       // 0x01BC (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MovementSpeed;                                 // 0x01C0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ProximityPauseValue;                           // 0x01C4 (0x0004) [0x0000000000000000]               
	EWaypointTrackerPhase                              CurrentPhase;                                  // 0x01C8 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_WaypointTraversingTargetTracker");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void SendLocationToHud();
	void CheckDistance();
	void SetCurrentPhase(EWaypointTrackerPhase new_phase);
	void PauseForProximity(float _ProximityPauseValue);
	void PauseForKismet();
	void SetCurrentNode(int32_t new_node);
	void SetLocation();
	float FindPathLengthForArbitraryLocation(const struct FVector& target_loc);
	void Calibrate();
	void StartTracking(bool is_moving);
	void ShutDown();
	void UnPause();
	void AbortTracking();
	bool eventUpdate(float DeltaTime);
};
// Class BmScript.RWaypointTraversalTrailNode
// 0x0018 (0x029C - 0x02B4)
class ARWaypointTraversalTrailNode : public ARDummyTarget
{
public:
	float                                              PathLengthAtNode;                              // 0x029C (0x0004) [0x0000000000000000]               
	float                                              OverrideSpeedTo;                               // 0x02A0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OverrideMinimumDistanceToBatman;               // 0x02A4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OverrideMaximumDistanceToBatman;               // 0x02A8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PauseHereUntilProximity;                       // 0x02AC (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           PauseHereUntilKismetUnpauses : 1;              // 0x02B0 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RWaypointTraversalTrailNode");
		}

		return uClassPointer;
	};


	void WaypointReached(class URSeqAct_WaypointTraversingTargetTracker* parent_seq_act);
};
// Class BmScript.RSeqEvent_TraversalWaypointReached
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_TraversalWaypointReached : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_TraversalWaypointReached");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBespokeMapRefPoint
// 0x0008 (0x029C - 0x02A4)
class ARBespokeMapRefPoint : public ARDummyTarget
{
public:
	class UDrawCylinderComponent*                      LineComponent;                                 // 0x029C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBespokeMapRefPoint");
		}

		return uClassPointer;
	};

};
// Class BmScript.ROverheadWireEnd
// 0x0000 (0x02B8 - 0x02B8)
class AROverheadWireEnd : public AROverheadWireEndBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.ROverheadWireEnd");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqAct_BatmobileStart
// 0x0020 (0x0160 - 0x0180)
class URSeqAct_BatmobileStart : public USequenceAction
{
public:
	class AActor*                                      BatmobileStartLocation;                        // 0x0160 (0x0008) [0x0000000000000000]               
	uint32_t                                           bBatmanInBatmobile : 1;                        // 0x0168 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           PlayGetInAnim : 1;                             // 0x0168 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           GiveMaxHealth : 1;                             // 0x0168 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bGiveMaxEnergy : 1;                            // 0x0168 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	class TArray<class AActor*>                        BatmobileStartAwayFromEnemiesLocation;         // 0x016C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              MinDistanceToEnemies;                          // 0x017C (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_BatmobileStart");
		}

		return uClassPointer;
	};


	void Activated();
	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RSeqAct_BespokeVineSonar
// 0x005C (0x0178 - 0x01D4)
class URSeqAct_BespokeVineSonar : public USeqAct_Latent
{
public:
	class ARPlayerController*                          RPC;                                           // 0x0178 (0x0008) [0x0000000000000000]               
	class ARBespokeMapRefPoint*                        DestinationRef;                                // 0x0180 (0x0008) [0x0000000000000000]               
	class ARBespokeMapRefPoint*                        WestRef;                                       // 0x0188 (0x0008) [0x0000000000000000]               
	float                                              ReferenceDistance;                             // 0x0190 (0x0004) [0x0000000000000000]               
	float                                              ReferenceAngle;                                // 0x0194 (0x0004) [0x0000000000000000]               
	struct FRotator                                    CachedCameraAngle;                             // 0x0198 (0x000C) [0x0000000000000000]               
	float                                              CachedCameraAngleRadians;                      // 0x01A4 (0x0004) [0x0000000000000000]               
	struct FVector                                     cachedLocation;                                // 0x01A8 (0x000C) [0x0000000000000000]               
	float                                              CachedLocationProportionX;                     // 0x01B4 (0x0004) [0x0000000000000000]               
	float                                              CachedLocationProportionY;                     // 0x01B8 (0x0004) [0x0000000000000000]               
	class FString                                      RootNetworkString;                             // 0x01BC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              TempSonarCountdown;                            // 0x01CC (0x0004) [0x0000000000000000]               
	uint32_t                                           isdirty : 1;                                   // 0x01D0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           HudOnscreen : 1;                               // 0x01D0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           IsActive : 1;                                  // 0x01D0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           AutomaticallyPulse : 1;                        // 0x01D0 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_BespokeVineSonar");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void eventInitHUD();
	void UpdateCachedVars();
	void Calibrate();
	bool eventUpdate(float DeltaTime);
};
// Class BmScript.RSeqAct_BespokePipeSonar
// 0x0014 (0x01D4 - 0x01E8)
class URSeqAct_BespokePipeSonar : public URSeqAct_BespokeVineSonar
{
public:
	uint32_t                                           TestWithoutMask : 1;                           // 0x01D4 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           MaskDisabled : 1;                              // 0x01D4 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              RootNetworkOpacity;                            // 0x01D8 (0x0004) [0x0000000000000000]               
	float                                              DistForFadeStart;                              // 0x01DC (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DistForFadeStop;                               // 0x01E0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FadeRangeInverse;                              // 0x01E4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_BespokePipeSonar");
		}

		return uClassPointer;
	};


	void eventInitHUD();
	void UpdateCachedVars();
	void Calibrate();
	bool eventUpdate(float DeltaTime);
};
// Class BmScript.RSeqAct_IsBatmobileDLC
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_IsBatmobileDLC : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_IsBatmobileDLC");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSeqAct_RasTrailsMobileWaypoint
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_RasTrailsMobileWaypoint : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_RasTrailsMobileWaypoint");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_RefreshAllCrimeScenes
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_RefreshAllCrimeScenes : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_RefreshAllCrimeScenes");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SetForensicTrail
// 0x001C (0x0160 - 0x017C)
class URSeqAct_SetForensicTrail : public USequenceAction
{
public:
	class UREvidence*                                  EvidenceTrail;                                 // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	ESpecialTrackingMode                               TrailType;                                     // 0x0168 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class FString                                      OverrideTrailDisplayName;                      // 0x016C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetForensicTrail");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.ROverworldSpawnPoint
// 0x0000 (0x029C - 0x029C)
class AROverworldSpawnPoint : public ARDummyTarget
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.ROverworldSpawnPoint");
		}

		return uClassPointer;
	};


	void PostBeginPlay();
};
// Class BmScript.RBMBehaviour_FireflyFlee
// 0x02DC (0x0360 - 0x063C)
class URBMBehaviour_FireflyFlee : public URBMBehaviour_FireflyFleeBase
{
public:
	struct FVector                                     offsetFromRoad;                                // 0x0360 (0x000C) [0x0000000000000000]               
	struct FRoadRouteRestriction                       Restrictions;                                  // 0x036C (0x00A8) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FRoadRouteRestriction                       FallbackRestrictions;                          // 0x0414 (0x00A8) [0x0000000000010000] (CPF_NeedCtorLink)
	struct FVector                                     RoadMoveLoc;                                   // 0x04BC (0x000C) [0x0000000000000000]               
	struct FVector                                     ActualMoveLoc;                                 // 0x04C8 (0x000C) [0x0000000000000000]               
	struct FVector                                     PrevMoveLoc;                                   // 0x04D4 (0x000C) [0x0000000000000000]               
	class AActor*                                      SavedThreat;                                   // 0x04E0 (0x0008) [0x0000000000000000]               
	class ARRoadNetwork*                               RoadNetwork;                                   // 0x04E8 (0x0008) [0x0000000000000000]               
	class ARVehicle*                                   dummyRacingLineVehicle;                        // 0x04F0 (0x0008) [0x0000000000000000]               
	float                                              LookAheadDist;                                 // 0x04F8 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              Route;                                         // 0x04FC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              PrevRoute;                                     // 0x050C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            CurrentLink;                                   // 0x051C (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentPoint;                                  // 0x0520 (0x0004) [0x0000000000000000]               
	float                                              TimeAlongCurrentLink;                          // 0x0524 (0x0004) [0x0000000000000000]               
	int32_t                                            LookBackPoint;                                 // 0x0528 (0x0004) [0x0000000000000000]               
	int32_t                                            LookAheadPoint;                                // 0x052C (0x0004) [0x0000000000000000]               
	struct FVector                                     LookAheadLoc;                                  // 0x0530 (0x000C) [0x0000000000000000]               
	float                                              bobBasePeriod;                                 // 0x053C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              bobPeriodVariance;                             // 0x0540 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              bobBaseMagnitude;                              // 0x0544 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              bobMagnitudeVariance;                          // 0x0548 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              bobRange;                                      // 0x054C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              bobTimeToActivate;                             // 0x0550 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              timeInBobRange;                                // 0x0554 (0x0004) [0x0000000000000000]               
	float                                              bobCycleProportion;                            // 0x0558 (0x0004) [0x0000000000000000]               
	float                                              currentBobCyclePeriod;                         // 0x055C (0x0004) [0x0000000000000000]               
	float                                              currentBobCycleMagnitude;                      // 0x0560 (0x0004) [0x0000000000000000]               
	struct FVector                                     bobOffset;                                     // 0x0564 (0x000C) [0x0000000000000000]               
	struct FVector                                     preTurnOffset;                                 // 0x0570 (0x000C) [0x0000000000000000]               
	struct FVector                                     prevLoc;                                       // 0x057C (0x000C) [0x0000000000000000]               
	int32_t                                            numRefinements_NewLink;                        // 0x0588 (0x0004) [0x0000000000000000]               
	int32_t                                            numRefinements_EachFrame;                      // 0x058C (0x0004) [0x0000000000000000]               
	float                                              DistToNextSpan;                                // 0x0590 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUseVehLookAhead : 1;                          // 0x0594 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDbgNoRemovePastRoute : 1;                     // 0x0594 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bTriggeredOutOfFuelDialogue : 1;               // 0x0594 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bSelectedOnWheel : 1;                          // 0x0594 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              vehLookAheadDist;                              // 0x0598 (0x0004) [0x0000000000000000]               
	float                                              rotLookAheadExtra;                             // 0x059C (0x0004) [0x0000000000000000]               
	float                                              LookBehindDist;                                // 0x05A0 (0x0004) [0x0000000000000000]               
	int32_t                                            currentLinkIndexInRoute;                       // 0x05A4 (0x0004) [0x0000000000000000]               
	int32_t                                            accelToHistoryNum;                             // 0x05A8 (0x0004) [0x0000000000000000]               
	class TArray<struct FVector>                       accelToHistory;                                // 0x05AC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              roadWidthProportionToUseMin;                   // 0x05BC (0x0004) [0x0000000000000000]               
	float                                              roadWidthProportionToUseMax;                   // 0x05C0 (0x0004) [0x0000000000000000]               
	int32_t                                            prevRouteMaxLength;                            // 0x05C4 (0x0004) [0x0000000000000000]               
	float                                              distFromCurrentLink;                           // 0x05C8 (0x0004) [0x0000000000000000]               
	float                                              returnToCentreTolerance;                       // 0x05CC (0x0004) [0x0000000000000000]               
	float                                              returnToCentreRate;                            // 0x05D0 (0x0004) [0x0000000000000000]               
	float                                              timeSinceSpoke;                                // 0x05D4 (0x0004) [0x0000000000000000]               
	float                                              MinTimeBetweenDialogue;                        // 0x05D8 (0x0004) [0x0000000000000000]               
	struct FdialogueTimingInfo                         dialogueTypeTimes[5];                          // 0x05DC (0x0050) [0x0000000000000000]               
	int32_t                                            distToBM;                                      // 0x062C (0x0004) [0x0000000000000000]               
	int32_t                                            numNarrowSpans;                                // 0x0630 (0x0004) [0x0000000000000000]               
	int32_t                                            numWideSpans;                                  // 0x0634 (0x0004) [0x0000000000000000]               
	int32_t                                            numNormalLengthSpans;                          // 0x0638 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMBehaviour_FireflyFlee");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void CheckFailCondition();
	void WarnAboutRiotSurpressorShot();
	void NotifyFFFliesAwayAfterBeatdown();
	void NotifyCityOutOfView();
	void NotifyBeatdownFailed();
	void NotifyBeatdownComplete();
	void NotifyBMMadeContactWithFirefly();
	struct FVector NotifyTakedownStarted();
	void Tick(float DeltaTime);
	void UpdateSavedThreat();
	void TryTriggerNextBombInSequence();
	void CancelMultiBomb();
	void SetTimeTillNextBomb();
	bool LaunchBombAtTarget(const struct FVector& TargetLoc);
	bool GetBombTargetLocationOnSpan(int32_t targetSpan, struct FVector& outTargetLoc);
	struct FVector GetSpanNormal(int32_t targetSpan);
	bool TryTriggerBombAttack();
	float GetMaxSpeed(float DeltaTime);
	void UpdateDistanceFromPlayer(float DeltaTime);
	void TryMoveAccelTargetTowardsCentreLine(float DeltaTime, struct FVector& outAccelTo);
	void UpdateMovement(float DeltaTime);
	void FFRefineRacingLine(int32_t NumIterations);
	void FFUpdateRacingLine();
	struct FVector GetLinkStartToEnd(int32_t Link, int32_t EndPoint);
	float GetLinkLength(int32_t Link);
	struct FVector GetLinkCentreLoc(int32_t Link);
	struct FVector GetPointLoc(int32_t Point);
	struct FVector GetPawnLocationOnRoad();
	float GetTimeAlongLineSegment(const struct FVector& LineStart, const struct FVector& LineStartToEnd, const struct FVector& TestPoint);
	struct FVector GetRacingLineLocByDistanceAhead(float distanceAhead, bool optionalBDrawDebug);
	struct FVector GetRacingLineLocOnSpan(int32_t routeSpan);
	void DrawRouteDebug();
	int32_t GetClosestActiveLinkInRouteToFirefly();
	float GetDistFromLinkToFirefly(int32_t linkNumber);
	struct FVector GetLocationAtTimeAlongLink(int32_t Link, int32_t LinkEndPoint, float Time);
	float AddLinkToRoute();
	bool GetFutureLocationOnRoute(float distAhead, struct FVector& outFutureLoc);
	float GetRouteLengthReminaining();
	void TryLengthenRoute();
	bool GetCurrentPositionOnRoute();
	bool SwitchToNextLinkOnRoute();
	bool FindFFLinkAndEndPoint();
	bool InitialiseRoute();
	void TurnHUDOff();
	void TurnHUDOn();
	void OnDeactivate();
	void OnActivate();
	void NotifyGrenadeDidDamage();
	bool eventTriggerFFBark(const class FName& eventFlagName);
	bool TryTriggerDialogue(EFFDialogueType DialogueType);
};
// Class BmScript.RPawnBossFirefly
// 0x0000 (0x1BA4 - 0x1BA4)
class ARPawnBossFirefly : public ARPawnBossFireflyBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnBossFirefly");
		}

		return uClassPointer;
	};


	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	class URWeaponConfig* CreateWeaponConfigUnarmed(class UObject* NewOwner);
	class URWeaponConfig* CreateFireflyWeaponConfig(class UObject* NewOwner);
};
// Class BmScript.RProjectile_GrenadeFirefly
// 0x0050 (0x0404 - 0x0454)
class ARProjectile_GrenadeFirefly : public ARProjectile_Grenade
{
public:
	class UParticleSystemComponent*                    FireParticleSystem;                            // 0x0404 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    TrailParticleSystem;                           // 0x040C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    WarningParticleSystem;                         // 0x0414 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              WarningParticleSystemRadiusModifier;           // 0x041C (0x0004) [0x0000000000000000]               
	class UAkEvent*                                    HitFloor_SFX;                                  // 0x0420 (0x0008) [0x0000000000000000]               
	class ARPawnBossFireflyBase*                       FF;                                            // 0x0428 (0x0008) [0x0000000000000000]               
	uint32_t                                           bImpactTriggered : 1;                          // 0x0430 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDrawDebug : 1;                                // 0x0430 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDoneBlast : 1;                                // 0x0430 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bFadingOut : 1;                                // 0x0430 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bAppliedImpulseToBMBL : 1;                     // 0x0430 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              timeBetweenImpactAndDetonation;                // 0x0434 (0x0004) [0x0000000000000000]               
	float                                              fireDuration;                                  // 0x0438 (0x0004) [0x0000000000000000]               
	float                                              FireFadeOutDuration;                           // 0x043C (0x0004) [0x0000000000000000]               
	float                                              lastDamageTime;                                // 0x0440 (0x0004) [0x0000000000000000]               
	float                                              DamageInterval;                                // 0x0444 (0x0004) [0x0000000000000000]               
	float                                              FFBombDamageAmount;                            // 0x0448 (0x0004) [0x0000000000000000]               
	float                                              FFBombExplosionImpulse;                        // 0x044C (0x0004) [0x0000000000000000]               
	float                                              expectedFireRadius;                            // 0x0450 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RProjectile_GrenadeFirefly");
		}

		return uClassPointer;
	};


	bool DamagePlayersInRange();
	void eventHitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp);
	void FFDestroy();
	void DisappearSilently();
	void DoBlast();
	void ProximityDetected();
	void FakeImpact(const struct FVector& fakeImpactLoc);
	void eventTick(float DeltaTime);
};
// Class BmScript.RSeqAct_GetFireFlyDefine
// 0x0018 (0x0160 - 0x0178)
class URSeqAct_GetFireFlyDefine : public USequenceAction
{
public:
	class TArray<class URCharacterDefine*>             Fireflys;                                      // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class URCharacterDefine*                           OutputDefine;                                  // 0x0170 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_GetFireFlyDefine");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void eventActivated();
};
// Class BmScript.RSeqAct_ToggleMissionWheel
// 0x0008 (0x0160 - 0x0168)
class URSeqAct_ToggleMissionWheel : public USequenceAction
{
public:
	class ARPlayerController*                          RPC;                                           // 0x0160 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_ToggleMissionWheel");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RGrapplePoint_Unusable
// 0x0002 (0x03BE - 0x03C0)
class ARGrapplePoint_Unusable : public ARGrapplePoint
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGrapplePoint_Unusable");
		}

		return uClassPointer;
	};

};
// Class BmScript.RTunnelGrate_NonInteractive
// 0x0000 (0x044C - 0x044C)
class ARTunnelGrate_NonInteractive : public ARTunnelGrate
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RTunnelGrate_NonInteractive");
		}

		return uClassPointer;
	};


	bool IsActive(class ARPlayerController* PC);
};
// Class BmScript.RBMCombatThrownObject_Shield
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_Shield : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_Shield");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponShield
// 0x0000 (0x06D4 - 0x06D4)
class ARBMWeaponShield : public ARBMWeaponShieldBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponShield");
		}

		return uClassPointer;
	};


	float GetTurnOnPickupTime();
	void InitialisePlayerSpecificAnimsets(class ARPawnPlayerCombat* NewPlayer, int32_t PlayerIndex);
	class UAnimSet* GetFearTakedownReactionAnimset();
	float GetBatClawPriority();
	class FName GetRECHitReactionAnimName();
	class URWeaponConfig* CreateWeaponConfig(class UObject* NewOwner);
	static class URWeaponConfig* CreateBatclawedHitReactionConfig(class UObject* NewOwner, class UAnimSet* AnimSet);
	static class URWeaponConfig* CreateKnockedBackWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet);
	static class URWeaponConfig* CreateCombatWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2, class UAnimSet* AnimSet3, class UAnimSet* AnimSet4, class UAnimSet* AnimSet5);
	static class URAimingConfig* GetCombatAimingConfig();
};
// Class BmScript.RBMCombatThrownObject_RiotShield
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_RiotShield : public ARBMCombatThrownObject_Shield
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_RiotShield");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponRiotShield
// 0x0000 (0x06D4 - 0x06D4)
class ARBMWeaponRiotShield : public ARBMWeaponShield
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponRiotShield");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatThrownObject_RiotShieldDestroyed
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_RiotShieldDestroyed : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_RiotShieldDestroyed");
		}

		return uClassPointer;
	};


	void DoEvent();
};
// Class BmScript.RBMCombatThrownObject_ShieldDestroyed
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_ShieldDestroyed : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_ShieldDestroyed");
		}

		return uClassPointer;
	};


	void DoEvent();
};
// Class BmScript.RPawnVillainMultiStageKnife
// 0x0000 (0x1B58 - 0x1B58)
class ARPawnVillainMultiStageKnife : public ARPawnVillainMultiStage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainMultiStageKnife");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatThrownObject_Minigun
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_Minigun : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_Minigun");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponMinigunPred
// 0x0014 (0x078C - 0x07A0)
class ARBMWeaponMinigunPred : public ARBMWeaponRiflePredBase
{
public:
	float                                              CurrentBarrelRot;                              // 0x078C (0x0004) [0x0000000000000000]               
	float                                              CurrentBulletsRot;                             // 0x0790 (0x0004) [0x0000000000000000]               
	float                                              BarrelSpeed;                                   // 0x0794 (0x0004) [0x0000000000000000]               
	float                                              TargetBarrelSpeed;                             // 0x0798 (0x0004) [0x0000000000000000]               
	float                                              BulletsSpeed;                                  // 0x079C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponMinigunPred");
		}

		return uClassPointer;
	};


	class URWeaponConfig* CreateBasicGunWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2);
	class URWeaponConfig* CreateWeaponConfig(class UObject* NewOwner);
	float GetDamage(class AActor* Target);
	void eventTick(float DeltaTime);
};
// Class BmScript.RPawnVillainGunPredMiniGun
// 0x0000 (0x1AB0 - 0x1AB0)
class ARPawnVillainGunPredMiniGun : public ARPawnVillainGunPredMiniGunBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainGunPredMiniGun");
		}

		return uClassPointer;
	};


	void PlayAttemptedTakedownDialogueLine(class ARPawnPlayer* Attacker);
	float GetBlockBreakerStunTime(const struct FDamageInfo& DmgInfo);
	class FString eventCantSpeakReason(class UAkDialogueSpeech* Speech, const struct FAkSpeechOptions& optionalDlgOpts, bool optionalDlgContinuation);
	bool eventCanSpeak(class UAkDialogueSpeech* Speech, const struct FAkSpeechOptions& optionalDlgOpts, bool optionalDlgContinuation);
	class UAnimSet* GetFallingTakedownAttackerAnimset(class ARPawnPlayer* Attacker);
	class UAnimSet* GetFallingTakedownAnimset(class ARPawnPlayer* Attacker);
	EDamageResult HitByBatarang(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void PlayHitReaction(const struct FDamageInfo& DmgInfo);
	bool VulnerableToDualTeamTakedown();
	bool SpawnSpecialAttack(class ARPawnPlayerCombat* PlayerPawn, class UClass* dmgType);
	bool DoGrenadeVentThrow(const struct FVector& ThrowVel, const struct FRotator& SpawnRot, const struct FVector& TargetLoc, class ARProjectile_GrenadeBase*& optionalOutNadeProj);
	class ARVantageMineBase* SpawnVantageMine();
	void SetHealth();
	float GetNonFatalTakedownDamage();
	class UAnimSet* GetVoiceSynthAnimSet();
	class UAnimSet* GetVaultExplosivesAnimSet();
	class UAnimSet* GetCorePredAnimSet();
	class UAnimSet* GetManDownAnimSet();
	class UAnimSet* GetGrateLookAnimSet();
	class UAnimSet* GetLedgeLookAnimSet();
	class UAnimSet* GetBuddyBumpAnimset();
	class UAnimSet* GetBuddyJoinAnimset();
	class UAnimSet* GetSideRoomSearchAnimSet();
	class UAnimSet* GetPairedCornerAnimSet();
	class UAnimSet* GetSoloCornerAnimSet();
	class URWeaponConfig* CreateLadderWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* optionalAnimSet2);
	class ARBMWeapon* eventCreateWeapon();
	void InitialisePlayerSpecificAnimsets(class ARPawnPlayerCombat* NewPlayer, int32_t PlayerIndex);
	bool CanEverDoBagCarrier();
	class UAnimSet* GetMedicAnimSet();
	void eventTickGunFire(float DeltaTime);
	void AddPawnProps();
};
// Class BmScript.RPawnVillainGunJammerBase
// 0x002C (0x1A98 - 0x1AC4)
class ARPawnVillainGunJammerBase : public ARPawnVillainGunPredFull
{
public:
	int32_t                                            JammerIndex;                                   // 0x1A98 (0x0004) [0x0000000000000000]               
	class USwfMovie*                                   TheMovieInstance;                              // 0x1A9C (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   JammerDisruptedXrayMIC;                        // 0x1AA4 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    jammerFX;                                      // 0x1AAC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class UMaterialInstanceConstant*>     jammerMaterialConstants;                       // 0x1AB4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainGunJammerBase");
		}

		return uClassPointer;
	};


	bool GetJammerLocation(struct FVector& outJammerLocation);
	class UAkParameterName* GetParameterInterference();
	class UAkParameterName* GetParameterAngle();
	void ShutdownComplete();
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	static void UpdateAerialSnapAnim(class ARPawnVillainGunJammer* Pawn, const struct FTransitionId& Transition, class UAnimSet* optionalOverrideAnimset);
	static void SetAerialSnapAnimSet(class ARPawnVillainGunJammer* Pawn, class UAnimSet* VictimAnimSet);
	void AttachProps();
	void AddPawnProps();
	void RestoreDisruptorDisabledEquipment();
	void TriggerDisruptedReaction();
	void GetDisruptedEquipmentLocationAndRotation(struct FVector& outVLocation, struct FRotator& outRRotation);
	void DisruptorDisableEquipment();
	void JammerRestored();
	void RECDisableEquipment();
	void SnapJammerAerial();
};
// Class BmScript.RPawnVillainGunJammer
// 0x0000 (0x1AC4 - 0x1AC4)
class ARPawnVillainGunJammer : public ARPawnVillainGunJammerBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainGunJammer");
		}

		return uClassPointer;
	};

};
// Class BmScript.RStealthTakedownStage_JammerSilentTakedown
// 0x0000 (0x06BC - 0x06BC)
class ARStealthTakedownStage_JammerSilentTakedown : public ARStealthTakeDownStage_GrabFromCrouch2
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RStealthTakedownStage_JammerSilentTakedown");
		}

		return uClassPointer;
	};


	void eventTick(float DeltaTime);
	class UAnimSet* ChooseVictimAnimSet(class ARPawnPlayer* Attacker);
	class UAnimSet* GetPlayerAnimset(class ARPawnPlayer* Attacker);
	void OverrideChosenAnim(int32_t& outAnim);
};
// Class BmScript.RPawnVillainGunMinelayer
// 0x0048 (0x1A98 - 0x1AE0)
class ARPawnVillainGunMinelayer : public ARPawnVillainGunPredFull
{
public:
	class USkeletalMeshComponent*                      GrabMineMeshStandard;                          // 0x1A98 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URTransitionFromRunConfig*                   MineInVentTFRConfig;                           // 0x1AA0 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               MineMesh;                                      // 0x1AA8 (0x0008) [0x0000000000000000]               
	class UPhysicsAsset*                               MinePhysics;                                   // 0x1AB0 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   DisruptedMineXrayMIC;                          // 0x1AB8 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   NormalMineXrayMIC;                             // 0x1AC0 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      MineMeshComps[3];                              // 0x1AC8 (0x0018) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainGunMinelayer");
		}

		return uClassPointer;
	};


	void WakeFromDead(class ARPawnCharacter* optionalNewGetUpMaster, const struct FTransitionId& optionalNewGetUpMasterAnimID, class UAnimSet* optionalNewGetUpAnimset, const class FName& optionalNewGetUpAnimName, const class FName& optionalGetUpMovementStance, bool optionalBDoAnim, bool optionalBAnimImmediate);
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void SwitchEquipmentXrayMaterial(class UMaterialInterface* NewMIC);
	void GetDisruptedEquipmentLocationAndRotation(struct FVector& outVLocation, struct FRotator& outRRotation);
	void DisruptorDisableEquipment();
	void eventRestoreDisruptorDisabledEquipment();
	class URTransitionFromRunConfig* GetMineInVentTFRConfig();
	class UAnimSet* GetMinelayerAnimset();
	void SetGrabMineHidden(bool bNewVal);
	void GetMineMeshComps();
	void AttachProps();
	void AddPawnProps();
	void PostInitCharacter();
	bool SpawnMine(class ARThugMineablePointBase* TargetMinePoint);
};
// Class BmScript.RVentMine
// 0x0000 (0x02EC - 0x02EC)
class ARVentMine : public ARVentMineBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVentMine");
		}

		return uClassPointer;
	};

};
// Class BmScript.RThugMine
// 0x0000 (0x0340 - 0x0340)
class ARThugMine : public ARThugMineBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RThugMine");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatPoint_HiElectricalBox
// 0x0028 (0x03BC - 0x03E4)
class ARBMCombatPoint_HiElectricalBox : public ARBMCombatPoint_EnvironmentAttackObject
{
public:
	class USkeletalMeshComponent*                      AirCondCables;                                 // 0x03BC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ARBMCombatThrownObject_AirCondUnitSmashable* AirCond;                                       // 0x03C4 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      AirCondInRangeHighlightMesh;                   // 0x03CC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      InRangeHighlightMesh;                          // 0x03D4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        SocketName;                                    // 0x03DC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatPoint_HiElectricalBox");
		}

		return uClassPointer;
	};


	bool IsValidLoc(class ARPawnPlayerCombat* TestPlayer, class ARPawnVillain* TestPawn);
	float GetMeshYawOffset();
	void OnFxEvent();
	bool PlayDestroyAnim(const class FName& AnimName);
	class FName GetAnimName(class ARPawnVillain* TargetPawn, class ARPawnPlayerCombat* PlayerPawn);
	void OnDroppedObject(class ARPawnPlayerCombat* PlayerPawn);
	void OnGrabbedObject(class ARPawnPlayerCombat* PlayerPawn);
	void SetupHighlightMesh();
	void UsedByPawn(class ARPawnCombat* NewUser, class AActor* optionalNewTarget, bool optionalBUsedDuringTaunt);
	void DebugReset(class ARBMCombatManager* CM);
	void PostBeginPlay();
	void RegisterStasisCheckMesh();
};
// Class BmScript.RBMCombatThrownObject_AirCondUnitSmashable
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_AirCondUnitSmashable : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_AirCondUnitSmashable");
		}

		return uClassPointer;
	};

};
// Class BmScript.RCrows
// 0x0100 (0x02E0 - 0x03E0)
class ARCrows : public ARCrowsBase
{
public:
	class UAnimNodeSequence*                           AnimNodes[3];                                  // 0x02E0 (0x0018) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   MaterialConstants[3];                          // 0x02F8 (0x0018) [0x0000000000000000]               
	struct FVector                                     startingLoc[3];                                // 0x0310 (0x0024) [0x0000000000000000]               
	struct FRotator                                    StartingRot[3];                                // 0x0334 (0x0024) [0x0000000000000000]               
	int32_t                                            bReadyForTakeoff[3];                           // 0x0358 (0x000C) [0x0000000000000000]               
	int32_t                                            bFinishedTakeOff[3];                           // 0x0364 (0x000C) [0x0000000000000000]               
	struct FRotator                                    flyOffRot;                                     // 0x0370 (0x000C) [0x0000000000000000]               
	float                                              startledTurnRate;                              // 0x037C (0x0004) [0x0000000000000000]               
	struct FVector                                     baseFlightVelocity;                            // 0x0380 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     trueFlightVelocity[3];                         // 0x038C (0x0024) [0x0000000000000000]               
	struct FVector                                     baseToRootBone;                                // 0x03B0 (0x000C) [0x0000000000000000]               
	class FString                                      secretFlag;                                    // 0x03BC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     flyOffLoc;                                     // 0x03CC (0x000C) [0x0000000000000000]               
	uint32_t                                           bOnlyStartlableByKismet : 1;                   // 0x03D8 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bCanBeScaredByThugs : 1;                       // 0x03D8 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              StartTime;                                     // 0x03DC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCrows");
		}

		return uClassPointer;
	};


	void CheckForOtherCrows();
	void SwapMesh(int32_t CrowIndex);
	void SetTranslationToRootBoneLocation(int32_t CrowIndex);
	void SetRootBoneLocation(int32_t CrowIndex, const struct FVector& desiredLoc);
	void MoveRootBone(int32_t CrowIndex, const struct FVector& Delta);
	struct FVector GetRootBoneLocation(int32_t CrowIndex);
	void PlayRandomFlyLoop(int32_t CrowIndex);
	void PlayRandomIdle(int32_t CrowIndex);
	bool IsPlayingAnim(int32_t CrowIndex);
	void Startle(const struct FVector& StartleLoc, bool optionalStartledByKismet);
	void eventDestroyed();
	void eventPreStreamOut();
	void OnDestroy(class USeqAct_Destroy* Action);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void PostBeginPlay();
};
// Class BmScript.RJokerHallucinationPoint
// 0x0000 (0x02A4 - 0x02A4)
class ARJokerHallucinationPoint : public ARJokerHallucinationPointBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RJokerHallucinationPoint");
		}

		return uClassPointer;
	};

};
// Class BmScript.RLevelTransitionDoor
// 0x0003 (0x03F1 - 0x03F4)
class ARLevelTransitionDoor : public ARLevelTransitionDoorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLevelTransitionDoor");
		}

		return uClassPointer;
	};

};
// Class BmScript.RLevelTransitionLadderAndHatchBase
// 0x00EC (0x02F8 - 0x03E4)
class ARLevelTransitionLadderAndHatchBase : public ARLevelTransition
{
public:
	class UStaticMeshComponent*                        LadderMesh;                                    // 0x02F8 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      GrateMesh;                                     // 0x0300 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bLocked : 1;                                   // 0x0308 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           LockedWhenSideStoriesDisabled : 1;             // 0x0308 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           ShowClearTheAreaText : 1;                      // 0x0308 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bShowLockedText : 1;                           // 0x0308 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bUsedRecently : 1;                             // 0x0308 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bCanUse : 1;                                   // 0x0308 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bIgnoreOverrideUseEvent : 1;                   // 0x0308 (0x0004) [0x0000000000000000] [0x00000040] 
	class URSpecialMoveConfig*                         BatmanClimbRunMove;                            // 0x030C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         BatmanClimbStandMove;                          // 0x0314 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         BatmanGrateMove;                               // 0x031C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         AlternativeBatmanClimbRunMove;                 // 0x0324 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         AlternativeBatmanClimbStandMove;               // 0x032C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URSpecialMoveConfig*                         AlternativeBatmanGrateMove;                    // 0x0334 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FString                                      AlternativeMovesFlag;                          // 0x033C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        AlternativeClimbHatchAnim;                     // 0x034C (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    PlayerRespawnOffsetAtTop;                      // 0x0354 (0x000C) [0x0000000100000000] (CPF_Edit)    
	struct FRotator                                    PlayerRespawnOffsetAtBottom;                   // 0x0360 (0x000C) [0x0000000100000000] (CPF_Edit)    
	float                                              LadderHeight;                                  // 0x036C (0x0004) [0x0000000000000000]               
	float                                              CloseRange;                                    // 0x0370 (0x0004) [0x0000000000000000]               
	class FString                                      ClearTheAreaText;                              // 0x0374 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FName                                        GrateAnimName;                                 // 0x0384 (0x0008) [0x0000000000000000]               
	struct FDebugSaveDescription                       SaveGameDescriptionRedDirection;               // 0x038C (0x0024) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FDebugSaveDescription                       SaveGameDescriptionGreenDirection;             // 0x03B0 (0x0024) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UMaterialInterface*>            OldMats;                                       // 0x03D4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLevelTransitionLadderAndHatchBase");
		}

		return uClassPointer;
	};


	bool AllowLongRangeInteraction(class ARPlayerController* PC);
	void DetachVisibleComponents();
	void AttachVisibleComponents();
	void StartLevelFromHere(bool optionalLevelStart);
	void SaveGameHere();
	bool IsPlayerCloseEnough(class APlayerController* PC);
	void MovePlayerInFront(class ARPlayerController* PC, float DistInFront, bool InFront, bool optionalTellPlayerHesMoved, bool optionalBForSaveOnly);
	void HandleKismetAction(int32_t Index, class URSeqAct_ModifyDoor* Action);
	void EnterTransition();
	void OnToggle(class USeqAct_Toggle* Action);
	bool CanReachItem(class APawn* CheckingPawn);
	float OverridesRun(class ARPlayerController* PC);
	bool CanUseInCinematicMode();
	struct FVector GetLocationOffset();
	bool MustBeCrouched(class ARPlayerController* PC);
	bool IsButtonPrompt();
	bool IsActive(class ARPlayerController* PC);
	float GetPriority();
	float GetFOVDegrees(class ARPlayerController* PC);
	float GetHeightRange();
	float GetRange();
	void Interact(class ARPlayerController* PC);
	void TriggerAfterUsedWhenLockedEvent();
	ECombatLockType GetCombatLockType();
	bool OverridePreviousLines();
	EInteractableItemFaceButton GetInteractButton(class ARPlayerController* PC);
	class FString GetPrompt(class APlayerController* PC);
	class FString GetUpperPrompt();
	bool eventIsInFront(class APlayerController* PC);
	bool IsAboveHatch(class APlayerController* PC);
};
// Class BmScript.RLevelTransitionLadderAndHatch
// 0x0000 (0x03E4 - 0x03E4)
class ARLevelTransitionLadderAndHatch : public ARLevelTransitionLadderAndHatchBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLevelTransitionLadderAndHatch");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqAct_JokerHallucinationController
// 0x0031 (0x0194 - 0x01C5)
class URSeqAct_JokerHallucinationController : public URSeqAct_JokerHallucinationControllerBase
{
public:
	float                                              MaxTimeBetweenSpawns;                          // 0x0194 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinTimeBetweenSpawns;                          // 0x0198 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeTillSpawn;                                 // 0x019C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxSpawns;                                     // 0x01A0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NumSpawnsSoFar;                                // 0x01A4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bNoTimedSpawns : 1;                            // 0x01A8 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bPaused : 1;                                   // 0x01A8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUseDistanceChecks : 1;                        // 0x01A8 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	int32_t                                            LastAppearanceIndex;                           // 0x01AC (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              PickedSpawns;                                  // 0x01B0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              MaxDistanceToSpawnPoint;                       // 0x01C0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	EFadeType                                          BulkFadeType;                                  // 0x01C4 (0x0001) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_JokerHallucinationController");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
	bool CanSeeSpawnPoint(const struct FVector& LocationToCheck);
	bool PickJokerToSpawn();
	bool eventUpdate(float DeltaTime);
};
// Class BmScript.RSeqAct_JokerHallucinationFadeNotify
// 0x0018 (0x0160 - 0x0178)
class URSeqAct_JokerHallucinationFadeNotify : public USequenceAction
{
public:
	EFadeType                                          FadeType;                                      // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class TArray<class ARPawnJokerHallucination*>      Joker;                                         // 0x0164 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bDontDelete : 1;                               // 0x0174 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_JokerHallucinationFadeNotify");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void eventActivated();
};
// Class BmScript.RSeqAct_SetGrapplePointPriority
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_SetGrapplePointPriority : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetGrapplePointPriority");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void eventActivated();
};
// Class BmScript.RSingleCrow
// 0x000C (0x03E0 - 0x03EC)
class ARSingleCrow : public ARCrows
{
public:
	uint32_t                                           bIsSpecialScarecrowCrow : 1;                   // 0x03E0 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	class USkeletalMeshComponent*                      straw;                                         // 0x03E4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSingleCrow");
		}

		return uClassPointer;
	};


	void PlayRandomIdle(int32_t CrowIndex);
	void PostBeginPlay();
};
// Class BmScript.RSwingChuteExit
// 0x0000 (0x02CC - 0x02CC)
class ARSwingChuteExit : public ARSwingChuteExitBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSwingChuteExit");
		}

		return uClassPointer;
	};


	void eventTick(float DeltaTime);
	void PlayGrateAnim(const class FName& GrateAnim, float optionalRate);
};
// Class BmScript.RSwingChutePoint
// 0x0004 (0x0544 - 0x0548)
class ARSwingChutePoint : public ARSwingChutePointBase
{
public:
	float                                              GlideLocatorOffset;                            // 0x0544 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSwingChutePoint");
		}

		return uClassPointer;
	};


	bool AllowLongRangeInteraction(class ARPlayerController* PC);
	void eventTick(float DeltaTime);
	void PlayGrateAnim(const class FName& GrateAnim, float optionalRate);
	void eventPostBeginPlay();
	EInteractableItemFaceButton GetInteractButton(class ARPlayerController* PC);
	bool OverridePreviousLines();
	class FString GetUpperPrompt();
	float OverridesRun(class ARPlayerController* PC);
	bool CanReachItem(class APawn* CheckingPawn);
	struct FVector GetLocationOffset();
	bool CanUseInCinematicMode();
	void Interact(class ARPlayerController* PC);
	bool MustBeCrouched(class ARPlayerController* PC);
	bool IsButtonPrompt();
	bool IsActive(class ARPlayerController* PC);
	float GetPriority();
	float GetFOVDegrees(class ARPlayerController* PC);
	float GetHeightRange();
	float GetRange();
	class FString GetPrompt(class APlayerController* PC);
	void MovePawnTo(class APawn* PawnToMove);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};
// Class BmScript.RBMCombatThrownObject_HeavyObjectFireExtinguisher
// 0x0020 (0x04AC - 0x04CC)
class ARBMCombatThrownObject_HeavyObjectFireExtinguisher : public ARBMCombatThrownObject_HeavyObject
{
public:
	class URInteractionComponent*                      Interactions;                                  // 0x04AC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     BatarangOffset;                                // 0x04B4 (0x000C) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bFirstFireExCollision : 1;                     // 0x04C0 (0x0004) [0x0000000000000000] [0x00000001] 
	class UAkEvent*                                    ExplodeEvent;                                  // 0x04C4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_HeavyObjectFireExtinguisher");
		}

		return uClassPointer;
	};


	void HitSomething(class ARPawnCombat* HitPawn, float Speed);
	void DetonateSmall();
	void Detonate();
	void TakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* dmgType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void HitByGel();
	float GetBatarangSpeedBoost();
	bool ForceHitAtEndOfFlight();
	float GetBatarangPriority();
	bool IsBatarangable();
	struct FVector GetBatarangTargetPosition(const struct FVector& AimLocation, const struct FVector& AimDirection, bool optionalBDuringTargetPhase);
};
// Class BmScript.RBMWeaponHeavyObjectFireExtinguisher
// 0x0034 (0x06D4 - 0x0708)
class ARBMWeaponHeavyObjectFireExtinguisher : public ARBMWeaponHeavyObject
{
public:
	class URInteractionComponent*                      Interactions;                                  // 0x06D4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ExplodeDelay;                                  // 0x06DC (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     BatarangImpactLocation;                        // 0x06E0 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetOffset;                                  // 0x06EC (0x000C) [0x0000000100000000] (CPF_Edit)    
	class TArray<class UMaterialInterface*>            OldMaterials;                                  // 0x06F8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponHeavyObjectFireExtinguisher");
		}

		return uClassPointer;
	};


	void OnWeaponDestroy(const struct FVector& SmashVel);
	void Detonate();
	void TakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* dmgType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void eventTick(float DeltaTime);
	float GetBatarangSpeedBoost();
	bool ForceHitAtEndOfFlight();
	float GetBatarangPriority();
	bool IsBatarangable();
	struct FVector GetBatarangTargetPosition(const struct FVector& AimLocation, const struct FVector& AimDirection, bool optionalBDuringTargetPhase);
};
// Class BmScript.RCandle
// 0x0024 (0x03E4 - 0x0408)
class ARCandle : public ARKActorSpawnable
{
public:
	class UParticleSystemComponent*                    Flame;                                         // 0x03E4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystem*                             FlamePFX;                                      // 0x03EC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             smokePFX;                                      // 0x03F4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             BreakPFX;                                      // 0x03FC (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bSmoking : 1;                                  // 0x0404 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBroken : 1;                                   // 0x0404 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBreakOnDamage : 1;                            // 0x0404 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCandle");
		}

		return uClassPointer;
	};


	void OnToggleHidden(class USeqAct_ToggleHidden* Action);
	void eventRigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int32_t ContactIndex, float Speed, int32_t Index0, int32_t Index1, struct FCollisionImpactData& outRigidCollisionData);
	void eventTakeDamage(int32_t Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void eventPostBeginPlay();
	void InitialiseFlame();
};
// Class BmScript.RGFxMovieUI_InstallationMessage
// 0x0028 (0x0430 - 0x0458)
class URGFxMovieUI_InstallationMessage : public URGFxMovieUI
{
public:
	int32_t                                            InstallChunkRequired;                          // 0x0430 (0x0004) [0x0000000000000000]               
	class URSeqAct_EnsureChunkInstalled*               TheAction;                                     // 0x0434 (0x0008) [0x0000000000000000]               
	class URGFxMovieUI*                                TheTriggeringUI;                               // 0x043C (0x0008) [0x0000000000000000]               
	class URGFxMoviePopupRequester*                    ActivePopup;                                   // 0x0444 (0x0008) [0x0000000000000000]               
	EPopUpTypes_0                                      PopupType;                                     // 0x044C (0x0001) [0x0000000000000000]               
	uint32_t                                           bInstalled : 1;                                // 0x0450 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCancelled : 1;                                // 0x0450 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bError : 1;                                    // 0x0450 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            Percent;                                       // 0x0454 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGFxMovieUI_InstallationMessage");
		}

		return uClassPointer;
	};


	class FString ConstructExitMsg(const class FString& BaseMsg);
	void XI_OnOut();
	void OnFadeCompleted_Callback();
	void XI_OnB();
	void XI_OnA();
	class FString XI_GetTimeAsHHMMSS(float TimeSec);
	int32_t XI_GetPercent();
	void PopupRequester_Callback(class URGFxMoviePopupRequester* ThePopUpMsg, int32_t ButtonId);
	bool CustomInit(class ARPlayerController* PC);
};
// Class BmScript.RSeqAct_EnsureChunkInstalled
// 0x0014 (0x0160 - 0x0174)
class URSeqAct_EnsureChunkInstalled : public USequenceAction
{
public:
	EInstallChunk                                      InstallChunkRequired;                          // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class USwfMovie*                                   TheGFxMovieInstance;                           // 0x0164 (0x0008) [0x0000000000000000]               
	class URGFxMovieUI_InstallationMessage*            MovieUI;                                       // 0x016C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_EnsureChunkInstalled");
		}

		return uClassPointer;
	};


	void ShowUI();
	void Activated();
};
// Class BmScript.RManagedFlammableStaticMeshActor
// 0x0003 (0x02C1 - 0x02C4)
class ARManagedFlammableStaticMeshActor : public AStaticMeshActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RManagedFlammableStaticMeshActor");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqAct_LockForensicsOn
// 0x000C (0x0160 - 0x016C)
class URSeqAct_LockForensicsOn : public USequenceAction
{
public:
	class ARPlayerController*                          RPC;                                           // 0x0160 (0x0008) [0x0000000000000000]               
	uint32_t                                           bLockAllGadgets : 1;                           // 0x0168 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bLockMap : 1;                                  // 0x0168 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           SuppressAudioWhenSwitchingVisionMode : 1;      // 0x0168 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bToggleVentOutlineNetwork : 1;                 // 0x0168 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_LockForensicsOn");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void AbortScanning();
	void Activated();
};
// Class BmScript.RSpecialMoveConfig_CustomDoorMove
// 0x0024 (0x01C8 - 0x01EC)
class URSpecialMoveConfig_CustomDoorMove : public URSpecialMoveConfig_RelativeAnimMove
{
public:
	class FName                                        DoorAnimName;                                  // 0x01C8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    DoorAnimSet;                                   // 0x01D0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAnimSet*                                    OtherPlayerAnimSet;                            // 0x01D8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        OtherPlayerAnimName;                           // 0x01E0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bPlayDoorAnimOnWrongDoor : 1;                  // 0x01E8 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveConfig_CustomDoorMove");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveInstance_CustomDoorMove
// 0x002C (0x03DC - 0x0408)
class ARSpecialMoveInstance_CustomDoorMove : public ARSpecialMoveInstance_RelativeAnimMove
{
public:
	class ARLevelTransitionDoorBase*                   LevelDoor;                                     // 0x03DC (0x0008) [0x0000000000000000]               
	class UPointLightComponent*                        DoorLight;                                     // 0x03E4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bStartedOtherPawn : 1;                         // 0x03EC (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRotator                                    SavedLocatorRot;                               // 0x03F0 (0x000C) [0x0000000000000000]               
	struct FColor                                      BlueCol;                                       // 0x03FC (0x0004) [0x0000000000000000]               
	struct FColor                                      RedCol;                                        // 0x0400 (0x0004) [0x0000000000000000]               
	struct FColor                                      GreenCol;                                      // 0x0404 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveInstance_CustomDoorMove");
		}

		return uClassPointer;
	};


	void eventFinishSpecialMove();
	void SetStaggNormal();
	void SetStaggScanning();
	void SetStaggOpen();
	void DetachStaggLight();
	void AttachStaggLight();
	void TeleportToOtherSide();
	bool UpdateSpecialMove(float DeltaTime);
	void TriggerSpecialMove(const struct FEnvironmentSpecialMoveLocator& MoveLocation);
};
// Class BmScript.RBMCombatThrownObject_StunStick
// 0x0004 (0x04A0 - 0x04A4)
class ARBMCombatThrownObject_StunStick : public ARBMCombatThrownObject
{
public:
	uint32_t                                           bOn : 1;                                       // 0x04A0 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_StunStick");
		}

		return uClassPointer;
	};


	void TurnOff();
	void TurnOnPickUp();
	void DelayPickupTime(float DelayTime);
	void TurnOn();
	void PreStreamOut();
	void Destroyed();
	void CheckJammed();
	void PostBeginPlay();
};
// Class BmScript.RBMWeaponStunStick
// 0x003C (0x06DC - 0x0718)
class ARBMWeaponStunStick : public ARBMWeaponStunStickBase
{
public:
	class UParticleSystemComponent*                    StunStickFX;                                   // 0x06DC (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URAkAudible*                                 SSAudible;                                     // 0x06E4 (0x0008) [0x0000004000010004] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              LightRadius;                                   // 0x06EC (0x0004) [0x0000000100000000] (CPF_Edit)    
	ERagdollVsNavMesh                                  OldRagVsNav;                                   // 0x06F0 (0x0001) [0x0000000000000000]               
	float                                              DestBrightness;                                // 0x06F4 (0x0004) [0x0000000000000000]               
	float                                              CurrBrightness;                                // 0x06F8 (0x0004) [0x0000000000000000]               
	float                                              BrightnessChangeSpeed;                         // 0x06FC (0x0004) [0x0000000000000000]               
	float                                              MinBrightnessAlpha;                            // 0x0700 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxBrightnessAlpha;                            // 0x0704 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinBrightnessSize;                             // 0x0708 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxBrightnessSize;                             // 0x070C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinBrightnessChangeSpeed;                      // 0x0710 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxBrightnessChangeSpeed;                      // 0x0714 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponStunStick");
		}

		return uClassPointer;
	};


	class UAnimSet* GetFearTakedownReactionAnimset();
	class FName GetRECHitReactionAnimName();
	class URWeaponConfig* CreateWeaponConfig(class UObject* NewOwner);
	class URWeaponConfig* CreateCombatWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2, class UAnimSet* AnimSet3, class UAnimSet* AnimSet4);
	static class URAimingConfig* GetCombatAimingConfig();
	void ItemRemovedFromInvManager();
	void ShowWeapon();
	void HideWeapon();
	void TurnOff();
	void TurnOn();
	void TurnOffLight();
	void UpdateLight(float DeltaTime);
	void TurnOnLight();
	void SetNewBrightness();
	void Backfire(class ARPawnCombat* OtherPawn);
	void HitTarget();
	void Tick(float DeltaTime);
	void DetachWeapon();
	void AttachWeapon();
	void PostBeginPlay();
};
// Class BmScript.RBMCombatThrownObject_StunStickDestroyed
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_StunStickDestroyed : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_StunStickDestroyed");
		}

		return uClassPointer;
	};


	void DoEvent();
	void PostBeginPlay();
};
// Class BmScript.RBMCombatThrownObject_StunStickDestroyedPart1
// 0x001C (0x04A0 - 0x04BC)
class ARBMCombatThrownObject_StunStickDestroyedPart1 : public ARBMCombatThrownObject
{
public:
	class UParticleSystemComponent*                    StunStickFX;                                   // 0x04A0 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URAkAudible*                                 SSAudible;                                     // 0x04A8 (0x0008) [0x0000004000010004] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UPointLightComponent*                        ElectricLight;                                 // 0x04B0 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bOn : 1;                                       // 0x04B8 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_StunStickDestroyedPart1");
		}

		return uClassPointer;
	};


	void DoEvent();
	void TurnOffLight();
	void TurnOnLight();
	void TurnOff();
	void TurnOn();
	void PostBeginPlay();
};
// Class BmScript.RCombatMove_VillainSmokeBombReaction_Stun
// 0x0000 (0x046C - 0x046C)
class ARCombatMove_VillainSmokeBombReaction_Stun : public ARCombatMove_VillainSmokeBombReaction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCombatMove_VillainSmokeBombReaction_Stun");
		}

		return uClassPointer;
	};


	void SetCounterInfo(bool bMirrored);
	void CombatAnimHitStart();
	bool ShouldMirror();
};
// Class BmScript.RBMCombatThrownObject_CombatExpertSword
// 0x0000 (0x04A0 - 0x04A0)
class ARBMCombatThrownObject_CombatExpertSword : public ARBMCombatThrownObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_CombatExpertSword");
		}

		return uClassPointer;
	};


	bool CanBePickedUpBy(class ARBMPawnAI* NewUser, bool bInCombat, bool bTaunting);
};
// Class BmScript.RBMWeaponCombatExpertSword
// 0x0008 (0x06D4 - 0x06DC)
class ARBMWeaponCombatExpertSword : public ARBMWeaponMelee
{
public:
	class UAnimSet*                                    BatclawAnimset;                                // 0x06D4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponCombatExpertSword");
		}

		return uClassPointer;
	};


	class UAnimSet* eventGetCounterAnimSet(class ARPawnPlayerCombat* PlayerPawn);
	class UAnimSet* eventGetBMCounterAnimSet(class ARPawnPlayerCombat* PlayerPawn);
	class FName GetRECHitReactionAnimName();
	class UAnimSet* GetFearTakedownReactionAnimset();
	void InitialisePlayerSpecificAnimsets(class ARPawnPlayerCombat* NewPlayer, int32_t PlayerIndex);
	void GetMultiAttackAnimNames(class ARPawnPlayerCombat* Player, class FName& outIntroName, class FName& outAttackName, class FName& outFailName, class FName& outCounterName);
	float GetRECPriority();
	class URWeaponConfig* CreateWeaponConfig(class UObject* NewOwner);
	class URWeaponConfig* CreateCombatWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2, class UAnimSet* AnimSet3, class UAnimSet* AnimSet4);
	void HideWeapon();
	static class URAimingConfig* GetCombatAimingConfig();
};
// Class BmScript.RBMCombatThrownObject_HeavyObjectCrate
// 0x0000 (0x04AC - 0x04AC)
class ARBMCombatThrownObject_HeavyObjectCrate : public ARBMCombatThrownObject_HeavyObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_HeavyObjectCrate");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponHeavyObjectCrate
// 0x0000 (0x06D4 - 0x06D4)
class ARBMWeaponHeavyObjectCrate : public ARBMWeaponHeavyObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponHeavyObjectCrate");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatThrownObject_HeavyObjectExplosive
// 0x001C (0x04AC - 0x04C8)
class ARBMCombatThrownObject_HeavyObjectExplosive : public ARBMCombatThrownObject_HeavyObject
{
public:
	class UAkEvent*                                    ExplodeEvent;                                  // 0x04AC (0x0008) [0x0000000000000000]               
	class URInteractionComponent*                      Interactions;                                  // 0x04B4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     BatarangOffset;                                // 0x04BC (0x000C) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_HeavyObjectExplosive");
		}

		return uClassPointer;
	};


	void BeingPickedUp(class ARBMPawnAI* NewUser);
	bool CanBePickedUpBy(class ARBMPawnAI* NewUser, bool bInCombat, bool bTaunting);
	void DamageNearbyThugs(class ARPawnCombat* HitPawn);
	void ExplodePawn(class ARPawnVillain* TargetPawn, class ARPawnCombat* optionalHitPawn);
	void Detonate(class ARPawnCombat* optionalHitPawn);
	void TakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* dmgType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void eventHitCombatPawn(class ARPawnCombat* HitPawn, float Speed);
	void HitSomething(class ARPawnCombat* HitPawn, float Speed);
	float GetBatarangSpeedBoost();
	bool ForceHitAtEndOfFlight();
	float GetBatarangPriority();
	bool IsBatarangable();
	struct FVector GetBatarangTargetPosition(const struct FVector& AimLocation, const struct FVector& AimDirection, bool optionalBDuringTargetPhase);
};
// Class BmScript.RBMWeaponHeavyObjectExplosive
// 0x0030 (0x06D4 - 0x0704)
class ARBMWeaponHeavyObjectExplosive : public ARBMWeaponHeavyObject
{
public:
	class URInteractionComponent*                      Interactions;                                  // 0x06D4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ExplodeDelay;                                  // 0x06DC (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FVector                                     BatarangImpactLocation;                        // 0x06E0 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetOffset;                                  // 0x06EC (0x000C) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ExplodeEvent;                                  // 0x06F8 (0x0008) [0x0000000000000000]               
	uint32_t                                           bExploded : 1;                                 // 0x0700 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponHeavyObjectExplosive");
		}

		return uClassPointer;
	};


	void OnWeaponDestroy(const struct FVector& SmashVel);
	void DamageNearbyThugs();
	void DamagePawn(class ARPawnVillain* TargetPawn);
	void Detonate();
	void TakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* dmgType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void HitByGel();
	void eventTick(float DeltaTime);
	float GetBatarangSpeedBoost();
	bool ForceHitAtEndOfFlight();
	float GetBatarangPriority();
	bool IsBatarangable();
	struct FVector GetBatarangTargetPosition(const struct FVector& AimLocation, const struct FVector& AimDirection, bool optionalBDuringTargetPhase);
};
// Class BmScript.RCharacter_Ninja
// 0x0000 (0x0178 - 0x0178)
class URCharacter_Ninja : public URCharacter
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCharacter_Ninja");
		}

		return uClassPointer;
	};

};
// Class BmScript.RPawnVillainCombatExpert
// 0x0028 (0x1A7C - 0x1AA4)
class ARPawnVillainCombatExpert : public ARPawnVillainCombatExpertBase
{
public:
	class TArray<class FName>                          NormalStepList;                                // 0x1A7C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UParticleSystemComponent*                    EyeFxLeftComp;                                 // 0x1A8C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    EyeFxRightComp;                                // 0x1A94 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    BladeFxComp;                                   // 0x1A9C (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainCombatExpert");
		}

		return uClassPointer;
	};


	void InitialisePlayerSpecificAnimsets(class ARPawnPlayerCombat* NewPlayer, int32_t PlayerIndex);
	void PlaySound_ImpactAIWin(class AActor* playOn, bool bIsStrike, bool bFinishingBlow, bool bIsHeadImpact, bool bIsPunch, bool bIsStrong, bool bIsBlocked, bool optionalBCanEmote, bool optionalBIsQuick, bool optionalBPlayerAttacked, bool optionalBForceEmote);
	class URWeaponConfig* CreateCombatWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2, class UAnimSet* AnimSet3, class UAnimSet* AnimSet4, class UAnimSet* AnimSet5);
	class URWeaponConfig* CreateRagdollWeaponConfig(class UObject* NewOwner, class UAnimSet* AnimSet1, class UAnimSet* AnimSet2, class UAnimSet* optionalAnimSet3);
	class URWeaponConfig* CreateWeaponConfigUnarmed(class UObject* NewOwner);
	static class URAimingConfig* GetCombatAimingConfig();
	class UAnimSet* eventGetPlayerAerialAttackAnimset(class ARPawnPlayerCombat* PlayerPawn);
	class UAnimSet* eventGetVillainAerialAttackAnimset(class ARPawnPlayerCombat* PlayerPawn);
	void StartAttackingFX(int32_t CTypeInt, class ARPlayerController* optionalPC, const class FName& optionalOverrideBoneName, bool optionalBForceShow);
	class UParticleSystem* GetStrikeImpactPS();
	class UParticleSystem* GetStrikeTrailPS();
	class FName GetPlayerImpactBone();
	bool SpawnVulnerableStrike(class ARPawnPlayerCombat* PlayerPawn);
	bool SpawnBlock(class ARPawnPlayerCombat* PlayerPawn);
	bool SpawnNormalStrike(class ARPawnPlayerCombat* PlayerPawn);
	bool OverrideCanDodgeProjectile(const struct FVector& ThrownFromPos, int32_t CheckBatarangID);
	void DodgeStrike(class ARPawnCombat* Attacker, class UClass* dmgType, bool bFar);
	bool CanDodgeAttack(class ARPawnCombat* Attacker, class UClass* dmgType, bool bFar);
	float GetDodgeChance();
	bool ShouldGoRagdoll(class UClass* dmgType, float DamageAmount);
	bool CanBePushedBy(class ARPawnVillain* Pusher);
	class ARBMWeapon* eventCreateWeapon();
	void PostBeginPlay();
	void BladeOff();
	void BladeOn();
	void EyesOff();
	void EyesOn();
};
// Class BmScript.RPawnVillainMultiStageArmoured
// 0x0000 (0x1B58 - 0x1B58)
class ARPawnVillainMultiStageArmoured : public ARPawnVillainMultiStage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainMultiStageArmoured");
		}

		return uClassPointer;
	};


	class FName GetRedirectWeaponStance();
};
// Class BmScript.RGenericGenerator
// 0x0040 (0x02C0 - 0x0300)
class ARGenericGenerator : public ARWaterGeneratorBase
{
public:
	class UMaterialInstanceConstant*                   CoreMaterial;                                  // 0x02C0 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ActivateAudioEvent;                            // 0x02C8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    DeactivateAudioEvent;                          // 0x02D0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    GeneratorLoop;                                 // 0x02D8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystemComponent*                    GenOnFX;                                       // 0x02E0 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      GeneratorMesh;                                 // 0x02E8 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              CoreGlowValue;                                 // 0x02F0 (0x0004) [0x0000000000000000]               
	float                                              CoreMaterialIndex;                             // 0x02F4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bCanTurnOff : 1;                               // 0x02F8 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bOnlyEventIfFromRec : 1;                       // 0x02F8 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              lastStartleTime;                               // 0x02FC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGenericGenerator");
		}

		return uClassPointer;
	};


	void BmTriedToUseWhenInvalid();
	bool CanTurnOn();
	bool CanTurnOff();
	void OnWaterGenerator(class URSeqAct_WaterGenerator* Action);
	void eventPostBeginPlay();
	void TryTriggerStartle(bool bOverload);
	void eventTick(float DeltaTime);
	void PowerOn(class AController* ActivatingController);
	void PowerOff(class AController* ActivatingController);
	EMBImpulseType GetQuickFireType();
	void HitByREC(const struct FVector& HitLocation, const struct FVector& HitNormal, EMBImpulseType HitType, class AController* InstigatedBy);
	void BmTriedToUseInWater();
	bool DangerPreventsUse(class AController* InstigatedBy, EMBImpulseType ImpulseType);
};
// Class BmScript.RSeqEvent_WaterGenerator
// 0x0000 (0x017C - 0x017C)
class URSeqEvent_WaterGenerator : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqEvent_WaterGenerator");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RSeqAct_WaterGenerator
// 0x0000 (0x0160 - 0x0160)
class URSeqAct_WaterGenerator : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_WaterGenerator");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RFakeLockedDoor
// 0x0004 (0x029C - 0x02A0)
class ARFakeLockedDoor : public AActor
{
public:
	uint32_t                                           bActive : 1;                                   // 0x029C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShowPrompt : 1;                               // 0x029C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bShowOpenText : 1;                             // 0x029C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bRepeatUse : 1;                                // 0x029C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RFakeLockedDoor");
		}

		return uClassPointer;
	};


	bool AllowLongRangeInteraction(class ARPlayerController* PC);
	void OnToggle(class USeqAct_Toggle* Action);
	bool CanReachItem(class APawn* CheckingPawn);
	float OverridesRun(class ARPlayerController* PC);
	struct FVector GetLocationOffset();
	bool CanUseInCinematicMode();
	class FString GetUpperPrompt();
	void DisablePrompt();
	void Interact(class ARPlayerController* PC);
	bool MustBeCrouched(class ARPlayerController* PC);
	bool IsButtonPrompt();
	bool IsActive(class ARPlayerController* PC);
	float GetPriority();
	float GetFOVDegrees(class ARPlayerController* PC);
	float GetHeightRange();
	float GetRange();
	bool OverridePreviousLines();
	EInteractableItemFaceButton GetInteractButton(class ARPlayerController* PC);
	class FString GetPrompt(class APlayerController* PC);
};
// Class BmScript.RHidePoint_Clocktower
// 0x0008 (0x064C - 0x0654)
class ARHidePoint_Clocktower : public ARHidePoint_Grate
{
public:
	class USkeletalMeshComponent*                      ExtraGrateMeshForAnimSync;                     // 0x064C (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHidePoint_Clocktower");
		}

		return uClassPointer;
	};


	EInteractableItemFaceButton GetInteractButton(class ARPlayerController* PC);
	void PlayGrateAnim(const class FName& GrateAnim, const struct FRotator& optionalGrateRotation, float optionalRate);
	void PostBeginPlay();
};
// Class BmScript.RHidePoint_Gargoyle
// 0x0000 (0x0564 - 0x0564)
class ARHidePoint_Gargoyle : public ARHidePoint_GargoyleBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RHidePoint_Gargoyle");
		}

		return uClassPointer;
	};


	void PostBeginPlay();
};
// Class BmScript.RLevelTransitionPoint
// 0x0000 (0x02F8 - 0x02F8)
class ARLevelTransitionPoint : public ARLevelTransition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLevelTransitionPoint");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqAct_CompareNumHostileVehicles
// 0x0004 (0x0160 - 0x0164)
class URSeqAct_CompareNumHostileVehicles : public USequenceAction
{
public:
	int32_t                                            RefValue;                                      // 0x0160 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_CompareNumHostileVehicles");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSwingChutePoint_Vent
// 0x0000 (0x0548 - 0x0548)
class ARSwingChutePoint_Vent : public ARSwingChutePoint
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSwingChutePoint_Vent");
		}

		return uClassPointer;
	};

};
// Class BmScript.RPawnVillainMultiStageUltimate
// 0x0000 (0x1B58 - 0x1B58)
class ARPawnVillainMultiStageUltimate : public ARPawnVillainMultiStage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainMultiStageUltimate");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBreakableTV_CRT
// 0x0000 (0x031C - 0x031C)
class ARBreakableTV_CRT : public ARBreakableTV
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBreakableTV_CRT");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBreakableTV_CRT_Dynamic
// 0x0000 (0x031C - 0x031C)
class ARBreakableTV_CRT_Dynamic : public ARBreakableTV_CRT
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBreakableTV_CRT_Dynamic");
		}

		return uClassPointer;
	};

};
// Class BmScript.RPresurePadBomb
// 0x0000 (0x03D8 - 0x03D8)
class ARPresurePadBomb : public ARPresurePad
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPresurePadBomb");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqAct_FakeTickOffRiddlerRiotBomb
// 0x0005 (0x0160 - 0x0165)
class URSeqAct_FakeTickOffRiddlerRiotBomb : public USequenceAction
{
public:
	int32_t                                            PickupIndex;                                   // 0x0160 (0x0004) [0x0000000100000000] (CPF_Edit)    
	ERiddlerLocationName                               Zone;                                          // 0x0164 (0x0001) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_FakeTickOffRiddlerRiotBomb");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SetTVTexture
// 0x000C (0x0160 - 0x016C)
class URSeqAct_SetTVTexture : public USequenceAction
{
public:
	class UTexture*                                    TextureToSet;                                  // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bAddDistortionFX : 1;                          // 0x0168 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetTVTexture");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
	void SetStatic();
	void SetTexture(class UTexture* Texture);
};
// Class BmScript.RCrimeScene
// 0x01D4 (0x036C - 0x0540)
class ARCrimeScene : public ARCrimeSceneBase
{
public:
	class TArray<class ASkeletalMeshActor*>            DeepScanActors_0_Skin;                         // 0x036C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class ASkeletalMeshActor*>            DeepScanActors_0_Surfaces;                     // 0x037C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class ASkeletalMeshActor*>            DeepScanActors_0_SurfaceEvidence;              // 0x038C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class ASkeletalMeshActor*>            DeepScanActors_1_Muscles;                      // 0x039C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class ASkeletalMeshActor*>            DeepScanActors_2_Bones;                        // 0x03AC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FString>                        DeepScanFilterStrings_Surface_Muscle_Bone;     // 0x03BC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<float>                                DeepScanFilterProportions_Surface_Muscle_Bone; // 0x03CC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            DeepScanMissingPersonsTotalPopulation;         // 0x03DC (0x0004) [0x0000000000000000]               
	int32_t                                            DeepScanFinalDisplayFrameIndex;                // 0x03E0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NumDeepScanEvidenceScanned;                    // 0x03E4 (0x0004) [0x0000000000000000]               
	class FString                                      FirstScannedEvidence;                          // 0x03E8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      SecondScannedEvidence;                         // 0x03F8 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class AActor*>                        PerimeterBlockingActors;                       // 0x0408 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UMaterialInstanceConstant*>     MaterialInstances;                             // 0x0418 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UMaterialInstanceConstant*>     MaterialInstances01;                           // 0x0428 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UMaterialInstanceConstant*>     MaterialInstances02;                           // 0x0438 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UMaterialInstanceConstant*>     MaterialInstances03;                           // 0x0448 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UMaterialInstanceConstant*>     MaterialInstances04;                           // 0x0458 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	float                                              visibleCurrent;                                // 0x0468 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              visibleCurrent01;                              // 0x046C (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              visibleCurrent02;                              // 0x0470 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              visibleDest;                                   // 0x0474 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              visibleDest01;                                 // 0x0478 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              visibleDest02;                                 // 0x047C (0x0004) [0x0000000000000400] (CPF_Transient)
	class TArray<float>                                ActiveOuterAlpha;                              // 0x0480 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                ActiveInnerAlpha;                              // 0x0490 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                InactiveOuterAlpha;                            // 0x04A0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                InactiveInnerAlpha;                            // 0x04B0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                ActiveMaskInner;                               // 0x04C0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                ActiveMaskOuter;                               // 0x04D0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                InactiveMaskInner;                             // 0x04E0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                InactiveMaskOuter;                             // 0x04F0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                ActiveFadeToCenter;                            // 0x0500 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<float>                                InactiveFadeToCenter;                          // 0x0510 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class AActor*                                      RefPoint_ConstrainToArcLeft;                   // 0x0520 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      RefPoint_ConstrainToArcMiddle;                 // 0x0528 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      RefPoint_ConstrainToArcRight;                  // 0x0530 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class ARPlayerController*                          TempRPC;                                       // 0x0538 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCrimeScene");
		}

		return uClassPointer;
	};


	void SetPerimeterBlockingActive(bool are_active);
	void SetDeepScanActorsVisible(const class TArray<class ASkeletalMeshActor*>& actor_array, bool make_visible, float& outDestVal);
	void AutoSetDeepScanActorsVisible();
	void DeepScanResetObjectStates();
	void UpdateMaterials(const class TArray<class UMaterialInstanceConstant*>& aMI, float currentAlpha, int32_t LayerID);
	void DeepScanHideAll(bool bSet);
	void SetupMaterials(const class TArray<class ASkeletalMeshActor*>& aActor, class TArray<class UMaterialInstanceConstant*>& outAMI);
	void DeepScanTick(float DeltaTime);
	float InterpVal(float Current, float Target, float DeltaTime);
	float SmoothCurve(float X);
	bool DeepScanLevelPlusMinus(class ARPlayerController* RPC, int32_t plus_minus);
	void FindIntersectionVector(const struct FVector& SpokeOrigin_A, float SpokeAngle_A, const struct FVector& SpokeOrigin_B, float SpokeAngle_B, struct FVector& outIntersectionVector);
	float GetVectorAngle2D(const struct FVector& ChordVector);
	void TestConstrainToArc();
	struct FVector FindVectorByAngle(const struct FVector& origin_vector, float the_angle, float the_radius);
	struct FVector GetConstrainVectorFromProportion(float in_proportion);
	float GetConstrainProportionFromVector(const struct FVector& in_vector);
	struct FVector ConstrainVectorToCurve(const struct FVector& in_vector);
	int32_t GetCurrentMissingPersonsNumber();
	void FoundMissingPersonsEvidenceForCurrentLayer(class ARPlayerController* RPC);
	void InitMissingPersonsDataOnHud(class ARPlayerController* RPC);
	void eventPostBeginPlay();
};
// Class BmScript.RSeqAct_SideStory_PygVictim
// 0x0008 (0x0160 - 0x0168)
class URSeqAct_SideStory_PygVictim : public USequenceAction
{
public:
	int32_t                                            VictimId;                                      // 0x0160 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            VictimPercent;                                 // 0x0164 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SideStory_PygVictim");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_SideStoryOverrideFocusText
// 0x0020 (0x0160 - 0x0180)
class URSeqAct_SideStoryOverrideFocusText : public USequenceAction
{
public:
	class FString                                      SideStoryName;                                 // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      OverrideFocusText;                             // 0x0170 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SideStoryOverrideFocusText");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSeqAct_UpdateDeadBody
// 0x001C (0x0160 - 0x017C)
class URSeqAct_UpdateDeadBody : public USequenceAction
{
public:
	class ARDeadBody*                                  DeadBody;                                      // 0x0160 (0x0008) [0x0000000000000000]               
	class FString                                      NewBodyName;                                   // 0x0168 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              InvestigationMaxDistance;                      // 0x0178 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_UpdateDeadBody");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RPawnVillainMultiStageShield
// 0x0000 (0x1B58 - 0x1B58)
class ARPawnVillainMultiStageShield : public ARPawnVillainMultiStage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainMultiStageShield");
		}

		return uClassPointer;
	};

};
// Class BmScript.RPawnVillainMultiStageStunStick
// 0x0000 (0x1B58 - 0x1B58)
class ARPawnVillainMultiStageStunStick : public ARPawnVillainMultiStage
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPawnVillainMultiStageStunStick");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMCombatThrownObject_HeavyObjectCrateAce
// 0x0000 (0x04AC - 0x04AC)
class ARBMCombatThrownObject_HeavyObjectCrateAce : public ARBMCombatThrownObject_HeavyObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMCombatThrownObject_HeavyObjectCrateAce");
		}

		return uClassPointer;
	};

};
// Class BmScript.RBMWeaponHeavyObjectCrateAce
// 0x0000 (0x06D4 - 0x06D4)
class ARBMWeaponHeavyObjectCrateAce : public ARBMWeaponHeavyObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMWeaponHeavyObjectCrateAce");
		}

		return uClassPointer;
	};

};
// Class BmScript.RRiddlerLight
// 0x0014 (0x029C - 0x02B0)
class ARRiddlerLight : public AActor
{
public:
	class UStaticMeshComponent*                        BaseMesh;                                      // 0x029C (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   LightMat;                                      // 0x02A4 (0x0008) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x02AC (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RRiddlerLight");
		}

		return uClassPointer;
	};


	void OnToggle(class USeqAct_Toggle* Action);
	void eventPostBeginPlay();
};
// Class BmScript.RRiddlerResetLight
// 0x0050 (0x0388 - 0x03D8)
class ARRiddlerResetLight : public ARInteractableItem
{
public:
	class UStaticMeshComponent*                        BaseMesh;                                      // 0x0388 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   LightMat;                                      // 0x0390 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   StateMat;                                      // 0x0398 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   NeonMat;                                       // 0x03A0 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             ImpactFX;                                      // 0x03A8 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             OverloadFX;                                    // 0x03B0 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ImpactSoundFX;                                 // 0x03B8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UStaticMeshComponent*                        BackMesh;                                      // 0x03C0 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    GlowDot;                                       // 0x03C8 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              CurrentIntensity;                              // 0x03D0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x03D4 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RRiddlerResetLight");
		}

		return uClassPointer;
	};


	void Tick(float UpdateTime);
	bool UsedBy(class APawn* User);
	void TakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void OnToggle(class USeqAct_Toggle* Action);
	bool IsActive(class ARPlayerController* PC);
	void eventPostBeginPlay();
};
// Class BmScript.RRiddlerSwitch
// 0x0040 (0x0388 - 0x03C8)
class ARRiddlerSwitch : public ARInteractableItem
{
public:
	uint32_t                                           bLightOn : 1;                                  // 0x0388 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShouldFlickerWhenOff : 1;                     // 0x0388 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bAlwaysTargetable : 1;                         // 0x0388 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bCanSwitchBackOn : 1;                          // 0x0388 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDontPlayHitAudio : 1;                         // 0x0388 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	class UMaterialInstanceConstant*                   LightMat;                                      // 0x038C (0x0008) [0x0000004000010004] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UParticleSystem*                             ImpactFX;                                      // 0x0394 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             OverloadFX;                                    // 0x039C (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    ImpactSoundFX;                                 // 0x03A4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UStaticMeshComponent*                        BaseMesh;                                      // 0x03AC (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    GlowDot;                                       // 0x03B4 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     LastHitLocation;                               // 0x03BC (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RRiddlerSwitch");
		}

		return uClassPointer;
	};


	void TakeDamage(int32_t Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	bool UsedBy(class APawn* User);
	bool AllowController(class AController* C);
	void Reset();
	bool IsBatarangable();
	bool IsActive(class ARPlayerController* PC);
	void PostBeginPlay();
	void OnToggle(class USeqAct_Toggle* Action);
	bool CanBeMissileTargetted();
	void ChangeLight(bool bNewState);
};
// Class BmScript.RImpassableHazard
// 0x0014 (0x02E4 - 0x02F8)
class ARImpassableHazard : public AVolume
{
public:
	class URSpecialMoveConfig*                         StumbleMove;                                   // 0x02E4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      dmgType;                                       // 0x02EC (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              DamageDoneToPlayer;                            // 0x02F4 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RImpassableHazard");
		}

		return uClassPointer;
	};


	bool CanBasePawn(class APawn* P);
	void eventBump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	bool PlayerIsSliding(class ARPlayerController* PC);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};
// Class BmScript.RSpecialMoveConfig_HazardStumble
// 0x0000 (0x01C8 - 0x01C8)
class URSpecialMoveConfig_HazardStumble : public URSpecialMoveConfig_RelativeAnimMove
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveConfig_HazardStumble");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveInstance_HazardStumble
// 0x0008 (0x03DC - 0x03E4)
class ARSpecialMoveInstance_HazardStumble : public ARSpecialMoveInstance_RelativeAnimMove
{
public:
	class UForceFeedbackWaveform*                      Rumble;                                        // 0x03DC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveInstance_HazardStumble");
		}

		return uClassPointer;
	};


	void TriggerSpecialMove(const struct FEnvironmentSpecialMoveLocator& MoveLocation);
};
// Class BmScript.RWaterGenerator
// 0x0068 (0x02C0 - 0x0328)
class ARWaterGenerator : public ARWaterGeneratorBase
{
public:
	class UMaterialInstanceConstant*                   CoreMaterial;                                  // 0x02C0 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             BlowUpFX;                                      // 0x02C8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    BlowUpSound;                                   // 0x02D0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ActivateAudioEvent;                            // 0x02D8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    DeactivateAudioEvent;                          // 0x02E0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    PowerOnAudioEvent;                             // 0x02E8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    PowerOffAudioEvent;                            // 0x02F0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    GeneratorLoop;                                 // 0x02F8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystemComponent*                    GenOnFX;                                       // 0x0300 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        DestroyedMesh;                                 // 0x0308 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      GeneratorMesh;                                 // 0x0310 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              CoreGlowValue;                                 // 0x0318 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBroken : 1;                                   // 0x031C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCantAffectThugs : 1;                          // 0x031C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bDontSaveState : 1;                            // 0x031C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	float                                              CoreMaterialIndex;                             // 0x0320 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              lastStartleTime;                               // 0x0324 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RWaterGenerator");
		}

		return uClassPointer;
	};


	void OnWaterGenerator(class URSeqAct_WaterGenerator* Action);
	void eventPostBeginPlay();
	void TryTriggerStartle(bool bOverload);
	void eventTick(float DeltaTime);
	void Overload();
	bool IsOverloaded();
	void BmTriedToUseInWater();
	void PowerOn(class AController* ActivatingController, class UAkEvent* eventForPowerOn);
	void PowerOff(class AController* ActivatingController, class UAkEvent* powerOffEvent);
	EMBImpulseType GetQuickFireType();
	void HitByREC(const struct FVector& HitLocation, const struct FVector& HitNormal, EMBImpulseType HitType, class AController* InstigatedBy);
	bool DangerPreventsUse(class AController* InstigatedBy, EMBImpulseType ImpulseType);
};
// Class BmScript.RBMRacePressurePad
// 0x0034 (0x03D8 - 0x040C)
class ARBMRacePressurePad : public ARPresurePad
{
public:
	float                                              TimeOnPad;                                     // 0x03D8 (0x0004) [0x0000000000000000]               
	float                                              TimeTillOrange;                                // 0x03DC (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeTillGreen;                                 // 0x03E0 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              CurrentOnTime;                                 // 0x03E4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasOrange : 1;                                // 0x03E8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWasGreen : 1;                                 // 0x03E8 (0x0004) [0x0000000000000000] [0x00000002] 
	class UAkEvent*                                    OrangeSFX;                                     // 0x03EC (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    GreenSFX;                                      // 0x03F4 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    RedSFX;                                        // 0x03FC (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    LoopSfx;                                       // 0x0404 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBMRacePressurePad");
		}

		return uClassPointer;
	};


	void eventTick(float DeltaTime);
	void eventDetach(class AActor* Other);
	void TriggerPressurePad(class AActor* Other);
	void SetActivatedMat();
	void eventPostBeginPlay();
	void OnTogglePressurePad(class URSeqAct_TogglePressurePad* ToggleAction);
};
// Class BmScript.RGlideUnderBridgesAchievementVolume
// 0x0001 (0x02E4 - 0x02E5)
class ARGlideUnderBridgesAchievementVolume : public AVolume
{
public:
	uint8_t                                            Id;                                            // 0x02E4 (0x0001) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RGlideUnderBridgesAchievementVolume");
		}

		return uClassPointer;
	};


	void eventUnTouch(class AActor* Other);
};
// Class BmScript.RSeqAct_SetFractureWallCanInteract
// 0x000C (0x0160 - 0x016C)
class URSeqAct_SetFractureWallCanInteract : public USequenceAction
{
public:
	class AActor*                                      TheWall;                                       // 0x0160 (0x0008) [0x0000000000000000]               
	uint32_t                                           CanInteract : 1;                               // 0x0168 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetFractureWallCanInteract");
		}

		return uClassPointer;
	};


	void Activated();
};
// Class BmScript.RSwingChuteExitDLC
// 0x0000 (0x02CC - 0x02CC)
class ARSwingChuteExitDLC : public ARSwingChuteExit
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSwingChuteExitDLC");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSwingChutePointDLC
// 0x0000 (0x0548 - 0x0548)
class ARSwingChutePointDLC : public ARSwingChutePoint
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSwingChutePointDLC");
		}

		return uClassPointer;
	};


	bool CanReachItem(class APawn* CheckingPawn);
};
// Class BmScript.RLevelTransitionDoorSmall
// 0x0003 (0x03F1 - 0x03F4)
class ARLevelTransitionDoorSmall : public ARLevelTransitionDoorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RLevelTransitionDoorSmall");
		}

		return uClassPointer;
	};

};
// Class BmScript.RPredatorDroneRotor
// 0x0000 (0x0C70 - 0x0C70)
class ARPredatorDroneRotor : public ARPredatorDrone
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RPredatorDroneRotor");
		}

		return uClassPointer;
	};


	class FString GetDisplayIconName();
	bool CanBasePawn(class APawn* P);
	void eventPostBeginPlay();
};
// Class BmScript.RSeqAct_ChallengeMode
// 0x0014 (0x0160 - 0x0174)
class URSeqAct_ChallengeMode : public USequenceAction
{
public:
	uint32_t                                           m_bCompletedOrFailed : 1;                      // 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      m_sCustomMessage;                              // 0x0164 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_ChallengeMode");
		}

		return uClassPointer;
	};


	void Activated();
	static int32_t eventGetObjClassVersion();
};
// Class BmScript.RSeqAct_SetHelicopterHighPriorityTarget
// 0x0028 (0x0160 - 0x0188)
class URSeqAct_SetHelicopterHighPriorityTarget : public USequenceAction
{
public:
	class TArray<class ARHelicopterIntermediate*>      AnyNumberOfHelicopters;                        // 0x0160 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class AActor*>                        AnyNumberOfTargets;                            // 0x0170 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              HorizontalRangeForLookAt;                      // 0x0180 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           IgnoreLineOfSight : 1;                         // 0x0184 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetHelicopterHighPriorityTarget");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void AddRemoveTargets(bool DoAdd);
	void Activated();
};
// Class BmScript.RVehicleWalker
// 0x0060 (0x1DDC - 0x1E3C)
class ARVehicleWalker : public ARVehicleWalkerBase
{
public:
	class USkeletalMeshComponent*                      LeftArmMesh;                                   // 0x1DDC (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      RightArmMesh;                                  // 0x1DE4 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMesh*                               LeftArmDamaged;                                // 0x1DEC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class USkeletalMesh*                               RightArmDamaged;                               // 0x1DF4 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        LeftArmDamagedAnimName;                        // 0x1DFC (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        RightArmDamagedAnimName;                       // 0x1E04 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bCanDoSimultaneousAttack : 1;                  // 0x1E0C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	int32_t                                            NumRockets;                                    // 0x1E10 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FVector>                       RocketOffsets;                                 // 0x1E14 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              DelayBetweenRockets;                           // 0x1E24 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            NumRocketsFired;                               // 0x1E28 (0x0004) [0x0000000000000000]               
	class TArray<class FName>                          FixedBoneNames;                                // 0x1E2C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RVehicleWalker");
		}

		return uClassPointer;
	};


	float eventGetAttackTimeBonus(int32_t WeaponID);
	struct FVector GetWeaponLockOnLocation(int32_t& optionalOutInSight);
	void eventSetInCombat(bool bInCombat);
	void eventCancelAttack(bool DueToBeingRammed);
	struct FVector GetShootTarget(class AActor* Target);
	class AActor* eventGetTargetActor();
	float GetRammingDamageSpeedThreshold();
	void SwitchToAssignedBehaviour();
	void ExplodeMe();
	void ProjectileInFlight();
	float GetBarrageDelay(EWalkerWeaponTypes Type);
	int32_t GetBarrageSize(EWalkerWeaponTypes Type);
	void FireRocketAttack(const struct FWalkerWeaponContainer& WalkerWeapon);
	void ShowAttackWarning();
	void MissileInFlight();
	void MissileAttack();
	bool eventStartAttack(class AActor* Target, float WarningTime, const struct FVector& optionalAttackLoc, int32_t optionalWeaponIndex);
	bool eventCanDoSimultaneousAttack(int32_t WeaponIndex);
	bool eventIsAttacking();
	void ArmDestroyed();
	ECanAttackTargetResult eventCanAttackTarget(class AActor* Target, int32_t WeaponID);
	bool eventInCombat(class AActor* Target);
	void eventHasLanded();
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	bool CanBasePawn(class APawn* P);
	void PostBeginPlay();
};
// Class BmScript.RElectrifiedFloorPanelCell
// 0x0000 (0x03DC - 0x03DC)
class ARElectrifiedFloorPanelCell : public ARElectrifiedFloorPanel
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RElectrifiedFloorPanelCell");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSeqAct_SentryGun
// 0x0010 (0x0160 - 0x0170)
class URSeqAct_SentryGun : public USequenceAction
{
public:
	class TArray<class ARSentryGunBase*>               SentryGuns;                                    // 0x0160 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SentryGun");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void Activated();
};
// Class BmScript.RSpecialMoveConfig_CommandBeacon
// 0x0000 (0x01C8 - 0x01C8)
class URSpecialMoveConfig_CommandBeacon : public URSpecialMoveConfig_RelativeAnimMove
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveConfig_CommandBeacon");
		}

		return uClassPointer;
	};

};
// Class BmScript.RSpecialMoveInstance_CommandBeacon
// 0x0000 (0x03DC - 0x03DC)
class ARSpecialMoveInstance_CommandBeacon : public ARSpecialMoveInstance_RelativeAnimMove
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSpecialMoveInstance_CommandBeacon");
		}

		return uClassPointer;
	};

};
// Class BmScript.RCommandBeaconLights
// 0x00E0 (0x02E4 - 0x03C4)
class ARCommandBeaconLights : public ARCommandBeaconLightsBase
{
public:
	class UPointLightComponent*                        PointLight_Dormant;                            // 0x02E4 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPointLightComponent*                        PointLight_VirusInProgress;                    // 0x02EC (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPointLightComponent*                        PointLight_VirusSuccessfulCoreExposed;         // 0x02F4 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPointLightComponent*                        PointLight_Broken;                             // 0x02FC (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FCommandBeaconMaterialSet                   Materials_Dormant;                             // 0x0304 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FCommandBeaconMaterialSet                   Materials_VirusInProgress;                     // 0x0324 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FCommandBeaconMaterialSet                   Materials_VirusSuccessfulCoreExposed;          // 0x0344 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FCommandBeaconMaterialSet                   Materials_Broken;                              // 0x0364 (0x0020) [0x0000000100000000] (CPF_Edit)    
	struct FCommandBeaconMaterialSet                   defaultMaterialSet;                            // 0x0384 (0x0020) [0x0000000000000000]               
	class UAkEvent*                                    yellowLightSoundLoop;                          // 0x03A4 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    slowRedLightSoundLoop;                         // 0x03AC (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    fastRedLightSoundLoop;                         // 0x03B4 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    HUDSound;                                      // 0x03BC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCommandBeaconLights");
		}

		return uClassPointer;
	};


	void SetComponentState(EeCommandBeaconState NewState);
	void Init(class ARCommandBeaconBase* inBeacon);
	void PostBeginPlay();
};
// Class BmScript.RCommandBeacon
// 0x0014 (0x04A8 - 0x04BC)
class ARCommandBeacon : public ARCommandBeaconBase
{
public:
	class USkeletalMeshComponent*                      damagedMesh;                                   // 0x04A8 (0x0008) [0x0000004000004004] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   WinchableLightMaterial;                        // 0x04B0 (0x0008) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           bRadiusFXActive : 1;                           // 0x04B8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDMVisThroughWalls_Suppressed : 1;             // 0x04B8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDMVisThroughWalls_Old : 1;                    // 0x04B8 (0x0004) [0x0000000000000000] [0x00000004] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RCommandBeacon");
		}

		return uClassPointer;
	};


	void eventSuppressDetectiveModeVisibilityThroughWalls(bool bSuppress);
	void UnregisterDMThroughWallsSuppressable();
	void RegisterDMThroughWallsSuppressable();
	void WinchAborted(int32_t Reason);
	void SetWinchingAllowed(bool bAllowed);
	void SetRadiusVFX(bool bActivate, float optionalInPulseOpacity, float optionalInCustomTimeDilation);
	void SetState(EeCommandBeaconState NewState, bool optionalBSilent);
	void eventTick(float DeltaTime);
	void eventUpdateWinch(float DeltaTime);
	void DetachLights();
	void AttachLights();
	void eventDestroyed();
	void eventPreStreamOut();
	void PostBeginPlay();
};
// Class BmScript.RSeqAct_CallBatmobileToLocation
// 0x0014 (0x0160 - 0x0174)
class URSeqAct_CallBatmobileToLocation : public URSeqAct_VehicleSelfDrive
{
public:
	class ARVehicleBatmobileBase*                      Batmobile;                                     // 0x0160 (0x0008) [0x0000000000000000]               
	class AActor*                                      destActor;                                     // 0x0168 (0x0008) [0x0000000000000000]               
	uint32_t                                           OverrideSkidToStopYaw : 1;                     // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           JustRotate : 1;                                // 0x0170 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           AllowPickUpBatman : 1;                         // 0x0170 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_CallBatmobileToLocation");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void OnArrived();
	void Activated();
};
// Class BmScript.RBatGelDestroyVolume
// 0x0004 (0x02E4 - 0x02E8)
class ARBatGelDestroyVolume : public AVolume
{
public:
	float                                              DestroyTime;                                   // 0x02E4 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBatGelDestroyVolume");
		}

		return uClassPointer;
	};


	void OnToggle(class USeqAct_Toggle* inAction);
};
// Class BmScript.RBmPawnSpawner_ChallengeMode
// 0x0000 (0x02DC - 0x02DC)
class URBmPawnSpawner_ChallengeMode : public URBmPawnSpawner
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RBmPawnSpawner_ChallengeMode");
		}

		return uClassPointer;
	};

};
// Class BmScript.RChallengeWall_Straight
// 0x0020 (0x02B4 - 0x02D4)
class ARChallengeWall_Straight : public ARChallengeWallBase
{
public:
	uint32_t                                           StartActive : 1;                               // 0x02B4 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           NoBlockNPCVehicle : 1;                         // 0x02B4 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	class UStaticMeshComponent*                        WallStaticMesh;                                // 0x02B8 (0x0008) [0x0000004100004004] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URSpecialMoveConfig*                         TurnAroundMove;                                // 0x02C0 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   InGameMaterial;                                // 0x02C8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ImpactNoise;                                   // 0x02D0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RChallengeWall_Straight");
		}

		return uClassPointer;
	};


	void UpdateImpactFX(float DeltaTime);
	void Tick(float DeltaTime);
	void HitByRagdoll(class ARPawn* HitPawn, const struct FVector& HitLocation, const struct FVector& HitNormal, float Speed);
	void eventBump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	void OnToggle(class USeqAct_Toggle* Action);
	void Deactivate();
	void Activate();
	void eventPostBeginPlay();
};
// Class BmScript.RChallengeWall_Straight_Combat
// 0x0000 (0x02D4 - 0x02D4)
class ARChallengeWall_Straight_Combat : public ARChallengeWall_Straight
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RChallengeWall_Straight_Combat");
		}

		return uClassPointer;
	};


	void eventBump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
};
// Class BmScript.RSeqAct_DespawnChallengePawns
// 0x0014 (0x0178 - 0x018C)
class URSeqAct_DespawnChallengePawns : public USeqAct_Latent
{
public:
	class TArray<class APawn*>                         DespawnedPawns;                                // 0x0178 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bPlayedDespawnSFX : 1;                         // 0x0188 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_DespawnChallengePawns");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool Update(float DeltaTime);
	void Activated();
};
// Class BmScript.RSeqAct_InfiniteCombatSpawner
// 0x00D4 (0x01B0 - 0x0284)
class URSeqAct_InfiniteCombatSpawner : public URSeqAct_InfiniteCombatSpawnerBase
{
public:
	class UClass*                                      Enemy_PawnClass;                               // 0x01B0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      Enemy_WeaponClass;                             // 0x01B8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class ARPawn*>                        ActivePawnList;                                // 0x01C0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class ARPawn*>                        DeadPawnList;                                  // 0x01D0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class ARPawn*>                        PreSpawnedPawns;                               // 0x01E0 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class AActor*>                        SpawnPoints;                                   // 0x01F0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            MaxPawns;                                      // 0x0200 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxPawns1;                                     // 0x0204 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxPawns2;                                     // 0x0208 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxPawns3;                                     // 0x020C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxPawns4;                                     // 0x0210 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxPawns5;                                     // 0x0214 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxPawns6;                                     // 0x0218 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxPawns7;                                     // 0x021C (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxPawnsOnScreen;                              // 0x0220 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            MaxPawnsToSpawnEver;                           // 0x0224 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            TotalSpawns;                                   // 0x0228 (0x0004) [0x0000000000000000]               
	float                                              MinSpawnRadius;                                // 0x022C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxSpawnRadius;                                // 0x0230 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bSpawnerActive : 1;                            // 0x0234 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFirstSpawn : 1;                               // 0x0234 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDoChallengeSpawnFX : 1;                       // 0x0234 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bCheckAllCurrentCombatants : 1;                // 0x0234 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	float                                              TimeBetweenRespawn;                            // 0x0238 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<float>                                WaitingSpawns;                                 // 0x023C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class UAnimSet*                                    EntryAnimSet;                                  // 0x024C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             ChallengeParticleEffect;                       // 0x0254 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             ChallengeImpactParticleEffect;                 // 0x025C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ChallengeAkEvent;                              // 0x0264 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UParticleSystem*                             ChallengeDespawnParticleEffect;                // 0x026C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    ChallengeDespawnAkEvent;                       // 0x0274 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FName                                        EntryAnim;                                     // 0x027C (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_InfiniteCombatSpawner");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	bool eventUpdate(float DeltaTime);
	bool CanSpawnMorePawns();
	void UpdateWaitingSpawns(float DeltaTime);
	void AddSpawn();
	int32_t GetPawnCount();
	class AActor* GetSpawnPoint();
	float GetScoreForSpawnPoint(class AActor* TestPoint, class ARPawnPlayerCombat* Batman);
	void SpawnNextPawn();
	void DoSpawnFX(class ARBMPawnAI* NewPawn);
	void Activated();
};
// Class BmScript.RSeqAct_IntegratedChallengeControl
// 0x007C (0x0178 - 0x01F4)
class URSeqAct_IntegratedChallengeControl : public URSeqAct_IntegratedChallengeBase
{
public:
	uint32_t                                           bSatNavWanted : 1;                             // 0x0178 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bArrowWanted : 1;                              // 0x0178 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           bRadarWanted : 1;                              // 0x0178 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bScoreWanted : 1;                              // 0x0178 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bClockWanted : 1;                              // 0x0178 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           bClockWarning : 1;                             // 0x0178 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           bClockCountdown : 1;                           // 0x0178 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           bClockShownOnlyWhenActive : 1;                 // 0x0178 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           bOneHitKills : 1;                              // 0x0178 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           bDisableBatmobile : 1;                         // 0x0178 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           bLockedInBatmobile : 1;                        // 0x0178 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           bBatmobileChallengeStartOnFoot : 1;            // 0x0178 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
	uint32_t                                           bStartInBatmobile : 1;                         // 0x0178 (0x0004) [0x0000000100000000] [0x00001000] (CPF_Edit)
	uint32_t                                           bStartInBattleMode : 1;                        // 0x0178 (0x0004) [0x0000000100000000] [0x00002000] (CPF_Edit)
	uint32_t                                           bManualScoringOnly : 1;                        // 0x0178 (0x0004) [0x0000000100000000] [0x00004000] (CPF_Edit)
	uint32_t                                           bManualGoalsOnly : 1;                          // 0x0178 (0x0004) [0x0000000100000000] [0x00008000] (CPF_Edit)
	uint32_t                                           bCentreCameraOnChallengeStart : 1;             // 0x0178 (0x0004) [0x0000000100000000] [0x00010000] (CPF_Edit)
	uint32_t                                           bPlayerImmuneDuringChallenge : 1;              // 0x0178 (0x0004) [0x0000000100000000] [0x00020000] (CPF_Edit)
	uint32_t                                           bHudStoryStyle : 1;                            // 0x0178 (0x0004) [0x0000000100000000] [0x00040000] (CPF_Edit)
	uint32_t                                           bAddCombatBonusPoints : 1;                     // 0x0178 (0x0004) [0x0000000100000000] [0x00080000] (CPF_Edit)
	uint32_t                                           bAddBatmobileBonusPoints : 1;                  // 0x0178 (0x0004) [0x0000000100000000] [0x00100000] (CPF_Edit)
	uint32_t                                           bSetupBegan : 1;                               // 0x0178 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bSetupFinished : 1;                            // 0x0178 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bSetupCharacter : 1;                           // 0x0178 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bPlayerImmuneTemporarily : 1;                  // 0x0178 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bRunTimer : 1;                                 // 0x0178 (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bPauseTimer : 1;                               // 0x0178 (0x0004) [0x0000000000000000] [0x04000000] 
	uint32_t                                           bCountingDownToStart : 1;                      // 0x0178 (0x0004) [0x0000000000000000] [0x08000000] 
	EChallengeHudVariation                             eHudVariation;                                 // 0x017C (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              HudDetailsVerticalOffset;                      // 0x0180 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TimeDilation;                                  // 0x0184 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              PausedTimeDilation;                            // 0x0188 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FChallengeGoal>                ChallengeGoals;                                // 0x018C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FRivalGoalData                              RivalGoal;                                     // 0x019C (0x0008) [0x0000000100000000] (CPF_Edit)    
	struct FRivalGoalData                              RivalMarker;                                   // 0x01A4 (0x0008) [0x0000000000000000]               
	class AActor*                                      teleportLocation;                              // 0x01AC (0x0008) [0x0000000000000000]               
	class ARGameInfo*                                  RGI;                                           // 0x01B4 (0x0008) [0x0000000000000000]               
	class URChallengeManager*                          CMan;                                          // 0x01BC (0x0008) [0x0000000000000000]               
	float                                              ChallengeTime;                                 // 0x01C4 (0x0004) [0x0000000000000000]               
	float                                              ChallengeTimeLimit;                            // 0x01C8 (0x0004) [0x0000000000000000]               
	float                                              LastSentChallengeTime;                         // 0x01CC (0x0004) [0x0000000000000000]               
	float                                              ChallengeTimeAdjustment;                       // 0x01D0 (0x0004) [0x0000000000000000]               
	int32_t                                            ChallengeScore;                                // 0x01D4 (0x0004) [0x0000000000000000]               
	int32_t                                            LastSentChallengeScore;                        // 0x01D8 (0x0004) [0x0000000000000000]               
	int32_t                                            ChallengeGoalsCompleted;                       // 0x01DC (0x0004) [0x0000000000000000]               
	int32_t                                            LastChallengeGoalsCompleted;                   // 0x01E0 (0x0004) [0x0000000000000000]               
	int32_t                                            ChallengeRivalPoints;                          // 0x01E4 (0x0004) [0x0000000000000000]               
	int32_t                                            LastChallengeRivalPoints;                      // 0x01E8 (0x0004) [0x0000000000000000]               
	float                                              LastHudDetailsVerticalOffset;                  // 0x01EC (0x0004) [0x0000000000000000]               
	int32_t                                            LastLeaderboardCycle;                          // 0x01F0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_IntegratedChallengeControl");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
	void AdjustTime(float fTime, bool bBonus);
	void AdjustScore(int32_t nScore, bool optionalBCheat);
	bool GetState(EIntegratedChallengeState eState);
	void ProcessResults();
	bool Update(float fDeltaTime);
	void SetHudMode();
	void SendChallengeTime();
	void SendChallengeScore();
	void TeleportPlayerToStartPoint();
	void Activated();
	void ResetDefaults();
	void RegisterChallengeActionHandler(class URSeqAct_IntegratedChallengeBase* Handler);
	void ResetGoals();
	void SendChallengeStars(bool bInitialize);
	void CountdownTimerFinished();
	void UpdateCountdownToStartTimer();
	void StartCountdownTimer();
	void PauseResumeTimer();
	void StopTimer();
	void StartTimer();
	int32_t _GoalSortDescending(const struct FChallengeGoal& A, const struct FChallengeGoal& B);
	int32_t _GoalSortAscending(const struct FChallengeGoal& A, const struct FChallengeGoal& B);
};
// Class BmScript.RSeqAct_SetVehicleCombatDifficulty
// 0x0004 (0x0160 - 0x0164)
class URSeqAct_SetVehicleCombatDifficulty : public USequenceAction
{
public:
	int32_t                                            ChapterDifficulty;                             // 0x0160 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_SetVehicleCombatDifficulty");
		}

		return uClassPointer;
	};


	void eventActivated();
};
// Class BmScript.RSeqAct_ShowChallengeCombatSummary
// 0x0004 (0x0160 - 0x0164)
class URSeqAct_ShowChallengeCombatSummary : public USequenceAction
{
public:
	uint32_t                                           bActivated : 1;                                // 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BmScript.RSeqAct_ShowChallengeCombatSummary");
		}

		return uClassPointer;
	};


	void TimerBonusPointDelayExpired();
	void Activated();
};
/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
