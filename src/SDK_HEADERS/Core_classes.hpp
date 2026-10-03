/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: Core_classes.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#include "Core_parameters.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_HalfPi                                                1.570796326794896619
#define CONST_TwoPi                                                 6.283185307179586476
#define CONST_UnAToDeg                                              0.0054931640625
#define CONST_DegToUnA                                              182.044444444444444444
#define CONST_UnAToRad                                              0.000095873799242852
#define CONST_RadToUnA                                              10430.378350470452724949
#define CONST_InvAspectRatio16x9                                    0.56249
#define CONST_InvAspectRatio5x4                                     0.8
#define CONST_InvAspectRatio4x3                                     0.75
#define CONST_AspectRatio16x9                                       1.77778
#define CONST_AspectRatio5x4                                        1.25
#define CONST_AspectRatio4x3                                        1.33333
#define CONST_INDEX_NONE                                            -1
#define CONST_UnrRotToDeg                                           0.00549316540360483
#define CONST_DegToUnrRot                                           182.0444
#define CONST_RadToUnrRot                                           10430.3783504704527
#define CONST_UnrRotToRad                                           0.00009587379924285
#define CONST_DegToRad                                              0.017453292519943296
#define CONST_RadToDeg                                              57.295779513082321600
#define CONST_Pi                                                    3.1415926535897932
#define CONST_MaxInt                                                0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
enum class EDebugBreakType : uint8_t
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_END                                       = 3
};

// Enum Core.Object.EAutomatedRunResult
enum class EAutomatedRunResult : uint8_t
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_END                                            = 3
};

// Enum Core.Object.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV                           = 0,
	AspectRatio_MaintainXFOV                           = 1,
	AspectRatio_MajorAxisFOV                           = 2,
	AspectRatio_END                                    = 3
};

// Enum Core.Object.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_END                                            = 6
};

// Enum Core.Object.EInterpMethodType
enum class EInterpMethodType : uint8_t
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_END                                            = 3
};

// Enum Core.Object.EAxis
enum class EAxis : uint8_t
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_END                                           = 5
};

// Enum Core.Object.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PreAsyncWork                                    = 0,
	TG_PreAsyncWork2                                   = 1,
	TG_DuringAsyncWork                                 = 2,
	TG_PostAsyncWork                                   = 3,
	TG_END                                             = 4
};

// Enum Core.Object.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_END                                             = 5
};

// Enum Core.Object.ESimpleAxis
enum class ESimpleAxis : uint8_t
{
	SIMPLEAXIS_X                                       = 0,
	SIMPLEAXIS_Y                                       = 1,
	SIMPLEAXIS_Z                                       = 2,
	SIMPLEAXIS_END                                     = 3
};

// Enum Core.Object.AlphaBlendType
enum class EAlphaBlendType : uint8_t
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_END                                            = 7
};

// Enum Core.Object.EDecalDrawMode
enum class EDecalDrawMode : uint8_t
{
	DDM_Quad                                           = 0,
	DDM_Box_No_Back                                    = 1,
	DDM_Box                                            = 2,
	DDM_END                                            = 3
};

// Enum Core.Object.EDecalPriority
enum class EDecalPriority : uint8_t
{
	DP_BeforeDefault5                                  = 0,
	DP_BeforeDefault4                                  = 1,
	DP_BeforeDefault3                                  = 2,
	DP_BeforeDefault2                                  = 3,
	DP_BeforeDefault1                                  = 4,
	DP_Default                                         = 5,
	DP_AfterDefault1                                   = 6,
	DP_AfterDefault2                                   = 7,
	DP_AfterDefault3                                   = 8,
	DP_AfterDefault4                                   = 9,
	DP_AfterDefault5                                   = 10,
	DP_END                                             = 11
};

// Enum Core.Component.ECollisionFilter
enum class ECollisionFilter : uint8_t
{
	COF_NoCollision                                    = 0,
	COF_Level                                          = 1,
	COF_LevelGeometry                                  = 2,
	COF_LevelGeometry_BlockWeapons                     = 3,
	COF_LevelGeometry_BlockAllButWeapons               = 4,
	COF_ReinforcedGlass                                = 5,
	COF_Volume                                         = 6,
	COF_PlayerOnlyVolume                               = 7,
	COF_StreamingVolume                                = 8,
	COF_TriggerVolume                                  = 9,
	COF_WaterVolume                                    = 10,
	COF_PredSideRoom                                   = 11,
	COF_AudioVolume                                    = 12,
	COF_BlockingVolume                                 = 13,
	COF_BlockingVolume_Player                          = 14,
	COF_BlockingVolume_Enemies                         = 15,
	COF_BlockingVolume_AllCharacters                   = 16,
	COF_BlockingVolume_Gadgets                         = 17,
	COF_BlockingVolume_PlayerAndGadgets                = 18,
	COF_BlockingVolume_EnemyWeaponsAndLos              = 19,
	COF_BlockingVolume_Camera                          = 20,
	COF_BlockingBolume_Vehicles                        = 21,
	COF_BlockingBolume_BlockEject                      = 22,
	COF_BlockingVolume_Audio                           = 23,
	COF_Mover                                          = 24,
	COF_Mover_BlockWeapons                             = 25,
	COF_Mover_BlockAllButWeapons                       = 26,
	COF_Actor                                          = 27,
	COF_PawnCharacter                                  = 28,
	COF_UnPossessedPlayer                              = 29,
	COF_PawnPlayer                                     = 30,
	COF_PawnPlayerInGrateChute                         = 31,
	COF_PlayerBlockers                                 = 32,
	COF_Vehicle                                        = 33,
	COF_PlayerVehicle                                  = 34,
	COF_Gadget                                         = 35,
	COF_Projectile                                     = 36,
	COF_Camera                                         = 37,
	COF_VehicleCamera                                  = 38,
	COF_ActorDoesntBlockCamera                         = 39,
	COF_ActorDoesntBlockVehiceCamera                   = 40,
	COF_ActorDoesntBlockCameraNorProjectiles           = 41,
	COF_FractureMesh                                   = 42,
	COF_FractureTakedown                               = 43,
	COF_FractureFragileTakedown                        = 44,
	COF_FractureGlass                                  = 45,
	COF_FractureGlassCeiling                           = 46,
	COF_FractureFragileGlass                           = 47,
	COF_HidePoint                                      = 48,
	COF_HidePointWithBatmanOn                          = 49,
	COF_Wire                                           = 50,
	COF_FloorGrate                                     = 51,
	COF_WallGrate                                      = 52,
	COF_Smoke                                          = 53,
	COF_Trap                                           = 54,
	COF_DestructiblePropDynamic                        = 55,
	COF_AiScout                                        = 56,
	COF_CombatProxy                                    = 57,
	COF_ProjectileTarget                               = 58,
	COF_ParticleTouch                                  = 59,
	COF_FootstepOnly                                   = 60,
	COF_ProjectileDetector                             = 61,
	COF_ActorBlocksAudio                               = 62,
	COF_BeamVantagePoint                               = 63,
	COF_TraceAll                                       = 64,
	COF_TraceLevel                                     = 65,
	COF_TraceWorld                                     = 66,
	COF_TraceTerrain                                   = 67,
	COF_TraceActors                                    = 68,
	COF_TracePawns                                     = 69,
	COF_TraceOthers                                    = 70,
	COF_TraceVolumes                                   = 71,
	COF_TracePhysicsVolumes                            = 72,
	COF_TraceWorldActors                               = 73,
	COF_TraceWorldOthers                               = 74,
	COF_TraceWorldMoversOthers                         = 75,
	COF_TraceWorldMoversVehiclesOthers                 = 76,
	COF_TraceWorldMoversOthersVolumes                  = 77,
	COF_TraceShadow                                    = 78,
	COF_TraceClimbable                                 = 79,
	COF_TraceFractureMesh                              = 80,
	COF_TraceLineOfSight                               = 81,
	COF_TraceLineOfSightIncSmoke                       = 82,
	COF_TraceLineOfSightIncGrates                      = 83,
	COF_TraceLineOfSightIncSmokeAndGrates              = 84,
	COF_TraceLineOfSightCanSeeThroughGlassCeilings     = 85,
	COF_TraceLaser                                     = 86,
	COF_TraceSmoke                                     = 87,
	COF_TraceSnapToFloor                               = 88,
	COF_TraceGrappleEnvironment                        = 89,
	COF_TraceGrapplePlacement                          = 90,
	COF_TraceRopeObstruction                           = 91,
	COF_TraceExplosiveGel                              = 92,
	COF_TraceWaterFeeler                               = 93,
	COF_TraceRain                                      = 94,
	COF_TracePhysicsGrabber                            = 95,
	COF_TraceRopeLength                                = 96,
	COF_TraceSplashDamage                              = 97,
	COF_TraceDiveThroughWindow                         = 98,
	COF_TraceExplosiveGelTarget                        = 99,
	COF_TraceGrappleTarget                             = 100,
	COF_TraceGrappleSwingTarget                        = 101,
	COF_TraceParticles                                 = 102,
	COF_TraceParticlesWithPawn                         = 103,
	COF_TraceCameraHideObjects                         = 104,
	COF_TraceCameraHideObjectsBatmobile                = 105,
	COF_TraceClimbableOthers                           = 106,
	COF_TraceFlamethrower                              = 107,
	COF_TraceFootstep                                  = 108,
	COF_TraceCameraFocus                               = 109,
	COF_TraceWorldVehicles                             = 110,
	COF_TraceCameraTransition                          = 111,
	COF_TraceFootCorrection                            = 112,
	COF_TraceBatmobileEjectHeight                      = 113,
	COF_TraceBatmobileWheelSprings                     = 114,
	COF_TraceSpawnVehicleLOS                           = 115,
	COF_TraceWorldAudio                                = 116,
	COF_TraceProjectileTargets                         = 117,
	COF_TraceBatmanLOSGadgets                          = 118,
	COF_TraceVehicles                                  = 119,
	COF_TraceTankTargetBeam                            = 120,
	COF_TraceAudioVolumes                              = 121,
	COF_TraceVehicleSpawnClearArea                     = 122,
	COF_TraceSniperLaser                               = 123,
	COF_TraceVehicleWheels                             = 124,
	COF_TraceDisruptorSniper                           = 125,
	COF_TraceCanSeeRiddlerPickup                       = 126,
	COF_END                                            = 127
};

// Enum Core.DistributionVector.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_END                                          = 5
};

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_END                                          = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x0054
class UObject
{
public:
	struct FPointer                                    VfTableObject;                                 // 0x0000 (0x0008) [0x0000000400020201] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	int32_t                                            ObjectFlags;                                   // 0x0008 (0x0004) [0x0000000400000201] (CPF_Const | CPF_Native | CPF_EditConst)
	int32_t                                            EditorObjectFlags;                             // 0x000C (0x0004) [0x0000080400000201] (CPF_Const | CPF_Native | CPF_EditConst | CPF_EditorOnly)
	int32_t                                            HashIndexPrev;                                 // 0x0010 (0x0004) [0x0000000400000201] (CPF_Const | CPF_Native | CPF_EditConst)
	int32_t                                            HashIndexNext;                                 // 0x0014 (0x0004) [0x0000000400000201] (CPF_Const | CPF_Native | CPF_EditConst)
	int32_t                                            HashOuterIndexPrev;                            // 0x0018 (0x0004) [0x0000000400000201] (CPF_Const | CPF_Native | CPF_EditConst)
	int32_t                                            HashOuterIndexNext;                            // 0x001C (0x0004) [0x0000000400000201] (CPF_Const | CPF_Native | CPF_EditConst)
	class UObject*                                     Linker;                                        // 0x0020 (0x0008) [0x0000000400020201] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	struct FPointer                                    LinkerIndex;                                   // 0x0028 (0x0008) [0x0000000400020201] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	int32_t                                            ObjectInternalInteger;                         // 0x0030 (0x0004) [0x0000000400020201] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	class UObject*                                     Outer;                                         // 0x0034 (0x0008) [0x0000000400000201] (CPF_Const | CPF_Native | CPF_EditConst)
	class FName                                        Name;                                          // 0x003C (0x0008) [0x0000000400000201] (CPF_Const | CPF_Native | CPF_EditConst)
	class UClass*                                      Class;                                         // 0x0044 (0x0008) [0x0000000400000201] (CPF_Const | CPF_Native | CPF_EditConst)
	class UObject*                                     ObjectArchetype;                               // 0x004C (0x0008) [0x0000000500000201] (CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Object");
		}

		return uClassPointer;
	};

	static class GObjectsArray* GObjObjects();

	std::string GetName();
	std::string GetNameCPP();
	std::string GetFullName();
	class UObject* GetPackageObj();
	template<typename T> static T* FindObject(const std::string& objectFullName)
	{
		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject && uObject->IsA<T>())
			{
				if (uObject->GetFullName() == objectFullName)
				{
					return reinterpret_cast<T*>(uObject);
				}
			}
		}

		return nullptr;
	}
	static class UClass* FindClass(const std::string& classFullName);
	bool IsA(class UClass* uClass);
	bool IsA(int32_t objInternalInteger);
	template<typename T> bool IsA()
	{
		return IsA(T::StaticClass());
	}


	static void DebugHeapCheck();
	static class FString GetStringFromGuid(struct FGuid& outInGuid);
	static struct FGuid GetGuidFromString(class FString& outInGuidString);
	static struct FGuid CreateGuid();
	static bool IsGuidValid(struct FGuid& outInGuid);
	static void InvalidateGuid(struct FGuid& outInGuid);
	static class FString GetLanguage();
	int32_t GetRandomOptionSumFrequency(class TArray<float>& outFreqList);
	int32_t GetBuildChangelistNumber();
	int32_t GetEngineVersion();
	void GetSystemTime(int32_t& outYear, int32_t& outMonth, int32_t& outDayOfWeek, int32_t& outDay, int32_t& outHour, int32_t& outMin, int32_t& outSec, int32_t& outMSec);
	class FString TimeStamp();
	struct FVector TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool optionalBInverse);
	bool IsCapturingMovie();
	bool IsInPIE();
	class FName GetPackageName();
	bool IsPendingKill();
	float ByteToFloat(uint8_t inputByte, bool optionalBSigned);
	uint8_t FloatToByte(float inputFloat, bool optionalBSigned);
	static float UnwindHeading(float A);
	static float FindDeltaAngle(float A1, float A2);
	static float GetHeadingAngle(const struct FVector& Dir);
	static void GetAngularDegreesFromRadians(struct FVector2D& outOutFOV);
	static void GetAngularFromDotDist(const struct FVector2D& DotDist, struct FVector2D& outOutAngDist);
	static bool GetAngularDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D& outOutAngularDist);
	static bool GetDotDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D& outOutDotDist);
	static struct FVector PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);
	float PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector& optionalOutOut_ClosestPoint);
	float GetTForSegmentPlaneIntersect(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FPlane& testPlane);
	void SegmentDistToSegment(const struct FVector& A1, const struct FVector& B1, const struct FVector& A2, const struct FVector& B2, struct FVector& outOutP1, struct FVector& outOutP2);
	bool SphereIntersectingLine(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& LineStart, const struct FVector& LineEnd, struct FVector& outClosestPoint1, struct FVector& outClosestPoint2);
	float PointDistSquaredToLineSegment(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin);
	float PointDistAlongLineSegment(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin);
	float PointDistAlongLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin);
	float PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector& optionalOutOutClosestPoint);
	float PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector& optionalOutOutClosestPoint);
	static class FString GetConfigString(const class FString& Section, const class FString& Key);
	static bool GetPerObjectConfigSections(class UClass* SearchClass, class UObject* optionalObjectOuter, int32_t optionalMaxResults, class TArray<class FString>& outOut_SectionNames);
	static void ImportJSON(const class FString& PropertyName, class FString& outJSON);
	static void StaticSaveConfig();
	void SaveConfig();
	static class UObject* FindObject(const class FString& ObjectName, class UClass* ObjectClass);
	static class UObject* DynamicLoadObject(const class FString& ObjectName, class UClass* ObjectClass, bool optionalMayFail);
	static class FName GetEnum(class UObject* E, int32_t I);
	static bool IsUTracing();
	static void SetUTracing(bool bShouldUTrace);
	static class FName GetFuncName();
	static void DebugBreak(int32_t optionalUserFlags, EDebugBreakType optionalDebuggerType);
	static class FString GetScriptTrace();
	static void ScriptTrace();
	static bool LogInternalUI(const class FString& S);
	static bool LogInternalBoss(const class FString& S);
	static bool LogInternalPlayer(const class FString& S);
	static bool LogInternalAI(const class FString& S);
	static bool LogInternalAudio(const class FString& S);
	static bool DoesLocalisedStringExist(const class FString& PackageName, const class FString& SectionName, const class FString& KeyName);
	static bool DoesLocalisedExist(const class FString& PackageSectionKeyName);
	static class FString GetLocalised(const class FString& PackageSectionKeyName);
	static class FString GetLocalisedString(const class FString& PackageName, const class FString& SectionName, const class FString& KeyName, bool optionalBUsingPad);
	static class FString ParseLocalizedPropertyPath(const class FString& PathName);
	static class FString Localize(const class FString& SectionName, const class FString& KeyName, const class FString& PackageName);
	static void DesignerWarnInternal(const class FString& S);
	static void WarnInternal(const class FString& S);
	static bool LogInternal(const class FString& S, const class FName& optionalTag);
	static bool IsLogEnabled(const class FName& Tag);
	static struct FLinearColor Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	static struct FLinearColor Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult);
	static struct FColor LinearColorToColor(const struct FLinearColor& OldColor);
	static struct FLinearColor ColorToLinearColor(const struct FColor& OldColor);
	static struct FLinearColor MakeLinearColor(float R, float G, float B, float A);
	static struct FColor LerpColor(const struct FColor& A, const struct FColor& B, float Alpha);
	static struct FColor MakeColor(uint8_t R, uint8_t G, uint8_t B, uint8_t optionalA);
	static struct FColor Add_ColorColor(const struct FColor& A, const struct FColor& B);
	static struct FColor Multiply_ColorFloat(const struct FColor& A, float B);
	static struct FColor Multiply_FloatColor(float A, const struct FColor& B);
	static struct FColor Subtract_ColorColor(const struct FColor& A, const struct FColor& B);
	static struct FVector2D EvalInterpCurveVector2D(float InVal, struct FInterpCurveVector2D& outVector2DCurve);
	static struct FVector EvalInterpCurveVector(float InVal, struct FInterpCurveVector& outVectorCurve);
	static float EvalInterpCurveFloat(float InVal, struct FInterpCurveFloat& outFloatCurve);
	static struct FVector2D vect2d(float InX, float InY);
	static float GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value);
	static float GetRangePctByValue(const struct FVector2D& Range, float Value);
	static float GetRangeValueByPct(const struct FVector2D& Range, float Pct);
	static struct FVector2D SubtractEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D& outA);
	static struct FVector2D AddEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D& outA);
	static struct FVector2D DivideEqual_Vector2DFloat(float B, struct FVector2D& outA);
	static struct FVector2D MultiplyEqual_Vector2DFloat(float B, struct FVector2D& outA);
	static struct FVector2D Divide_Vector2DFloat(const struct FVector2D& A, float B);
	static struct FVector2D Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	static struct FVector2D Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	static struct FVector2D Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	static struct FQuat Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	static struct FQuat Add_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	static struct FQuat QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool optionalBShortestPath);
	static struct FRotator QuatToRotator(const struct FQuat& A);
	static struct FQuat QuatFromRotator(const struct FRotator& A);
	static struct FQuat QuatFromAxisAndAngle(const struct FVector& Axis, float Angle);
	static struct FQuat QuatFindBetween(const struct FVector& A, const struct FVector& B);
	static struct FVector QuatRotateVector(const struct FQuat& A, const struct FVector& B);
	static struct FQuat QuatInvert(const struct FQuat& A);
	static float QuatDot(const struct FQuat& A, const struct FQuat& B);
	static struct FQuat QuatProduct(const struct FQuat& A, const struct FQuat& B);
	static struct FVector MatrixGetAxis(const struct FMatrix& TM, EAxis Axis);
	static struct FVector MatrixGetOrigin(const struct FMatrix& TM);
	static struct FRotator MatrixGetRotator(const struct FMatrix& TM);
	static struct FMatrix MakeRotationMatrix(const struct FRotator& Rotation);
	static struct FMatrix MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation);
	static struct FVector InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A);
	static struct FVector TransformNormal(const struct FMatrix& TM, const struct FVector& A);
	static struct FVector InverseTransformVector(const struct FMatrix& TM, const struct FVector& A);
	static struct FVector TransformVector(const struct FMatrix& TM, const struct FVector& A);
	static struct FMatrix Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
	static bool NotEqual_NameName(const class FName& A, const class FName& B);
	static bool EqualEqual_NameName(const class FName& A, const class FName& B);
	bool IsA(const class FName& ClassName);
	static bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	static bool NotEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	static bool EqualEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	static bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	static bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	static class FString PathName(class UObject* CheckObject, bool optionalBForceNonFriendly);
	static class TArray<class FString> SplitString(const class FString& Source, const class FString& optionalDelimiter, bool optionalBCullEmpty);
	static void ParseStringIntoArray(const class FString& BaseString, const class FString& delim, bool bCullEmpty, class TArray<class FString>& outPieces);
	static void JoinArray(const class TArray<class FString>& StringArray, const class FString& optionalDelim, bool optionalBIgnoreBlanks, class FString& outOut_Result);
	static class FString GetRightMost(const class FString& Text);
	static class FString Split(const class FString& Text, const class FString& SplitStr, bool optionalBOmitSplitStr);
	static bool IsNumber(const class FString& S);
	static class FString SpaceWords(const class FString& S);
	static class FString Capitalise(const class FString& S);
	static class FString Repl(const class FString& Src, const class FString& Match, const class FString& With, bool optionalBCaseSensitive);
	static int32_t Asc(const class FString& S);
	static class FString Chr(int32_t I);
	static class FString Locs(const class FString& S);
	static class FString Caps(const class FString& S);
	static class FString Right(const class FString& S, int32_t I);
	static class FString Left(const class FString& S, int32_t I);
	static class FString Mid(const class FString& S, int32_t I, int32_t optionalJ);
	static int32_t InStr(const class FString& S, const class FString& T, bool optionalBSearchFromRight, bool optionalBIgnoreCase, int32_t optionalStartPos);
	static int32_t Len(const class FString& S);
	static class FString SubtractEqual_StrStr(const class FString& B, class FString& outA);
	static class FString AtEqual_StrStr(const class FString& B, class FString& outA);
	static class FString ConcatEqual_StrStr(const class FString& B, class FString& outA);
	static bool ComplementEqual_StrStr(const class FString& A, const class FString& B);
	static bool NotEqual_StrStr(const class FString& A, const class FString& B);
	static bool EqualEqual_StrStr(const class FString& A, const class FString& B);
	static bool GreaterEqual_StrStr(const class FString& A, const class FString& B);
	static bool LessEqual_StrStr(const class FString& A, const class FString& B);
	static bool Greater_StrStr(const class FString& A, const class FString& B);
	static bool Less_StrStr(const class FString& A, const class FString& B);
	static class FString At_StrStr(const class FString& A, const class FString& B);
	static class FString Concat_StrStr(const class FString& A, const class FString& B);
	static struct FRotator MakeRotator(int32_t Pitch, int32_t Yaw, int32_t Roll);
	static bool SClampRotAxis(float DeltaTime, int32_t ViewAxis, int32_t MaxLimit, int32_t MinLimit, float InterpolationSpeed, int32_t& outOut_DeltaViewAxis);
	static int32_t ClampRotAxisFromRange(int32_t Current, int32_t Min, int32_t Max);
	static int32_t ClampRotAxisFromBase(int32_t Current, int32_t Center, int32_t MaxDelta);
	static void ClampRotAxis(int32_t ViewAxis, int32_t MaxLimit, int32_t MinLimit, int32_t& outOut_DeltaViewAxis);
	static float RSize(const struct FRotator& R);
	static float RDiff(const struct FRotator& A, const struct FRotator& B);
	static int32_t NormalizeRotAxis(int32_t Angle);
	static struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool optionalBConstantInterpSpeed);
	static struct FRotator RTransform(const struct FRotator& R, const struct FRotator& RBasis);
	static struct FRotator RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool optionalBShortestPath);
	static struct FRotator Normalize(const struct FRotator& Rot);
	static struct FRotator OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	static struct FRotator RotRand(bool optionalBRoll);
	static struct FVector GetRotatorAxis(const struct FRotator& A, int32_t Axis);
	static void GetUnAxes(const struct FRotator& A, struct FVector& outX, struct FVector& outY, struct FVector& outZ);
	static void GetAxes(const struct FRotator& A, struct FVector& outX, struct FVector& outY, struct FVector& outZ);
	static bool ClockwiseFrom_IntInt(int32_t A, int32_t B);
	static struct FRotator SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator& outA);
	static struct FRotator AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator& outA);
	static struct FRotator Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	static struct FRotator Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	static struct FRotator DivideEqual_RotatorFloat(float B, struct FRotator& outA);
	static struct FRotator MultiplyEqual_RotatorFloat(float B, struct FRotator& outA);
	static struct FRotator Divide_RotatorFloat(const struct FRotator& A, float B);
	static struct FRotator Multiply_FloatRotator(float A, const struct FRotator& B);
	static struct FRotator Multiply_RotatorFloat(const struct FRotator& A, float B);
	static bool NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	static bool EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool optionalBIgnoreZ);
	static float NoZDot(const struct FVector& A, const struct FVector& B);
	static struct FVector ClampLength(const struct FVector& V, float MaxLength);
	static struct FVector VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector4 MakeVector4(float X, float optionalY, float optionalZ, float optionalW);
	struct FVector MakeVector(float X, float optionalY, float optionalZ);
	int32_t GetYawFromDirection(const struct FVector& Direction);
	static struct FVector VRandRange(const struct FVector& MinRange, const struct FVector& MaxRange);
	static bool IsZero(const struct FVector& A);
	static struct FVector ProjectOnTo(const struct FVector& X, const struct FVector& Y);
	static struct FVector MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	static struct FVector VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	static struct FVector VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians);
	static struct FVector VRand();
	static struct FVector VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	static struct FVector Normal2D(const struct FVector& A);
	static struct FVector Normal(const struct FVector& A);
	static float VSizeSq2D(const struct FVector& A);
	static float VSizeSq(const struct FVector& A);
	static float VSize2D(const struct FVector& A);
	static float VSize(const struct FVector& A);
	static struct FVector SubtractEqual_VectorVector(const struct FVector& B, struct FVector& outA);
	static struct FVector AddEqual_VectorVector(const struct FVector& B, struct FVector& outA);
	static struct FVector DivideEqual_VectorFloat(float B, struct FVector& outA);
	static struct FVector MultiplyEqual_VectorVector(const struct FVector& B, struct FVector& outA);
	static struct FVector MultiplyEqual_VectorFloat(float B, struct FVector& outA);
	static struct FVector Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	static float Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	static bool NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	static bool EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	static struct FVector LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	static struct FVector Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector Add_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector Divide_VectorFloat(const struct FVector& A, float B);
	static struct FVector Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	static struct FVector Multiply_FloatVector(float A, const struct FVector& B);
	static struct FVector Multiply_VectorFloat(const struct FVector& A, float B);
	static struct FVector Subtract_PreVector(const struct FVector& A);
	static float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	static float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	static float FPctByRange(float Value, float InMin, float InMax);
	static int32_t IRandRangeInclusive(int32_t InMin, int32_t InMax);
	static float RandRange(float InMin, float InMax);
	static float FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	static float FInterpEaseOut(float A, float B, float Alpha, float Exp);
	static float FInterpEaseIn(float A, float B, float Alpha, float Exp);
	static float FCubicInterp(float P0, float T0, float P1, float T1, float A);
	static float Sgn(float A);
	static int32_t FCeil(float A);
	static int32_t FFloor(float A);
	static int32_t Round(float A);
	static float Lerp(float A, float B, float Alpha);
	static float FClamp(float V, float A, float B);
	static float FMax(float A, float B);
	static float FMin(float A, float B);
	static float FRand();
	static float Square(float A);
	static float Sqrt(float A);
	static float Pow(float Base, float Exp);
	static float Loge(float A);
	static float Exp(float A);
	static float Atan2(float A, float B);
	static float Atan(float A);
	static float Tan(float A);
	static float Acos(float A);
	static float Cos(float A);
	static float Asin(float A);
	static float Sin(float A);
	static float Abs(float A);
	static float SubtractEqual_FloatFloat(float B, float& outA);
	static float AddEqual_FloatFloat(float B, float& outA);
	static float DivideEqual_FloatFloat(float B, float& outA);
	static float MultiplyEqual_FloatFloat(float B, float& outA);
	static bool NotEqual_FloatFloat(float A, float B);
	static bool ComplementEqual_FloatFloat(float A, float B);
	static bool EqualEqual_FloatFloat(float A, float B);
	static bool GreaterEqual_FloatFloat(float A, float B);
	static bool LessEqual_FloatFloat(float A, float B);
	static bool Greater_FloatFloat(float A, float B);
	static bool Less_FloatFloat(float A, float B);
	static float Subtract_FloatFloat(float A, float B);
	static float Add_FloatFloat(float A, float B);
	static float Percent_FloatFloat(float A, float B);
	static float Divide_FloatFloat(float A, float B);
	static float Multiply_FloatFloat(float A, float B);
	static float MultiplyMultiply_FloatFloat(float Base, float Exp);
	static float Subtract_PreFloat(float A);
	int32_t IAbs(int32_t A);
	static class FString ToHex(int32_t A);
	static int32_t Clamp(int32_t V, int32_t A, int32_t B);
	static int32_t Max(int32_t A, int32_t B);
	static int32_t Min(int32_t A, int32_t B);
	static int32_t Rand(int32_t Max);
	static int32_t SubtractSubtract_Int(int32_t& outA);
	static int32_t AddAdd_Int(int32_t& outA);
	static int32_t SubtractSubtract_PreInt(int32_t& outA);
	static int32_t AddAdd_PreInt(int32_t& outA);
	static int32_t SubtractEqual_IntInt(int32_t B, int32_t& outA);
	static int32_t AddEqual_IntInt(int32_t B, int32_t& outA);
	static int32_t DivideEqual_IntFloat(float B, int32_t& outA);
	static int32_t MultiplyEqual_IntFloat(float B, int32_t& outA);
	static int32_t Or_IntInt(int32_t A, int32_t B);
	static int32_t Xor_IntInt(int32_t A, int32_t B);
	static int32_t And_IntInt(int32_t A, int32_t B);
	static bool NotEqual_IntInt(int32_t A, int32_t B);
	static bool EqualEqual_IntInt(int32_t A, int32_t B);
	static bool GreaterEqual_IntInt(int32_t A, int32_t B);
	static bool LessEqual_IntInt(int32_t A, int32_t B);
	static bool Greater_IntInt(int32_t A, int32_t B);
	static bool Less_IntInt(int32_t A, int32_t B);
	static int32_t GreaterGreaterGreater_IntInt(int32_t A, int32_t B);
	static int32_t GreaterGreater_IntInt(int32_t A, int32_t B);
	static int32_t LessLess_IntInt(int32_t A, int32_t B);
	static int32_t Subtract_IntInt(int32_t A, int32_t B);
	static int32_t Add_IntInt(int32_t A, int32_t B);
	static int32_t Percent_IntInt(int32_t A, int32_t B);
	static int32_t Divide_IntInt(int32_t A, int32_t B);
	static int32_t Multiply_IntInt(int32_t A, int32_t B);
	static int32_t Subtract_PreInt(int32_t A);
	static int32_t Complement_PreInt(int32_t A);
	static uint8_t SubtractSubtract_Byte(uint8_t& outA);
	static uint8_t AddAdd_Byte(uint8_t& outA);
	static uint8_t SubtractSubtract_PreByte(uint8_t& outA);
	static uint8_t AddAdd_PreByte(uint8_t& outA);
	static uint8_t SubtractEqual_ByteByte(uint8_t B, uint8_t& outA);
	static uint8_t AddEqual_ByteByte(uint8_t B, uint8_t& outA);
	static uint8_t DivideEqual_ByteByte(uint8_t B, uint8_t& outA);
	static uint8_t MultiplyEqual_ByteFloat(float B, uint8_t& outA);
	static uint8_t MultiplyEqual_ByteByte(uint8_t B, uint8_t& outA);
	static bool OrOr_BoolBool(bool A, bool B);
	static bool XorXor_BoolBool(bool A, bool B);
	static bool AndAnd_BoolBool(bool A, bool B);
	static bool NotEqual_BoolBool(bool A, bool B);
	static bool EqualEqual_BoolBool(bool A, bool B);
	static bool Not_PreBool(bool A);
	void ProcessEvent(class UFunction* uFunction, void* uParams, void* uResult = nullptr);
};
// Class Core.TextBuffer
// 0x0024 (0x0054 - 0x0078)
class UTextBuffer : public UObject
{
public:
	uint8_t                                            UnknownData00[0x24];                            // 0x0054 (0x0024) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TextBuffer");
		}

		return uClassPointer;
	};

};
// Class Core.Subsystem
// 0x0008 (0x0054 - 0x005C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                 // 0x0054 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Subsystem");
		}

		return uClassPointer;
	};

};
// Class Core.System
// 0x0104 (0x005C - 0x0160)
class USystem : public USubsystem
{
public:
	int32_t                                            StaleCacheDays;                                // 0x005C (0x0004) [0x0000000000000800] (CPF_Config)  
	int32_t                                            MaxStaleCacheSize;                             // 0x0060 (0x0004) [0x0000000000000800] (CPF_Config)  
	int32_t                                            MaxOverallCacheSize;                           // 0x0064 (0x0004) [0x0000000000000800] (CPF_Config)  
	int32_t                                            PackageSizeSoftLimit;                          // 0x0068 (0x0004) [0x0000000000000800] (CPF_Config)  
	float                                              AsyncIOBandwidthLimit;                         // 0x006C (0x0004) [0x0000000000000800] (CPF_Config)  
	class FString                                      SavePath;                                      // 0x0070 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      CachePath;                                     // 0x0080 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      CacheExt;                                      // 0x0090 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	uint8_t                                            UnknownData00[0x20];                            // 0x00A0 (0x0020) MISSED OFFSET
	class TArray<class FString>                        Paths;                                         // 0x00C0 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        SeekFreePCPaths;                               // 0x00D0 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        ScriptPaths;                                   // 0x00E0 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        FRScriptPaths;                                 // 0x00F0 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        CutdownPaths;                                  // 0x0100 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FName>                          Suppress;                                      // 0x0110 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        Extensions;                                    // 0x0120 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        SeekFreePCExtensions;                          // 0x0130 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        LocalizationPaths;                             // 0x0140 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      TextureFileCacheExtension;                     // 0x0150 (0x0010) [0x0000000000010800] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.System");
		}

		return uClassPointer;
	};

};
// Class Core.StateObject
// 0x0008 (0x0054 - 0x005C)
class UStateObject : public UObject
{
public:
	struct FPointer                                    StateFrame;                                    // 0x0054 (0x0008) [0x0000000000000600] (CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StateObject");
		}

		return uClassPointer;
	};


	void Disable(const class FName& ProbeFunc);
	void Enable(const class FName& ProbeFunc);
	void eventContinuedState();
	void eventPausedState();
	void eventPoppedState();
	void eventPushedState();
	void eventEndState(const class FName& NextStateName);
	void eventBeginState(const class FName& PreviousStateName);
	void DumpStateStack();
	void PopState(bool optionalBPopAll);
	void PushState(const class FName& NewState, const class FName& optionalNewLabel);
	class FName GetStateName();
	bool IsChildState(const class FName& TestState, const class FName& TestParentState);
	bool IsInState(const class FName& TestState, bool optionalBTestStateStack);
	void GotoState(const class FName& NewState, const class FName& optionalLabel, bool optionalBForceEvents, bool optionalBKeepStack);
};
// Class Core.PackageMap
// 0x00A0 (0x0054 - 0x00F4)
class UPackageMap : public UObject
{
public:
	uint8_t                                            UnknownData00[0xA0];                            // 0x0054 (0x00A0) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.PackageMap");
		}

		return uClassPointer;
	};

};
// Class Core.ObjectSerializer
// 0x0014 (0x0054 - 0x0068)
class UObjectSerializer : public UObject
{
public:
	uint8_t                                            UnknownData00[0x14];                            // 0x0054 (0x0014) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectSerializer");
		}

		return uClassPointer;
	};

};
// Class Core.ObjectRedirector
// 0x0008 (0x0054 - 0x005C)
class UObjectRedirector : public UObject
{
public:
	uint8_t                                            UnknownData00[0x8];                              // 0x0054 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectRedirector");
		}

		return uClassPointer;
	};

};
// Class Core.MetaData
// 0x0048 (0x0054 - 0x009C)
class UMetaData : public UObject
{
public:
	uint8_t                                            UnknownData00[0x48];                            // 0x0054 (0x0048) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.MetaData");
		}

		return uClassPointer;
	};

};
// Class Core.Linker
// 0x0174 (0x0054 - 0x01C8)
class ULinker : public UObject
{
public:
	uint8_t                                            UnknownData00[0x174];                          // 0x0054 (0x0174) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Linker");
		}

		return uClassPointer;
	};

};
// Class Core.LinkerSave
// 0x00B8 (0x01C8 - 0x0280)
class ULinkerSave : public ULinker
{
public:
	uint8_t                                            UnknownData00[0xB8];                            // 0x01C8 (0x00B8) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.LinkerSave");
		}

		return uClassPointer;
	};

};
// Class Core.LinkerLoad
// 0x0630 (0x01C8 - 0x07F8)
class ULinkerLoad : public ULinker
{
public:
	uint8_t                                            UnknownData00[0x630];                          // 0x01C8 (0x0630) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.LinkerLoad");
		}

		return uClassPointer;
	};

};
// Class Core.Interface
// 0x0000 (0x0054 - 0x0054)
class UInterface : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Interface");
		}

		return uClassPointer;
	};

};
// Class Core.Field
// 0x0008 (0x0054 - 0x005C)
class UField : public UObject
{
public:
	class UField* Next; // 0x0054 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Field");
		}

		return uClassPointer;
	};

};
// Class Core.Struct
// 0x0048 (0x005C - 0x00A4)
class UStruct : public UField
{
public:
	class UField* SuperField; // 0x005C (0x0008)
	class UField* Children; // 0x0064 (0x0008)
	uint8_t* ScriptData; // 0x006C (0x0008)
	uint16_t ScriptSize; // 0x0074 (0x0002)
	uint16_t ScriptCapacity; // 0x0076 (0x0002)
	uint16_t PropertySize; // 0x0078 (0x0002)
	uint8_t UnknownData00[0x2A];// 0x007A (0x002A) DYNAMIC FIELD PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Struct");
		}

		return uClassPointer;
	};

};
// Class Core.ScriptStruct
// 0x0024 (0x00A4 - 0x00C8)
class UScriptStruct : public UStruct
{
public:
	uint8_t                                            UnknownData00[0x24];                            // 0x00A4 (0x0024) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ScriptStruct");
		}

		return uClassPointer;
	};

};
// Class Core.Function
// 0x0020 (0x00A4 - 0x00C4)
class UFunction : public UStruct
{
public:
	uint32_t FunctionFlags; // 0x00A4 (0x0004)
	uint16_t iNative; // 0x00A8 (0x0002)
	uint8_t UnknownData00[0x12];// 0x00AA (0x0012) DYNAMIC FIELD PADDING
	void* Func; // 0x00BC (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Function");
		}

		return uClassPointer;
	};

	static UFunction* FindFunction(const std::string& functionFullName);
};
// Class Core.Property
// 0x0038 (0x005C - 0x0094)
class UProperty : public UField
{
public:
	int32_t ArrayDim; // 0x005C (0x0004)
	uint64_t PropertyFlags; // 0x0060 (0x0008)
	uint16_t ElementSize; // 0x0068 (0x0002)
	uint16_t Offset; // 0x006A (0x0002)
	uint8_t UnknownData00[0x28];// 0x006C (0x0028) DYNAMIC FIELD PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Property");
		}

		return uClassPointer;
	};

};
// Class Core.StructProperty
// 0x0008 (0x0094 - 0x009C)
class UStructProperty : public UProperty
{
public:
	class UStruct* Struct; // 0x0094 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StructProperty");
		}

		return uClassPointer;
	};

};
// Class Core.StrProperty
// 0x0000 (0x0094 - 0x0094)
class UStrProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StrProperty");
		}

		return uClassPointer;
	};

};
// Class Core.ObjectProperty
// 0x0008 (0x0094 - 0x009C)
class UObjectProperty : public UProperty
{
public:
	class UClass* PropertyClass; // 0x0094 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectProperty");
		}

		return uClassPointer;
	};

};
// Class Core.ComponentProperty
// 0x0000 (0x009C - 0x009C)
class UComponentProperty : public UObjectProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ComponentProperty");
		}

		return uClassPointer;
	};

};
// Class Core.ClassProperty
// 0x0008 (0x009C - 0x00A4)
class UClassProperty : public UObjectProperty
{
public:
	class UClass* MetaClass; // 0x009C (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ClassProperty");
		}

		return uClassPointer;
	};

};
// Class Core.NameProperty
// 0x0000 (0x0094 - 0x0094)
class UNameProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.NameProperty");
		}

		return uClassPointer;
	};

};
// Class Core.MapProperty
// 0x0010 (0x0094 - 0x00A4)
class UMapProperty : public UProperty
{
public:
	class UProperty* Key; // 0x0094 (0x0008)
	class UProperty* Value; // 0x009C (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.MapProperty");
		}

		return uClassPointer;
	};

};
// Class Core.IntProperty
// 0x0000 (0x0094 - 0x0094)
class UIntProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.IntProperty");
		}

		return uClassPointer;
	};

};
// Class Core.InterfaceProperty
// 0x0008 (0x0094 - 0x009C)
class UInterfaceProperty : public UProperty
{
public:
	class UClass* InterfaceClass; // 0x0094 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.InterfaceProperty");
		}

		return uClassPointer;
	};

};
// Class Core.FloatProperty
// 0x0000 (0x0094 - 0x0094)
class UFloatProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.FloatProperty");
		}

		return uClassPointer;
	};

};
// Class Core.DelegateProperty
// 0x0010 (0x0094 - 0x00A4)
class UDelegateProperty : public UProperty
{
public:
	uint8_t                                            UnknownData00[0x10];                            // 0x0094 (0x0010) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DelegateProperty");
		}

		return uClassPointer;
	};

};
// Class Core.ByteProperty
// 0x0008 (0x0094 - 0x009C)
class UByteProperty : public UProperty
{
public:
	class UEnum* Enum; // 0x0094 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ByteProperty");
		}

		return uClassPointer;
	};

};
// Class Core.BoolProperty
// 0x0004 (0x0094 - 0x0098)
class UBoolProperty : public UProperty
{
public:
	uint32_t BitMask; // 0x0094 (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.BoolProperty");
		}

		return uClassPointer;
	};

};
// Class Core.ArrayProperty
// 0x0008 (0x0094 - 0x009C)
class UArrayProperty : public UProperty
{
public:
	class UProperty* Inner; // 0x0094 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ArrayProperty");
		}

		return uClassPointer;
	};

};
// Class Core.Enum
// 0x0010 (0x005C - 0x006C)
class UEnum : public UField
{
public:
	class TArray<class FName> Names; // 0x005C (0x0010)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Enum");
		}

		return uClassPointer;
	};

};
// Class Core.Const
// 0x0010 (0x005C - 0x006C)
class UConst : public UField
{
public:
	class FString Value; // 0x005C (0x0010)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Const");
		}

		return uClassPointer;
	};

};
// Class Core.Factory
// 0x0048 (0x0054 - 0x009C)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                // 0x0054 (0x0008) [0x0000000000000000]               
	class UClass*                                      ContextClass;                                  // 0x005C (0x0008) [0x0000000000000000]               
	class FString                                      Description;                                   // 0x0064 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Formats;                                       // 0x0074 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint32_t                                           bCreateNew : 1;                                // 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEditAfterNew : 1;                             // 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEditorImport : 1;                             // 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bText : 1;                                     // 0x0084 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           ExcludeFromAutoImport : 1;                     // 0x0084 (0x0004) [0x0000000000000000] [0x00000010] 
	int32_t                                            AutoPriority;                                  // 0x0088 (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        ValidGameNames;                                // 0x008C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Factory");
		}

		return uClassPointer;
	};

};
// Class Core.TextBufferFactory
// 0x0000 (0x009C - 0x009C)
class UTextBufferFactory : public UFactory
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TextBufferFactory");
		}

		return uClassPointer;
	};

};
// Class Core.Exporter
// 0x0034 (0x0054 - 0x0088)
class UExporter : public UObject
{
public:
	uint8_t                                            UnknownData00[0x8];                              // 0x0054 (0x0008) MISSED OFFSET
	class TArray<class FString>                        FormatExtension;                               // 0x005C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	class TArray<class FString>                        FormatDescription;                             // 0x006C (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	uint8_t                                            UnknownData01[0xC];                              // 0x007C (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Exporter");
		}

		return uClassPointer;
	};

};
// Class Core.Component
// 0x0010 (0x0054 - 0x0064)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                            // 0x0054 (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)
	class FName                                        TemplateName;                                  // 0x005C (0x0008) [0x0000000000000201] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Component");
		}

		return uClassPointer;
	};

};
// Class Core.DistributionVector
// 0x000C (0x0064 - 0x0070)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                     // 0x0064 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bCanBeBaked : 1;                               // 0x006C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsDirty : 1;                                  // 0x006C (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DistributionVector");
		}

		return uClassPointer;
	};


	struct FVector GetVectorValue(float optionalF, int32_t optionalLastExtreme);
};
// Class Core.DistributionFloat
// 0x000C (0x0064 - 0x0070)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                     // 0x0064 (0x0008) [0x0000000000020201] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bCanBeBaked : 1;                               // 0x006C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsDirty : 1;                                  // 0x006C (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DistributionFloat");
		}

		return uClassPointer;
	};


	float GetFloatValue(float optionalF);
};
// Class Core.Commandlet
// 0x0054 (0x0054 - 0x00A8)
class UCommandlet : public UObject
{
public:
	class FString                                      HelpDescription;                               // 0x0054 (0x0010) [0x0000100000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink | CPF_NotForConsole)
	class FString                                      HelpUsage;                                     // 0x0064 (0x0010) [0x0000100000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink | CPF_NotForConsole)
	class FString                                      HelpWebLink;                                   // 0x0074 (0x0010) [0x0000100000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink | CPF_NotForConsole)
	class TArray<class FString>                        HelpParamNames;                                // 0x0084 (0x0010) [0x0000100000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink | CPF_NotForConsole)
	class TArray<class FString>                        HelpParamDescriptions;                         // 0x0094 (0x0010) [0x0000100000011001] (CPF_Const | CPF_Localized | CPF_NeedCtorLink | CPF_NotForConsole)
	uint32_t                                           IsServer : 1;                                  // 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsClient : 1;                                  // 0x00A4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           IsEditor : 1;                                  // 0x00A4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           LogToConsole : 1;                              // 0x00A4 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           ShowErrorCount : 1;                            // 0x00A4 (0x0004) [0x0000000000000000] [0x00000010] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Commandlet");
		}

		return uClassPointer;
	};


	int32_t eventMain(const class FString& Params);
};
// Class Core.HelpCommandlet
// 0x0000 (0x00A8 - 0x00A8)
class UHelpCommandlet : public UCommandlet
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.HelpCommandlet");
		}

		return uClassPointer;
	};


	int32_t eventMain(const class FString& Params);
};
// Class Core.State
// 0x0050 (0x00A4 - 0x00F4)
class UState : public UStruct
{
public:
	uint8_t                                            UnknownData00[0x50];                            // 0x00A4 (0x0050) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.State");
		}

		return uClassPointer;
	};

};
// Class Core.Package
// 0x00A0 (0x0054 - 0x00F4)
class UPackage : public UObject
{
public:
	uint8_t                                            UnknownData00[0xA0];                            // 0x0054 (0x00A0) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Package");
		}

		return uClassPointer;
	};

};
// Class Core.Class
// 0x0150 (0x00F4 - 0x0244)
class UClass : public UState
{
public:
	uint8_t                                            UnknownData00[0x150];                          // 0x00F4 (0x0150) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Class");
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
