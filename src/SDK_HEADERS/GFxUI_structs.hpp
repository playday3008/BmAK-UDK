/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: GFxUI_structs.hpp
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

// ScriptStruct GFxUI.GFxMoviePlayer.SoundThemeBinding
// 0x0020
struct FSoundThemeBinding
{
	class FName                                        ThemeName;                                     // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UUISoundTheme*                               Theme;                                         // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class FString                                      ThemeClassName;                                // 0x0010 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GFxUI.GFxMoviePlayer.ASValue
// 0x0020
struct FASValue
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           B : 1;                                         // 0x0004 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	float                                              N;                                             // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	int32_t                                            I;                                             // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	class FString                                      S;                                             // 0x0010 (0x0010) [0x0000020100010000] (CPF_Edit | CPF_AlwaysInit | CPF_NeedCtorLink)
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxWidgetBinding
// 0x0010
struct FGFxWidgetBinding
{
	class FName                                        WidgetName;                                    // 0x0000 (0x0008) [0x0000000100000000] (CPF_Edit)    
	class UClass*                                      WidgetClass;                                   // 0x0008 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct GFxUI.GFxMoviePlayer.ExternalTexture
// 0x0018
struct FExternalTexture
{
	class FString                                      Resource;                                      // 0x0000 (0x0010) [0x0000000100010000] (CPF_Edit | CPF_NeedCtorLink)
	class UTexture*                                    Texture;                                       // 0x0010 (0x0008) [0x0000000100000000] (CPF_Edit)    
};

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x0010
struct FGCReference
{
	class UObject*                                     m_object;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Const)   
	int32_t                                            m_count;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            m_statid;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct GFxUI.GFxObject.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Z;                                             // 0x0008 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Rotation;                                      // 0x000C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              XRotation;                                     // 0x0010 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              YRotation;                                     // 0x0014 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              XScale;                                        // 0x0018 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              YScale;                                        // 0x001C (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              ZScale;                                        // 0x0020 (0x0004) [0x0000000100000000] (CPF_Edit)    
	float                                              Alpha;                                         // 0x0024 (0x0004) [0x0000000100000000] (CPF_Edit)    
	uint32_t                                           Visible : 1;                                   // 0x0028 (0x0004) [0x0000000100000000] [0x00000001] (CPF_Edit)
	uint32_t                                           hasX : 1;                                      // 0x0028 (0x0004) [0x0000000100000000] [0x00000002] (CPF_Edit)
	uint32_t                                           hasY : 1;                                      // 0x0028 (0x0004) [0x0000000100000000] [0x00000004] (CPF_Edit)
	uint32_t                                           hasZ : 1;                                      // 0x0028 (0x0004) [0x0000000100000000] [0x00000008] (CPF_Edit)
	uint32_t                                           hasRotation : 1;                               // 0x0028 (0x0004) [0x0000000100000000] [0x00000010] (CPF_Edit)
	uint32_t                                           hasXRotation : 1;                              // 0x0028 (0x0004) [0x0000000100000000] [0x00000020] (CPF_Edit)
	uint32_t                                           hasYRotation : 1;                              // 0x0028 (0x0004) [0x0000000100000000] [0x00000040] (CPF_Edit)
	uint32_t                                           hasXScale : 1;                                 // 0x0028 (0x0004) [0x0000000100000000] [0x00000080] (CPF_Edit)
	uint32_t                                           hasYScale : 1;                                 // 0x0028 (0x0004) [0x0000000100000000] [0x00000100] (CPF_Edit)
	uint32_t                                           hasZScale : 1;                                 // 0x0028 (0x0004) [0x0000000100000000] [0x00000200] (CPF_Edit)
	uint32_t                                           hasAlpha : 1;                                  // 0x0028 (0x0004) [0x0000000100000000] [0x00000400] (CPF_Edit)
	uint32_t                                           hasVisible : 1;                                // 0x0028 (0x0004) [0x0000000100000000] [0x00000800] (CPF_Edit)
};

// ScriptStruct GFxUI.GFxObject.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                      // 0x0000 (0x0010) [0x0000000100000000] (CPF_Edit)    
	struct FLinearColor                                Add;                                           // 0x0010 (0x0010) [0x0000000100000000] (CPF_Edit)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
