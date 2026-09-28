/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: AkAudio_structs.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#include "../GameDefines.hpp"

#include "Engine_structs.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct AkAudio.AkAudioVolume.SwitchModifierPair
// 0x0010
struct FSwitchModifierPair
{
	class UAkSwitchName*                               TouchInSwitch;                                 // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkSwitchName*                               TouchOutSwitch;                                // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct AkAudio.AkAudioVolume.ParameterModifierPair
// 0x0010
struct FParameterModifierPair
{
	class UAkParameterName*                            Parameter;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              TouchInValue;                                  // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              TouchOutValue;                                 // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct AkAudio.AkAudioVolume.TouchingActorInfo
// 0x000C
struct FTouchingActorInfo
{
	class AActor*                                      TouchingActor;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bTouchingFlag : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct AkAudio.AkAudioVolume.OverlappingVolumeInfo
// 0x0028
struct FOverlappingVolumeInfo
{
	class AAkAudioVolume*                              OverlappingVolume;                             // 0x0000 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	uint8_t                                            OverlapX;                                      // 0x0008 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            OverlapY;                                      // 0x0009 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint8_t                                            OverlapZ;                                      // 0x000A (0x0001) [0x0000000100000000] (CPF_Edit)    
	struct FBox                                        OverlapBox;                                    // 0x000C (0x001C) [0x0000000100000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct AkAudio.AkAudioVolume.AkAxisParameter
// 0x0010
struct FAkAxisParameter
{
	float                                              High;                                          // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Low;                                           // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Mid;                                           // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           bEnabled : 1;                                  // 0x000C (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
};

// ScriptStruct AkAudio.AkManagedEmitter.AkManagedEmitterItem
// 0x000C
struct FAkManagedEmitterItem
{
	class UAkEvent*                                    EmitterEvent;                                  // 0x0000 (0x0008) [0x0000000100000001] (CPF_Edit | CPF_Const)
	int32_t                                            Weighting;                                     // 0x0008 (0x0004) [0x0000000100000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct AkAudio.AkMultipointEmitter.APME
// 0x001C
struct FAPME
{
	int32_t                                            EvId;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              MultipointIds;                                 // 0x0004 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              Audibility;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAdditive : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct AkAudio.AkSDNode.Variables
// 0x0024
struct FVariables
{
	class UAkSDNode*                                   Entity;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Text;                                          // 0x0008 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	int32_t                                            Types;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	class UAkSDNodeDrawInfo*                           Ed;                                            // 0x001C (0x0008) [0x0000080000000000] (CPF_EditorOnly)
};

// ScriptStruct AkAudio.AkSDRelationshipDiagram.NodeEditorData
// 0x0008
struct FNodeEditorData
{
	int32_t                                            NodePosX;                                      // 0x0000 (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
	int32_t                                            NodePosY;                                      // 0x0004 (0x0004) [0x0000000000000201] (CPF_Const | CPF_Native)
};

// ScriptStruct AkAudio.AkWhoosh.WhooshBy
// 0x001C
struct FWhooshBy
{
	uint32_t                                           IsVehicle : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           IsGliding : 1;                                 // 0x0000 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	float                                              VelocityOfTarget;                              // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              DistanceToTrigger;                             // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    EventToPlay;                                   // 0x000C (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UAkEvent*                                    EventToPlayOnExit;                             // 0x0014 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x0010
struct FAkEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class UAkEvent*                                    Event;                                         // 0x0004 (0x0008) [0x0000000100000000] (CPF_Edit)    
	float                                              WwiseDuration;                                 // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.InterpTrackAkEditorOnlyWav.AkEditorOnlyWavKey
// 0x0014
struct FAkEditorOnlyWavKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Filename;                                      // 0x0004 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct AkAudio.InterpTrackAkEditorOnlyWav.AkEditorOnlyWav
// 0x0014
struct FAkEditorOnlyWav
{
	struct FPointer                                    WavMemory;                                     // 0x0000 (0x0008) [0x0000000000000200] (CPF_Native)  
	int32_t                                            WavSize;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	struct FPointer                                    WavModInfo;                                    // 0x000C (0x0008) [0x0000000000000200] (CPF_Native)  
};

// ScriptStruct AkAudio.InterpTrackInstAkEditorOnlyWav.AkWavData
// 0x0034
struct FAkWavData
{
	int32_t                                            PlayingID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            SampleRate;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Channels;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            NumberOfSamples;                               // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            BitsPerSample;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentSample;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	struct FPointer                                    SampleBuffer;                                  // 0x0018 (0x0008) [0x0000000000000200] (CPF_Native)  
	class FString                                      Filename;                                      // 0x0020 (0x0010) [0x0000000000010000] (CPF_NeedCtorLink)
	float                                              StartTime;                                     // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.SeqAct_AkAudioParameter.SeqAct_AkAudioParameterInterpolationInfo
// 0x0010
struct FSeqAct_AkAudioParameterInterpolationInfo
{
	class AActor*                                      InterpolationParameterTarget;                  // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              InterpolationStartValue;                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              InterpolationEndValue;                         // 0x000C (0x0004) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
