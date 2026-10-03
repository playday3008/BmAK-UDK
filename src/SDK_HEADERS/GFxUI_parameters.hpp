/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: GFxUI_parameters.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#pragma once

#include "GFxUI_structs.hpp"

#include "Engine_parameters.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Parameters
# ========================================================================================= #
*/

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] 
struct UGFxFSCmdHandler_eventFSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UGFxEvent_FSCommand*                         Event;                                            // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Cmd;                                              // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Arg;                                              // 0x0020 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxFSCmdHandler_eventFSCommand_Params, ReturnValue) == 0x0030);
static_assert(sizeof(UGFxFSCmdHandler_eventFSCommand_Params) >= 0x0034);

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020401] 
struct UGFxInteraction_execCloseAllMoviePlayers_Params
{
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020401] 
struct UGFxInteraction_execNotifySplitscreenLayoutChanged_Params
{
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] 
struct UGFxInteraction_execNotifyPlayerRemoved_Params
{
	int32_t                                            PlayerIndex;                                      // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class ULocalPlayer*                                RemovedPlayer;                                    // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxInteraction_execNotifyPlayerRemoved_Params, RemovedPlayer) == 0x0004);
static_assert(sizeof(UGFxInteraction_execNotifyPlayerRemoved_Params) >= 0x000C);

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400] 
struct UGFxInteraction_execNotifyPlayerAdded_Params
{
	int32_t                                            PlayerIndex;                                      // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class ULocalPlayer*                                AddedPlayer;                                      // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxInteraction_execNotifyPlayerAdded_Params, AddedPlayer) == 0x0004);
static_assert(sizeof(UGFxInteraction_execNotifyPlayerAdded_Params) >= 0x000C);

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] 
struct UGFxInteraction_execNotifyGameSessionEnded_Params
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020401] 
struct UGFxInteraction_execGetFocusMovie_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class UGFxMoviePlayer*                             ReturnValue;                                      // 0x0004 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxInteraction_execGetFocusMovie_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UGFxInteraction_execGetFocusMovie_Params) >= 0x000C);

// Function GFxUI.GFxMoviePlayer.GetFilename
// [0x00020400] 
struct UGFxMoviePlayer_execGetFilename_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxMoviePlayer_execGetFilename_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execGetFilename_Params) >= 0x0010);

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020401] 
struct UGFxMoviePlayer_execUpdateSplitscreenLayout_Params
{
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x00020000] 
struct UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Params
{
	uint32_t                                           bRemoveEffect;                                    // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Params, bRemoveEffect) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x00020000] 
struct UGFxMoviePlayer_execApplyPriorityBlurEffect_Params
{
	uint32_t                                           bRemoveEffect;                                    // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execApplyPriorityBlurEffect_Params, bRemoveEffect) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execApplyPriorityBlurEffect_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x00020803] 
struct UGFxMoviePlayer_eventApplyPriorityEffect_Params
{
	uint32_t                                           bRequestedBlurState;                              // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           bRequestedHiddenState;                            // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_eventApplyPriorityEffect_Params, bRequestedHiddenState) == 0x0004);
static_assert(sizeof(UGFxMoviePlayer_eventApplyPriorityEffect_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// [0x00024003] 
struct UGFxMoviePlayer_execPlaySoundFromThemeWin_Params
{
	class FName                                        EventName;                                        // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FName                                        SoundThemeName;                                   // 0x0008 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                         ThemeIndex;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	// class UUISoundTheme*                            Theme;                                            // 0x0014 (0x0008) [0x0000000000000000]               
};
static_assert(offsetof(UGFxMoviePlayer_execPlaySoundFromThemeWin_Params, SoundThemeName) == 0x0008);
static_assert(sizeof(UGFxMoviePlayer_execPlaySoundFromThemeWin_Params) >= 0x0010);

// Function GFxUI.GFxMoviePlayer.OnAspectRatioChanged
// [0x00020800] 
struct UGFxMoviePlayer_eventOnAspectRatioChanged_Params
{
	float                                              NewRatio;                                         // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_eventOnAspectRatioChanged_Params, NewRatio) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_eventOnAspectRatioChanged_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00020800] 
struct UGFxMoviePlayer_eventOnFocusLost_Params
{
	int32_t                                            LocalPlayerIndex;                                 // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_eventOnFocusLost_Params, LocalPlayerIndex) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_eventOnFocusLost_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00020800] 
struct UGFxMoviePlayer_eventOnFocusGained_Params
{
	int32_t                                            LocalPlayerIndex;                                 // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_eventOnFocusGained_Params, LocalPlayerIndex) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_eventOnFocusGained_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020003] 
struct UGFxMoviePlayer_execConsoleCommand_Params
{
	class FString                                      Command;                                          // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	// class APlayerController*                        PC;                                               // 0x0010 (0x0008) [0x0000000000000000]               
};
static_assert(offsetof(UGFxMoviePlayer_execConsoleCommand_Params, Command) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execConsoleCommand_Params) >= 0x0010);

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020802] 
struct UGFxMoviePlayer_eventGetPC_Params
{
	class APlayerController*                           ReturnValue;                                      // 0x0000 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class ULocalPlayer*                             LocalPlayerOwner;                                 // 0x0008 (0x0008) [0x0000000000000000]               
};
static_assert(offsetof(UGFxMoviePlayer_eventGetPC_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_eventGetPC_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020802] 
struct UGFxMoviePlayer_eventGetLP_Params
{
	class ULocalPlayer*                                ReturnValue;                                      // 0x0000 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UEngine*                                  Eng;                                              // 0x0008 (0x0008) [0x0000000000000000]               
};
static_assert(offsetof(UGFxMoviePlayer_eventGetLP_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_eventGetLP_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024002] 
struct UGFxMoviePlayer_execInit_Params
{
	class ULocalPlayer*                                LocPlay;                                          // 0x0000 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execInit_Params, LocPlay) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execInit_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] 
struct UGFxMoviePlayer_execSetWidgetPathBinding_Params
{
	class UGFxObject*                                  WidgetToBind;                                     // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FName                                        Path;                                             // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetWidgetPathBinding_Params, Path) == 0x0008);
static_assert(sizeof(UGFxMoviePlayer_execSetWidgetPathBinding_Params) >= 0x0010);

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020800] 
struct UGFxMoviePlayer_eventPostWidgetInit_Params
{
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020800] 
struct UGFxMoviePlayer_eventWidgetUnloaded_Params
{
	class FName                                        WidgetName;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FName                                        WidgetPath;                                       // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           // 0x0010 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_eventWidgetUnloaded_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UGFxMoviePlayer_eventWidgetUnloaded_Params) >= 0x001C);

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020800] 
struct UGFxMoviePlayer_eventWidgetInitialized_Params
{
	class FName                                        WidgetName;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FName                                        WidgetPath;                                       // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           // 0x0010 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_eventWidgetInitialized_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UGFxMoviePlayer_eventWidgetInitialized_Params) >= 0x001C);

// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptConstructor_Params
{
	class FString                                      ClassName;                                        // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      // 0x0010 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execActionScriptConstructor_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execActionScriptConstructor_Params) >= 0x0018);

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptObject_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      // 0x0010 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execActionScriptObject_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execActionScriptObject_Params) >= 0x0018);

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptString_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxMoviePlayer_execActionScriptString_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execActionScriptString_Params) >= 0x0020);

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptFloat_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execActionScriptFloat_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execActionScriptFloat_Params) >= 0x0014);

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptInt_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execActionScriptInt_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execActionScriptInt_Params) >= 0x0014);

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00020401] 
struct UGFxMoviePlayer_execActionScriptVoid_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxMoviePlayer_execActionScriptVoid_Params, Path) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execActionScriptVoid_Params) >= 0x0010);

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020401] 
struct UGFxMoviePlayer_execInvoke_Params
{
	class FString                                      method;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FASValue>                      args;                                             // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      // 0x0020 (0x0020) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxMoviePlayer_execInvoke_Params, ReturnValue) == 0x0020);
static_assert(sizeof(UGFxMoviePlayer_execInvoke_Params) >= 0x0040);

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] 
struct UGFxMoviePlayer_execActionScriptSetFunction_Params
{
	class UGFxObject*                                  Object;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxMoviePlayer_execActionScriptSetFunction_Params, Member) == 0x0008);
static_assert(sizeof(UGFxMoviePlayer_execActionScriptSetFunction_Params) >= 0x0018);

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020401] 
struct UGFxMoviePlayer_execCreateArray_Params
{
	class UGFxObject*                                  ReturnValue;                                      // 0x0000 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execCreateArray_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execCreateArray_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024401] 
struct UGFxMoviePlayer_execCreateObject_Params
{
	class FString                                      ASClass;                                          // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      Type;                                             // 0x0010 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class TArray<struct FASValue>                      args;                                             // 0x0018 (0x0010) [0x0000000000010018] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      // 0x0028 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execCreateObject_Params, ReturnValue) == 0x0028);
static_assert(sizeof(UGFxMoviePlayer_execCreateObject_Params) >= 0x0030);

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableStringArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<class FString>                        Arg;                                              // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetVariableStringArray_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UGFxMoviePlayer_execSetVariableStringArray_Params) >= 0x0028);

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableFloatArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<float>                                Arg;                                              // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetVariableFloatArray_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UGFxMoviePlayer_execSetVariableFloatArray_Params) >= 0x0028);

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableIntArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<int32_t>                              Arg;                                              // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetVariableIntArray_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UGFxMoviePlayer_execSetVariableIntArray_Params) >= 0x0028);

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<struct FASValue>                      Arg;                                              // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetVariableArray_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UGFxMoviePlayer_execSetVariableArray_Params) >= 0x0028);

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420401] 
struct UGFxMoviePlayer_execGetVariableStringArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<class FString>                        Arg;                                              // 0x0014 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVariableStringArray_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UGFxMoviePlayer_execGetVariableStringArray_Params) >= 0x0028);

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420401] 
struct UGFxMoviePlayer_execGetVariableFloatArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<float>                                Arg;                                              // 0x0014 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVariableFloatArray_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UGFxMoviePlayer_execGetVariableFloatArray_Params) >= 0x0028);

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420401] 
struct UGFxMoviePlayer_execGetVariableIntArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<int32_t>                              Arg;                                              // 0x0014 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVariableIntArray_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UGFxMoviePlayer_execGetVariableIntArray_Params) >= 0x0028);

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420401] 
struct UGFxMoviePlayer_execGetVariableArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class TArray<struct FASValue>                      Arg;                                              // 0x0014 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0024 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVariableArray_Params, ReturnValue) == 0x0024);
static_assert(sizeof(UGFxMoviePlayer_execGetVariableArray_Params) >= 0x0028);

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableObject_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Object;                                           // 0x0010 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetVariableObject_Params, Object) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execSetVariableObject_Params) >= 0x0018);

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableString_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      S;                                                // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxMoviePlayer_execSetVariableString_Params, S) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execSetVariableString_Params) >= 0x0020);

// Function GFxUI.GFxMoviePlayer.SetVariableInt
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableInt_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            I;                                                // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetVariableInt_Params, I) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execSetVariableInt_Params) >= 0x0014);

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableNumber_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              F;                                                // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetVariableNumber_Params, F) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execSetVariableNumber_Params) >= 0x0014);

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariableBool_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           B;                                                // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetVariableBool_Params, B) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execSetVariableBool_Params) >= 0x0014);

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020401] 
struct UGFxMoviePlayer_execSetVariable_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                              // 0x0010 (0x0020) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxMoviePlayer_execSetVariable_Params, Arg) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execSetVariable_Params) >= 0x0030);

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024401] 
struct UGFxMoviePlayer_execGetVariableObject_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      Type;                                             // 0x0010 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x0018 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVariableObject_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UGFxMoviePlayer_execGetVariableObject_Params) >= 0x0020);

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020401] 
struct UGFxMoviePlayer_execGetVariableString_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVariableString_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execGetVariableString_Params) >= 0x0020);

// Function GFxUI.GFxMoviePlayer.GetVariableInt
// [0x00020401] 
struct UGFxMoviePlayer_execGetVariableInt_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVariableInt_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execGetVariableInt_Params) >= 0x0014);

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020401] 
struct UGFxMoviePlayer_execGetVariableNumber_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVariableNumber_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execGetVariableNumber_Params) >= 0x0014);

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020401] 
struct UGFxMoviePlayer_execGetVariableBool_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVariableBool_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execGetVariableBool_Params) >= 0x0014);

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020401] 
struct UGFxMoviePlayer_execGetVariable_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      // 0x0010 (0x0020) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVariable_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_execGetVariable_Params) >= 0x0030);

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020401] 
struct UGFxMoviePlayer_execGetAVMVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetAVMVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execGetAVMVersion_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00020800] 
struct UGFxMoviePlayer_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FName                                        ButtonName;                                       // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       // 0x000C (0x0001) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0x3];                               // 0x000D (0x0003) MISSED OFFSET
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_eventFilterButtonInput_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxMoviePlayer_eventFilterButtonInput_Params) >= 0x0014);

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] 
struct UGFxMoviePlayer_execFlushPlayerInput_Params
{
	uint32_t                                           capturekeysonly;                                  // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execFlushPlayerInput_Params, capturekeysonly) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execFlushPlayerInput_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] 
struct UGFxMoviePlayer_execClearFocusIgnoreKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] 
struct UGFxMoviePlayer_execAddFocusIgnoreKey_Params
{
	class FName                                        Key;                                              // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execAddFocusIgnoreKey_Params, Key) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execAddFocusIgnoreKey_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] 
struct UGFxMoviePlayer_execClearCaptureKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] 
struct UGFxMoviePlayer_execAddCaptureKey_Params
{
	class FName                                        Key;                                              // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execAddCaptureKey_Params, Key) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execAddCaptureKey_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] 
struct UGFxMoviePlayer_execSetMovieCanReceiveInput_Params
{
	uint32_t                                           bCanReceiveInput;                                 // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetMovieCanReceiveInput_Params, bCanReceiveInput) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetMovieCanReceiveInput_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] 
struct UGFxMoviePlayer_execSetMovieCanReceiveFocus_Params
{
	uint32_t                                           bCanReceiveFocus;                                 // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetMovieCanReceiveFocus_Params, bCanReceiveFocus) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetMovieCanReceiveFocus_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.SetFocus
// [0x00024401] 
struct UGFxMoviePlayer_execSetFocus_Params
{
	uint32_t                                           CaptureInput;                                     // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
	uint32_t                                           Focus;                                            // 0x0004 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetFocus_Params, Focus) == 0x0004);
static_assert(sizeof(UGFxMoviePlayer_execSetFocus_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.GetStickMagAng
// [0x00020401] 
struct UGFxMoviePlayer_execGetStickMagAng_Params
{
	int32_t                                            Stick;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      // 0x0004 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetStickMagAng_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UGFxMoviePlayer_execGetStickMagAng_Params) >= 0x000C);

// Function GFxUI.GFxMoviePlayer.HasFocus
// [0x00020401] 
struct UGFxMoviePlayer_execHasFocus_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execHasFocus_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execHasFocus_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.SetSceneDPG
// [0x00020401] 
struct UGFxMoviePlayer_execSetSceneDPG_Params
{
	uint8_t                                            NewDPG;                                           // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetSceneDPG_Params, NewDPG) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetSceneDPG_Params) >= 0x0001);

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] 
struct UGFxMoviePlayer_execSetPerspective3D_Params
{
	struct FMatrix                                     matPersp;                                         // 0x0000 (0x0040) [0x0000000000000029] (CPF_Const | CPF_Parm | CPF_OutParm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetPerspective3D_Params, matPersp) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetPerspective3D_Params) >= 0x0040);

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] 
struct UGFxMoviePlayer_execSetView3D_Params
{
	struct FMatrix                                     matView;                                          // 0x0000 (0x0040) [0x0000000000000029] (CPF_Const | CPF_Parm | CPF_OutParm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetView3D_Params, matView) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetView3D_Params) >= 0x0040);

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] 
struct UGFxMoviePlayer_execGetVisibleFrameRect_Params
{
	float                                              x0;                                               // 0x0000 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	float                                              y0;                                               // 0x0004 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	float                                              X1;                                               // 0x0008 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	float                                              Y1;                                               // 0x000C (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetVisibleFrameRect_Params, Y1) == 0x000C);
static_assert(sizeof(UGFxMoviePlayer_execGetVisibleFrameRect_Params) >= 0x0010);

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] 
struct UGFxMoviePlayer_execSetAlignment_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetAlignment_Params, A) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetAlignment_Params) >= 0x0001);

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401] 
struct UGFxMoviePlayer_execSetViewScaleMode_Params
{
	uint8_t                                            SM;                                               // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetViewScaleMode_Params, SM) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetViewScaleMode_Params) >= 0x0001);

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] 
struct UGFxMoviePlayer_execSetViewport_Params
{
	int32_t                                            X;                                                // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            Y;                                                // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            Width;                                            // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            Height;                                           // 0x000C (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetViewport_Params, Height) == 0x000C);
static_assert(sizeof(UGFxMoviePlayer_execSetViewport_Params) >= 0x0010);

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] 
struct UGFxMoviePlayer_execGetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                      // 0x0000 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetGameViewportClient_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execGetGameViewportClient_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020401] 
struct UGFxMoviePlayer_execSetPriority_Params
{
	uint8_t                                            NewPriority;                                      // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetPriority_Params, NewPriority) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetPriority_Params) >= 0x0001);

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00020401] 
struct UGFxMoviePlayer_execSetExternalTexture_Params
{
	class FString                                      Resource;                                         // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    Texture;                                          // 0x0010 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetExternalTexture_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UGFxMoviePlayer_execSetExternalTexture_Params) >= 0x001C);

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020003] 
struct UGFxMoviePlayer_execSetExternalInterface_Params
{
	class UObject*                                     H;                                                // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetExternalInterface_Params, H) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetExternalInterface_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020401] 
struct UGFxMoviePlayer_execSetTimingMode_Params
{
	uint8_t                                            Mode;                                             // 0x0000 (0x0001) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetTimingMode_Params, Mode) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetTimingMode_Params) >= 0x0001);

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020003] 
struct UGFxMoviePlayer_execSetMovieInfo_Params
{
	class USwfMovie*                                   Data;                                             // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetMovieInfo_Params, Data) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetMovieInfo_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] 
struct UGFxMoviePlayer_eventConditionalClearPause_Params
{
	// class ULocalPlayer*                             LP;                                               // 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GFxUI.GFxMoviePlayer.SetViewportSplitscreenIndex
// [0x00020401] 
struct UGFxMoviePlayer_execSetViewportSplitscreenIndex_Params
{
	int32_t                                            _ViewportSplitscreenIndex;                        // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execSetViewportSplitscreenIndex_Params, _ViewportSplitscreenIndex) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetViewportSplitscreenIndex_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.GetFocusMovie
// [0x00020401] 
struct UGFxMoviePlayer_execGetFocusMovie_Params
{
	class UGFxMoviePlayer*                             ReturnValue;                                      // 0x0000 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_execGetFocusMovie_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execGetFocusMovie_Params) >= 0x0008);

// Function GFxUI.GFxMoviePlayer.UpdateGamePadStatus
// [0x00020401] 
struct UGFxMoviePlayer_execUpdateGamePadStatus_Params
{
	uint32_t                                           bIsNotUsingGamePad;                               // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execUpdateGamePadStatus_Params, bIsNotUsingGamePad) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execUpdateGamePadStatus_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.OnOutroClose
// [0x00020C00] 
struct UGFxMoviePlayer_eventOnOutroClose_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x00020800] 
struct UGFxMoviePlayer_eventOnCleanup_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] 
struct UGFxMoviePlayer_eventOnClose_Params
{
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024400] 
struct UGFxMoviePlayer_execClose_Params
{
	uint32_t                                           Unload;                                           // 0x0000 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execClose_Params, Unload) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execClose_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024401] 
struct UGFxMoviePlayer_execSetPause_Params
{
	uint32_t                                           bPausePlayback;                                   // 0x0000 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(UGFxMoviePlayer_execSetPause_Params, bPausePlayback) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execSetPause_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] 
struct UGFxMoviePlayer_execOnPostAdvance_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execOnPostAdvance_Params, DeltaTime) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execOnPostAdvance_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020401] 
struct UGFxMoviePlayer_execPostAdvance_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execPostAdvance_Params, DeltaTime) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execPostAdvance_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] 
struct UGFxMoviePlayer_execAdvance_Params
{
	float                                              Time;                                             // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxMoviePlayer_execAdvance_Params, Time) == 0x0000);
static_assert(sizeof(UGFxMoviePlayer_execAdvance_Params) >= 0x0004);

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] 
struct UGFxMoviePlayer_eventStart_Params
{
	uint32_t                                           StartPaused;                                      // 0x0000 (0x0004) [0x0000000000000018] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxMoviePlayer_eventStart_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UGFxMoviePlayer_eventStart_Params) >= 0x0008);

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020800] 
struct UGFxObject_eventWidgetUnloaded_Params
{
	class FName                                        WidgetName;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FName                                        WidgetPath;                                       // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           // 0x0010 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_eventWidgetUnloaded_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UGFxObject_eventWidgetUnloaded_Params) >= 0x001C);

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020800] 
struct UGFxObject_eventWidgetInitialized_Params
{
	class FName                                        WidgetName;                                       // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FName                                        WidgetPath;                                       // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           // 0x0010 (0x0008) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0018 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_eventWidgetInitialized_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UGFxObject_eventWidgetInitialized_Params) >= 0x001C);

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] 
struct UGFxObject_execAttachMovie_Params
{
	class FString                                      symbolname;                                       // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      instancename;                                     // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Depth;                                            // 0x0020 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class UClass*                                      Type;                                             // 0x0024 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x002C (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execAttachMovie_Params, ReturnValue) == 0x002C);
static_assert(sizeof(UGFxObject_execAttachMovie_Params) >= 0x0034);

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] 
struct UGFxObject_execCreateEmptyMovieClip_Params
{
	class FString                                      instancename;                                     // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Depth;                                            // 0x0010 (0x0004) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class UClass*                                      Type;                                             // 0x0014 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x001C (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execCreateEmptyMovieClip_Params, ReturnValue) == 0x001C);
static_assert(sizeof(UGFxObject_execCreateEmptyMovieClip_Params) >= 0x0024);

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] 
struct UGFxObject_execGotoAndStopI_Params
{
	int32_t                                            Frame;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execGotoAndStopI_Params, Frame) == 0x0000);
static_assert(sizeof(UGFxObject_execGotoAndStopI_Params) >= 0x0004);

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] 
struct UGFxObject_execGotoAndStop_Params
{
	class FString                                      Frame;                                            // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execGotoAndStop_Params, Frame) == 0x0000);
static_assert(sizeof(UGFxObject_execGotoAndStop_Params) >= 0x0010);

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] 
struct UGFxObject_execGotoAndPlayI_Params
{
	int32_t                                            Frame;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execGotoAndPlayI_Params, Frame) == 0x0000);
static_assert(sizeof(UGFxObject_execGotoAndPlayI_Params) >= 0x0004);

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] 
struct UGFxObject_execGotoAndPlay_Params
{
	class FString                                      Frame;                                            // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execGotoAndPlay_Params, Frame) == 0x0000);
static_assert(sizeof(UGFxObject_execGotoAndPlay_Params) >= 0x0010);

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401] 
struct UGFxObject_execActionScriptArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<class UGFxObject*>                    ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execActionScriptArray_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execActionScriptArray_Params) >= 0x0020);

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401] 
struct UGFxObject_execActionScriptObject_Params
{
	class FString                                      Path;                                             // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      // 0x0010 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execActionScriptObject_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execActionScriptObject_Params) >= 0x0018);

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401] 
struct UGFxObject_execActionScriptString_Params
{
	class FString                                      method;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execActionScriptString_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execActionScriptString_Params) >= 0x0020);

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401] 
struct UGFxObject_execActionScriptFloat_Params
{
	class FString                                      method;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execActionScriptFloat_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execActionScriptFloat_Params) >= 0x0014);

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401] 
struct UGFxObject_execActionScriptInt_Params
{
	class FString                                      method;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execActionScriptInt_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execActionScriptInt_Params) >= 0x0014);

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401] 
struct UGFxObject_execActionScriptVoid_Params
{
	class FString                                      method;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execActionScriptVoid_Params, method) == 0x0000);
static_assert(sizeof(UGFxObject_execActionScriptVoid_Params) >= 0x0010);

// Function GFxUI.GFxObject.Invoke
// [0x00020401] 
struct UGFxObject_execInvoke_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FASValue>                      args;                                             // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      // 0x0020 (0x0020) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execInvoke_Params, ReturnValue) == 0x0020);
static_assert(sizeof(UGFxObject_execInvoke_Params) >= 0x0040);

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] 
struct UGFxObject_execActionScriptSetFunctionOn_Params
{
	class UGFxObject*                                  Target;                                           // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0008 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execActionScriptSetFunctionOn_Params, Member) == 0x0008);
static_assert(sizeof(UGFxObject_execActionScriptSetFunctionOn_Params) >= 0x0018);

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] 
struct UGFxObject_execActionScriptSetFunction_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execActionScriptSetFunction_Params, Member) == 0x0000);
static_assert(sizeof(UGFxObject_execActionScriptSetFunction_Params) >= 0x0010);

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] 
struct UGFxObject_execSetElementMemberString_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      S;                                                // 0x0014 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execSetElementMemberString_Params, S) == 0x0014);
static_assert(sizeof(UGFxObject_execSetElementMemberString_Params) >= 0x0024);

// Function GFxUI.GFxObject.SetElementMemberInt
// [0x00020401] 
struct UGFxObject_execSetElementMemberInt_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            I;                                                // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetElementMemberInt_Params, I) == 0x0014);
static_assert(sizeof(UGFxObject_execSetElementMemberInt_Params) >= 0x0018);

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] 
struct UGFxObject_execSetElementMemberFloat_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              F;                                                // 0x0014 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetElementMemberFloat_Params, F) == 0x0014);
static_assert(sizeof(UGFxObject_execSetElementMemberFloat_Params) >= 0x0018);

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] 
struct UGFxObject_execSetElementMemberBool_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           B;                                                // 0x0014 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxObject_execSetElementMemberBool_Params, B) == 0x0014);
static_assert(sizeof(UGFxObject_execSetElementMemberBool_Params) >= 0x0018);

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] 
struct UGFxObject_execSetElementMemberObject_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  val;                                              // 0x0014 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetElementMemberObject_Params, val) == 0x0014);
static_assert(sizeof(UGFxObject_execSetElementMemberObject_Params) >= 0x001C);

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] 
struct UGFxObject_execSetElementMember_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                              // 0x0014 (0x0020) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execSetElementMember_Params, Arg) == 0x0014);
static_assert(sizeof(UGFxObject_execSetElementMember_Params) >= 0x0034);

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] 
struct UGFxObject_execGetElementMemberString_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0014 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execGetElementMemberString_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UGFxObject_execGetElementMemberString_Params) >= 0x0024);

// Function GFxUI.GFxObject.GetElementMemberInt
// [0x00020401] 
struct UGFxObject_execGetElementMemberInt_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetElementMemberInt_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UGFxObject_execGetElementMemberInt_Params) >= 0x0018);

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] 
struct UGFxObject_execGetElementMemberFloat_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetElementMemberFloat_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UGFxObject_execGetElementMemberFloat_Params) >= 0x0018);

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] 
struct UGFxObject_execGetElementMemberBool_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetElementMemberBool_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UGFxObject_execGetElementMemberBool_Params) >= 0x0018);

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] 
struct UGFxObject_execGetElementMemberObject_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      Type;                                             // 0x0014 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x001C (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetElementMemberObject_Params, ReturnValue) == 0x001C);
static_assert(sizeof(UGFxObject_execGetElementMemberObject_Params) >= 0x0024);

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] 
struct UGFxObject_execGetElementMember_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      // 0x0014 (0x0020) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execGetElementMember_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UGFxObject_execGetElementMember_Params) >= 0x0034);

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] 
struct UGFxObject_execSetElementColorTransform_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	struct FASColorTransform                           cxform;                                           // 0x0004 (0x0020) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetElementColorTransform_Params, cxform) == 0x0004);
static_assert(sizeof(UGFxObject_execSetElementColorTransform_Params) >= 0x0024);

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] 
struct UGFxObject_execSetElementPosition_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              X;                                                // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              Y;                                                // 0x0008 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetElementPosition_Params, Y) == 0x0008);
static_assert(sizeof(UGFxObject_execSetElementPosition_Params) >= 0x000C);

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] 
struct UGFxObject_execSetElementVisible_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           Visible;                                          // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxObject_execSetElementVisible_Params, Visible) == 0x0004);
static_assert(sizeof(UGFxObject_execSetElementVisible_Params) >= 0x0008);

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] 
struct UGFxObject_execSetElementDisplayMatrix_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0xC];                               // 0x0004 (0x000C) MISSED OFFSET
	struct FMatrix                                     M;                                                // 0x0010 (0x0040) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetElementDisplayMatrix_Params, M) == 0x0010);
static_assert(sizeof(UGFxObject_execSetElementDisplayMatrix_Params) >= 0x0050);

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] 
struct UGFxObject_execSetElementDisplayInfo_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	struct FASDisplayInfo                              D;                                                // 0x0004 (0x002C) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetElementDisplayInfo_Params, D) == 0x0004);
static_assert(sizeof(UGFxObject_execSetElementDisplayInfo_Params) >= 0x0030);

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] 
struct UGFxObject_execGetElementDisplayMatrix_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint8_t                                            UnknownData00[0xC];                               // 0x0004 (0x000C) MISSED OFFSET
	struct FMatrix                                     ReturnValue;                                      // 0x0010 (0x0040) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetElementDisplayMatrix_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execGetElementDisplayMatrix_Params) >= 0x0050);

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] 
struct UGFxObject_execGetElementDisplayInfo_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	struct FASDisplayInfo                              ReturnValue;                                      // 0x0004 (0x002C) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetElementDisplayInfo_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UGFxObject_execGetElementDisplayInfo_Params) >= 0x0030);

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] 
struct UGFxObject_execSetElementString_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      S;                                                // 0x0004 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execSetElementString_Params, S) == 0x0004);
static_assert(sizeof(UGFxObject_execSetElementString_Params) >= 0x0014);

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401] 
struct UGFxObject_execSetElementInt_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            I;                                                // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetElementInt_Params, I) == 0x0004);
static_assert(sizeof(UGFxObject_execSetElementInt_Params) >= 0x0008);

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] 
struct UGFxObject_execSetElementFloat_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              F;                                                // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetElementFloat_Params, F) == 0x0004);
static_assert(sizeof(UGFxObject_execSetElementFloat_Params) >= 0x0008);

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] 
struct UGFxObject_execSetElementBool_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           B;                                                // 0x0004 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxObject_execSetElementBool_Params, B) == 0x0004);
static_assert(sizeof(UGFxObject_execSetElementBool_Params) >= 0x0008);

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] 
struct UGFxObject_execSetElementObject_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class UGFxObject*                                  val;                                              // 0x0004 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetElementObject_Params, val) == 0x0004);
static_assert(sizeof(UGFxObject_execSetElementObject_Params) >= 0x000C);

// Function GFxUI.GFxObject.SetElement
// [0x00020401] 
struct UGFxObject_execSetElement_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	struct FASValue                                    Arg;                                              // 0x0004 (0x0020) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execSetElement_Params, Arg) == 0x0004);
static_assert(sizeof(UGFxObject_execSetElement_Params) >= 0x0024);

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] 
struct UGFxObject_execGetElementString_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execGetElementString_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UGFxObject_execGetElementString_Params) >= 0x0014);

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401] 
struct UGFxObject_execGetElementInt_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetElementInt_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UGFxObject_execGetElementInt_Params) >= 0x0008);

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] 
struct UGFxObject_execGetElementFloat_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetElementFloat_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UGFxObject_execGetElementFloat_Params) >= 0x0008);

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] 
struct UGFxObject_execGetElementBool_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0004 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetElementBool_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UGFxObject_execGetElementBool_Params) >= 0x0008);

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] 
struct UGFxObject_execGetElementObject_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	class UClass*                                      Type;                                             // 0x0004 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x000C (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetElementObject_Params, ReturnValue) == 0x000C);
static_assert(sizeof(UGFxObject_execGetElementObject_Params) >= 0x0014);

// Function GFxUI.GFxObject.GetElement
// [0x00020401] 
struct UGFxObject_execGetElement_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	struct FASValue                                    ReturnValue;                                      // 0x0004 (0x0020) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execGetElement_Params, ReturnValue) == 0x0004);
static_assert(sizeof(UGFxObject_execGetElement_Params) >= 0x0024);

// Function GFxUI.GFxObject.SetText
// [0x00024401] 
struct UGFxObject_execSetText_Params
{
	class FString                                      Text;                                             // 0x0000 (0x0010) [0x0000000000010108] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                        // 0x0010 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(UGFxObject_execSetText_Params, InContext) == 0x0010);
static_assert(sizeof(UGFxObject_execSetText_Params) >= 0x0018);

// Function GFxUI.GFxObject.GetText
// [0x00020401] 
struct UGFxObject_execGetText_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execGetText_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxObject_execGetText_Params) >= 0x0010);

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] 
struct UGFxObject_execSetVisible_Params
{
	uint32_t                                           Visible;                                          // 0x0000 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxObject_execSetVisible_Params, Visible) == 0x0000);
static_assert(sizeof(UGFxObject_execSetVisible_Params) >= 0x0004);

// Function GFxUI.GFxObject.WriteToByteArray
// [0x00020401] 
struct UGFxObject_execWriteToByteArray_Params
{
	class TArray<uint8_t>                              A;                                                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            bytes;                                            // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execWriteToByteArray_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UGFxObject_execWriteToByteArray_Params) >= 0x0018);

// Function GFxUI.GFxObject.ReadFromByteArray
// [0x00420401] 
struct UGFxObject_execReadFromByteArray_Params
{
	class TArray<uint8_t>                              A;                                                // 0x0000 (0x0010) [0x0000000000010028] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            bytes;                                            // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
	uint32_t                                           ReturnValue;                                      // 0x0014 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execReadFromByteArray_Params, ReturnValue) == 0x0014);
static_assert(sizeof(UGFxObject_execReadFromByteArray_Params) >= 0x0018);

// Function GFxUI.GFxObject.GetByteArraySize
// [0x00020401] 
struct UGFxObject_execGetByteArraySize_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetByteArraySize_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxObject_execGetByteArraySize_Params) >= 0x0004);

// Function GFxUI.GFxObject.IsByteArray
// [0x00020401] 
struct UGFxObject_execIsByteArray_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execIsByteArray_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxObject_execIsByteArray_Params) >= 0x0004);

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] 
struct UGFxObject_execSetDisplayMatrix3D_Params
{
	struct FMatrix                                     M;                                                // 0x0000 (0x0040) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetDisplayMatrix3D_Params, M) == 0x0000);
static_assert(sizeof(UGFxObject_execSetDisplayMatrix3D_Params) >= 0x0040);

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] 
struct UGFxObject_execSetDisplayMatrix_Params
{
	struct FMatrix                                     M;                                                // 0x0000 (0x0040) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetDisplayMatrix_Params, M) == 0x0000);
static_assert(sizeof(UGFxObject_execSetDisplayMatrix_Params) >= 0x0040);

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] 
struct UGFxObject_execSetColorTransform_Params
{
	struct FASColorTransform                           cxform;                                           // 0x0000 (0x0020) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetColorTransform_Params, cxform) == 0x0000);
static_assert(sizeof(UGFxObject_execSetColorTransform_Params) >= 0x0020);

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] 
struct UGFxObject_execSetPosition_Params
{
	float                                              X;                                                // 0x0000 (0x0004) [0x0000000000000008] (CPF_Parm)    
	float                                              Y;                                                // 0x0004 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetPosition_Params, Y) == 0x0004);
static_assert(sizeof(UGFxObject_execSetPosition_Params) >= 0x0008);

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401] 
struct UGFxObject_execSetDisplayInfo_Params
{
	struct FASDisplayInfo                              D;                                                // 0x0000 (0x002C) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetDisplayInfo_Params, D) == 0x0000);
static_assert(sizeof(UGFxObject_execSetDisplayInfo_Params) >= 0x002C);

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401] 
struct UGFxObject_execGetDisplayMatrix3D_Params
{
	struct FMatrix                                     ReturnValue;                                      // 0x0000 (0x0040) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetDisplayMatrix3D_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxObject_execGetDisplayMatrix3D_Params) >= 0x0040);

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] 
struct UGFxObject_execGetDisplayMatrix_Params
{
	struct FMatrix                                     ReturnValue;                                      // 0x0000 (0x0040) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetDisplayMatrix_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxObject_execGetDisplayMatrix_Params) >= 0x0040);

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] 
struct UGFxObject_execGetColorTransform_Params
{
	struct FASColorTransform                           ReturnValue;                                      // 0x0000 (0x0020) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetColorTransform_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxObject_execGetColorTransform_Params) >= 0x0020);

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] 
struct UGFxObject_execGetPosition_Params
{
	float                                              X;                                                // 0x0000 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	float                                              Y;                                                // 0x0004 (0x0004) [0x0000000000000028] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue;                                      // 0x0008 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetPosition_Params, ReturnValue) == 0x0008);
static_assert(sizeof(UGFxObject_execGetPosition_Params) >= 0x000C);

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401] 
struct UGFxObject_execGetDisplayInfo_Params
{
	struct FASDisplayInfo                              ReturnValue;                                      // 0x0000 (0x002C) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetDisplayInfo_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxObject_execGetDisplayInfo_Params) >= 0x002C);

// Function GFxUI.GFxObject.TranslateString
// [0x00026401] 
struct UGFxObject_execTranslateString_Params
{
	class FString                                      StringToTranslate;                                // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                        // 0x0010 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      // 0x0018 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execTranslateString_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UGFxObject_execTranslateString_Params) >= 0x0028);

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] 
struct UGFxObject_execSetFunction_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UObject*                                     context;                                          // 0x0010 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FName                                        fname;                                            // 0x0018 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetFunction_Params, fname) == 0x0018);
static_assert(sizeof(UGFxObject_execSetFunction_Params) >= 0x0020);

// Function GFxUI.GFxObject.SetObject
// [0x00020401] 
struct UGFxObject_execSetObject_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  val;                                              // 0x0010 (0x0008) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetObject_Params, val) == 0x0010);
static_assert(sizeof(UGFxObject_execSetObject_Params) >= 0x0018);

// Function GFxUI.GFxObject.SetString
// [0x00024401] 
struct UGFxObject_execSetString_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      S;                                                // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                        // 0x0020 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
};
static_assert(offsetof(UGFxObject_execSetString_Params, InContext) == 0x0020);
static_assert(sizeof(UGFxObject_execSetString_Params) >= 0x0028);

// Function GFxUI.GFxObject.SetInt
// [0x00020401] 
struct UGFxObject_execSetInt_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            I;                                                // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetInt_Params, I) == 0x0010);
static_assert(sizeof(UGFxObject_execSetInt_Params) >= 0x0014);

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] 
struct UGFxObject_execSetFloat_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              F;                                                // 0x0010 (0x0004) [0x0000000000000008] (CPF_Parm)    
};
static_assert(offsetof(UGFxObject_execSetFloat_Params, F) == 0x0010);
static_assert(sizeof(UGFxObject_execSetFloat_Params) >= 0x0014);

// Function GFxUI.GFxObject.SetBool
// [0x00020401] 
struct UGFxObject_execSetBool_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           B;                                                // 0x0010 (0x0004) [0x0000000000000008] [0x00000001] (CPF_Parm)
};
static_assert(offsetof(UGFxObject_execSetBool_Params, B) == 0x0010);
static_assert(sizeof(UGFxObject_execSetBool_Params) >= 0x0014);

// Function GFxUI.GFxObject.Set
// [0x00020401] 
struct UGFxObject_execSet_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                              // 0x0010 (0x0020) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execSet_Params, Arg) == 0x0010);
static_assert(sizeof(UGFxObject_execSet_Params) >= 0x0030);

// Function GFxUI.GFxObject.GetObject
// [0x00024401] 
struct UGFxObject_execGetObjectWin_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      Type;                                             // 0x0010 (0x0008) [0x0000000000000018] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x0018 (0x0008) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetObjectWin_Params, ReturnValue) == 0x0018);
static_assert(sizeof(UGFxObject_execGetObjectWin_Params) >= 0x0020);

// Function GFxUI.GFxObject.GetString
// [0x00020401] 
struct UGFxObject_execGetString_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x0010) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execGetString_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execGetString_Params) >= 0x0020);

// Function GFxUI.GFxObject.GetInt
// [0x00020401] 
struct UGFxObject_execGetInt_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetInt_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execGetInt_Params) >= 0x0014);

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] 
struct UGFxObject_execGetFloat_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetFloat_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execGetFloat_Params) >= 0x0014);

// Function GFxUI.GFxObject.GetBool
// [0x00020401] 
struct UGFxObject_execGetBool_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0010 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxObject_execGetBool_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execGetBool_Params) >= 0x0014);

// Function GFxUI.GFxObject.Get
// [0x00020401] 
struct UGFxObject_execGet_Params
{
	class FString                                      Member;                                           // 0x0000 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      // 0x0010 (0x0020) [0x00000000000100A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};
static_assert(offsetof(UGFxObject_execGet_Params, ReturnValue) == 0x0010);
static_assert(sizeof(UGFxObject_execGet_Params) >= 0x0030);

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] 
struct UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Params) >= 0x0004);

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] 
struct UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Params) >= 0x0004);

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] 
struct UGFxAction_Invoke_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxAction_Invoke_eventIsValidLevelSequenceObject_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxAction_Invoke_eventIsValidLevelSequenceObject_Params) >= 0x0004);

// Function GFxUI.GFxAction_OpenMovie.GetObjClassVersion
// [0x00022802] 
struct UGFxAction_OpenMovie_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxAction_OpenMovie_eventGetObjClassVersion_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxAction_OpenMovie_eventGetObjClassVersion_Params) >= 0x0004);

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] 
struct UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Params) >= 0x0004);

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] 
struct UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue;                                      // 0x0000 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Params, ReturnValue) == 0x0000);
static_assert(sizeof(UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Params) >= 0x0004);

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] 
struct UGFxFSCmdHandler_Kismet_eventFSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                            // 0x0000 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class UGFxEvent_FSCommand*                         Event;                                            // 0x0008 (0x0008) [0x0000000000000008] (CPF_Parm)    
	class FString                                      Cmd;                                              // 0x0010 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Arg;                                              // 0x0020 (0x0010) [0x0000000000010008] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue;                                      // 0x0030 (0x0004) [0x00000000000000A8] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};
static_assert(offsetof(UGFxFSCmdHandler_Kismet_eventFSCommand_Params, ReturnValue) == 0x0030);
static_assert(sizeof(UGFxFSCmdHandler_Kismet_eventFSCommand_Params) >= 0x0034);

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
