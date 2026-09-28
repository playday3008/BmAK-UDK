/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: AkAudio_classes.hpp
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

#define CONST_EEntityType_Ignore                                    0
#define CONST_EEntityType_Numeric                                   1
#define CONST_EEntityType_Volume                                    2
#define CONST_EEntityType_Parameter                                 4
#define CONST_EEntityType_GameVariable                              8
#define CONST_EEntityType_Symbol                                    16
#define CONST_EEntityType_Buss                                      32
#define CONST_EEntityType_Object                                    64
#define CONST_EEntityType_Floats                                    13
#define CONST_EEntityType_SymbolOrFact                              29

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum AkAudio.AkAudioVolume.OverlapSetting
enum class EOverlapSetting : uint8_t
{
	OverlapNotEnabled                                  = 0,
	NormalOverlap                                      = 1,
	InvertedOverlap                                    = 2,
	OverlapSetting_END                                 = 3
};

// Enum AkAudio.AkDialogueTape.EAkDialogueTapeState
enum class EAkDialogueTapeState : uint8_t
{
	AK_TAPE_Initialised                                = 0,
	AK_TAPE_Loading                                    = 1,
	AK_TAPE_Loaded                                     = 2,
	AK_TAPE_DialogueLoading                            = 3,
	AK_TAPE_Speaking                                   = 4,
	AK_TAPE_Finished                                   = 5,
	AK_TAPE_END                                        = 6
};

// Enum AkAudio.AkMultipointEmitter.EMultipointEmitterType
enum class EMultipointEmitterType : uint8_t
{
	MULTIPOINT_ADDITIVE                                = 0,
	MULTIPOINT_POSITIONAL                              = 1,
	MULTIPOINT_SOUNDRAIL                               = 2,
	MULTIPOINT_END                                     = 3
};

// Enum AkAudio.SeqAct_AkComponentSettings.EAkComponentSettingsBool
enum class EAkComponentSettingsBool : uint8_t
{
	AK_SETTING_UNCHANGED                               = 0,
	AK_SETTING_TRUE                                    = 1,
	AK_SETTING_FALSE                                   = 2,
	AK_SETTING_END                                     = 3
};

// Enum AkAudio.SeqAct_AkComponentSettings.EAkComponentSettingsObsOcc
enum class EAkComponentSettingsObsOcc : uint8_t
{
	AK_OBS_OCC_SETTING_UNCHANGED                       = 0,
	AK_OBS_OCC_SETTING_DISABLE                         = 1,
	AK_OBS_OCC_SETTING_ENABLE_BUILTINS_ONLY            = 2,
	AK_OBS_OCC_SETTING_ENABLE_PARAMS_ONLY              = 3,
	AK_OBS_OCC_SETTING_END                             = 4
};

// Enum AkAudio.SeqAct_AkMusicSync.EMusicSyncOutputs
enum class EMusicSyncOutputs : uint8_t
{
	MUSIC_SYNC_STOPPED                                 = 0,
	MUSIC_SYNC_STARTED                                 = 1,
	MUSIC_SYNC_BEAT                                    = 2,
	MUSIC_SYNC_BAR                                     = 3,
	MUSIC_SYNC_CUE                                     = 4,
	MUSIC_SYNC_MARKER                                  = 5,
	MUSIC_SYNC_CANCEL                                  = 6,
	MUSIC_SYNC_TIMEOUT                                 = 7,
	MUSIC_SYNC_END                                     = 8
};

// Enum AkAudio.SeqAct_AkRainIntensity.EAkRainIntensitySetting
enum class EAkRainIntensitySetting : uint8_t
{
	AK_RAIN_INTENSITY_SETTING_NONE                     = 0,
	AK_RAIN_INTENSITY_SETTING_LIGHT                    = 1,
	AK_RAIN_INTENSITY_SETTING_MODERATE                 = 2,
	AK_RAIN_INTENSITY_SETTING_HEAVY                    = 3,
	AK_RAIN_INTENSITY_SETTING_END                      = 4
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class AkAudio.AkAudioSpline
// 0x003C (0x0304 - 0x0340)
class AAkAudioSpline : public ASplineActor
{
public:
	EListenerID                                        SplineAudioFollowListener;                     // 0x0304 (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              SplineAudioSmoothing;                          // 0x0308 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            SplineAudioParameter;                          // 0x030C (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              SplineAudioNodeValue;                          // 0x0314 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           AudioSplineVisited : 1;                        // 0x0318 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	struct FVector                                     AudioSplineSoundPosition;                      // 0x031C (0x000C) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     AudioSplineSmoothingBuffer;                    // 0x0328 (0x000C) [0x0000000000000400] (CPF_Transient)
	struct FDouble                                     AudioSplineLastUpdateTime;                     // 0x0334 (0x0008) [0x0000000000000400] (CPF_Transient)
	float                                              AudioSplineNodeValueBuffer;                    // 0x033C (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAudioSpline");
		}

		return uClassPointer;
	};


	void GetAudioSpatial(class UObject* optionalCaller, struct FVector& outSndPosition, struct FRotator& outSndOrientation);
};
// Class AkAudio.AkAudioSystem
// 0x0000 (0x005C - 0x005C)
class UAkAudioSystem : public USubsystem
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAudioSystem");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkAudioVolume
// 0x00DC (0x02E4 - 0x03C0)
class AAkAudioVolume : public AVolume
{
public:
	struct FPointer                                    VfTable_AkUpdate;                              // 0x02E4 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_AkEvaluate;                            // 0x02EC (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	class UAkProperties*                               AkProps;                                       // 0x02F4 (0x0008) [0x0000004100010005] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UAkDrawBoundsComponent*                      DrawBoundsComponent;                           // 0x02FC (0x0008) [0x0000004000004405] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class FString                                      DebugTag;                                      // 0x0304 (0x0010) [0x0000100100010001] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_NotForConsole)
	class TArray<struct FAkEnvironmentSettings>        EnvironmentSettings;                           // 0x0314 (0x0010) [0x0000000100010001] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bForceUpdateTouching : 1;                      // 0x0324 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bSurveillanceOccluder : 1;                     // 0x0324 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	float                                              OcclusionMultiplier;                           // 0x0328 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	struct FAkAxisParameter                            ParameterX;                                    // 0x032C (0x0010) [0x0000000100000001] (CPF_Edit | CPF_Const)
	struct FAkAxisParameter                            ParameterY;                                    // 0x033C (0x0010) [0x0000000100000001] (CPF_Edit | CPF_Const)
	struct FAkAxisParameter                            ParameterZ;                                    // 0x034C (0x0010) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class TArray<struct FParameterModifierPair>        ParameterModifiers;                            // 0x035C (0x0010) [0x0000000100010001] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FSwitchModifierPair>           SwitchModifiers;                               // 0x036C (0x0010) [0x0000000100010001] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	float                                              FalloffRadiusMultiplier;                       // 0x037C (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class TArray<struct FTouchingActorInfo>            ForceTouching;                                 // 0x0380 (0x0010) [0x0000000000010401] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FDouble                                     ForceTouchingUpdateTime;                       // 0x0390 (0x0008) [0x0000000000000401] (CPF_Const | CPF_Transient)
	int32_t                                            TouchingCount;                                 // 0x0398 (0x0004) [0x0000000000000400] (CPF_Transient)
	class TArray<struct FOverlappingVolumeInfo>        OverlappingVolumes;                            // 0x039C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class AAkRattleEmitter*>              LinkedEmitters;                                // 0x03AC (0x0010) [0x0000000500010000] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	float                                              LastKnownOverlapTouchingValue;                 // 0x03BC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAudioVolume");
		}

		return uClassPointer;
	};


	bool HandleUnlink(class AActor* Target);
	bool HandleLink(class AActor* Target);
	void RefreshTouching();
	void HandleTouchInOut(class AActor* Other, bool otherIsTouching);
	void GetAudioSpatial(class UObject* optionalCaller, struct FVector& outSndPosition, struct FRotator& outSndOrientation);
	bool UnlinkToActor(class AActor* LinkTarget);
	bool eventLinkToActor(class AActor* LinkTarget);
	void eventOverrideDefaultAkAudibleSetup(class URAkAudible* akAud);
	void eventUnTouch(class AActor* Other);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};
// Class AkAudio.AkDialogueTape
// 0x00A8 (0x005C - 0x0104)
class UAkDialogueTape : public UAkHash
{
public:
	class UAkDialogueConversation*                     Conversation;                                  // 0x005C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    Event;                                         // 0x0064 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            ConversationId;                                // 0x006C (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FAkSoundHandle                              EventHandle;                                   // 0x0070 (0x0010) [0x0000000000000400] (CPF_Transient)
	struct FAkSpeechOptions                            SpeechOpts;                                    // 0x0080 (0x0074) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	EAkDialogueTapeState                               TapeState;                                     // 0x00F4 (0x0001) [0x0000000000000400] (CPF_Transient)
	struct FQWord                                      WwiseSourceId;                                 // 0x00F8 (0x0008) [0x0000000000000400] (CPF_Transient)
	float                                              DuckLevel;                                     // 0x0100 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkDialogueTape");
		}

		return uClassPointer;
	};


	static void Stop(class UAkDialogueTape* dlgTape);
	static int32_t Start(class UAkDialogueTape* dlgTape, const struct FAkSpeechOptions& dlgCallbacks);
};
// Class AkAudio.AkEmitter
// 0x003C (0x02AC - 0x02E8)
class AAkEmitter : public AAkSoundActor
{
public:
	class TArray<class UAkEvent*>                      EmitterEvents;                                 // 0x02AC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bEmitterStartEnabled : 1;                      // 0x02BC (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bEmitterEnabled : 1;                           // 0x02BC (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)
	class TArray<struct FAkEnvironmentSettings>        EnvironmentSettings;                           // 0x02C0 (0x0010) [0x0000000100010001] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class USpriteComponent*                            Sprite;                                        // 0x02D0 (0x0008) [0x0000084000004405] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline | CPF_EditorOnly)
	class UAkDrawSoundRadiusComponent*                 DrawSoundRadius;                               // 0x02D8 (0x0008) [0x0000084000004404] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline | CPF_EditorOnly)
	class UAkFactName*                                 ReplacementFactForHACK;                        // 0x02E0 (0x0008) [0x0000080000000000] (CPF_EditorOnly)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkEmitter");
		}

		return uClassPointer;
	};


	void ApplyEmitterSpatial();
	void DisableEmitter();
	void EnableEmitter();
	void OnToggleHidden(class USeqAct_ToggleHidden* Action);
	void OnToggle(class USeqAct_Toggle* ToggleAction);
};
// Class AkAudio.AkLightEmitter
// 0x003C (0x02E8 - 0x0324)
class AAkLightEmitter : public AAkEmitter
{
public:
	struct FPointer                                    VfTable_AkUpdate;                              // 0x02E8 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	class ALight*                                      MonitorLight;                                  // 0x02F0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    LightLoopingEvent;                             // 0x02F8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    TurnOnEvent;                                   // 0x0300 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    TurnOffEvent;                                  // 0x0308 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            LightBrightness;                               // 0x0310 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ValueToTurnOn;                                 // 0x0318 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              dbgLastBrightnessValue;                        // 0x031C (0x0004) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           LightOn : 1;                                   // 0x0320 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkLightEmitter");
		}

		return uClassPointer;
	};


	bool HandleUnlink(class AActor* Target);
	bool HandleLink(class AActor* Target);
	bool eventUnlinkToActor(class AActor* LinkTarget);
	bool eventLinkToActor(class AActor* LinkTarget);
};
// Class AkAudio.AkMultipointEmitter
// 0x0074 (0x02E8 - 0x035C)
class AAkMultipointEmitter : public AAkEmitter
{
public:
	struct FPointer                                    VfTable_AkUpdate;                              // 0x02E8 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	EMultipointEmitterType                             MultipointType;                                // 0x02F0 (0x0001) [0x0000000100000001] (CPF_Edit | CPF_Const)
	EListenerID                                        MultipointFollowListener;                      // 0x02F1 (0x0001) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UAkParameterName*                            MultipointParameter;                           // 0x02F4 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UAkParameterName*                            MultipointProximityParameter;                  // 0x02FC (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UAkParameterName*                            MultipointProximityParameterHorizontal;        // 0x0304 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UAkParameterName*                            MultipointProximityParameterVertical;          // 0x030C (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class UAkMultipointEmitterLineComponent*           LineComponent;                                 // 0x0314 (0x0008) [0x0000004000004405] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	uint32_t                                           MultipointParameterIsGlobal : 1;               // 0x031C (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           MultipointUsesRedGreen : 1;                    // 0x031C (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           MultipointProximityParameterIsGlobal : 1;      // 0x031C (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           MultipointProximityParameterHorizontalIsGlobal : 1;// 0x031C (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           MultipointProximityParameterVerticalIsGlobal : 1;// 0x031C (0x0004) [0x0000000100000001] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           EmitterLinkVisited : 1;                        // 0x031C (0x0004) [0x0000000000000401] [0x00000020] (CPF_Const | CPF_Transient)
	float                                              MultipointNodeValue;                           // 0x0320 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	float                                              MultipointNodeProximityRadiusMin;              // 0x0324 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	float                                              MultipointNodeProximityRadiusMax;              // 0x0328 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	float                                              MultipointNodeProximityRadiusMaxRed;           // 0x032C (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
	class TArray<class AAkMultipointEmitter*>          EmitterLinks;                                  // 0x0330 (0x0010) [0x0000000500010001] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
	struct FVector                                     MultipointEmitterSourcePosition;               // 0x0340 (0x000C) [0x0000000000000401] (CPF_Const | CPF_Transient)
	class TArray<struct FAPME>                         APMEs;                                         // 0x034C (0x0010) [0x0000000000010401] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkMultipointEmitter");
		}

		return uClassPointer;
	};


	void HandleUnlinkAll();
	bool HandleUnlink(class AActor* Target);
	bool HandleLink(class AActor* Target);
	void ApplyEmitterSpatial();
	void DisableEmitter();
	void EnableEmitter();
	void GetAudioSpatial(class UObject* optionalCaller, struct FVector& outSndPosition, struct FRotator& outSndOrientation);
	class URAkAudible* GetAkAudible(bool optionalAllowCreate);
	void AudibleUpdateSourceCallback(class URAkAudible* akAud, bool hasSource);
	bool eventUnlinkToActor(class AActor* LinkTarget);
	bool eventLinkToActor(class AActor* LinkTarget);
};
// Class AkAudio.AkRattleEmitter
// 0x0020 (0x02E8 - 0x0308)
class AAkRattleEmitter : public AAkEmitter
{
public:
	struct FPointer                                    VfTable_AkUpdate;                              // 0x02E8 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	class AAkAudioVolume*                              LinkedVolume;                                  // 0x02F0 (0x0008) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	uint32_t                                           UpdateX : 1;                                   // 0x02F8 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           UpdateY : 1;                                   // 0x02F8 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           UpdateZ : 1;                                   // 0x02F8 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           UseFastBoundingBox : 1;                        // 0x02F8 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	struct FVector                                     VolumePosition;                                // 0x02FC (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkRattleEmitter");
		}

		return uClassPointer;
	};


	bool HandleUnlink(class AActor* Target);
	bool HandleLink(class AActor* Target);
	void ApplyEmitterSpatial();
	void GetAudioSpatial(class UObject* optionalCaller, struct FVector& outSndPosition, struct FRotator& outSndOrientation);
	bool eventUnlinkToActor(class AActor* LinkTarget);
	bool eventLinkToActor(class AActor* LinkTarget);
};
// Class AkAudio.AkManagedEmitter
// 0x0028 (0x029C - 0x02C4)
class AAkManagedEmitter : public AActor
{
public:
	class TArray<struct FAkManagedEmitterItem>         EmitterEvents;                                 // 0x029C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bEmitterStartEnabled : 1;                      // 0x02AC (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bPositional : 1;                               // 0x02AC (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bSetDistanceParam : 1;                         // 0x02AC (0x0004) [0x0000000100000001] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bSetAngleParam : 1;                            // 0x02AC (0x0004) [0x0000000100000001] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bSetCountParam : 1;                            // 0x02AC (0x0004) [0x0000000100000001] [0x00000010] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    PlayingEvent;                                  // 0x02B0 (0x0008) [0x0000000000000400] (CPF_Transient)
	class USpriteComponent*                            Sprite;                                        // 0x02B8 (0x0008) [0x0000084000004405] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline | CPF_EditorOnly)
	int32_t                                            PointId;                                       // 0x02C0 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkManagedEmitter");
		}

		return uClassPointer;
	};


	void DisableEmitter();
	void EnableEmitter();
	void OnToggleHidden(class USeqAct_ToggleHidden* Action);
	void OnToggle(class USeqAct_Toggle* ToggleAction);
};
// Class AkAudio.AkMultipointEmitterLineComponent
// 0x0008 (0x021C - 0x0224)
class UAkMultipointEmitterLineComponent : public UPrimitiveComponent
{
public:
	struct FColor                                      LineColor;                                     // 0x021C (0x0004) [0x0000000100000000] (CPF_Edit)    
	struct FColor                                      CircleColor;                                   // 0x0220 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkMultipointEmitterLineComponent");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkProximityTracker
// 0x0038 (0x029C - 0x02D4)
class AAkProximityTracker : public AActor
{
public:
	struct FPointer                                    VfTable_AkEvaluate;                            // 0x029C (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	EListenerID                                        ProximityFollowListener;                       // 0x02A4 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EListenerID                                        AngleFollowListener;                           // 0x02A5 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            ProximityParameter;                            // 0x02A8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            AngleFromListenerParameter;                    // 0x02B0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkDrawSoundRadiusComponent*                 DrawSoundRadius;                               // 0x02B8 (0x0008) [0x0000084000004404] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline | CPF_EditorOnly)
	uint32_t                                           ProximityTrackerEnabled : 1;                   // 0x02C0 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              OneRadius;                                     // 0x02C4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ZeroRadius;                                    // 0x02C8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              LastActivationValue;                           // 0x02CC (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              LastDistanceToListenerSqr;                     // 0x02D0 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkProximityTracker");
		}

		return uClassPointer;
	};


	void OnToggle(class USeqAct_Toggle* ToggleAction);
};
// Class AkAudio.AkRandomVolume
// 0x003C (0x02E4 - 0x0320)
class AAkRandomVolume : public AVolume
{
public:
	class FString                                      DebugTag;                                      // 0x02E4 (0x0010) [0x0000100100010001] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_NotForConsole)
	class TArray<class UAkEvent*>                      EventsToRandomlyPlay;                          // 0x02F4 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MinTimeBetweenEvents;                          // 0x0304 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MaxTimeBetweenEvents;                          // 0x0308 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           UpdateX : 1;                                   // 0x030C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           UpdateY : 1;                                   // 0x030C (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           UpdateZ : 1;                                   // 0x030C (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           bRandomVolumeStartEnabled : 1;                 // 0x030C (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           bRandomVolumeEnabled : 1;                      // 0x030C (0x0004) [0x0000000000000400] [0x00000010] (CPF_Transient)
	float                                              mFireNextEvent;                                // 0x0310 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FVector                                     mLastLocation;                                 // 0x0314 (0x000C) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkRandomVolume");
		}

		return uClassPointer;
	};


	void DisableRandomVolume();
	void EnableRandomVolume();
	void OnToggle(class USeqAct_Toggle* ToggleAction);
};
// Class AkAudio.AkSDNode
// 0x0098 (0x005C - 0x00F4)
class UAkSDNode : public UAkHash
{
public:
	class TArray<struct FVariables>                    VariableNodes;                                 // 0x005C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            NodeUpdateHint;                                // 0x006C (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
	class TArray<class UAkSDNode*>                     ChildNodes;                                    // 0x0070 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           HasOutputPin : 1;                              // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           HasInputPin : 1;                               // 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           HasVariablePin : 1;                            // 0x0080 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           HasFixedVariables : 1;                         // 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           HideFromMenu : 1;                              // 0x0080 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           IgnoreThisComment : 1;                         // 0x0080 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	class FString                                      EditorDescription;                             // 0x0084 (0x0010) [0x0000080000010000] (CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      ShortDescription;                              // 0x0094 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      OutputPinName;                                 // 0x00A4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class FString                                      InputPinName;                                  // 0x00B4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            NodeFlag;                                      // 0x00C4 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FDouble                                     dbgTimer;                                      // 0x00C8 (0x0008) [0x0000000000000400] (CPF_Transient)
	int32_t                                            dbgCycleTimer;                                 // 0x00D0 (0x0004) [0x0000000000000400] (CPF_Transient)
	class FString                                      dbgCalculated;                                 // 0x00D4 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      Comment;                                       // 0x00E4 (0x0010) [0x0000080100010000] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDNode");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntity
// 0x0008 (0x00F4 - 0x00FC)
class UAkSDEntity : public UAkSDNode
{
public:
	uint32_t                                           ValidName : 1;                                 // 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Type;                                          // 0x00F8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntity");
		}

		return uClassPointer;
	};


	class FString GetVariableName();
};
// Class AkAudio.AkSDEntitySymbol
// 0x0010 (0x00FC - 0x010C)
class UAkSDEntitySymbol : public UAkSDEntity
{
public:
	class FString                                      Variable;                                      // 0x00FC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntitySymbol");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityAggLocation
// 0x0000 (0x010C - 0x010C)
class UAkSDEntityAggLocation : public UAkSDEntitySymbol
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityAggLocation");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityChallengeID
// 0x0000 (0x010C - 0x010C)
class UAkSDEntityChallengeID : public UAkSDEntitySymbol
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityChallengeID");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityGameState
// 0x0000 (0x010C - 0x010C)
class UAkSDEntityGameState : public UAkSDEntitySymbol
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityGameState");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityLevel
// 0x0000 (0x010C - 0x010C)
class UAkSDEntityLevel : public UAkSDEntitySymbol
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityLevel");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityMusicState
// 0x0010 (0x010C - 0x011C)
class UAkSDEntityMusicState : public UAkSDEntitySymbol
{
public:
	class FString                                      StateToReturn;                                 // 0x010C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityMusicState");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntitySideStory
// 0x0000 (0x010C - 0x010C)
class UAkSDEntitySideStory : public UAkSDEntitySymbol
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntitySideStory");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityValue
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityValue : public UAkSDEntity
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityValue");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityAkParameter
// 0x0008 (0x00FC - 0x0104)
class UAkSDEntityAkParameter : public UAkSDEntityValue
{
public:
	class UAkParameterName*                            UseParameter;                                  // 0x00FC (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityAkParameter");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityChapter
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityChapter : public UAkSDEntityValue
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityChapter");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityConst
// 0x0004 (0x00FC - 0x0100)
class UAkSDEntityConst : public UAkSDEntityValue
{
public:
	float                                              Value;                                         // 0x00FC (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityConst");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityCountPawnsInVolume
// 0x0018 (0x00FC - 0x0114)
class UAkSDEntityCountPawnsInVolume : public UAkSDEntityValue
{
public:
	class AVolume*                                     Volume;                                        // 0x00FC (0x0008) [0x0000000000000400] (CPF_Transient)
	class FString                                      VolumeName;                                    // 0x0104 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityCountPawnsInVolume");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityCountEnemyPawnsInVolume
// 0x0000 (0x0114 - 0x0114)
class UAkSDEntityCountEnemyPawnsInVolume : public UAkSDEntityCountPawnsInVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityCountEnemyPawnsInVolume");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityCountFriendlyPawnsInVolume
// 0x0000 (0x0114 - 0x0114)
class UAkSDEntityCountFriendlyPawnsInVolume : public UAkSDEntityCountPawnsInVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityCountFriendlyPawnsInVolume");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFact
// 0x0014 (0x00FC - 0x0110)
class UAkSDEntityFact : public UAkSDEntityValue
{
public:
	class FString                                      FactToCheck;                                   // 0x00FC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           ResetFactIfTrue : 1;                           // 0x010C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFact");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFalse
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityFalse : public UAkSDEntityValue
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFalse");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityGlobalFlag
// 0x0010 (0x00FC - 0x010C)
class UAkSDEntityGlobalFlag : public UAkSDEntityValue
{
public:
	class FString                                      GlobalFlagName;                                // 0x00FC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityGlobalFlag");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityGlobalFlagFromKismet
// 0x0010 (0x00FC - 0x010C)
class UAkSDEntityGlobalFlagFromKismet : public UAkSDEntityValue
{
public:
	class FString                                      VariableName;                                  // 0x00FC (0x0010) [0x0000000500010000] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityGlobalFlagFromKismet");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityMeter
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityMeter : public UAkSDEntityValue
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityMeter");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityMusicCombatRandom
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityMusicCombatRandom : public UAkSDEntityValue
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityMusicCombatRandom");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityMusicPlaying
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityMusicPlaying : public UAkSDEntityValue
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityMusicPlaying");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPawns
// 0x0010 (0x00FC - 0x010C)
class UAkSDEntityPawns : public UAkSDEntityValue
{
public:
	class TArray<class APawn*>                         PawnList;                                      // 0x00FC (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPawns");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPawnsEnemy
// 0x0000 (0x010C - 0x010C)
class UAkSDEntityPawnsEnemy : public UAkSDEntityPawns
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPawnsEnemy");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPawnsEnemyFiring
// 0x0000 (0x010C - 0x010C)
class UAkSDEntityPawnsEnemyFiring : public UAkSDEntityPawnsEnemy
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPawnsEnemyFiring");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPawnsEnemySpottedPlayer
// 0x0000 (0x010C - 0x010C)
class UAkSDEntityPawnsEnemySpottedPlayer : public UAkSDEntityPawnsEnemy
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPawnsEnemySpottedPlayer");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPlayerBase
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityPlayerBase : public UAkSDEntityValue
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPlayerBase");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPlayerDetectiveMode
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityPlayerDetectiveMode : public UAkSDEntityPlayerBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPlayerDetectiveMode");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPlayerHealth
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityPlayerHealth : public UAkSDEntityPlayerBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPlayerHealth");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPlayersAverageHealth
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityPlayersAverageHealth : public UAkSDEntityPlayerBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPlayersAverageHealth");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPlayerVehicleSpeed
// 0x0004 (0x00FC - 0x0100)
class UAkSDEntityPlayerVehicleSpeed : public UAkSDEntityPlayerBase
{
public:
	float                                              Speed;                                         // 0x00FC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPlayerVehicleSpeed");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPlayerInCurrentBaseMap
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityPlayerInCurrentBaseMap : public UAkSDEntityValue
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPlayerInCurrentBaseMap");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityPlayerInPredatorVolume
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityPlayerInPredatorVolume : public UAkSDEntityValue
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityPlayerInPredatorVolume");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityTimeDilation
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityTimeDilation : public UAkSDEntityValue
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityTimeDilation");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityTrue
// 0x0000 (0x00FC - 0x00FC)
class UAkSDEntityTrue : public UAkSDEntityValue
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityTrue");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDRelationship
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationship : public UAkSDNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationship");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipAlways
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipAlways : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipAlways");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipEqual
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipEqual : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipEqual");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipEvery
// 0x0008 (0x00F4 - 0x00FC)
class UAkSDRelationshipEvery : public UAkSDRelationship
{
public:
	uint32_t                                           bInitialized : 1;                              // 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TriggerTime;                                   // 0x00F8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipEvery");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipGreaterThan
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipGreaterThan : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipGreaterThan");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipGreaterThanEqual
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipGreaterThanEqual : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipGreaterThanEqual");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipHasChanged
// 0x0004 (0x00F4 - 0x00F8)
class UAkSDRelationshipHasChanged : public UAkSDRelationship
{
public:
	float                                              OldValue;                                      // 0x00F4 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipHasChanged");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipIn
// 0x000C (0x00F4 - 0x0100)
class UAkSDRelationshipIn : public UAkSDRelationship
{
public:
	float                                              InSeconds;                                     // 0x00F4 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x00F8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bInitialized : 1;                              // 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipIn");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipIsFalse
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipIsFalse : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipIsFalse");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipIsTrue
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipIsTrue : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipIsTrue");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipLessThan
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipLessThan : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipLessThan");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipLessThanEqual
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipLessThanEqual : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipLessThanEqual");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipNotEqual
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipNotEqual : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipNotEqual");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipOnce
// 0x0004 (0x00F4 - 0x00F8)
class UAkSDRelationshipOnce : public UAkSDRelationship
{
public:
	uint32_t                                           bFired : 1;                                    // 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipOnce");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipSymbolEqual
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipSymbolEqual : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipSymbolEqual");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipSymbolNotEqual
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipSymbolNotEqual : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipSymbolNotEqual");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDRelationshipSymbolValid
// 0x0000 (0x00F4 - 0x00F4)
class UAkSDRelationshipSymbolValid : public UAkSDRelationship
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipSymbolValid");
		}

		return uClassPointer;
	};


	float Evaluate();
};
// Class AkAudio.AkSDTrigger
// 0x0014 (0x00F4 - 0x0108)
class UAkSDTrigger : public UAkSDNode
{
public:
	struct FPointer                                    VfTable_AkEvaluate;                            // 0x00F4 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	class UAkProperties*                               Props;                                         // 0x00FC (0x0008) [0x0000004100010004] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              cachedEvaluation;                              // 0x0104 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDTrigger");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDNodeDrawInfo
// 0x0000 (0x0054 - 0x0054)
class UAkSDNodeDrawInfo : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDNodeDrawInfo");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDRelationshipDiagram
// 0x007C (0x0054 - 0x00D0)
class UAkSDRelationshipDiagram : public UObject
{
public:
	class TArray<class UAkSDTrigger*>                  StartNodes;                                    // 0x0054 (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            UnknownData00[0x48];                            // 0x0064 (0x0048) MISSED OFFSET
	class TArray<class UAkParameterName*>              ReferencedParameters;                          // 0x00AC (0x0010) [0x0000000000010001] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      DiagramFilterName;                             // 0x00BC (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           AutoRemoveIfPlayerDies : 1;                    // 0x00CC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDRelationshipDiagram");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkWhoosh
// 0x0024 (0x029C - 0x02C0)
class AAkWhoosh : public AAkActor
{
public:
	class TArray<struct FWhooshBy>                     WhooshList;                                    // 0x029C (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class AAkWhooshAnchor*                             AnchorPoint;                                   // 0x02AC (0x0008) [0x0000000000000000]               
	class USpriteComponent*                            Sprite;                                        // 0x02B4 (0x0008) [0x0000084000004405] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline | CPF_EditorOnly)
	uint32_t                                           bEnabled : 1;                                  // 0x02BC (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkWhoosh");
		}

		return uClassPointer;
	};


	void DisableWhoosh();
	void EnableWhoosh();
	void OnToggle(class USeqAct_Toggle* ToggleAction);
};
// Class AkAudio.AkWhooshAnchor
// 0x0008 (0x029C - 0x02A4)
class AAkWhooshAnchor : public AActor
{
public:
	class USpriteComponent*                            Sprite;                                        // 0x029C (0x0008) [0x0000084000004405] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline | CPF_EditorOnly)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkWhooshAnchor");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkWhooshVolume
// 0x0010 (0x02E4 - 0x02F4)
class AAkWhooshVolume : public AVolume
{
public:
	class TArray<struct FWhooshBy>                     WhooshList;                                    // 0x02E4 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkWhooshVolume");
		}

		return uClassPointer;
	};


	void eventUnTouch(class AActor* Other);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void HandleTouchInOut(class AActor* Other, bool otherIsTouching);
};
// Class AkAudio.InterpTrackAkEditorOnlyWav
// 0x0058 (0x00B4 - 0x010C)
class UInterpTrackAkEditorOnlyWav : public UInterpTrack
{
public:
	class TArray<struct FAkEditorOnlyWavKey>           Wavs;                                          // 0x00B4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            UnknownData00[0x48];                            // 0x00C4 (0x0048) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkEditorOnlyWav");
		}

		return uClassPointer;
	};

};
// Class AkAudio.InterpTrackAkEvent
// 0x001C (0x00B4 - 0x00D0)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	class TArray<struct FAkEventTrackKey>              AkEvents;                                      // 0x00B4 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           FireEventsWhenForwards : 1;                    // 0x00C4 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           FireEventsWhenBackwards : 1;                   // 0x00C4 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           StopSoundOnMatineeEnd : 1;                     // 0x00C4 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           AudioShouldStopOnSkip : 1;                     // 0x00C4 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           DoNotPlayIfGroupActorIsNone : 1;               // 0x00C4 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	class FName                                        OptionalBoneToFollow;                          // 0x00C8 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		}

		return uClassPointer;
	};

};
// Class AkAudio.InterpTrackAkAutoEvent
// 0x0010 (0x00D0 - 0x00E0)
class UInterpTrackAkAutoEvent : public UInterpTrackAkEvent
{
public:
	class FString                                      BaseNameForAutoGeneration;                     // 0x00D0 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkAutoEvent");
		}

		return uClassPointer;
	};

};
// Class AkAudio.InterpTrackSoundMasterSync
// 0x0004 (0x00D0 - 0x00D4)
class UInterpTrackSoundMasterSync : public UInterpTrackAkEvent
{
public:
	uint32_t                                           AudioShouldStopOnEnd : 1;                      // 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           SeekOnJump : 1;                                // 0x00D0 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackSoundMasterSync");
		}

		return uClassPointer;
	};

};
// Class AkAudio.InterpTrackAkParameter
// 0x000C (0x0100 - 0x010C)
class UInterpTrackAkParameter : public UInterpTrackFloatBase
{
public:
	class UAkParameterName*                            Parameter;                                     // 0x0100 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           IsGlobalParameter : 1;                         // 0x0108 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkParameter");
		}

		return uClassPointer;
	};

};
// Class AkAudio.InterpTrackInstAkEditorOnlyWav
// 0x0014 (0x0054 - 0x0068)
class UInterpTrackInstAkEditorOnlyWav : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                            // 0x0054 (0x0004) [0x0000000000000400] (CPF_Transient)
	class TArray<struct FAkWavData>                    Playing;                                       // 0x0058 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkEditorOnlyWav");
		}

		return uClassPointer;
	};

};
// Class AkAudio.InterpTrackInstAkEvent
// 0x0020 (0x0054 - 0x0074)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                            // 0x0054 (0x0004) [0x0000000000000000]               
	class TArray<struct FAkSoundHandle>                PlayingHandles;                                // 0x0058 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           BanksLoaded : 1;                               // 0x0068 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	class URAkAudible*                                 TrackAudible;                                  // 0x006C (0x0008) [0x0000004000010404] (CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		}

		return uClassPointer;
	};

};
// Class AkAudio.InterpTrackInstSoundMasterSync
// 0x0010 (0x0074 - 0x0084)
class UInterpTrackInstSoundMasterSync : public UInterpTrackInstAkEvent
{
public:
	float                                              LastUpdateTime;                                // 0x0074 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              StalledTime;                                   // 0x0078 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            PendingCallbacks;                              // 0x007C (0x0004) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           bHasFinishPlaying : 1;                         // 0x0080 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)
	uint32_t                                           DisabledBecauseOfTimeout : 1;                  // 0x0080 (0x0004) [0x0000000000000400] [0x00000002] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstSoundMasterSync");
		}

		return uClassPointer;
	};

};
// Class AkAudio.InterpTrackInstAkParameter
// 0x0000 (0x0054 - 0x0054)
class UInterpTrackInstAkParameter : public UInterpTrackInst
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkParameter");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkAudioEvent
// 0x000C (0x0160 - 0x016C)
class USeqAct_AkAudioEvent : public USequenceAction
{
public:
	class UAkEvent*                                    AudioEvent;                                    // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            PendingCallbacks;                              // 0x0168 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkAudioEvent");
		}

		return uClassPointer;
	};


	void SoundCallback(int32_t CallbackFlags, const struct FAkSoundHandle& SoundHandle, int32_t MarkerID, float Duration);
};
// Class AkAudio.SeqAct_AkAudioEventLoop
// 0x000C (0x0160 - 0x016C)
class USeqAct_AkAudioEventLoop : public USequenceAction
{
public:
	class UAkEvent*                                    AudioEvent;                                    // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bPlaying : 1;                                  // 0x0168 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkAudioEventLoop");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkAudioParameter
// 0x002C (0x0160 - 0x018C)
class USeqAct_AkAudioParameter : public USequenceAction
{
public:
	class UAkParameterName*                            AudioParameter;                                // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              ToValue;                                       // 0x0168 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              InterpolationTime;                             // 0x016C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class TArray<struct FSeqAct_AkAudioParameterInterpolationInfo> InterpolationInfo;                             // 0x0170 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	float                                              CurrentInterpolationTime;                      // 0x0180 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FDouble                                     InterpolationStartTime;                        // 0x0184 (0x0008) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkAudioParameter");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkAudioParameterReset
// 0x0008 (0x0160 - 0x0168)
class USeqAct_AkAudioParameterReset : public USequenceAction
{
public:
	class UAkParameterName*                            AudioParameter;                                // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkAudioParameterReset");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkAudioReset
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkAudioReset : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkAudioReset");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkAudioSwitch
// 0x0008 (0x0160 - 0x0168)
class USeqAct_AkAudioSwitch : public USequenceAction
{
public:
	class UAkSwitchName*                               SwitchName;                                    // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkAudioSwitch");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkBankLoader
// 0x000C (0x0160 - 0x016C)
class USeqAct_AkBankLoader : public USequenceAction
{
public:
	class UAkBank*                                     SoundBank;                                     // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           IsBankLoaded : 1;                              // 0x0168 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkBankLoader");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkBase
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkBase : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkBase");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkBaseSimple
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkBaseSimple : public USeqAct_AkBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkBaseSimple");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkAnimOnlyDialogue
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkAnimOnlyDialogue : public USeqAct_AkBaseSimple
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkAnimOnlyDialogue");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkAudioState
// 0x0008 (0x0160 - 0x0168)
class USeqAct_AkAudioState : public USeqAct_AkBaseSimple
{
public:
	class UAkStateName*                                StateName;                                     // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkAudioState");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkAudioStateReset
// 0x0008 (0x0160 - 0x0168)
class USeqAct_AkAudioStateReset : public USeqAct_AkBaseSimple
{
public:
	class UAkStateGroupName*                           StateGroup;                                    // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkAudioStateReset");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkDialogueGetSpeechDuration
// 0x0018 (0x0160 - 0x0178)
class USeqAct_AkDialogueGetSpeechDuration : public USeqAct_AkBaseSimple
{
public:
	class UAkDialogueSpeech*                           Speech;                                        // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              LowerBound;                                    // 0x0168 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              UpperBound;                                    // 0x016C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              MinDuration;                                   // 0x0170 (0x0004) [0x0000000000000400] (CPF_Transient)
	float                                              MaxDuration;                                   // 0x0174 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueGetSpeechDuration");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkDialogueIsSpeaking
// 0x0014 (0x0160 - 0x0174)
class USeqAct_AkDialogueIsSpeaking : public USeqAct_AkBaseSimple
{
public:
	class AActor*                                      OptionalSpeaker;                               // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkDialogueType*                             OptionalType;                                  // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bSpeakingRightNow : 1;                         // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bSpeakingWithPlayer : 1;                       // 0x0170 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueIsSpeaking");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkDialogueLockType
// 0x0018 (0x0160 - 0x0178)
class USeqAct_AkDialogueLockType : public USeqAct_AkBaseSimple
{
public:
	class TArray<class UAkDialogueType*>               DialogueTypes;                                 // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bFullyUnlock : 1;                              // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bInterruptExisting : 1;                        // 0x0170 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	int32_t                                            LockCount;                                     // 0x0174 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueLockType");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkDialogueLockVoice
// 0x0018 (0x0160 - 0x0178)
class USeqAct_AkDialogueLockVoice : public USeqAct_AkBaseSimple
{
public:
	class TArray<class UAkDialogueVoice*>              Voices;                                        // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bFullyUnlock : 1;                              // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bInterruptExisting : 1;                        // 0x0170 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	int32_t                                            LockCount;                                     // 0x0174 (0x0004) [0x0000000000000400] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueLockVoice");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkDialoguePlayTape
// 0x0024 (0x0160 - 0x0184)
class USeqAct_AkDialoguePlayTape : public USeqAct_AkBaseSimple
{
public:
	class UAkDialogueTape*                             Tape;                                          // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class AActor*                                      Proxy;                                         // 0x0168 (0x0008) [0x0000000000000000]               
	class TArray<class AActor*>                        Speakers;                                      // 0x0170 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           Playing : 1;                                   // 0x0180 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialoguePlayTape");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkDialogueResetDucking
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkDialogueResetDucking : public USeqAct_AkBaseSimple
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueResetDucking");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkDialogueResetSpeechLimit
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkDialogueResetSpeechLimit : public USeqAct_AkBaseSimple
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueResetSpeechLimit");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkDialogueResetTypePriority
// 0x0008 (0x0160 - 0x0168)
class USeqAct_AkDialogueResetTypePriority : public USeqAct_AkBaseSimple
{
public:
	class UAkDialogueType*                             DialogueType;                                  // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueResetTypePriority");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkDialogueSetDucking
// 0x0018 (0x0160 - 0x0178)
class USeqAct_AkDialogueSetDucking : public USeqAct_AkBaseSimple
{
public:
	struct FAkDuckingInfo                              DuckingInfo;                                   // 0x0160 (0x0018) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueSetDucking");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkDialogueSetSpeechLimit
// 0x0004 (0x0160 - 0x0164)
class USeqAct_AkDialogueSetSpeechLimit : public USeqAct_AkBaseSimple
{
public:
	int32_t                                            MaxSimultaneousSpeechInstances;                // 0x0160 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueSetSpeechLimit");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkDialogueSetTypePriority
// 0x000C (0x0160 - 0x016C)
class USeqAct_AkDialogueSetTypePriority : public USeqAct_AkBaseSimple
{
public:
	class UAkDialogueType*                             DialogueType;                                  // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            Priority;                                      // 0x0168 (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueSetTypePriority");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkDialogueSetVoice
// 0x0018 (0x0160 - 0x0178)
class USeqAct_AkDialogueSetVoice : public USeqAct_AkBaseSimple
{
public:
	class TArray<class AActor*>                        Speakers;                                      // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UAkDialogueVoice*                            Voice;                                         // 0x0170 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueSetVoice");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkDialogueSetVoiceSubtitle
// 0x0018 (0x0160 - 0x0178)
class USeqAct_AkDialogueSetVoiceSubtitle : public USeqAct_AkBaseSimple
{
public:
	class AActor*                                      Speaker;                                       // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FString                                      SubtitleLookup;                                // 0x0168 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueSetVoiceSubtitle");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkDialogueStartSpeech
// 0x00BC (0x0160 - 0x021C)
class USeqAct_AkDialogueStartSpeech : public USeqAct_AkBaseSimple
{
public:
	struct FPointer                                    VfTable_AkDialogueListener;                    // 0x0160 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	class UAkDialogueSpeech*                           Speech;                                        // 0x0168 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class TArray<class AActor*>                        Speakers;                                      // 0x0170 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	struct FAkSpeechOptions                            Options;                                       // 0x0180 (0x0074) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              SkipFade;                                      // 0x01F4 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            JumpTarget;                                    // 0x01F8 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FString                                      MultipointNetworkName;                         // 0x01FC (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            PlayingSpeechId;                               // 0x020C (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            PendingOutputFlags;                            // 0x0210 (0x0004) [0x0000000000000400] (CPF_Transient)
	struct FPointer                                    DialogueSpeakerMultipoint;                     // 0x0214 (0x0008) [0x0000000000000600] (CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueStartSpeech");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkDialogueStopSpeech
// 0x0014 (0x0160 - 0x0174)
class USeqAct_AkDialogueStopSpeech : public USeqAct_AkBaseSimple
{
public:
	class TArray<class AActor*>                        Speakers;                                      // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bExceptEmotes : 1;                             // 0x0170 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueStopSpeech");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkDialogueSurveillance
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkDialogueSurveillance : public USeqAct_AkBaseSimple
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkDialogueSurveillance");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkRainIntensity
// 0x000C (0x0160 - 0x016C)
class USeqAct_AkRainIntensity : public USeqAct_AkBaseSimple
{
public:
	EAkRainIntensitySetting                            RainIntensity;                                 // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    RainBed;                                       // 0x0164 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkRainIntensity");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkCreateMultipoint
// 0x0020 (0x0160 - 0x0180)
class USeqAct_AkCreateMultipoint : public USeqAct_AkBase
{
public:
	class TArray<int32_t>                              NodeIDs;                                       // 0x0160 (0x0010) [0x0000000000010400] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      NetworkName;                                   // 0x0170 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkCreateMultipoint");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkPlayMultipoint
// 0x0018 (0x0160 - 0x0178)
class USeqAct_AkPlayMultipoint : public USeqAct_AkBase
{
public:
	class FString                                      NetworkName;                                   // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UAkEvent*                                    Event;                                         // 0x0170 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPlayMultipoint");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkComponentSettings
// 0x00C0 (0x0160 - 0x0220)
class USeqAct_AkComponentSettings : public USequenceAction
{
public:
	EAkComponentSettingsBool                           NeverAutoDestroySource;                        // 0x0160 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           AutoDestroySourceWhenHidden;                   // 0x0161 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           AutoDestroySourceWhenDead;                     // 0x0162 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           KillSoundsOnDestroy;                           // 0x0163 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsObsOcc                         ObstructionOcclusion;                          // 0x0164 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           EnableEnvironments;                            // 0x0165 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           CameraOffsetParameters;                        // 0x0166 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           CameraAngleParameters;                         // 0x0167 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           PlayerDistanceParameters;                      // 0x0168 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           PlayerOffsetParameters;                        // 0x0169 (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           PlayerAngleParameters;                         // 0x016A (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           ObjectVelocityParameters;                      // 0x016B (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           ObjectVisibilityParameters;                    // 0x016C (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           Occlusion;                                     // 0x016D (0x0001) [0x0000000100000000] (CPF_Edit)    
	EAkComponentSettingsBool                           ParameterOnlyOcclusion;                        // 0x016E (0x0001) [0x0000000100000000] (CPF_Edit)    
	float                                              AudibilityCap;                                 // 0x0170 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              FalloffRadiusMultiplier;                       // 0x0174 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FName                                        AttachmentSocket;                              // 0x0178 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URAkAudibleParameters*                       ParameterSetup;                                // 0x0180 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class URAkAudiblePropagation*                      PropagationSetup;                              // 0x0188 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            PlayerDistanceParameter;                       // 0x0190 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            AngleToSourceFromListenerPlayerParameter;      // 0x0198 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            AngleFromSourceToListenerPlayerParameter;      // 0x01A0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            VerticalOffsetToPlayerParameter;               // 0x01A8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            HorizontalOffsetToPlayerParameter;             // 0x01B0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            ObjectVelocityParameter;                       // 0x01B8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            ObjectVelocityHorizontalParameter;             // 0x01C0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            ObjectVelocityVerticalParameter;               // 0x01C8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            RelativeVelocityParameter;                     // 0x01D0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            VerticalOffsetToCameraParameter;               // 0x01D8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            HorizontalOffsetToCameraParameter;             // 0x01E0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            AngleFromSourceToListenerCameraParameter;      // 0x01E8 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkParameterName*                            ObjectVisibilityParameter;                     // 0x01F0 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bMergeParameterSetup : 1;                      // 0x01F8 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bMergePropagationSetup : 1;                    // 0x01F8 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              ObsOccMultiplier;                              // 0x01FC (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ObsOccMultiplierDlg;                           // 0x0200 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              WetDryMixVolume;                               // 0x0204 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DopplerVelocity;                               // 0x0208 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OcclusionScalingDistance;                      // 0x020C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OcclusionMultiplier;                           // 0x0210 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OcclusionMultiplierAux;                        // 0x0214 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OcclusionMultiplierDlg;                        // 0x0218 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              OcclusionBubble;                               // 0x021C (0x0004) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkComponentSettings");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkGetFact
// 0x0010 (0x0160 - 0x0170)
class USeqAct_AkGetFact : public USequenceAction
{
public:
	class FString                                      FactToGet;                                     // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkGetFact");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkMixTemplate
// 0x000C (0x0160 - 0x016C)
class USeqAct_AkMixTemplate : public USequenceAction
{
public:
	class UAkMixTemplate*                              MixTemplate;                                   // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           mCurrentlySet : 1;                             // 0x0168 (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkMixTemplate");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkMusicReplace
// 0x0010 (0x0160 - 0x0170)
class USeqAct_AkMusicReplace : public USequenceAction
{
public:
	uint32_t                                           ActivateOnLoad : 1;                            // 0x0160 (0x0004) [0x0000000100000001] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           FadeOldMusicEvent : 1;                         // 0x0160 (0x0004) [0x0000000100000001] [0x00000002] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    MusicEvent;                                    // 0x0164 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	int32_t                                            DebugStatesThatWillBeUsed;                     // 0x016C (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkMusicReplace");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkMusicSync
// 0x0020 (0x0160 - 0x0180)
class USeqAct_AkMusicSync : public USequenceAction
{
public:
	class FString                                      MarkerName;                                    // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	float                                              WaitTimeout;                                   // 0x0170 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              WaitTime;                                      // 0x0174 (0x0004) [0x0000000000000400] (CPF_Transient)
	int32_t                                            WaitResult;                                    // 0x0178 (0x0004) [0x0000000000000400] (CPF_Transient)
	uint32_t                                           Waiting : 1;                                   // 0x017C (0x0004) [0x0000000000000400] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkMusicSync");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkMusicTrigger
// 0x0008 (0x0160 - 0x0168)
class USeqAct_AkMusicTrigger : public USequenceAction
{
public:
	class UAkTriggerName*                              MusicTriggerName;                              // 0x0160 (0x0008) [0x0000000100000000] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkMusicTrigger");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkResetSoundDirector
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkResetSoundDirector : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkResetSoundDirector");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkSetFact
// 0x0010 (0x0160 - 0x0170)
class USeqAct_AkSetFact : public USequenceAction
{
public:
	class FString                                      FactToSet;                                     // 0x0160 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetFact");
		}

		return uClassPointer;
	};


	static int32_t eventGetObjClassVersion();
};
// Class AkAudio.SeqAct_AkSoundDiagram
// 0x001C (0x0160 - 0x017C)
class USeqAct_AkSoundDiagram : public USequenceAction
{
public:
	class UAkSDRelationshipDiagram*                    Diagram;                                       // 0x0160 (0x0008) [0x0000000500000000] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bAdded : 1;                                    // 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           ShouldRemoveOnPlayerDeath : 1;                 // 0x0168 (0x0004) [0x0000080100000000] [0x00000002] (CPF_Edit | CPF_EditorOnly)
	class FString                                      NameOfDiagram;                                 // 0x016C (0x0010) [0x0000000500010000] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSoundDiagram");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkAudioVolumeDisabled
// 0x0000 (0x03C0 - 0x03C0)
class AAkAudioVolumeDisabled : public AAkAudioVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAudioVolumeDisabled");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactARChallenge
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactARChallenge : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactARChallenge");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactConversation
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactConversation : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactConversation");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactCrawlSpace
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactCrawlSpace : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactCrawlSpace");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactDemo
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactDemo : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactDemo");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactDrivingChallenge
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactDrivingChallenge : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactDrivingChallenge");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactInGame
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactInGame : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactInGame");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactOverworld
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactOverworld : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactOverworld");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactPlayerInCombat
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactPlayerInCombat : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactPlayerInCombat");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactPlayerInVehicle
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactPlayerInVehicle : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactPlayerInVehicle");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactPlayerInVehicleCombat
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactPlayerInVehicleCombat : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactPlayerInVehicleCombat");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactPlayerVehicleJumping
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactPlayerVehicleJumping : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactPlayerVehicleJumping");
		}

		return uClassPointer;
	};

};
// Class AkAudio.AkSDEntityFactQuickDeath
// 0x0000 (0x0110 - 0x0110)
class UAkSDEntityFactQuickDeath : public UAkSDEntityFact
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkSDEntityFactQuickDeath");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkAudioHDR
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkAudioHDR : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkAudioHDR");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkMusicParameter
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkMusicParameter : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkMusicParameter");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkMusicParameterReset
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkMusicParameterReset : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkMusicParameterReset");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkMusicResumeAutoStates
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkMusicResumeAutoStates : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkMusicResumeAutoStates");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkMusicState
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkMusicState : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkMusicState");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkMusicSuspendAutoStates
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkMusicSuspendAutoStates : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkMusicSuspendAutoStates");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkStartMusic
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkStartMusic : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStartMusic");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkStopMusic
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkStopMusic : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStopMusic");
		}

		return uClassPointer;
	};

};
// Class AkAudio.SeqAct_AkTargetedLoopingEvent
// 0x0000 (0x0160 - 0x0160)
class USeqAct_AkTargetedLoopingEvent : public USeqAct_AkBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkTargetedLoopingEvent");
		}

		return uClassPointer;
	};

};
/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
