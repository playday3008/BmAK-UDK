/*
#############################################################################################
# Batman: Arkham Knight (BatmanAK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.2.0 (fork, feat/batman-ak)
# ========================================================================================= #
# File: GFxUI_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, playday3008
# Links: github.com/playday3008/CodeRed-Generator
#############################################################################################
*/
#include "GFxUI_classes.hpp"

#pragma pack(push, 0x4)

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// class FString                  Cmd                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxFSCmdHandler::eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const class FString& Cmd, const class FString& Arg)
{
	static UFunction* uFnFSCommand = nullptr;

	if (!uFnFSCommand)
	{
		uFnFSCommand = UFunction::FindFunction("Function GFxUI.GFxFSCmdHandler.FSCommand");
	}

	UGFxFSCmdHandler_eventFSCommand_Params FSCommand_Params;
	memset(&FSCommand_Params, 0, sizeof(FSCommand_Params));
	if (!uFnFSCommand)
	{
		return {};
	}

	FSCommand_Params.Movie = Movie;
	FSCommand_Params.Event = Event;
	memcpy_s(&FSCommand_Params.Cmd, sizeof(FSCommand_Params.Cmd), &Cmd, sizeof(Cmd));
	memcpy_s(&FSCommand_Params.Arg, sizeof(FSCommand_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnFSCommand, &FSCommand_Params, nullptr);

	return FSCommand_Params.ReturnValue;
}

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxInteraction::CloseAllMoviePlayers()
{
	static UFunction* uFnCloseAllMoviePlayers = nullptr;

	if (!uFnCloseAllMoviePlayers)
	{
		uFnCloseAllMoviePlayers = UFunction::FindFunction("Function GFxUI.GFxInteraction.CloseAllMoviePlayers");
	}

	UGFxInteraction_execCloseAllMoviePlayers_Params CloseAllMoviePlayers_Params;
	memset(&CloseAllMoviePlayers_Params, 0, sizeof(CloseAllMoviePlayers_Params));
	if (!uFnCloseAllMoviePlayers)
	{
		return;
	}


	auto native_CloseAllMoviePlayers = uFnCloseAllMoviePlayers->iNative;
	uFnCloseAllMoviePlayers->iNative = 0;
	this->ProcessEvent(uFnCloseAllMoviePlayers, &CloseAllMoviePlayers_Params, nullptr);
	uFnCloseAllMoviePlayers->iNative = native_CloseAllMoviePlayers;
}

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxInteraction::NotifySplitscreenLayoutChanged()
{
	static UFunction* uFnNotifySplitscreenLayoutChanged = nullptr;

	if (!uFnNotifySplitscreenLayoutChanged)
	{
		uFnNotifySplitscreenLayoutChanged = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged");
	}

	UGFxInteraction_execNotifySplitscreenLayoutChanged_Params NotifySplitscreenLayoutChanged_Params;
	memset(&NotifySplitscreenLayoutChanged_Params, 0, sizeof(NotifySplitscreenLayoutChanged_Params));
	if (!uFnNotifySplitscreenLayoutChanged)
	{
		return;
	}


	auto native_NotifySplitscreenLayoutChanged = uFnNotifySplitscreenLayoutChanged->iNative;
	uFnNotifySplitscreenLayoutChanged->iNative = 0;
	this->ProcessEvent(uFnNotifySplitscreenLayoutChanged, &NotifySplitscreenLayoutChanged_Params, nullptr);
	uFnNotifySplitscreenLayoutChanged->iNative = native_NotifySplitscreenLayoutChanged;
}

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            RemovedPlayer                  (CPF_Parm)

void UGFxInteraction::NotifyPlayerRemoved(int32_t PlayerIndex, class ULocalPlayer* RemovedPlayer)
{
	static UFunction* uFnNotifyPlayerRemoved = nullptr;

	if (!uFnNotifyPlayerRemoved)
	{
		uFnNotifyPlayerRemoved = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyPlayerRemoved");
	}

	UGFxInteraction_execNotifyPlayerRemoved_Params NotifyPlayerRemoved_Params;
	memset(&NotifyPlayerRemoved_Params, 0, sizeof(NotifyPlayerRemoved_Params));
	if (!uFnNotifyPlayerRemoved)
	{
		return;
	}

	NotifyPlayerRemoved_Params.PlayerIndex = PlayerIndex;
	NotifyPlayerRemoved_Params.RemovedPlayer = RemovedPlayer;

	auto native_NotifyPlayerRemoved = uFnNotifyPlayerRemoved->iNative;
	uFnNotifyPlayerRemoved->iNative = 0;
	this->ProcessEvent(uFnNotifyPlayerRemoved, &NotifyPlayerRemoved_Params, nullptr);
	uFnNotifyPlayerRemoved->iNative = native_NotifyPlayerRemoved;
}

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            AddedPlayer                    (CPF_Parm)

void UGFxInteraction::NotifyPlayerAdded(int32_t PlayerIndex, class ULocalPlayer* AddedPlayer)
{
	static UFunction* uFnNotifyPlayerAdded = nullptr;

	if (!uFnNotifyPlayerAdded)
	{
		uFnNotifyPlayerAdded = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyPlayerAdded");
	}

	UGFxInteraction_execNotifyPlayerAdded_Params NotifyPlayerAdded_Params;
	memset(&NotifyPlayerAdded_Params, 0, sizeof(NotifyPlayerAdded_Params));
	if (!uFnNotifyPlayerAdded)
	{
		return;
	}

	NotifyPlayerAdded_Params.PlayerIndex = PlayerIndex;
	NotifyPlayerAdded_Params.AddedPlayer = AddedPlayer;

	auto native_NotifyPlayerAdded = uFnNotifyPlayerAdded->iNative;
	uFnNotifyPlayerAdded->iNative = 0;
	this->ProcessEvent(uFnNotifyPlayerAdded, &NotifyPlayerAdded_Params, nullptr);
	uFnNotifyPlayerAdded->iNative = native_NotifyPlayerAdded;
}

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxInteraction::NotifyGameSessionEnded()
{
	static UFunction* uFnNotifyGameSessionEnded = nullptr;

	if (!uFnNotifyGameSessionEnded)
	{
		uFnNotifyGameSessionEnded = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyGameSessionEnded");
	}

	UGFxInteraction_execNotifyGameSessionEnded_Params NotifyGameSessionEnded_Params;
	memset(&NotifyGameSessionEnded_Params, 0, sizeof(NotifyGameSessionEnded_Params));
	if (!uFnNotifyGameSessionEnded)
	{
		return;
	}


	auto native_NotifyGameSessionEnded = uFnNotifyGameSessionEnded->iNative;
	uFnNotifyGameSessionEnded->iNative = 0;
	this->ProcessEvent(uFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Params, nullptr);
	uFnNotifyGameSessionEnded->iNative = native_NotifyGameSessionEnded;
}

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxMoviePlayer*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie(int32_t ControllerId)
{
	static UFunction* uFnGetFocusMovie = nullptr;

	if (!uFnGetFocusMovie)
	{
		uFnGetFocusMovie = UFunction::FindFunction("Function GFxUI.GFxInteraction.GetFocusMovie");
	}

	UGFxInteraction_execGetFocusMovie_Params GetFocusMovie_Params;
	memset(&GetFocusMovie_Params, 0, sizeof(GetFocusMovie_Params));
	if (!uFnGetFocusMovie)
	{
		return {};
	}

	GetFocusMovie_Params.ControllerId = ControllerId;

	auto native_GetFocusMovie = uFnGetFocusMovie->iNative;
	uFnGetFocusMovie->iNative = 0;
	this->ProcessEvent(uFnGetFocusMovie, &GetFocusMovie_Params, nullptr);
	uFnGetFocusMovie->iNative = native_GetFocusMovie;

	return GetFocusMovie_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetFilename
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGFxMoviePlayer::GetFilename()
{
	static UFunction* uFnGetFilename = nullptr;

	if (!uFnGetFilename)
	{
		uFnGetFilename = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetFilename");
	}

	UGFxMoviePlayer_execGetFilename_Params GetFilename_Params;
	memset(&GetFilename_Params, 0, sizeof(GetFilename_Params));
	if (!uFnGetFilename)
	{
		return {};
	}


	auto native_GetFilename = uFnGetFilename->iNative;
	uFnGetFilename->iNative = 0;
	this->ProcessEvent(uFnGetFilename, &GetFilename_Params, nullptr);
	uFnGetFilename->iNative = native_GetFilename;

	return GetFilename_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::UpdateSplitscreenLayout()
{
	static UFunction* uFnUpdateSplitscreenLayout = nullptr;

	if (!uFnUpdateSplitscreenLayout)
	{
		uFnUpdateSplitscreenLayout = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout");
	}

	UGFxMoviePlayer_execUpdateSplitscreenLayout_Params UpdateSplitscreenLayout_Params;
	memset(&UpdateSplitscreenLayout_Params, 0, sizeof(UpdateSplitscreenLayout_Params));
	if (!uFnUpdateSplitscreenLayout)
	{
		return;
	}


	auto native_UpdateSplitscreenLayout = uFnUpdateSplitscreenLayout->iNative;
	uFnUpdateSplitscreenLayout->iNative = 0;
	this->ProcessEvent(uFnUpdateSplitscreenLayout, &UpdateSplitscreenLayout_Params, nullptr);
	uFnUpdateSplitscreenLayout->iNative = native_UpdateSplitscreenLayout;
}

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect(bool bRemoveEffect)
{
	static UFunction* uFnApplyPriorityVisibilityEffect = nullptr;

	if (!uFnApplyPriorityVisibilityEffect)
	{
		uFnApplyPriorityVisibilityEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect");
	}

	UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Params ApplyPriorityVisibilityEffect_Params;
	memset(&ApplyPriorityVisibilityEffect_Params, 0, sizeof(ApplyPriorityVisibilityEffect_Params));
	if (!uFnApplyPriorityVisibilityEffect)
	{
		return;
	}

	ApplyPriorityVisibilityEffect_Params.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent(uFnApplyPriorityVisibilityEffect, &ApplyPriorityVisibilityEffect_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityBlurEffect(bool bRemoveEffect)
{
	static UFunction* uFnApplyPriorityBlurEffect = nullptr;

	if (!uFnApplyPriorityBlurEffect)
	{
		uFnApplyPriorityBlurEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect");
	}

	UGFxMoviePlayer_execApplyPriorityBlurEffect_Params ApplyPriorityBlurEffect_Params;
	memset(&ApplyPriorityBlurEffect_Params, 0, sizeof(ApplyPriorityBlurEffect_Params));
	if (!uFnApplyPriorityBlurEffect)
	{
		return;
	}

	ApplyPriorityBlurEffect_Params.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent(uFnApplyPriorityBlurEffect, &ApplyPriorityBlurEffect_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bRequestedBlurState            (CPF_Parm)
// uint32_t                       bRequestedHiddenState          (CPF_Parm)

void UGFxMoviePlayer::eventApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState)
{
	static UFunction* uFnApplyPriorityEffect = nullptr;

	if (!uFnApplyPriorityEffect)
	{
		uFnApplyPriorityEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect");
	}

	UGFxMoviePlayer_eventApplyPriorityEffect_Params ApplyPriorityEffect_Params;
	memset(&ApplyPriorityEffect_Params, 0, sizeof(ApplyPriorityEffect_Params));
	if (!uFnApplyPriorityEffect)
	{
		return;
	}

	ApplyPriorityEffect_Params.bRequestedBlurState = bRequestedBlurState;
	ApplyPriorityEffect_Params.bRequestedHiddenState = bRequestedHiddenState;

	this->ProcessEvent(uFnApplyPriorityEffect, &ApplyPriorityEffect_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// [0x00024003] (FUNC_Final | FUNC_Defined | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    EventName                      (CPF_Parm)
// class FName                    SoundThemeName                 (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::PlaySoundFromThemeWin(const class FName& EventName, const class FName& optionalSoundThemeName)
{
	static UFunction* uFnPlaySoundFromThemeWin = nullptr;

	if (!uFnPlaySoundFromThemeWin)
	{
		uFnPlaySoundFromThemeWin = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme");
	}

	UGFxMoviePlayer_execPlaySoundFromThemeWin_Params PlaySoundFromThemeWin_Params;
	memset(&PlaySoundFromThemeWin_Params, 0, sizeof(PlaySoundFromThemeWin_Params));
	if (!uFnPlaySoundFromThemeWin)
	{
		return;
	}

	memcpy_s(&PlaySoundFromThemeWin_Params.EventName, sizeof(PlaySoundFromThemeWin_Params.EventName), &EventName, sizeof(EventName));
	memcpy_s(&PlaySoundFromThemeWin_Params.SoundThemeName, sizeof(PlaySoundFromThemeWin_Params.SoundThemeName), &optionalSoundThemeName, sizeof(optionalSoundThemeName));

	this->ProcessEvent(uFnPlaySoundFromThemeWin, &PlaySoundFromThemeWin_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.OnAspectRatioChanged
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          NewRatio                       (CPF_Parm)

void UGFxMoviePlayer::eventOnAspectRatioChanged(float NewRatio)
{
	static UFunction* uFnOnAspectRatioChanged = nullptr;

	if (!uFnOnAspectRatioChanged)
	{
		uFnOnAspectRatioChanged = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnAspectRatioChanged");
	}

	UGFxMoviePlayer_eventOnAspectRatioChanged_Params OnAspectRatioChanged_Params;
	memset(&OnAspectRatioChanged_Params, 0, sizeof(OnAspectRatioChanged_Params));
	if (!uFnOnAspectRatioChanged)
	{
		return;
	}

	OnAspectRatioChanged_Params.NewRatio = NewRatio;

	this->ProcessEvent(uFnOnAspectRatioChanged, &OnAspectRatioChanged_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::eventOnFocusLost(int32_t LocalPlayerIndex)
{
	static UFunction* uFnOnFocusLost = nullptr;

	if (!uFnOnFocusLost)
	{
		uFnOnFocusLost = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnFocusLost");
	}

	UGFxMoviePlayer_eventOnFocusLost_Params OnFocusLost_Params;
	memset(&OnFocusLost_Params, 0, sizeof(OnFocusLost_Params));
	if (!uFnOnFocusLost)
	{
		return;
	}

	OnFocusLost_Params.LocalPlayerIndex = LocalPlayerIndex;

	this->ProcessEvent(uFnOnFocusLost, &OnFocusLost_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::eventOnFocusGained(int32_t LocalPlayerIndex)
{
	static UFunction* uFnOnFocusGained = nullptr;

	if (!uFnOnFocusGained)
	{
		uFnOnFocusGained = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnFocusGained");
	}

	UGFxMoviePlayer_eventOnFocusGained_Params OnFocusGained_Params;
	memset(&OnFocusGained_Params, 0, sizeof(OnFocusGained_Params));
	if (!uFnOnFocusGained)
	{
		return;
	}

	OnFocusGained_Params.LocalPlayerIndex = LocalPlayerIndex;

	this->ProcessEvent(uFnOnFocusGained, &OnFocusGained_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Command                        (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ConsoleCommand(const class FString& Command)
{
	static UFunction* uFnConsoleCommand = nullptr;

	if (!uFnConsoleCommand)
	{
		uFnConsoleCommand = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ConsoleCommand");
	}

	UGFxMoviePlayer_execConsoleCommand_Params ConsoleCommand_Params;
	memset(&ConsoleCommand_Params, 0, sizeof(ConsoleCommand_Params));
	if (!uFnConsoleCommand)
	{
		return;
	}

	memcpy_s(&ConsoleCommand_Params.Command, sizeof(ConsoleCommand_Params.Command), &Command, sizeof(Command));

	this->ProcessEvent(uFnConsoleCommand, &ConsoleCommand_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class APlayerController* UGFxMoviePlayer::eventGetPC()
{
	static UFunction* uFnGetPC = nullptr;

	if (!uFnGetPC)
	{
		uFnGetPC = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetPC");
	}

	UGFxMoviePlayer_eventGetPC_Params GetPC_Params;
	memset(&GetPC_Params, 0, sizeof(GetPC_Params));
	if (!uFnGetPC)
	{
		return {};
	}


	this->ProcessEvent(uFnGetPC, &GetPC_Params, nullptr);

	return GetPC_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ULocalPlayer*            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class ULocalPlayer* UGFxMoviePlayer::eventGetLP()
{
	static UFunction* uFnGetLP = nullptr;

	if (!uFnGetLP)
	{
		uFnGetLP = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetLP");
	}

	UGFxMoviePlayer_eventGetLP_Params GetLP_Params;
	memset(&GetLP_Params, 0, sizeof(GetLP_Params));
	if (!uFnGetLP)
	{
		return {};
	}


	this->ProcessEvent(uFnGetLP, &GetLP_Params, nullptr);

	return GetLP_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024002] (FUNC_Defined | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ULocalPlayer*            LocPlay                        (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::Init(class ULocalPlayer* optionalLocPlay)
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Init");
	}

	UGFxMoviePlayer_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));
	if (!uFnInit)
	{
		return;
	}

	Init_Params.LocPlay = optionalLocPlay;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              WidgetToBind                   (CPF_Parm)
// class FName                    Path                           (CPF_Parm)

void UGFxMoviePlayer::SetWidgetPathBinding(class UGFxObject* WidgetToBind, const class FName& Path)
{
	static UFunction* uFnSetWidgetPathBinding = nullptr;

	if (!uFnSetWidgetPathBinding)
	{
		uFnSetWidgetPathBinding = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding");
	}

	UGFxMoviePlayer_execSetWidgetPathBinding_Params SetWidgetPathBinding_Params;
	memset(&SetWidgetPathBinding_Params, 0, sizeof(SetWidgetPathBinding_Params));
	if (!uFnSetWidgetPathBinding)
	{
		return;
	}

	SetWidgetPathBinding_Params.WidgetToBind = WidgetToBind;
	memcpy_s(&SetWidgetPathBinding_Params.Path, sizeof(SetWidgetPathBinding_Params.Path), &Path, sizeof(Path));

	auto native_SetWidgetPathBinding = uFnSetWidgetPathBinding->iNative;
	uFnSetWidgetPathBinding->iNative = 0;
	this->ProcessEvent(uFnSetWidgetPathBinding, &SetWidgetPathBinding_Params, nullptr);
	uFnSetWidgetPathBinding->iNative = native_SetWidgetPathBinding;
}

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventPostWidgetInit()
{
	static UFunction* uFnPostWidgetInit = nullptr;

	if (!uFnPostWidgetInit)
	{
		uFnPostWidgetInit = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PostWidgetInit");
	}

	UGFxMoviePlayer_eventPostWidgetInit_Params PostWidgetInit_Params;
	memset(&PostWidgetInit_Params, 0, sizeof(PostWidgetInit_Params));
	if (!uFnPostWidgetInit)
	{
		return;
	}


	this->ProcessEvent(uFnPostWidgetInit, &PostWidgetInit_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    WidgetName                     (CPF_Parm)
// class FName                    WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxMoviePlayer::eventWidgetUnloaded(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetUnloaded = nullptr;

	if (!uFnWidgetUnloaded)
	{
		uFnWidgetUnloaded = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.WidgetUnloaded");
	}

	UGFxMoviePlayer_eventWidgetUnloaded_Params WidgetUnloaded_Params;
	memset(&WidgetUnloaded_Params, 0, sizeof(WidgetUnloaded_Params));
	if (!uFnWidgetUnloaded)
	{
		return {};
	}

	memcpy_s(&WidgetUnloaded_Params.WidgetName, sizeof(WidgetUnloaded_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetUnloaded_Params.WidgetPath, sizeof(WidgetUnloaded_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	WidgetUnloaded_Params.Widget = Widget;

	this->ProcessEvent(uFnWidgetUnloaded, &WidgetUnloaded_Params, nullptr);

	return WidgetUnloaded_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    WidgetName                     (CPF_Parm)
// class FName                    WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxMoviePlayer::eventWidgetInitialized(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.WidgetInitialized");
	}

	UGFxMoviePlayer_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	if (!uFnWidgetInitialized)
	{
		return {};
	}

	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	WidgetInitialized_Params.Widget = Widget;

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ClassName                      (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::ActionScriptConstructor(const class FString& ClassName)
{
	static UFunction* uFnActionScriptConstructor = nullptr;

	if (!uFnActionScriptConstructor)
	{
		uFnActionScriptConstructor = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptConstructor");
	}

	UGFxMoviePlayer_execActionScriptConstructor_Params ActionScriptConstructor_Params;
	memset(&ActionScriptConstructor_Params, 0, sizeof(ActionScriptConstructor_Params));
	if (!uFnActionScriptConstructor)
	{
		return {};
	}

	memcpy_s(&ActionScriptConstructor_Params.ClassName, sizeof(ActionScriptConstructor_Params.ClassName), &ClassName, sizeof(ClassName));

	auto native_ActionScriptConstructor = uFnActionScriptConstructor->iNative;
	uFnActionScriptConstructor->iNative = 0;
	this->ProcessEvent(uFnActionScriptConstructor, &ActionScriptConstructor_Params, nullptr);
	uFnActionScriptConstructor->iNative = native_ActionScriptConstructor;

	return ActionScriptConstructor_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::ActionScriptObject(const class FString& Path)
{
	static UFunction* uFnActionScriptObject = nullptr;

	if (!uFnActionScriptObject)
	{
		uFnActionScriptObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptObject");
	}

	UGFxMoviePlayer_execActionScriptObject_Params ActionScriptObject_Params;
	memset(&ActionScriptObject_Params, 0, sizeof(ActionScriptObject_Params));
	if (!uFnActionScriptObject)
	{
		return {};
	}

	memcpy_s(&ActionScriptObject_Params.Path, sizeof(ActionScriptObject_Params.Path), &Path, sizeof(Path));

	auto native_ActionScriptObject = uFnActionScriptObject->iNative;
	uFnActionScriptObject->iNative = 0;
	this->ProcessEvent(uFnActionScriptObject, &ActionScriptObject_Params, nullptr);
	uFnActionScriptObject->iNative = native_ActionScriptObject;

	return ActionScriptObject_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxMoviePlayer::ActionScriptString(const class FString& Path)
{
	static UFunction* uFnActionScriptString = nullptr;

	if (!uFnActionScriptString)
	{
		uFnActionScriptString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptString");
	}

	UGFxMoviePlayer_execActionScriptString_Params ActionScriptString_Params;
	memset(&ActionScriptString_Params, 0, sizeof(ActionScriptString_Params));
	if (!uFnActionScriptString)
	{
		return {};
	}

	memcpy_s(&ActionScriptString_Params.Path, sizeof(ActionScriptString_Params.Path), &Path, sizeof(Path));

	auto native_ActionScriptString = uFnActionScriptString->iNative;
	uFnActionScriptString->iNative = 0;
	this->ProcessEvent(uFnActionScriptString, &ActionScriptString_Params, nullptr);
	uFnActionScriptString->iNative = native_ActionScriptString;

	return ActionScriptString_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

float UGFxMoviePlayer::ActionScriptFloat(const class FString& Path)
{
	static UFunction* uFnActionScriptFloat = nullptr;

	if (!uFnActionScriptFloat)
	{
		uFnActionScriptFloat = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptFloat");
	}

	UGFxMoviePlayer_execActionScriptFloat_Params ActionScriptFloat_Params;
	memset(&ActionScriptFloat_Params, 0, sizeof(ActionScriptFloat_Params));
	if (!uFnActionScriptFloat)
	{
		return {};
	}

	memcpy_s(&ActionScriptFloat_Params.Path, sizeof(ActionScriptFloat_Params.Path), &Path, sizeof(Path));

	auto native_ActionScriptFloat = uFnActionScriptFloat->iNative;
	uFnActionScriptFloat->iNative = 0;
	this->ProcessEvent(uFnActionScriptFloat, &ActionScriptFloat_Params, nullptr);
	uFnActionScriptFloat->iNative = native_ActionScriptFloat;

	return ActionScriptFloat_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxMoviePlayer::ActionScriptInt(const class FString& Path)
{
	static UFunction* uFnActionScriptInt = nullptr;

	if (!uFnActionScriptInt)
	{
		uFnActionScriptInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptInt");
	}

	UGFxMoviePlayer_execActionScriptInt_Params ActionScriptInt_Params;
	memset(&ActionScriptInt_Params, 0, sizeof(ActionScriptInt_Params));
	if (!uFnActionScriptInt)
	{
		return {};
	}

	memcpy_s(&ActionScriptInt_Params.Path, sizeof(ActionScriptInt_Params.Path), &Path, sizeof(Path));

	auto native_ActionScriptInt = uFnActionScriptInt->iNative;
	uFnActionScriptInt->iNative = 0;
	this->ProcessEvent(uFnActionScriptInt, &ActionScriptInt_Params, nullptr);
	uFnActionScriptInt->iNative = native_ActionScriptInt;

	return ActionScriptInt_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ActionScriptVoid(const class FString& Path)
{
	static UFunction* uFnActionScriptVoid = nullptr;

	if (!uFnActionScriptVoid)
	{
		uFnActionScriptVoid = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptVoid");
	}

	UGFxMoviePlayer_execActionScriptVoid_Params ActionScriptVoid_Params;
	memset(&ActionScriptVoid_Params, 0, sizeof(ActionScriptVoid_Params));
	if (!uFnActionScriptVoid)
	{
		return;
	}

	memcpy_s(&ActionScriptVoid_Params.Path, sizeof(ActionScriptVoid_Params.Path), &Path, sizeof(Path));

	auto native_ActionScriptVoid = uFnActionScriptVoid->iNative;
	uFnActionScriptVoid->iNative = 0;
	this->ProcessEvent(uFnActionScriptVoid, &ActionScriptVoid_Params, nullptr);
	uFnActionScriptVoid->iNative = native_ActionScriptVoid;
}

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FASValue>  args                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxMoviePlayer::Invoke(const class FString& method, const class TArray<struct FASValue>& args)
{
	static UFunction* uFnInvoke = nullptr;

	if (!uFnInvoke)
	{
		uFnInvoke = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Invoke");
	}

	UGFxMoviePlayer_execInvoke_Params Invoke_Params;
	memset(&Invoke_Params, 0, sizeof(Invoke_Params));
	if (!uFnInvoke)
	{
		return {};
	}

	memcpy_s(&Invoke_Params.method, sizeof(Invoke_Params.method), &method, sizeof(method));
	memcpy_s(&Invoke_Params.args, sizeof(Invoke_Params.args), &args, sizeof(args));

	auto native_Invoke = uFnInvoke->iNative;
	uFnInvoke->iNative = 0;
	this->ProcessEvent(uFnInvoke, &Invoke_Params, nullptr);
	uFnInvoke->iNative = native_Invoke;

	return Invoke_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              Object                         (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ActionScriptSetFunction(class UGFxObject* Object, const class FString& Member)
{
	static UFunction* uFnActionScriptSetFunction = nullptr;

	if (!uFnActionScriptSetFunction)
	{
		uFnActionScriptSetFunction = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction");
	}

	UGFxMoviePlayer_execActionScriptSetFunction_Params ActionScriptSetFunction_Params;
	memset(&ActionScriptSetFunction_Params, 0, sizeof(ActionScriptSetFunction_Params));
	if (!uFnActionScriptSetFunction)
	{
		return;
	}

	ActionScriptSetFunction_Params.Object = Object;
	memcpy_s(&ActionScriptSetFunction_Params.Member, sizeof(ActionScriptSetFunction_Params.Member), &Member, sizeof(Member));

	auto native_ActionScriptSetFunction = uFnActionScriptSetFunction->iNative;
	uFnActionScriptSetFunction->iNative = 0;
	this->ProcessEvent(uFnActionScriptSetFunction, &ActionScriptSetFunction_Params, nullptr);
	uFnActionScriptSetFunction->iNative = native_ActionScriptSetFunction;
}

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UGFxMoviePlayer::CreateArray()
{
	static UFunction* uFnCreateArray = nullptr;

	if (!uFnCreateArray)
	{
		uFnCreateArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.CreateArray");
	}

	UGFxMoviePlayer_execCreateArray_Params CreateArray_Params;
	memset(&CreateArray_Params, 0, sizeof(CreateArray_Params));
	if (!uFnCreateArray)
	{
		return {};
	}


	auto native_CreateArray = uFnCreateArray->iNative;
	uFnCreateArray->iNative = 0;
	this->ProcessEvent(uFnCreateArray, &CreateArray_Params, nullptr);
	uFnCreateArray->iNative = native_CreateArray;

	return CreateArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ASClass                        (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FASValue>  args                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::CreateObject(const class FString& ASClass, class UClass* optionalType, const class TArray<struct FASValue>& optionalArgs)
{
	static UFunction* uFnCreateObject = nullptr;

	if (!uFnCreateObject)
	{
		uFnCreateObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.CreateObject");
	}

	UGFxMoviePlayer_execCreateObject_Params CreateObject_Params;
	memset(&CreateObject_Params, 0, sizeof(CreateObject_Params));
	if (!uFnCreateObject)
	{
		return {};
	}

	memcpy_s(&CreateObject_Params.ASClass, sizeof(CreateObject_Params.ASClass), &ASClass, sizeof(ASClass));
	CreateObject_Params.Type = optionalType;
	memcpy_s(&CreateObject_Params.args, sizeof(CreateObject_Params.args), &optionalArgs, sizeof(optionalArgs));

	auto native_CreateObject = uFnCreateObject->iNative;
	uFnCreateObject->iNative = 0;
	this->ProcessEvent(uFnCreateObject, &CreateObject_Params, nullptr);
	uFnCreateObject->iNative = native_CreateObject;

	return CreateObject_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<class FString>    Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableStringArray(const class FString& Path, int32_t Index, const class TArray<class FString>& Arg)
{
	static UFunction* uFnSetVariableStringArray = nullptr;

	if (!uFnSetVariableStringArray)
	{
		uFnSetVariableStringArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableStringArray");
	}

	UGFxMoviePlayer_execSetVariableStringArray_Params SetVariableStringArray_Params;
	memset(&SetVariableStringArray_Params, 0, sizeof(SetVariableStringArray_Params));
	if (!uFnSetVariableStringArray)
	{
		return {};
	}

	memcpy_s(&SetVariableStringArray_Params.Path, sizeof(SetVariableStringArray_Params.Path), &Path, sizeof(Path));
	SetVariableStringArray_Params.Index = Index;
	memcpy_s(&SetVariableStringArray_Params.Arg, sizeof(SetVariableStringArray_Params.Arg), &Arg, sizeof(Arg));

	auto native_SetVariableStringArray = uFnSetVariableStringArray->iNative;
	uFnSetVariableStringArray->iNative = 0;
	this->ProcessEvent(uFnSetVariableStringArray, &SetVariableStringArray_Params, nullptr);
	uFnSetVariableStringArray->iNative = native_SetVariableStringArray;

	return SetVariableStringArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<float>            Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableFloatArray(const class FString& Path, int32_t Index, const class TArray<float>& Arg)
{
	static UFunction* uFnSetVariableFloatArray = nullptr;

	if (!uFnSetVariableFloatArray)
	{
		uFnSetVariableFloatArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableFloatArray");
	}

	UGFxMoviePlayer_execSetVariableFloatArray_Params SetVariableFloatArray_Params;
	memset(&SetVariableFloatArray_Params, 0, sizeof(SetVariableFloatArray_Params));
	if (!uFnSetVariableFloatArray)
	{
		return {};
	}

	memcpy_s(&SetVariableFloatArray_Params.Path, sizeof(SetVariableFloatArray_Params.Path), &Path, sizeof(Path));
	SetVariableFloatArray_Params.Index = Index;
	memcpy_s(&SetVariableFloatArray_Params.Arg, sizeof(SetVariableFloatArray_Params.Arg), &Arg, sizeof(Arg));

	auto native_SetVariableFloatArray = uFnSetVariableFloatArray->iNative;
	uFnSetVariableFloatArray->iNative = 0;
	this->ProcessEvent(uFnSetVariableFloatArray, &SetVariableFloatArray_Params, nullptr);
	uFnSetVariableFloatArray->iNative = native_SetVariableFloatArray;

	return SetVariableFloatArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<int32_t>          Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableIntArray(const class FString& Path, int32_t Index, const class TArray<int32_t>& Arg)
{
	static UFunction* uFnSetVariableIntArray = nullptr;

	if (!uFnSetVariableIntArray)
	{
		uFnSetVariableIntArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableIntArray");
	}

	UGFxMoviePlayer_execSetVariableIntArray_Params SetVariableIntArray_Params;
	memset(&SetVariableIntArray_Params, 0, sizeof(SetVariableIntArray_Params));
	if (!uFnSetVariableIntArray)
	{
		return {};
	}

	memcpy_s(&SetVariableIntArray_Params.Path, sizeof(SetVariableIntArray_Params.Path), &Path, sizeof(Path));
	SetVariableIntArray_Params.Index = Index;
	memcpy_s(&SetVariableIntArray_Params.Arg, sizeof(SetVariableIntArray_Params.Arg), &Arg, sizeof(Arg));

	auto native_SetVariableIntArray = uFnSetVariableIntArray->iNative;
	uFnSetVariableIntArray->iNative = 0;
	this->ProcessEvent(uFnSetVariableIntArray, &SetVariableIntArray_Params, nullptr);
	uFnSetVariableIntArray->iNative = native_SetVariableIntArray;

	return SetVariableIntArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<struct FASValue>  Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableArray(const class FString& Path, int32_t Index, const class TArray<struct FASValue>& Arg)
{
	static UFunction* uFnSetVariableArray = nullptr;

	if (!uFnSetVariableArray)
	{
		uFnSetVariableArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableArray");
	}

	UGFxMoviePlayer_execSetVariableArray_Params SetVariableArray_Params;
	memset(&SetVariableArray_Params, 0, sizeof(SetVariableArray_Params));
	if (!uFnSetVariableArray)
	{
		return {};
	}

	memcpy_s(&SetVariableArray_Params.Path, sizeof(SetVariableArray_Params.Path), &Path, sizeof(Path));
	SetVariableArray_Params.Index = Index;
	memcpy_s(&SetVariableArray_Params.Arg, sizeof(SetVariableArray_Params.Arg), &Arg, sizeof(Arg));

	auto native_SetVariableArray = uFnSetVariableArray->iNative;
	uFnSetVariableArray->iNative = 0;
	this->ProcessEvent(uFnSetVariableArray, &SetVariableArray_Params, nullptr);
	uFnSetVariableArray->iNative = native_SetVariableArray;

	return SetVariableArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<class FString>    Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableStringArray(const class FString& Path, int32_t Index, class TArray<class FString>& outArg)
{
	static UFunction* uFnGetVariableStringArray = nullptr;

	if (!uFnGetVariableStringArray)
	{
		uFnGetVariableStringArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableStringArray");
	}

	UGFxMoviePlayer_execGetVariableStringArray_Params GetVariableStringArray_Params;
	memset(&GetVariableStringArray_Params, 0, sizeof(GetVariableStringArray_Params));
	if (!uFnGetVariableStringArray)
	{
		return {};
	}

	memcpy_s(&GetVariableStringArray_Params.Path, sizeof(GetVariableStringArray_Params.Path), &Path, sizeof(Path));
	GetVariableStringArray_Params.Index = Index;
	memcpy_s(&GetVariableStringArray_Params.Arg, sizeof(GetVariableStringArray_Params.Arg), &outArg, sizeof(outArg));

	auto native_GetVariableStringArray = uFnGetVariableStringArray->iNative;
	uFnGetVariableStringArray->iNative = 0;
	this->ProcessEvent(uFnGetVariableStringArray, &GetVariableStringArray_Params, nullptr);
	uFnGetVariableStringArray->iNative = native_GetVariableStringArray;

	memcpy_s(&outArg, sizeof(outArg), &GetVariableStringArray_Params.Arg, sizeof(GetVariableStringArray_Params.Arg));

	return GetVariableStringArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<float>            Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableFloatArray(const class FString& Path, int32_t Index, class TArray<float>& outArg)
{
	static UFunction* uFnGetVariableFloatArray = nullptr;

	if (!uFnGetVariableFloatArray)
	{
		uFnGetVariableFloatArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableFloatArray");
	}

	UGFxMoviePlayer_execGetVariableFloatArray_Params GetVariableFloatArray_Params;
	memset(&GetVariableFloatArray_Params, 0, sizeof(GetVariableFloatArray_Params));
	if (!uFnGetVariableFloatArray)
	{
		return {};
	}

	memcpy_s(&GetVariableFloatArray_Params.Path, sizeof(GetVariableFloatArray_Params.Path), &Path, sizeof(Path));
	GetVariableFloatArray_Params.Index = Index;
	memcpy_s(&GetVariableFloatArray_Params.Arg, sizeof(GetVariableFloatArray_Params.Arg), &outArg, sizeof(outArg));

	auto native_GetVariableFloatArray = uFnGetVariableFloatArray->iNative;
	uFnGetVariableFloatArray->iNative = 0;
	this->ProcessEvent(uFnGetVariableFloatArray, &GetVariableFloatArray_Params, nullptr);
	uFnGetVariableFloatArray->iNative = native_GetVariableFloatArray;

	memcpy_s(&outArg, sizeof(outArg), &GetVariableFloatArray_Params.Arg, sizeof(GetVariableFloatArray_Params.Arg));

	return GetVariableFloatArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<int32_t>          Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableIntArray(const class FString& Path, int32_t Index, class TArray<int32_t>& outArg)
{
	static UFunction* uFnGetVariableIntArray = nullptr;

	if (!uFnGetVariableIntArray)
	{
		uFnGetVariableIntArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableIntArray");
	}

	UGFxMoviePlayer_execGetVariableIntArray_Params GetVariableIntArray_Params;
	memset(&GetVariableIntArray_Params, 0, sizeof(GetVariableIntArray_Params));
	if (!uFnGetVariableIntArray)
	{
		return {};
	}

	memcpy_s(&GetVariableIntArray_Params.Path, sizeof(GetVariableIntArray_Params.Path), &Path, sizeof(Path));
	GetVariableIntArray_Params.Index = Index;
	memcpy_s(&GetVariableIntArray_Params.Arg, sizeof(GetVariableIntArray_Params.Arg), &outArg, sizeof(outArg));

	auto native_GetVariableIntArray = uFnGetVariableIntArray->iNative;
	uFnGetVariableIntArray->iNative = 0;
	this->ProcessEvent(uFnGetVariableIntArray, &GetVariableIntArray_Params, nullptr);
	uFnGetVariableIntArray->iNative = native_GetVariableIntArray;

	memcpy_s(&outArg, sizeof(outArg), &GetVariableIntArray_Params.Arg, sizeof(GetVariableIntArray_Params.Arg));

	return GetVariableIntArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<struct FASValue>  Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableArray(const class FString& Path, int32_t Index, class TArray<struct FASValue>& outArg)
{
	static UFunction* uFnGetVariableArray = nullptr;

	if (!uFnGetVariableArray)
	{
		uFnGetVariableArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableArray");
	}

	UGFxMoviePlayer_execGetVariableArray_Params GetVariableArray_Params;
	memset(&GetVariableArray_Params, 0, sizeof(GetVariableArray_Params));
	if (!uFnGetVariableArray)
	{
		return {};
	}

	memcpy_s(&GetVariableArray_Params.Path, sizeof(GetVariableArray_Params.Path), &Path, sizeof(Path));
	GetVariableArray_Params.Index = Index;
	memcpy_s(&GetVariableArray_Params.Arg, sizeof(GetVariableArray_Params.Arg), &outArg, sizeof(outArg));

	auto native_GetVariableArray = uFnGetVariableArray->iNative;
	uFnGetVariableArray->iNative = 0;
	this->ProcessEvent(uFnGetVariableArray, &GetVariableArray_Params, nullptr);
	uFnGetVariableArray->iNative = native_GetVariableArray;

	memcpy_s(&outArg, sizeof(outArg), &GetVariableArray_Params.Arg, sizeof(GetVariableArray_Params.Arg));

	return GetVariableArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              Object                         (CPF_Parm)

void UGFxMoviePlayer::SetVariableObject(const class FString& Path, class UGFxObject* Object)
{
	static UFunction* uFnSetVariableObject = nullptr;

	if (!uFnSetVariableObject)
	{
		uFnSetVariableObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableObject");
	}

	UGFxMoviePlayer_execSetVariableObject_Params SetVariableObject_Params;
	memset(&SetVariableObject_Params, 0, sizeof(SetVariableObject_Params));
	if (!uFnSetVariableObject)
	{
		return;
	}

	memcpy_s(&SetVariableObject_Params.Path, sizeof(SetVariableObject_Params.Path), &Path, sizeof(Path));
	SetVariableObject_Params.Object = Object;

	auto native_SetVariableObject = uFnSetVariableObject->iNative;
	uFnSetVariableObject->iNative = 0;
	this->ProcessEvent(uFnSetVariableObject, &SetVariableObject_Params, nullptr);
	uFnSetVariableObject->iNative = native_SetVariableObject;
}

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::SetVariableString(const class FString& Path, const class FString& S)
{
	static UFunction* uFnSetVariableString = nullptr;

	if (!uFnSetVariableString)
	{
		uFnSetVariableString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableString");
	}

	UGFxMoviePlayer_execSetVariableString_Params SetVariableString_Params;
	memset(&SetVariableString_Params, 0, sizeof(SetVariableString_Params));
	if (!uFnSetVariableString)
	{
		return;
	}

	memcpy_s(&SetVariableString_Params.Path, sizeof(SetVariableString_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariableString_Params.S, sizeof(SetVariableString_Params.S), &S, sizeof(S));

	auto native_SetVariableString = uFnSetVariableString->iNative;
	uFnSetVariableString->iNative = 0;
	this->ProcessEvent(uFnSetVariableString, &SetVariableString_Params, nullptr);
	uFnSetVariableString->iNative = native_SetVariableString;
}

// Function GFxUI.GFxMoviePlayer.SetVariableInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableInt(const class FString& Path, int32_t I)
{
	static UFunction* uFnSetVariableInt = nullptr;

	if (!uFnSetVariableInt)
	{
		uFnSetVariableInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableInt");
	}

	UGFxMoviePlayer_execSetVariableInt_Params SetVariableInt_Params;
	memset(&SetVariableInt_Params, 0, sizeof(SetVariableInt_Params));
	if (!uFnSetVariableInt)
	{
		return;
	}

	memcpy_s(&SetVariableInt_Params.Path, sizeof(SetVariableInt_Params.Path), &Path, sizeof(Path));
	SetVariableInt_Params.I = I;

	auto native_SetVariableInt = uFnSetVariableInt->iNative;
	uFnSetVariableInt->iNative = 0;
	this->ProcessEvent(uFnSetVariableInt, &SetVariableInt_Params, nullptr);
	uFnSetVariableInt->iNative = native_SetVariableInt;
}

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableNumber(const class FString& Path, float F)
{
	static UFunction* uFnSetVariableNumber = nullptr;

	if (!uFnSetVariableNumber)
	{
		uFnSetVariableNumber = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableNumber");
	}

	UGFxMoviePlayer_execSetVariableNumber_Params SetVariableNumber_Params;
	memset(&SetVariableNumber_Params, 0, sizeof(SetVariableNumber_Params));
	if (!uFnSetVariableNumber)
	{
		return;
	}

	memcpy_s(&SetVariableNumber_Params.Path, sizeof(SetVariableNumber_Params.Path), &Path, sizeof(Path));
	SetVariableNumber_Params.F = F;

	auto native_SetVariableNumber = uFnSetVariableNumber->iNative;
	uFnSetVariableNumber->iNative = 0;
	this->ProcessEvent(uFnSetVariableNumber, &SetVariableNumber_Params, nullptr);
	uFnSetVariableNumber->iNative = native_SetVariableNumber;
}

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       B                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableBool(const class FString& Path, bool B)
{
	static UFunction* uFnSetVariableBool = nullptr;

	if (!uFnSetVariableBool)
	{
		uFnSetVariableBool = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableBool");
	}

	UGFxMoviePlayer_execSetVariableBool_Params SetVariableBool_Params;
	memset(&SetVariableBool_Params, 0, sizeof(SetVariableBool_Params));
	if (!uFnSetVariableBool)
	{
		return;
	}

	memcpy_s(&SetVariableBool_Params.Path, sizeof(SetVariableBool_Params.Path), &Path, sizeof(Path));
	SetVariableBool_Params.B = B;

	auto native_SetVariableBool = uFnSetVariableBool->iNative;
	uFnSetVariableBool->iNative = 0;
	this->ProcessEvent(uFnSetVariableBool, &SetVariableBool_Params, nullptr);
	uFnSetVariableBool->iNative = native_SetVariableBool;
}

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::SetVariable(const class FString& Path, const struct FASValue& Arg)
{
	static UFunction* uFnSetVariable = nullptr;

	if (!uFnSetVariable)
	{
		uFnSetVariable = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariable");
	}

	UGFxMoviePlayer_execSetVariable_Params SetVariable_Params;
	memset(&SetVariable_Params, 0, sizeof(SetVariable_Params));
	if (!uFnSetVariable)
	{
		return;
	}

	memcpy_s(&SetVariable_Params.Path, sizeof(SetVariable_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariable_Params.Arg, sizeof(SetVariable_Params.Arg), &Arg, sizeof(Arg));

	auto native_SetVariable = uFnSetVariable->iNative;
	uFnSetVariable->iNative = 0;
	this->ProcessEvent(uFnSetVariable, &SetVariable_Params, nullptr);
	uFnSetVariable->iNative = native_SetVariable;
}

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxMoviePlayer::GetVariableObject(const class FString& Path, class UClass* optionalType)
{
	static UFunction* uFnGetVariableObject = nullptr;

	if (!uFnGetVariableObject)
	{
		uFnGetVariableObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableObject");
	}

	UGFxMoviePlayer_execGetVariableObject_Params GetVariableObject_Params;
	memset(&GetVariableObject_Params, 0, sizeof(GetVariableObject_Params));
	if (!uFnGetVariableObject)
	{
		return {};
	}

	memcpy_s(&GetVariableObject_Params.Path, sizeof(GetVariableObject_Params.Path), &Path, sizeof(Path));
	GetVariableObject_Params.Type = optionalType;

	auto native_GetVariableObject = uFnGetVariableObject->iNative;
	uFnGetVariableObject->iNative = 0;
	this->ProcessEvent(uFnGetVariableObject, &GetVariableObject_Params, nullptr);
	uFnGetVariableObject->iNative = native_GetVariableObject;

	return GetVariableObject_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxMoviePlayer::GetVariableString(const class FString& Path)
{
	static UFunction* uFnGetVariableString = nullptr;

	if (!uFnGetVariableString)
	{
		uFnGetVariableString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableString");
	}

	UGFxMoviePlayer_execGetVariableString_Params GetVariableString_Params;
	memset(&GetVariableString_Params, 0, sizeof(GetVariableString_Params));
	if (!uFnGetVariableString)
	{
		return {};
	}

	memcpy_s(&GetVariableString_Params.Path, sizeof(GetVariableString_Params.Path), &Path, sizeof(Path));

	auto native_GetVariableString = uFnGetVariableString->iNative;
	uFnGetVariableString->iNative = 0;
	this->ProcessEvent(uFnGetVariableString, &GetVariableString_Params, nullptr);
	uFnGetVariableString->iNative = native_GetVariableString;

	return GetVariableString_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxMoviePlayer::GetVariableInt(const class FString& Path)
{
	static UFunction* uFnGetVariableInt = nullptr;

	if (!uFnGetVariableInt)
	{
		uFnGetVariableInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableInt");
	}

	UGFxMoviePlayer_execGetVariableInt_Params GetVariableInt_Params;
	memset(&GetVariableInt_Params, 0, sizeof(GetVariableInt_Params));
	if (!uFnGetVariableInt)
	{
		return {};
	}

	memcpy_s(&GetVariableInt_Params.Path, sizeof(GetVariableInt_Params.Path), &Path, sizeof(Path));

	auto native_GetVariableInt = uFnGetVariableInt->iNative;
	uFnGetVariableInt->iNative = 0;
	this->ProcessEvent(uFnGetVariableInt, &GetVariableInt_Params, nullptr);
	uFnGetVariableInt->iNative = native_GetVariableInt;

	return GetVariableInt_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

float UGFxMoviePlayer::GetVariableNumber(const class FString& Path)
{
	static UFunction* uFnGetVariableNumber = nullptr;

	if (!uFnGetVariableNumber)
	{
		uFnGetVariableNumber = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableNumber");
	}

	UGFxMoviePlayer_execGetVariableNumber_Params GetVariableNumber_Params;
	memset(&GetVariableNumber_Params, 0, sizeof(GetVariableNumber_Params));
	if (!uFnGetVariableNumber)
	{
		return {};
	}

	memcpy_s(&GetVariableNumber_Params.Path, sizeof(GetVariableNumber_Params.Path), &Path, sizeof(Path));

	auto native_GetVariableNumber = uFnGetVariableNumber->iNative;
	uFnGetVariableNumber->iNative = 0;
	this->ProcessEvent(uFnGetVariableNumber, &GetVariableNumber_Params, nullptr);
	uFnGetVariableNumber->iNative = native_GetVariableNumber;

	return GetVariableNumber_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableBool(const class FString& Path)
{
	static UFunction* uFnGetVariableBool = nullptr;

	if (!uFnGetVariableBool)
	{
		uFnGetVariableBool = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableBool");
	}

	UGFxMoviePlayer_execGetVariableBool_Params GetVariableBool_Params;
	memset(&GetVariableBool_Params, 0, sizeof(GetVariableBool_Params));
	if (!uFnGetVariableBool)
	{
		return {};
	}

	memcpy_s(&GetVariableBool_Params.Path, sizeof(GetVariableBool_Params.Path), &Path, sizeof(Path));

	auto native_GetVariableBool = uFnGetVariableBool->iNative;
	uFnGetVariableBool->iNative = 0;
	this->ProcessEvent(uFnGetVariableBool, &GetVariableBool_Params, nullptr);
	uFnGetVariableBool->iNative = native_GetVariableBool;

	return GetVariableBool_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxMoviePlayer::GetVariable(const class FString& Path)
{
	static UFunction* uFnGetVariable = nullptr;

	if (!uFnGetVariable)
	{
		uFnGetVariable = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariable");
	}

	UGFxMoviePlayer_execGetVariable_Params GetVariable_Params;
	memset(&GetVariable_Params, 0, sizeof(GetVariable_Params));
	if (!uFnGetVariable)
	{
		return {};
	}

	memcpy_s(&GetVariable_Params.Path, sizeof(GetVariable_Params.Path), &Path, sizeof(Path));

	auto native_GetVariable = uFnGetVariable->iNative;
	uFnGetVariable->iNative = 0;
	this->ProcessEvent(uFnGetVariable, &GetVariable_Params, nullptr);
	uFnGetVariable->iNative = native_GetVariable;

	return GetVariable_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGFxMoviePlayer::GetAVMVersion()
{
	static UFunction* uFnGetAVMVersion = nullptr;

	if (!uFnGetAVMVersion)
	{
		uFnGetAVMVersion = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetAVMVersion");
	}

	UGFxMoviePlayer_execGetAVMVersion_Params GetAVMVersion_Params;
	memset(&GetAVMVersion_Params, 0, sizeof(GetAVMVersion_Params));
	if (!uFnGetAVMVersion)
	{
		return {};
	}


	auto native_GetAVMVersion = uFnGetAVMVersion->iNative;
	uFnGetAVMVersion->iNative = 0;
	this->ProcessEvent(uFnGetAVMVersion, &GetAVMVersion_Params, nullptr);
	uFnGetAVMVersion->iNative = native_GetAVMVersion;

	return GetAVMVersion_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// class FName                    ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UGFxMoviePlayer::eventFilterButtonInput(int32_t ControllerId, const class FName& ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FilterButtonInput");
	}

	UGFxMoviePlayer_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	if (!uFnFilterButtonInput)
	{
		return {};
	}

	FilterButtonInput_Params.ControllerId = ControllerId;
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	FilterButtonInput_Params.InputEvent = static_cast<uint8_t>(InputEvent);

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       capturekeysonly                (CPF_Parm)

void UGFxMoviePlayer::FlushPlayerInput(bool capturekeysonly)
{
	static UFunction* uFnFlushPlayerInput = nullptr;

	if (!uFnFlushPlayerInput)
	{
		uFnFlushPlayerInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FlushPlayerInput");
	}

	UGFxMoviePlayer_execFlushPlayerInput_Params FlushPlayerInput_Params;
	memset(&FlushPlayerInput_Params, 0, sizeof(FlushPlayerInput_Params));
	if (!uFnFlushPlayerInput)
	{
		return;
	}

	FlushPlayerInput_Params.capturekeysonly = capturekeysonly;

	auto native_FlushPlayerInput = uFnFlushPlayerInput->iNative;
	uFnFlushPlayerInput->iNative = 0;
	this->ProcessEvent(uFnFlushPlayerInput, &FlushPlayerInput_Params, nullptr);
	uFnFlushPlayerInput->iNative = native_FlushPlayerInput;
}

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::ClearFocusIgnoreKeys()
{
	static UFunction* uFnClearFocusIgnoreKeys = nullptr;

	if (!uFnClearFocusIgnoreKeys)
	{
		uFnClearFocusIgnoreKeys = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys");
	}

	UGFxMoviePlayer_execClearFocusIgnoreKeys_Params ClearFocusIgnoreKeys_Params;
	memset(&ClearFocusIgnoreKeys_Params, 0, sizeof(ClearFocusIgnoreKeys_Params));
	if (!uFnClearFocusIgnoreKeys)
	{
		return;
	}


	auto native_ClearFocusIgnoreKeys = uFnClearFocusIgnoreKeys->iNative;
	uFnClearFocusIgnoreKeys->iNative = 0;
	this->ProcessEvent(uFnClearFocusIgnoreKeys, &ClearFocusIgnoreKeys_Params, nullptr);
	uFnClearFocusIgnoreKeys->iNative = native_ClearFocusIgnoreKeys;
}

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    Key                            (CPF_Parm)

void UGFxMoviePlayer::AddFocusIgnoreKey(const class FName& Key)
{
	static UFunction* uFnAddFocusIgnoreKey = nullptr;

	if (!uFnAddFocusIgnoreKey)
	{
		uFnAddFocusIgnoreKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey");
	}

	UGFxMoviePlayer_execAddFocusIgnoreKey_Params AddFocusIgnoreKey_Params;
	memset(&AddFocusIgnoreKey_Params, 0, sizeof(AddFocusIgnoreKey_Params));
	if (!uFnAddFocusIgnoreKey)
	{
		return;
	}

	memcpy_s(&AddFocusIgnoreKey_Params.Key, sizeof(AddFocusIgnoreKey_Params.Key), &Key, sizeof(Key));

	auto native_AddFocusIgnoreKey = uFnAddFocusIgnoreKey->iNative;
	uFnAddFocusIgnoreKey->iNative = 0;
	this->ProcessEvent(uFnAddFocusIgnoreKey, &AddFocusIgnoreKey_Params, nullptr);
	uFnAddFocusIgnoreKey->iNative = native_AddFocusIgnoreKey;
}

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::ClearCaptureKeys()
{
	static UFunction* uFnClearCaptureKeys = nullptr;

	if (!uFnClearCaptureKeys)
	{
		uFnClearCaptureKeys = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearCaptureKeys");
	}

	UGFxMoviePlayer_execClearCaptureKeys_Params ClearCaptureKeys_Params;
	memset(&ClearCaptureKeys_Params, 0, sizeof(ClearCaptureKeys_Params));
	if (!uFnClearCaptureKeys)
	{
		return;
	}


	auto native_ClearCaptureKeys = uFnClearCaptureKeys->iNative;
	uFnClearCaptureKeys->iNative = 0;
	this->ProcessEvent(uFnClearCaptureKeys, &ClearCaptureKeys_Params, nullptr);
	uFnClearCaptureKeys->iNative = native_ClearCaptureKeys;
}

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    Key                            (CPF_Parm)

void UGFxMoviePlayer::AddCaptureKey(const class FName& Key)
{
	static UFunction* uFnAddCaptureKey = nullptr;

	if (!uFnAddCaptureKey)
	{
		uFnAddCaptureKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.AddCaptureKey");
	}

	UGFxMoviePlayer_execAddCaptureKey_Params AddCaptureKey_Params;
	memset(&AddCaptureKey_Params, 0, sizeof(AddCaptureKey_Params));
	if (!uFnAddCaptureKey)
	{
		return;
	}

	memcpy_s(&AddCaptureKey_Params.Key, sizeof(AddCaptureKey_Params.Key), &Key, sizeof(Key));

	auto native_AddCaptureKey = uFnAddCaptureKey->iNative;
	uFnAddCaptureKey->iNative = 0;
	this->ProcessEvent(uFnAddCaptureKey, &AddCaptureKey_Params, nullptr);
	uFnAddCaptureKey->iNative = native_AddCaptureKey;
}

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bCanReceiveInput               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static UFunction* uFnSetMovieCanReceiveInput = nullptr;

	if (!uFnSetMovieCanReceiveInput)
	{
		uFnSetMovieCanReceiveInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput");
	}

	UGFxMoviePlayer_execSetMovieCanReceiveInput_Params SetMovieCanReceiveInput_Params;
	memset(&SetMovieCanReceiveInput_Params, 0, sizeof(SetMovieCanReceiveInput_Params));
	if (!uFnSetMovieCanReceiveInput)
	{
		return;
	}

	SetMovieCanReceiveInput_Params.bCanReceiveInput = bCanReceiveInput;

	auto native_SetMovieCanReceiveInput = uFnSetMovieCanReceiveInput->iNative;
	uFnSetMovieCanReceiveInput->iNative = 0;
	this->ProcessEvent(uFnSetMovieCanReceiveInput, &SetMovieCanReceiveInput_Params, nullptr);
	uFnSetMovieCanReceiveInput->iNative = native_SetMovieCanReceiveInput;
}

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bCanReceiveFocus               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static UFunction* uFnSetMovieCanReceiveFocus = nullptr;

	if (!uFnSetMovieCanReceiveFocus)
	{
		uFnSetMovieCanReceiveFocus = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus");
	}

	UGFxMoviePlayer_execSetMovieCanReceiveFocus_Params SetMovieCanReceiveFocus_Params;
	memset(&SetMovieCanReceiveFocus_Params, 0, sizeof(SetMovieCanReceiveFocus_Params));
	if (!uFnSetMovieCanReceiveFocus)
	{
		return;
	}

	SetMovieCanReceiveFocus_Params.bCanReceiveFocus = bCanReceiveFocus;

	auto native_SetMovieCanReceiveFocus = uFnSetMovieCanReceiveFocus->iNative;
	uFnSetMovieCanReceiveFocus->iNative = 0;
	this->ProcessEvent(uFnSetMovieCanReceiveFocus, &SetMovieCanReceiveFocus_Params, nullptr);
	uFnSetMovieCanReceiveFocus->iNative = native_SetMovieCanReceiveFocus;
}

// Function GFxUI.GFxMoviePlayer.SetFocus
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       CaptureInput                   (CPF_Parm)
// uint32_t                       Focus                          (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::SetFocus(bool CaptureInput, bool optionalFocus)
{
	static UFunction* uFnSetFocus = nullptr;

	if (!uFnSetFocus)
	{
		uFnSetFocus = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetFocus");
	}

	UGFxMoviePlayer_execSetFocus_Params SetFocus_Params;
	memset(&SetFocus_Params, 0, sizeof(SetFocus_Params));
	if (!uFnSetFocus)
	{
		return;
	}

	SetFocus_Params.CaptureInput = CaptureInput;
	SetFocus_Params.Focus = optionalFocus;

	auto native_SetFocus = uFnSetFocus->iNative;
	uFnSetFocus->iNative = 0;
	this->ProcessEvent(uFnSetFocus, &SetFocus_Params, nullptr);
	uFnSetFocus->iNative = native_SetFocus;
}

// Function GFxUI.GFxMoviePlayer.GetStickMagAng
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Stick                          (CPF_Parm)

struct FVector2D UGFxMoviePlayer::GetStickMagAng(int32_t Stick)
{
	static UFunction* uFnGetStickMagAng = nullptr;

	if (!uFnGetStickMagAng)
	{
		uFnGetStickMagAng = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetStickMagAng");
	}

	UGFxMoviePlayer_execGetStickMagAng_Params GetStickMagAng_Params;
	memset(&GetStickMagAng_Params, 0, sizeof(GetStickMagAng_Params));
	if (!uFnGetStickMagAng)
	{
		return {};
	}

	GetStickMagAng_Params.Stick = Stick;

	auto native_GetStickMagAng = uFnGetStickMagAng->iNative;
	uFnGetStickMagAng->iNative = 0;
	this->ProcessEvent(uFnGetStickMagAng, &GetStickMagAng_Params, nullptr);
	uFnGetStickMagAng->iNative = native_GetStickMagAng;

	return GetStickMagAng_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.HasFocus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxMoviePlayer::HasFocus()
{
	static UFunction* uFnHasFocus = nullptr;

	if (!uFnHasFocus)
	{
		uFnHasFocus = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.HasFocus");
	}

	UGFxMoviePlayer_execHasFocus_Params HasFocus_Params;
	memset(&HasFocus_Params, 0, sizeof(HasFocus_Params));
	if (!uFnHasFocus)
	{
		return {};
	}


	auto native_HasFocus = uFnHasFocus->iNative;
	uFnHasFocus->iNative = 0;
	this->ProcessEvent(uFnHasFocus, &HasFocus_Params, nullptr);
	uFnHasFocus->iNative = native_HasFocus;

	return HasFocus_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetSceneDPG
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ESceneDepthPriorityGroup       NewDPG                         (CPF_Parm)

void UGFxMoviePlayer::SetSceneDPG(ESceneDepthPriorityGroup NewDPG)
{
	static UFunction* uFnSetSceneDPG = nullptr;

	if (!uFnSetSceneDPG)
	{
		uFnSetSceneDPG = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetSceneDPG");
	}

	UGFxMoviePlayer_execSetSceneDPG_Params SetSceneDPG_Params;
	memset(&SetSceneDPG_Params, 0, sizeof(SetSceneDPG_Params));
	if (!uFnSetSceneDPG)
	{
		return;
	}

	SetSceneDPG_Params.NewDPG = static_cast<uint8_t>(NewDPG);

	auto native_SetSceneDPG = uFnSetSceneDPG->iNative;
	uFnSetSceneDPG->iNative = 0;
	this->ProcessEvent(uFnSetSceneDPG, &SetSceneDPG_Params, nullptr);
	uFnSetSceneDPG->iNative = native_SetSceneDPG;
}

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 matPersp                       (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::SetPerspective3D(struct FMatrix& outMatPersp)
{
	static UFunction* uFnSetPerspective3D = nullptr;

	if (!uFnSetPerspective3D)
	{
		uFnSetPerspective3D = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPerspective3D");
	}

	UGFxMoviePlayer_execSetPerspective3D_Params SetPerspective3D_Params;
	memset(&SetPerspective3D_Params, 0, sizeof(SetPerspective3D_Params));
	if (!uFnSetPerspective3D)
	{
		return;
	}

	memcpy_s(&SetPerspective3D_Params.matPersp, sizeof(SetPerspective3D_Params.matPersp), &outMatPersp, sizeof(outMatPersp));

	auto native_SetPerspective3D = uFnSetPerspective3D->iNative;
	uFnSetPerspective3D->iNative = 0;
	this->ProcessEvent(uFnSetPerspective3D, &SetPerspective3D_Params, nullptr);
	uFnSetPerspective3D->iNative = native_SetPerspective3D;

	memcpy_s(&outMatPersp, sizeof(outMatPersp), &SetPerspective3D_Params.matPersp, sizeof(SetPerspective3D_Params.matPersp));
}

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 matView                        (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::SetView3D(struct FMatrix& outMatView)
{
	static UFunction* uFnSetView3D = nullptr;

	if (!uFnSetView3D)
	{
		uFnSetView3D = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetView3D");
	}

	UGFxMoviePlayer_execSetView3D_Params SetView3D_Params;
	memset(&SetView3D_Params, 0, sizeof(SetView3D_Params));
	if (!uFnSetView3D)
	{
		return;
	}

	memcpy_s(&SetView3D_Params.matView, sizeof(SetView3D_Params.matView), &outMatView, sizeof(outMatView));

	auto native_SetView3D = uFnSetView3D->iNative;
	uFnSetView3D->iNative = 0;
	this->ProcessEvent(uFnSetView3D, &SetView3D_Params, nullptr);
	uFnSetView3D->iNative = native_SetView3D;

	memcpy_s(&outMatView, sizeof(outMatView), &SetView3D_Params.matView, sizeof(SetView3D_Params.matView));
}

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          x0                             (CPF_Parm | CPF_OutParm)
// float                          y0                             (CPF_Parm | CPF_OutParm)
// float                          X1                             (CPF_Parm | CPF_OutParm)
// float                          Y1                             (CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::GetVisibleFrameRect(float& outX0, float& outY0, float& outX1, float& outY1)
{
	static UFunction* uFnGetVisibleFrameRect = nullptr;

	if (!uFnGetVisibleFrameRect)
	{
		uFnGetVisibleFrameRect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect");
	}

	UGFxMoviePlayer_execGetVisibleFrameRect_Params GetVisibleFrameRect_Params;
	memset(&GetVisibleFrameRect_Params, 0, sizeof(GetVisibleFrameRect_Params));
	if (!uFnGetVisibleFrameRect)
	{
		return;
	}

	GetVisibleFrameRect_Params.x0 = outX0;
	GetVisibleFrameRect_Params.y0 = outY0;
	GetVisibleFrameRect_Params.X1 = outX1;
	GetVisibleFrameRect_Params.Y1 = outY1;

	auto native_GetVisibleFrameRect = uFnGetVisibleFrameRect->iNative;
	uFnGetVisibleFrameRect->iNative = 0;
	this->ProcessEvent(uFnGetVisibleFrameRect, &GetVisibleFrameRect_Params, nullptr);
	uFnGetVisibleFrameRect->iNative = native_GetVisibleFrameRect;

	outX0 = GetVisibleFrameRect_Params.x0;
	outY0 = GetVisibleFrameRect_Params.y0;
	outX1 = GetVisibleFrameRect_Params.X1;
	outY1 = GetVisibleFrameRect_Params.Y1;
}

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EGFxAlign                      A                              (CPF_Parm)

void UGFxMoviePlayer::SetAlignment(EGFxAlign A)
{
	static UFunction* uFnSetAlignment = nullptr;

	if (!uFnSetAlignment)
	{
		uFnSetAlignment = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetAlignment");
	}

	UGFxMoviePlayer_execSetAlignment_Params SetAlignment_Params;
	memset(&SetAlignment_Params, 0, sizeof(SetAlignment_Params));
	if (!uFnSetAlignment)
	{
		return;
	}

	SetAlignment_Params.A = static_cast<uint8_t>(A);

	auto native_SetAlignment = uFnSetAlignment->iNative;
	uFnSetAlignment->iNative = 0;
	this->ProcessEvent(uFnSetAlignment, &SetAlignment_Params, nullptr);
	uFnSetAlignment->iNative = native_SetAlignment;
}

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EGFxScaleMode                  SM                             (CPF_Parm)

void UGFxMoviePlayer::SetViewScaleMode(EGFxScaleMode SM)
{
	static UFunction* uFnSetViewScaleMode = nullptr;

	if (!uFnSetViewScaleMode)
	{
		uFnSetViewScaleMode = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewScaleMode");
	}

	UGFxMoviePlayer_execSetViewScaleMode_Params SetViewScaleMode_Params;
	memset(&SetViewScaleMode_Params, 0, sizeof(SetViewScaleMode_Params));
	if (!uFnSetViewScaleMode)
	{
		return;
	}

	SetViewScaleMode_Params.SM = static_cast<uint8_t>(SM);

	auto native_SetViewScaleMode = uFnSetViewScaleMode->iNative;
	uFnSetViewScaleMode->iNative = 0;
	this->ProcessEvent(uFnSetViewScaleMode, &SetViewScaleMode_Params, nullptr);
	uFnSetViewScaleMode->iNative = native_SetViewScaleMode;
}

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        X                              (CPF_Parm)
// int32_t                        Y                              (CPF_Parm)
// int32_t                        Width                          (CPF_Parm)
// int32_t                        Height                         (CPF_Parm)

void UGFxMoviePlayer::SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height)
{
	static UFunction* uFnSetViewport = nullptr;

	if (!uFnSetViewport)
	{
		uFnSetViewport = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewport");
	}

	UGFxMoviePlayer_execSetViewport_Params SetViewport_Params;
	memset(&SetViewport_Params, 0, sizeof(SetViewport_Params));
	if (!uFnSetViewport)
	{
		return;
	}

	SetViewport_Params.X = X;
	SetViewport_Params.Y = Y;
	SetViewport_Params.Width = Width;
	SetViewport_Params.Height = Height;

	auto native_SetViewport = uFnSetViewport->iNative;
	uFnSetViewport->iNative = 0;
	this->ProcessEvent(uFnSetViewport, &SetViewport_Params, nullptr);
	uFnSetViewport->iNative = native_SetViewport;
}

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameViewportClient*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient()
{
	static UFunction* uFnGetGameViewportClient = nullptr;

	if (!uFnGetGameViewportClient)
	{
		uFnGetGameViewportClient = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetGameViewportClient");
	}

	UGFxMoviePlayer_execGetGameViewportClient_Params GetGameViewportClient_Params;
	memset(&GetGameViewportClient_Params, 0, sizeof(GetGameViewportClient_Params));
	if (!uFnGetGameViewportClient)
	{
		return {};
	}


	auto native_GetGameViewportClient = uFnGetGameViewportClient->iNative;
	uFnGetGameViewportClient->iNative = 0;
	this->ProcessEvent(uFnGetGameViewportClient, &GetGameViewportClient_Params, nullptr);
	uFnGetGameViewportClient->iNative = native_GetGameViewportClient;

	return GetGameViewportClient_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        NewPriority                    (CPF_Parm)

void UGFxMoviePlayer::SetPriority(uint8_t NewPriority)
{
	static UFunction* uFnSetPriority = nullptr;

	if (!uFnSetPriority)
	{
		uFnSetPriority = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPriority");
	}

	UGFxMoviePlayer_execSetPriority_Params SetPriority_Params;
	memset(&SetPriority_Params, 0, sizeof(SetPriority_Params));
	if (!uFnSetPriority)
	{
		return;
	}

	SetPriority_Params.NewPriority = static_cast<uint8_t>(NewPriority);

	auto native_SetPriority = uFnSetPriority->iNative;
	uFnSetPriority->iNative = 0;
	this->ProcessEvent(uFnSetPriority, &SetPriority_Params, nullptr);
	uFnSetPriority->iNative = native_SetPriority;
}

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Resource                       (CPF_Parm | CPF_NeedCtorLink)
// class UTexture*                Texture                        (CPF_Parm)

bool UGFxMoviePlayer::SetExternalTexture(const class FString& Resource, class UTexture* Texture)
{
	static UFunction* uFnSetExternalTexture = nullptr;

	if (!uFnSetExternalTexture)
	{
		uFnSetExternalTexture = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetExternalTexture");
	}

	UGFxMoviePlayer_execSetExternalTexture_Params SetExternalTexture_Params;
	memset(&SetExternalTexture_Params, 0, sizeof(SetExternalTexture_Params));
	if (!uFnSetExternalTexture)
	{
		return {};
	}

	memcpy_s(&SetExternalTexture_Params.Resource, sizeof(SetExternalTexture_Params.Resource), &Resource, sizeof(Resource));
	SetExternalTexture_Params.Texture = Texture;

	auto native_SetExternalTexture = uFnSetExternalTexture->iNative;
	uFnSetExternalTexture->iNative = 0;
	this->ProcessEvent(uFnSetExternalTexture, &SetExternalTexture_Params, nullptr);
	uFnSetExternalTexture->iNative = native_SetExternalTexture;

	return SetExternalTexture_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 H                              (CPF_Parm)

void UGFxMoviePlayer::SetExternalInterface(class UObject* H)
{
	static UFunction* uFnSetExternalInterface = nullptr;

	if (!uFnSetExternalInterface)
	{
		uFnSetExternalInterface = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetExternalInterface");
	}

	UGFxMoviePlayer_execSetExternalInterface_Params SetExternalInterface_Params;
	memset(&SetExternalInterface_Params, 0, sizeof(SetExternalInterface_Params));
	if (!uFnSetExternalInterface)
	{
		return;
	}

	SetExternalInterface_Params.H = H;

	this->ProcessEvent(uFnSetExternalInterface, &SetExternalInterface_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EGFxTimingMode                 Mode                           (CPF_Parm)

void UGFxMoviePlayer::SetTimingMode(EGFxTimingMode Mode)
{
	static UFunction* uFnSetTimingMode = nullptr;

	if (!uFnSetTimingMode)
	{
		uFnSetTimingMode = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetTimingMode");
	}

	UGFxMoviePlayer_execSetTimingMode_Params SetTimingMode_Params;
	memset(&SetTimingMode_Params, 0, sizeof(SetTimingMode_Params));
	if (!uFnSetTimingMode)
	{
		return;
	}

	SetTimingMode_Params.Mode = static_cast<uint8_t>(Mode);

	auto native_SetTimingMode = uFnSetTimingMode->iNative;
	uFnSetTimingMode->iNative = 0;
	this->ProcessEvent(uFnSetTimingMode, &SetTimingMode_Params, nullptr);
	uFnSetTimingMode->iNative = native_SetTimingMode;
}

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USwfMovie*               Data                           (CPF_Parm)

void UGFxMoviePlayer::SetMovieInfo(class USwfMovie* Data)
{
	static UFunction* uFnSetMovieInfo = nullptr;

	if (!uFnSetMovieInfo)
	{
		uFnSetMovieInfo = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieInfo");
	}

	UGFxMoviePlayer_execSetMovieInfo_Params SetMovieInfo_Params;
	memset(&SetMovieInfo_Params, 0, sizeof(SetMovieInfo_Params));
	if (!uFnSetMovieInfo)
	{
		return;
	}

	SetMovieInfo_Params.Data = Data;

	this->ProcessEvent(uFnSetMovieInfo, &SetMovieInfo_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventConditionalClearPause()
{
	static UFunction* uFnConditionalClearPause = nullptr;

	if (!uFnConditionalClearPause)
	{
		uFnConditionalClearPause = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ConditionalClearPause");
	}

	UGFxMoviePlayer_eventConditionalClearPause_Params ConditionalClearPause_Params;
	memset(&ConditionalClearPause_Params, 0, sizeof(ConditionalClearPause_Params));
	if (!uFnConditionalClearPause)
	{
		return;
	}


	this->ProcessEvent(uFnConditionalClearPause, &ConditionalClearPause_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetViewportSplitscreenIndex
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        _ViewportSplitscreenIndex      (CPF_Parm)

void UGFxMoviePlayer::SetViewportSplitscreenIndex(int32_t _ViewportSplitscreenIndex)
{
	static UFunction* uFnSetViewportSplitscreenIndex = nullptr;

	if (!uFnSetViewportSplitscreenIndex)
	{
		uFnSetViewportSplitscreenIndex = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewportSplitscreenIndex");
	}

	UGFxMoviePlayer_execSetViewportSplitscreenIndex_Params SetViewportSplitscreenIndex_Params;
	memset(&SetViewportSplitscreenIndex_Params, 0, sizeof(SetViewportSplitscreenIndex_Params));
	if (!uFnSetViewportSplitscreenIndex)
	{
		return;
	}

	SetViewportSplitscreenIndex_Params._ViewportSplitscreenIndex = _ViewportSplitscreenIndex;

	auto native_SetViewportSplitscreenIndex = uFnSetViewportSplitscreenIndex->iNative;
	uFnSetViewportSplitscreenIndex->iNative = 0;
	this->ProcessEvent(uFnSetViewportSplitscreenIndex, &SetViewportSplitscreenIndex_Params, nullptr);
	uFnSetViewportSplitscreenIndex->iNative = native_SetViewportSplitscreenIndex;
}

// Function GFxUI.GFxMoviePlayer.GetFocusMovie
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxMoviePlayer*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxMoviePlayer* UGFxMoviePlayer::GetFocusMovie()
{
	static UFunction* uFnGetFocusMovie = nullptr;

	if (!uFnGetFocusMovie)
	{
		uFnGetFocusMovie = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetFocusMovie");
	}

	UGFxMoviePlayer_execGetFocusMovie_Params GetFocusMovie_Params;
	memset(&GetFocusMovie_Params, 0, sizeof(GetFocusMovie_Params));
	if (!uFnGetFocusMovie)
	{
		return {};
	}


	auto native_GetFocusMovie = uFnGetFocusMovie->iNative;
	uFnGetFocusMovie->iNative = 0;
	this->ProcessEvent(uFnGetFocusMovie, &GetFocusMovie_Params, nullptr);
	uFnGetFocusMovie->iNative = native_GetFocusMovie;

	return GetFocusMovie_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.UpdateGamePadStatus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bIsNotUsingGamePad             (CPF_Parm)

void UGFxMoviePlayer::UpdateGamePadStatus(bool bIsNotUsingGamePad)
{
	static UFunction* uFnUpdateGamePadStatus = nullptr;

	if (!uFnUpdateGamePadStatus)
	{
		uFnUpdateGamePadStatus = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.UpdateGamePadStatus");
	}

	UGFxMoviePlayer_execUpdateGamePadStatus_Params UpdateGamePadStatus_Params;
	memset(&UpdateGamePadStatus_Params, 0, sizeof(UpdateGamePadStatus_Params));
	if (!uFnUpdateGamePadStatus)
	{
		return;
	}

	UpdateGamePadStatus_Params.bIsNotUsingGamePad = bIsNotUsingGamePad;

	auto native_UpdateGamePadStatus = uFnUpdateGamePadStatus->iNative;
	uFnUpdateGamePadStatus->iNative = 0;
	this->ProcessEvent(uFnUpdateGamePadStatus, &UpdateGamePadStatus_Params, nullptr);
	uFnUpdateGamePadStatus->iNative = native_UpdateGamePadStatus;
}

// Function GFxUI.GFxMoviePlayer.OnOutroClose
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventOnOutroClose()
{
	static UFunction* uFnOnOutroClose = nullptr;

	if (!uFnOnOutroClose)
	{
		uFnOnOutroClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnOutroClose");
	}

	UGFxMoviePlayer_eventOnOutroClose_Params OnOutroClose_Params;
	memset(&OnOutroClose_Params, 0, sizeof(OnOutroClose_Params));
	if (!uFnOnOutroClose)
	{
		return;
	}


	auto native_OnOutroClose = uFnOnOutroClose->iNative;
	uFnOnOutroClose->iNative = 0;
	this->ProcessEvent(uFnOnOutroClose, &OnOutroClose_Params, nullptr);
	uFnOnOutroClose->iNative = native_OnOutroClose;
}

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventOnCleanup()
{
	static UFunction* uFnOnCleanup = nullptr;

	if (!uFnOnCleanup)
	{
		uFnOnCleanup = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnCleanup");
	}

	UGFxMoviePlayer_eventOnCleanup_Params OnCleanup_Params;
	memset(&OnCleanup_Params, 0, sizeof(OnCleanup_Params));
	if (!uFnOnCleanup)
	{
		return;
	}


	this->ProcessEvent(uFnOnCleanup, &OnCleanup_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventOnClose()
{
	static UFunction* uFnOnClose = nullptr;

	if (!uFnOnClose)
	{
		uFnOnClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnClose");
	}

	UGFxMoviePlayer_eventOnClose_Params OnClose_Params;
	memset(&OnClose_Params, 0, sizeof(OnClose_Params));
	if (!uFnOnClose)
	{
		return;
	}


	this->ProcessEvent(uFnOnClose, &OnClose_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       Unload                         (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::Close(bool optionalUnload)
{
	static UFunction* uFnClose = nullptr;

	if (!uFnClose)
	{
		uFnClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Close");
	}

	UGFxMoviePlayer_execClose_Params Close_Params;
	memset(&Close_Params, 0, sizeof(Close_Params));
	if (!uFnClose)
	{
		return;
	}

	Close_Params.Unload = optionalUnload;

	auto native_Close = uFnClose->iNative;
	uFnClose->iNative = 0;
	this->ProcessEvent(uFnClose, &Close_Params, nullptr);
	uFnClose->iNative = native_Close;
}

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bPausePlayback                 (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::SetPause(bool optionalBPausePlayback)
{
	static UFunction* uFnSetPause = nullptr;

	if (!uFnSetPause)
	{
		uFnSetPause = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPause");
	}

	UGFxMoviePlayer_execSetPause_Params SetPause_Params;
	memset(&SetPause_Params, 0, sizeof(SetPause_Params));
	if (!uFnSetPause)
	{
		return;
	}

	SetPause_Params.bPausePlayback = optionalBPausePlayback;

	auto native_SetPause = uFnSetPause->iNative;
	uFnSetPause->iNative = 0;
	this->ProcessEvent(uFnSetPause, &SetPause_Params, nullptr);
	uFnSetPause->iNative = native_SetPause;
}

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::OnPostAdvance(float DeltaTime)
{
	static UFunction* uFnOnPostAdvance = nullptr;

	if (!uFnOnPostAdvance)
	{
		uFnOnPostAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnPostAdvance");
	}

	UGFxMoviePlayer_execOnPostAdvance_Params OnPostAdvance_Params;
	memset(&OnPostAdvance_Params, 0, sizeof(OnPostAdvance_Params));
	if (!uFnOnPostAdvance)
	{
		return;
	}

	OnPostAdvance_Params.DeltaTime = DeltaTime;

	this->ProcessEvent(uFnOnPostAdvance, &OnPostAdvance_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static UFunction* uFnPostAdvance = nullptr;

	if (!uFnPostAdvance)
	{
		uFnPostAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PostAdvance");
	}

	UGFxMoviePlayer_execPostAdvance_Params PostAdvance_Params;
	memset(&PostAdvance_Params, 0, sizeof(PostAdvance_Params));
	if (!uFnPostAdvance)
	{
		return;
	}

	PostAdvance_Params.DeltaTime = DeltaTime;

	auto native_PostAdvance = uFnPostAdvance->iNative;
	uFnPostAdvance->iNative = 0;
	this->ProcessEvent(uFnPostAdvance, &PostAdvance_Params, nullptr);
	uFnPostAdvance->iNative = native_PostAdvance;
}

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Time                           (CPF_Parm)

void UGFxMoviePlayer::Advance(float Time)
{
	static UFunction* uFnAdvance = nullptr;

	if (!uFnAdvance)
	{
		uFnAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Advance");
	}

	UGFxMoviePlayer_execAdvance_Params Advance_Params;
	memset(&Advance_Params, 0, sizeof(Advance_Params));
	if (!uFnAdvance)
	{
		return;
	}

	Advance_Params.Time = Time;

	auto native_Advance = uFnAdvance->iNative;
	uFnAdvance->iNative = 0;
	this->ProcessEvent(uFnAdvance, &Advance_Params, nullptr);
	uFnAdvance->iNative = native_Advance;
}

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_OptionalParm | CPF_Parm)

bool UGFxMoviePlayer::eventStart(bool optionalStartPaused)
{
	static UFunction* uFnStart = nullptr;

	if (!uFnStart)
	{
		uFnStart = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Start");
	}

	UGFxMoviePlayer_eventStart_Params Start_Params;
	memset(&Start_Params, 0, sizeof(Start_Params));
	if (!uFnStart)
	{
		return {};
	}

	Start_Params.StartPaused = optionalStartPaused;

	auto native_Start = uFnStart->iNative;
	uFnStart->iNative = 0;
	this->ProcessEvent(uFnStart, &Start_Params, nullptr);
	uFnStart->iNative = native_Start;

	return Start_Params.ReturnValue;
}

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    WidgetName                     (CPF_Parm)
// class FName                    WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxObject::eventWidgetUnloaded(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetUnloaded = nullptr;

	if (!uFnWidgetUnloaded)
	{
		uFnWidgetUnloaded = UFunction::FindFunction("Function GFxUI.GFxObject.WidgetUnloaded");
	}

	UGFxObject_eventWidgetUnloaded_Params WidgetUnloaded_Params;
	memset(&WidgetUnloaded_Params, 0, sizeof(WidgetUnloaded_Params));
	if (!uFnWidgetUnloaded)
	{
		return {};
	}

	memcpy_s(&WidgetUnloaded_Params.WidgetName, sizeof(WidgetUnloaded_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetUnloaded_Params.WidgetPath, sizeof(WidgetUnloaded_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	WidgetUnloaded_Params.Widget = Widget;

	this->ProcessEvent(uFnWidgetUnloaded, &WidgetUnloaded_Params, nullptr);

	return WidgetUnloaded_Params.ReturnValue;
}

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    WidgetName                     (CPF_Parm)
// class FName                    WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxObject::eventWidgetInitialized(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function GFxUI.GFxObject.WidgetInitialized");
	}

	UGFxObject_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	if (!uFnWidgetInitialized)
	{
		return {};
	}

	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	WidgetInitialized_Params.Widget = Widget;

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
}

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  symbolname                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  instancename                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Depth                          (CPF_OptionalParm | CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::AttachMovie(const class FString& symbolname, const class FString& instancename, int32_t optionalDepth, class UClass* optionalType)
{
	static UFunction* uFnAttachMovie = nullptr;

	if (!uFnAttachMovie)
	{
		uFnAttachMovie = UFunction::FindFunction("Function GFxUI.GFxObject.AttachMovie");
	}

	UGFxObject_execAttachMovie_Params AttachMovie_Params;
	memset(&AttachMovie_Params, 0, sizeof(AttachMovie_Params));
	if (!uFnAttachMovie)
	{
		return {};
	}

	memcpy_s(&AttachMovie_Params.symbolname, sizeof(AttachMovie_Params.symbolname), &symbolname, sizeof(symbolname));
	memcpy_s(&AttachMovie_Params.instancename, sizeof(AttachMovie_Params.instancename), &instancename, sizeof(instancename));
	AttachMovie_Params.Depth = optionalDepth;
	AttachMovie_Params.Type = optionalType;

	auto native_AttachMovie = uFnAttachMovie->iNative;
	uFnAttachMovie->iNative = 0;
	this->ProcessEvent(uFnAttachMovie, &AttachMovie_Params, nullptr);
	uFnAttachMovie->iNative = native_AttachMovie;

	return AttachMovie_Params.ReturnValue;
}

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  instancename                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Depth                          (CPF_OptionalParm | CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::CreateEmptyMovieClip(const class FString& instancename, int32_t optionalDepth, class UClass* optionalType)
{
	static UFunction* uFnCreateEmptyMovieClip = nullptr;

	if (!uFnCreateEmptyMovieClip)
	{
		uFnCreateEmptyMovieClip = UFunction::FindFunction("Function GFxUI.GFxObject.CreateEmptyMovieClip");
	}

	UGFxObject_execCreateEmptyMovieClip_Params CreateEmptyMovieClip_Params;
	memset(&CreateEmptyMovieClip_Params, 0, sizeof(CreateEmptyMovieClip_Params));
	if (!uFnCreateEmptyMovieClip)
	{
		return {};
	}

	memcpy_s(&CreateEmptyMovieClip_Params.instancename, sizeof(CreateEmptyMovieClip_Params.instancename), &instancename, sizeof(instancename));
	CreateEmptyMovieClip_Params.Depth = optionalDepth;
	CreateEmptyMovieClip_Params.Type = optionalType;

	auto native_CreateEmptyMovieClip = uFnCreateEmptyMovieClip->iNative;
	uFnCreateEmptyMovieClip->iNative = 0;
	this->ProcessEvent(uFnCreateEmptyMovieClip, &CreateEmptyMovieClip_Params, nullptr);
	uFnCreateEmptyMovieClip->iNative = native_CreateEmptyMovieClip;

	return CreateEmptyMovieClip_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Frame                          (CPF_Parm)

void UGFxObject::GotoAndStopI(int32_t Frame)
{
	static UFunction* uFnGotoAndStopI = nullptr;

	if (!uFnGotoAndStopI)
	{
		uFnGotoAndStopI = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndStopI");
	}

	UGFxObject_execGotoAndStopI_Params GotoAndStopI_Params;
	memset(&GotoAndStopI_Params, 0, sizeof(GotoAndStopI_Params));
	if (!uFnGotoAndStopI)
	{
		return;
	}

	GotoAndStopI_Params.Frame = Frame;

	auto native_GotoAndStopI = uFnGotoAndStopI->iNative;
	uFnGotoAndStopI->iNative = 0;
	this->ProcessEvent(uFnGotoAndStopI, &GotoAndStopI_Params, nullptr);
	uFnGotoAndStopI->iNative = native_GotoAndStopI;
}

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Frame                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::GotoAndStop(const class FString& Frame)
{
	static UFunction* uFnGotoAndStop = nullptr;

	if (!uFnGotoAndStop)
	{
		uFnGotoAndStop = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndStop");
	}

	UGFxObject_execGotoAndStop_Params GotoAndStop_Params;
	memset(&GotoAndStop_Params, 0, sizeof(GotoAndStop_Params));
	if (!uFnGotoAndStop)
	{
		return;
	}

	memcpy_s(&GotoAndStop_Params.Frame, sizeof(GotoAndStop_Params.Frame), &Frame, sizeof(Frame));

	auto native_GotoAndStop = uFnGotoAndStop->iNative;
	uFnGotoAndStop->iNative = 0;
	this->ProcessEvent(uFnGotoAndStop, &GotoAndStop_Params, nullptr);
	uFnGotoAndStop->iNative = native_GotoAndStop;
}

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Frame                          (CPF_Parm)

void UGFxObject::GotoAndPlayI(int32_t Frame)
{
	static UFunction* uFnGotoAndPlayI = nullptr;

	if (!uFnGotoAndPlayI)
	{
		uFnGotoAndPlayI = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndPlayI");
	}

	UGFxObject_execGotoAndPlayI_Params GotoAndPlayI_Params;
	memset(&GotoAndPlayI_Params, 0, sizeof(GotoAndPlayI_Params));
	if (!uFnGotoAndPlayI)
	{
		return;
	}

	GotoAndPlayI_Params.Frame = Frame;

	auto native_GotoAndPlayI = uFnGotoAndPlayI->iNative;
	uFnGotoAndPlayI->iNative = 0;
	this->ProcessEvent(uFnGotoAndPlayI, &GotoAndPlayI_Params, nullptr);
	uFnGotoAndPlayI->iNative = native_GotoAndPlayI;
}

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Frame                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::GotoAndPlay(const class FString& Frame)
{
	static UFunction* uFnGotoAndPlay = nullptr;

	if (!uFnGotoAndPlay)
	{
		uFnGotoAndPlay = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndPlay");
	}

	UGFxObject_execGotoAndPlay_Params GotoAndPlay_Params;
	memset(&GotoAndPlay_Params, 0, sizeof(GotoAndPlay_Params));
	if (!uFnGotoAndPlay)
	{
		return;
	}

	memcpy_s(&GotoAndPlay_Params.Frame, sizeof(GotoAndPlay_Params.Frame), &Frame, sizeof(Frame));

	auto native_GotoAndPlay = uFnGotoAndPlay->iNative;
	uFnGotoAndPlay->iNative = 0;
	this->ProcessEvent(uFnGotoAndPlay, &GotoAndPlay_Params, nullptr);
	uFnGotoAndPlay->iNative = native_GotoAndPlay;
}

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<class UGFxObject*> ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class TArray<class UGFxObject*> UGFxObject::ActionScriptArray(const class FString& Path)
{
	static UFunction* uFnActionScriptArray = nullptr;

	if (!uFnActionScriptArray)
	{
		uFnActionScriptArray = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptArray");
	}

	UGFxObject_execActionScriptArray_Params ActionScriptArray_Params;
	memset(&ActionScriptArray_Params, 0, sizeof(ActionScriptArray_Params));
	if (!uFnActionScriptArray)
	{
		return {};
	}

	memcpy_s(&ActionScriptArray_Params.Path, sizeof(ActionScriptArray_Params.Path), &Path, sizeof(Path));

	auto native_ActionScriptArray = uFnActionScriptArray->iNative;
	uFnActionScriptArray->iNative = 0;
	this->ProcessEvent(uFnActionScriptArray, &ActionScriptArray_Params, nullptr);
	uFnActionScriptArray->iNative = native_ActionScriptArray;

	return ActionScriptArray_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxObject::ActionScriptObject(const class FString& Path)
{
	static UFunction* uFnActionScriptObject = nullptr;

	if (!uFnActionScriptObject)
	{
		uFnActionScriptObject = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptObject");
	}

	UGFxObject_execActionScriptObject_Params ActionScriptObject_Params;
	memset(&ActionScriptObject_Params, 0, sizeof(ActionScriptObject_Params));
	if (!uFnActionScriptObject)
	{
		return {};
	}

	memcpy_s(&ActionScriptObject_Params.Path, sizeof(ActionScriptObject_Params.Path), &Path, sizeof(Path));

	auto native_ActionScriptObject = uFnActionScriptObject->iNative;
	uFnActionScriptObject->iNative = 0;
	this->ProcessEvent(uFnActionScriptObject, &ActionScriptObject_Params, nullptr);
	uFnActionScriptObject->iNative = native_ActionScriptObject;

	return ActionScriptObject_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxObject::ActionScriptString(const class FString& method)
{
	static UFunction* uFnActionScriptString = nullptr;

	if (!uFnActionScriptString)
	{
		uFnActionScriptString = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptString");
	}

	UGFxObject_execActionScriptString_Params ActionScriptString_Params;
	memset(&ActionScriptString_Params, 0, sizeof(ActionScriptString_Params));
	if (!uFnActionScriptString)
	{
		return {};
	}

	memcpy_s(&ActionScriptString_Params.method, sizeof(ActionScriptString_Params.method), &method, sizeof(method));

	auto native_ActionScriptString = uFnActionScriptString->iNative;
	uFnActionScriptString->iNative = 0;
	this->ProcessEvent(uFnActionScriptString, &ActionScriptString_Params, nullptr);
	uFnActionScriptString->iNative = native_ActionScriptString;

	return ActionScriptString_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::ActionScriptFloat(const class FString& method)
{
	static UFunction* uFnActionScriptFloat = nullptr;

	if (!uFnActionScriptFloat)
	{
		uFnActionScriptFloat = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptFloat");
	}

	UGFxObject_execActionScriptFloat_Params ActionScriptFloat_Params;
	memset(&ActionScriptFloat_Params, 0, sizeof(ActionScriptFloat_Params));
	if (!uFnActionScriptFloat)
	{
		return {};
	}

	memcpy_s(&ActionScriptFloat_Params.method, sizeof(ActionScriptFloat_Params.method), &method, sizeof(method));

	auto native_ActionScriptFloat = uFnActionScriptFloat->iNative;
	uFnActionScriptFloat->iNative = 0;
	this->ProcessEvent(uFnActionScriptFloat, &ActionScriptFloat_Params, nullptr);
	uFnActionScriptFloat->iNative = native_ActionScriptFloat;

	return ActionScriptFloat_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxObject::ActionScriptInt(const class FString& method)
{
	static UFunction* uFnActionScriptInt = nullptr;

	if (!uFnActionScriptInt)
	{
		uFnActionScriptInt = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptInt");
	}

	UGFxObject_execActionScriptInt_Params ActionScriptInt_Params;
	memset(&ActionScriptInt_Params, 0, sizeof(ActionScriptInt_Params));
	if (!uFnActionScriptInt)
	{
		return {};
	}

	memcpy_s(&ActionScriptInt_Params.method, sizeof(ActionScriptInt_Params.method), &method, sizeof(method));

	auto native_ActionScriptInt = uFnActionScriptInt->iNative;
	uFnActionScriptInt->iNative = 0;
	this->ProcessEvent(uFnActionScriptInt, &ActionScriptInt_Params, nullptr);
	uFnActionScriptInt->iNative = native_ActionScriptInt;

	return ActionScriptInt_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptVoid(const class FString& method)
{
	static UFunction* uFnActionScriptVoid = nullptr;

	if (!uFnActionScriptVoid)
	{
		uFnActionScriptVoid = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptVoid");
	}

	UGFxObject_execActionScriptVoid_Params ActionScriptVoid_Params;
	memset(&ActionScriptVoid_Params, 0, sizeof(ActionScriptVoid_Params));
	if (!uFnActionScriptVoid)
	{
		return;
	}

	memcpy_s(&ActionScriptVoid_Params.method, sizeof(ActionScriptVoid_Params.method), &method, sizeof(method));

	auto native_ActionScriptVoid = uFnActionScriptVoid->iNative;
	uFnActionScriptVoid->iNative = 0;
	this->ProcessEvent(uFnActionScriptVoid, &ActionScriptVoid_Params, nullptr);
	uFnActionScriptVoid->iNative = native_ActionScriptVoid;
}

// Function GFxUI.GFxObject.Invoke
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FASValue>  args                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::Invoke(const class FString& Member, const class TArray<struct FASValue>& args)
{
	static UFunction* uFnInvoke = nullptr;

	if (!uFnInvoke)
	{
		uFnInvoke = UFunction::FindFunction("Function GFxUI.GFxObject.Invoke");
	}

	UGFxObject_execInvoke_Params Invoke_Params;
	memset(&Invoke_Params, 0, sizeof(Invoke_Params));
	if (!uFnInvoke)
	{
		return {};
	}

	memcpy_s(&Invoke_Params.Member, sizeof(Invoke_Params.Member), &Member, sizeof(Member));
	memcpy_s(&Invoke_Params.args, sizeof(Invoke_Params.args), &args, sizeof(args));

	auto native_Invoke = uFnInvoke->iNative;
	uFnInvoke->iNative = 0;
	this->ProcessEvent(uFnInvoke, &Invoke_Params, nullptr);
	uFnInvoke->iNative = native_Invoke;

	return Invoke_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              Target                         (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptSetFunctionOn(class UGFxObject* Target, const class FString& Member)
{
	static UFunction* uFnActionScriptSetFunctionOn = nullptr;

	if (!uFnActionScriptSetFunctionOn)
	{
		uFnActionScriptSetFunctionOn = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptSetFunctionOn");
	}

	UGFxObject_execActionScriptSetFunctionOn_Params ActionScriptSetFunctionOn_Params;
	memset(&ActionScriptSetFunctionOn_Params, 0, sizeof(ActionScriptSetFunctionOn_Params));
	if (!uFnActionScriptSetFunctionOn)
	{
		return;
	}

	ActionScriptSetFunctionOn_Params.Target = Target;
	memcpy_s(&ActionScriptSetFunctionOn_Params.Member, sizeof(ActionScriptSetFunctionOn_Params.Member), &Member, sizeof(Member));

	auto native_ActionScriptSetFunctionOn = uFnActionScriptSetFunctionOn->iNative;
	uFnActionScriptSetFunctionOn->iNative = 0;
	this->ProcessEvent(uFnActionScriptSetFunctionOn, &ActionScriptSetFunctionOn_Params, nullptr);
	uFnActionScriptSetFunctionOn->iNative = native_ActionScriptSetFunctionOn;
}

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptSetFunction(const class FString& Member)
{
	static UFunction* uFnActionScriptSetFunction = nullptr;

	if (!uFnActionScriptSetFunction)
	{
		uFnActionScriptSetFunction = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptSetFunction");
	}

	UGFxObject_execActionScriptSetFunction_Params ActionScriptSetFunction_Params;
	memset(&ActionScriptSetFunction_Params, 0, sizeof(ActionScriptSetFunction_Params));
	if (!uFnActionScriptSetFunction)
	{
		return;
	}

	memcpy_s(&ActionScriptSetFunction_Params.Member, sizeof(ActionScriptSetFunction_Params.Member), &Member, sizeof(Member));

	auto native_ActionScriptSetFunction = uFnActionScriptSetFunction->iNative;
	uFnActionScriptSetFunction->iNative = 0;
	this->ProcessEvent(uFnActionScriptSetFunction, &ActionScriptSetFunction_Params, nullptr);
	uFnActionScriptSetFunction->iNative = native_ActionScriptSetFunction;
}

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementMemberString(int32_t Index, const class FString& Member, const class FString& S)
{
	static UFunction* uFnSetElementMemberString = nullptr;

	if (!uFnSetElementMemberString)
	{
		uFnSetElementMemberString = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberString");
	}

	UGFxObject_execSetElementMemberString_Params SetElementMemberString_Params;
	memset(&SetElementMemberString_Params, 0, sizeof(SetElementMemberString_Params));
	if (!uFnSetElementMemberString)
	{
		return;
	}

	SetElementMemberString_Params.Index = Index;
	memcpy_s(&SetElementMemberString_Params.Member, sizeof(SetElementMemberString_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetElementMemberString_Params.S, sizeof(SetElementMemberString_Params.S), &S, sizeof(S));

	auto native_SetElementMemberString = uFnSetElementMemberString->iNative;
	uFnSetElementMemberString->iNative = 0;
	this->ProcessEvent(uFnSetElementMemberString, &SetElementMemberString_Params, nullptr);
	uFnSetElementMemberString->iNative = native_SetElementMemberString;
}

// Function GFxUI.GFxObject.SetElementMemberInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

void UGFxObject::SetElementMemberInt(int32_t Index, const class FString& Member, int32_t I)
{
	static UFunction* uFnSetElementMemberInt = nullptr;

	if (!uFnSetElementMemberInt)
	{
		uFnSetElementMemberInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberInt");
	}

	UGFxObject_execSetElementMemberInt_Params SetElementMemberInt_Params;
	memset(&SetElementMemberInt_Params, 0, sizeof(SetElementMemberInt_Params));
	if (!uFnSetElementMemberInt)
	{
		return;
	}

	SetElementMemberInt_Params.Index = Index;
	memcpy_s(&SetElementMemberInt_Params.Member, sizeof(SetElementMemberInt_Params.Member), &Member, sizeof(Member));
	SetElementMemberInt_Params.I = I;

	auto native_SetElementMemberInt = uFnSetElementMemberInt->iNative;
	uFnSetElementMemberInt->iNative = 0;
	this->ProcessEvent(uFnSetElementMemberInt, &SetElementMemberInt_Params, nullptr);
	uFnSetElementMemberInt->iNative = native_SetElementMemberInt;
}

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementMemberFloat(int32_t Index, const class FString& Member, float F)
{
	static UFunction* uFnSetElementMemberFloat = nullptr;

	if (!uFnSetElementMemberFloat)
	{
		uFnSetElementMemberFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberFloat");
	}

	UGFxObject_execSetElementMemberFloat_Params SetElementMemberFloat_Params;
	memset(&SetElementMemberFloat_Params, 0, sizeof(SetElementMemberFloat_Params));
	if (!uFnSetElementMemberFloat)
	{
		return;
	}

	SetElementMemberFloat_Params.Index = Index;
	memcpy_s(&SetElementMemberFloat_Params.Member, sizeof(SetElementMemberFloat_Params.Member), &Member, sizeof(Member));
	SetElementMemberFloat_Params.F = F;

	auto native_SetElementMemberFloat = uFnSetElementMemberFloat->iNative;
	uFnSetElementMemberFloat->iNative = 0;
	this->ProcessEvent(uFnSetElementMemberFloat, &SetElementMemberFloat_Params, nullptr);
	uFnSetElementMemberFloat->iNative = native_SetElementMemberFloat;
}

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       B                              (CPF_Parm)

void UGFxObject::SetElementMemberBool(int32_t Index, const class FString& Member, bool B)
{
	static UFunction* uFnSetElementMemberBool = nullptr;

	if (!uFnSetElementMemberBool)
	{
		uFnSetElementMemberBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberBool");
	}

	UGFxObject_execSetElementMemberBool_Params SetElementMemberBool_Params;
	memset(&SetElementMemberBool_Params, 0, sizeof(SetElementMemberBool_Params));
	if (!uFnSetElementMemberBool)
	{
		return;
	}

	SetElementMemberBool_Params.Index = Index;
	memcpy_s(&SetElementMemberBool_Params.Member, sizeof(SetElementMemberBool_Params.Member), &Member, sizeof(Member));
	SetElementMemberBool_Params.B = B;

	auto native_SetElementMemberBool = uFnSetElementMemberBool->iNative;
	uFnSetElementMemberBool->iNative = 0;
	this->ProcessEvent(uFnSetElementMemberBool, &SetElementMemberBool_Params, nullptr);
	uFnSetElementMemberBool->iNative = native_SetElementMemberBool;
}

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementMemberObject(int32_t Index, const class FString& Member, class UGFxObject* val)
{
	static UFunction* uFnSetElementMemberObject = nullptr;

	if (!uFnSetElementMemberObject)
	{
		uFnSetElementMemberObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberObject");
	}

	UGFxObject_execSetElementMemberObject_Params SetElementMemberObject_Params;
	memset(&SetElementMemberObject_Params, 0, sizeof(SetElementMemberObject_Params));
	if (!uFnSetElementMemberObject)
	{
		return;
	}

	SetElementMemberObject_Params.Index = Index;
	memcpy_s(&SetElementMemberObject_Params.Member, sizeof(SetElementMemberObject_Params.Member), &Member, sizeof(Member));
	SetElementMemberObject_Params.val = val;

	auto native_SetElementMemberObject = uFnSetElementMemberObject->iNative;
	uFnSetElementMemberObject->iNative = 0;
	this->ProcessEvent(uFnSetElementMemberObject, &SetElementMemberObject_Params, nullptr);
	uFnSetElementMemberObject->iNative = native_SetElementMemberObject;
}

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementMember(int32_t Index, const class FString& Member, const struct FASValue& Arg)
{
	static UFunction* uFnSetElementMember = nullptr;

	if (!uFnSetElementMember)
	{
		uFnSetElementMember = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMember");
	}

	UGFxObject_execSetElementMember_Params SetElementMember_Params;
	memset(&SetElementMember_Params, 0, sizeof(SetElementMember_Params));
	if (!uFnSetElementMember)
	{
		return;
	}

	SetElementMember_Params.Index = Index;
	memcpy_s(&SetElementMember_Params.Member, sizeof(SetElementMember_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetElementMember_Params.Arg, sizeof(SetElementMember_Params.Arg), &Arg, sizeof(Arg));

	auto native_SetElementMember = uFnSetElementMember->iNative;
	uFnSetElementMember->iNative = 0;
	this->ProcessEvent(uFnSetElementMember, &SetElementMember_Params, nullptr);
	uFnSetElementMember->iNative = native_SetElementMember;
}

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxObject::GetElementMemberString(int32_t Index, const class FString& Member)
{
	static UFunction* uFnGetElementMemberString = nullptr;

	if (!uFnGetElementMemberString)
	{
		uFnGetElementMemberString = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberString");
	}

	UGFxObject_execGetElementMemberString_Params GetElementMemberString_Params;
	memset(&GetElementMemberString_Params, 0, sizeof(GetElementMemberString_Params));
	if (!uFnGetElementMemberString)
	{
		return {};
	}

	GetElementMemberString_Params.Index = Index;
	memcpy_s(&GetElementMemberString_Params.Member, sizeof(GetElementMemberString_Params.Member), &Member, sizeof(Member));

	auto native_GetElementMemberString = uFnGetElementMemberString->iNative;
	uFnGetElementMemberString->iNative = 0;
	this->ProcessEvent(uFnGetElementMemberString, &GetElementMemberString_Params, nullptr);
	uFnGetElementMemberString->iNative = native_GetElementMemberString;

	return GetElementMemberString_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementMemberInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxObject::GetElementMemberInt(int32_t Index, const class FString& Member)
{
	static UFunction* uFnGetElementMemberInt = nullptr;

	if (!uFnGetElementMemberInt)
	{
		uFnGetElementMemberInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberInt");
	}

	UGFxObject_execGetElementMemberInt_Params GetElementMemberInt_Params;
	memset(&GetElementMemberInt_Params, 0, sizeof(GetElementMemberInt_Params));
	if (!uFnGetElementMemberInt)
	{
		return {};
	}

	GetElementMemberInt_Params.Index = Index;
	memcpy_s(&GetElementMemberInt_Params.Member, sizeof(GetElementMemberInt_Params.Member), &Member, sizeof(Member));

	auto native_GetElementMemberInt = uFnGetElementMemberInt->iNative;
	uFnGetElementMemberInt->iNative = 0;
	this->ProcessEvent(uFnGetElementMemberInt, &GetElementMemberInt_Params, nullptr);
	uFnGetElementMemberInt->iNative = native_GetElementMemberInt;

	return GetElementMemberInt_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::GetElementMemberFloat(int32_t Index, const class FString& Member)
{
	static UFunction* uFnGetElementMemberFloat = nullptr;

	if (!uFnGetElementMemberFloat)
	{
		uFnGetElementMemberFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberFloat");
	}

	UGFxObject_execGetElementMemberFloat_Params GetElementMemberFloat_Params;
	memset(&GetElementMemberFloat_Params, 0, sizeof(GetElementMemberFloat_Params));
	if (!uFnGetElementMemberFloat)
	{
		return {};
	}

	GetElementMemberFloat_Params.Index = Index;
	memcpy_s(&GetElementMemberFloat_Params.Member, sizeof(GetElementMemberFloat_Params.Member), &Member, sizeof(Member));

	auto native_GetElementMemberFloat = uFnGetElementMemberFloat->iNative;
	uFnGetElementMemberFloat->iNative = 0;
	this->ProcessEvent(uFnGetElementMemberFloat, &GetElementMemberFloat_Params, nullptr);
	uFnGetElementMemberFloat->iNative = native_GetElementMemberFloat;

	return GetElementMemberFloat_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

bool UGFxObject::GetElementMemberBool(int32_t Index, const class FString& Member)
{
	static UFunction* uFnGetElementMemberBool = nullptr;

	if (!uFnGetElementMemberBool)
	{
		uFnGetElementMemberBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberBool");
	}

	UGFxObject_execGetElementMemberBool_Params GetElementMemberBool_Params;
	memset(&GetElementMemberBool_Params, 0, sizeof(GetElementMemberBool_Params));
	if (!uFnGetElementMemberBool)
	{
		return {};
	}

	GetElementMemberBool_Params.Index = Index;
	memcpy_s(&GetElementMemberBool_Params.Member, sizeof(GetElementMemberBool_Params.Member), &Member, sizeof(Member));

	auto native_GetElementMemberBool = uFnGetElementMemberBool->iNative;
	uFnGetElementMemberBool->iNative = 0;
	this->ProcessEvent(uFnGetElementMemberBool, &GetElementMemberBool_Params, nullptr);
	uFnGetElementMemberBool->iNative = native_GetElementMemberBool;

	return GetElementMemberBool_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetElementMemberObject(int32_t Index, const class FString& Member, class UClass* optionalType)
{
	static UFunction* uFnGetElementMemberObject = nullptr;

	if (!uFnGetElementMemberObject)
	{
		uFnGetElementMemberObject = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberObject");
	}

	UGFxObject_execGetElementMemberObject_Params GetElementMemberObject_Params;
	memset(&GetElementMemberObject_Params, 0, sizeof(GetElementMemberObject_Params));
	if (!uFnGetElementMemberObject)
	{
		return {};
	}

	GetElementMemberObject_Params.Index = Index;
	memcpy_s(&GetElementMemberObject_Params.Member, sizeof(GetElementMemberObject_Params.Member), &Member, sizeof(Member));
	GetElementMemberObject_Params.Type = optionalType;

	auto native_GetElementMemberObject = uFnGetElementMemberObject->iNative;
	uFnGetElementMemberObject->iNative = 0;
	this->ProcessEvent(uFnGetElementMemberObject, &GetElementMemberObject_Params, nullptr);
	uFnGetElementMemberObject->iNative = native_GetElementMemberObject;

	return GetElementMemberObject_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::GetElementMember(int32_t Index, const class FString& Member)
{
	static UFunction* uFnGetElementMember = nullptr;

	if (!uFnGetElementMember)
	{
		uFnGetElementMember = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMember");
	}

	UGFxObject_execGetElementMember_Params GetElementMember_Params;
	memset(&GetElementMember_Params, 0, sizeof(GetElementMember_Params));
	if (!uFnGetElementMember)
	{
		return {};
	}

	GetElementMember_Params.Index = Index;
	memcpy_s(&GetElementMember_Params.Member, sizeof(GetElementMember_Params.Member), &Member, sizeof(Member));

	auto native_GetElementMember = uFnGetElementMember->iNative;
	uFnGetElementMember->iNative = 0;
	this->ProcessEvent(uFnGetElementMember, &GetElementMember_Params, nullptr);
	uFnGetElementMember->iNative = native_GetElementMember;

	return GetElementMember_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FASColorTransform       cxform                         (CPF_Parm)

void UGFxObject::SetElementColorTransform(int32_t Index, const struct FASColorTransform& cxform)
{
	static UFunction* uFnSetElementColorTransform = nullptr;

	if (!uFnSetElementColorTransform)
	{
		uFnSetElementColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementColorTransform");
	}

	UGFxObject_execSetElementColorTransform_Params SetElementColorTransform_Params;
	memset(&SetElementColorTransform_Params, 0, sizeof(SetElementColorTransform_Params));
	if (!uFnSetElementColorTransform)
	{
		return;
	}

	SetElementColorTransform_Params.Index = Index;
	memcpy_s(&SetElementColorTransform_Params.cxform, sizeof(SetElementColorTransform_Params.cxform), &cxform, sizeof(cxform));

	auto native_SetElementColorTransform = uFnSetElementColorTransform->iNative;
	uFnSetElementColorTransform->iNative = 0;
	this->ProcessEvent(uFnSetElementColorTransform, &SetElementColorTransform_Params, nullptr);
	uFnSetElementColorTransform->iNative = native_SetElementColorTransform;
}

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetElementPosition(int32_t Index, float X, float Y)
{
	static UFunction* uFnSetElementPosition = nullptr;

	if (!uFnSetElementPosition)
	{
		uFnSetElementPosition = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementPosition");
	}

	UGFxObject_execSetElementPosition_Params SetElementPosition_Params;
	memset(&SetElementPosition_Params, 0, sizeof(SetElementPosition_Params));
	if (!uFnSetElementPosition)
	{
		return;
	}

	SetElementPosition_Params.Index = Index;
	SetElementPosition_Params.X = X;
	SetElementPosition_Params.Y = Y;

	auto native_SetElementPosition = uFnSetElementPosition->iNative;
	uFnSetElementPosition->iNative = 0;
	this->ProcessEvent(uFnSetElementPosition, &SetElementPosition_Params, nullptr);
	uFnSetElementPosition->iNative = native_SetElementPosition;
}

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// uint32_t                       Visible                        (CPF_Parm)

void UGFxObject::SetElementVisible(int32_t Index, bool Visible)
{
	static UFunction* uFnSetElementVisible = nullptr;

	if (!uFnSetElementVisible)
	{
		uFnSetElementVisible = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementVisible");
	}

	UGFxObject_execSetElementVisible_Params SetElementVisible_Params;
	memset(&SetElementVisible_Params, 0, sizeof(SetElementVisible_Params));
	if (!uFnSetElementVisible)
	{
		return;
	}

	SetElementVisible_Params.Index = Index;
	SetElementVisible_Params.Visible = Visible;

	auto native_SetElementVisible = uFnSetElementVisible->iNative;
	uFnSetElementVisible->iNative = 0;
	this->ProcessEvent(uFnSetElementVisible, &SetElementVisible_Params, nullptr);
	uFnSetElementVisible->iNative = native_SetElementVisible;
}

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetElementDisplayMatrix(int32_t Index, const struct FMatrix& M)
{
	static UFunction* uFnSetElementDisplayMatrix = nullptr;

	if (!uFnSetElementDisplayMatrix)
	{
		uFnSetElementDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementDisplayMatrix");
	}

	UGFxObject_execSetElementDisplayMatrix_Params SetElementDisplayMatrix_Params;
	memset(&SetElementDisplayMatrix_Params, 0, sizeof(SetElementDisplayMatrix_Params));
	if (!uFnSetElementDisplayMatrix)
	{
		return;
	}

	SetElementDisplayMatrix_Params.Index = Index;
	memcpy_s(&SetElementDisplayMatrix_Params.M, sizeof(SetElementDisplayMatrix_Params.M), &M, sizeof(M));

	auto native_SetElementDisplayMatrix = uFnSetElementDisplayMatrix->iNative;
	uFnSetElementDisplayMatrix->iNative = 0;
	this->ProcessEvent(uFnSetElementDisplayMatrix, &SetElementDisplayMatrix_Params, nullptr);
	uFnSetElementDisplayMatrix->iNative = native_SetElementDisplayMatrix;
}

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FASDisplayInfo          D                              (CPF_Parm)

void UGFxObject::SetElementDisplayInfo(int32_t Index, const struct FASDisplayInfo& D)
{
	static UFunction* uFnSetElementDisplayInfo = nullptr;

	if (!uFnSetElementDisplayInfo)
	{
		uFnSetElementDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementDisplayInfo");
	}

	UGFxObject_execSetElementDisplayInfo_Params SetElementDisplayInfo_Params;
	memset(&SetElementDisplayInfo_Params, 0, sizeof(SetElementDisplayInfo_Params));
	if (!uFnSetElementDisplayInfo)
	{
		return;
	}

	SetElementDisplayInfo_Params.Index = Index;
	memcpy_s(&SetElementDisplayInfo_Params.D, sizeof(SetElementDisplayInfo_Params.D), &D, sizeof(D));

	auto native_SetElementDisplayInfo = uFnSetElementDisplayInfo->iNative;
	uFnSetElementDisplayInfo->iNative = 0;
	this->ProcessEvent(uFnSetElementDisplayInfo, &SetElementDisplayInfo_Params, nullptr);
	uFnSetElementDisplayInfo->iNative = native_SetElementDisplayInfo;
}

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

struct FMatrix UGFxObject::GetElementDisplayMatrix(int32_t Index)
{
	static UFunction* uFnGetElementDisplayMatrix = nullptr;

	if (!uFnGetElementDisplayMatrix)
	{
		uFnGetElementDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementDisplayMatrix");
	}

	UGFxObject_execGetElementDisplayMatrix_Params GetElementDisplayMatrix_Params;
	memset(&GetElementDisplayMatrix_Params, 0, sizeof(GetElementDisplayMatrix_Params));
	if (!uFnGetElementDisplayMatrix)
	{
		return {};
	}

	GetElementDisplayMatrix_Params.Index = Index;

	auto native_GetElementDisplayMatrix = uFnGetElementDisplayMatrix->iNative;
	uFnGetElementDisplayMatrix->iNative = 0;
	this->ProcessEvent(uFnGetElementDisplayMatrix, &GetElementDisplayMatrix_Params, nullptr);
	uFnGetElementDisplayMatrix->iNative = native_GetElementDisplayMatrix;

	return GetElementDisplayMatrix_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

struct FASDisplayInfo UGFxObject::GetElementDisplayInfo(int32_t Index)
{
	static UFunction* uFnGetElementDisplayInfo = nullptr;

	if (!uFnGetElementDisplayInfo)
	{
		uFnGetElementDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementDisplayInfo");
	}

	UGFxObject_execGetElementDisplayInfo_Params GetElementDisplayInfo_Params;
	memset(&GetElementDisplayInfo_Params, 0, sizeof(GetElementDisplayInfo_Params));
	if (!uFnGetElementDisplayInfo)
	{
		return {};
	}

	GetElementDisplayInfo_Params.Index = Index;

	auto native_GetElementDisplayInfo = uFnGetElementDisplayInfo->iNative;
	uFnGetElementDisplayInfo->iNative = 0;
	this->ProcessEvent(uFnGetElementDisplayInfo, &GetElementDisplayInfo_Params, nullptr);
	uFnGetElementDisplayInfo->iNative = native_GetElementDisplayInfo;

	return GetElementDisplayInfo_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementString(int32_t Index, const class FString& S)
{
	static UFunction* uFnSetElementString = nullptr;

	if (!uFnSetElementString)
	{
		uFnSetElementString = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementString");
	}

	UGFxObject_execSetElementString_Params SetElementString_Params;
	memset(&SetElementString_Params, 0, sizeof(SetElementString_Params));
	if (!uFnSetElementString)
	{
		return;
	}

	SetElementString_Params.Index = Index;
	memcpy_s(&SetElementString_Params.S, sizeof(SetElementString_Params.S), &S, sizeof(S));

	auto native_SetElementString = uFnSetElementString->iNative;
	uFnSetElementString->iNative = 0;
	this->ProcessEvent(uFnSetElementString, &SetElementString_Params, nullptr);
	uFnSetElementString->iNative = native_SetElementString;
}

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// int32_t                        I                              (CPF_Parm)

void UGFxObject::SetElementInt(int32_t Index, int32_t I)
{
	static UFunction* uFnSetElementInt = nullptr;

	if (!uFnSetElementInt)
	{
		uFnSetElementInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementInt");
	}

	UGFxObject_execSetElementInt_Params SetElementInt_Params;
	memset(&SetElementInt_Params, 0, sizeof(SetElementInt_Params));
	if (!uFnSetElementInt)
	{
		return;
	}

	SetElementInt_Params.Index = Index;
	SetElementInt_Params.I = I;

	auto native_SetElementInt = uFnSetElementInt->iNative;
	uFnSetElementInt->iNative = 0;
	this->ProcessEvent(uFnSetElementInt, &SetElementInt_Params, nullptr);
	uFnSetElementInt->iNative = native_SetElementInt;
}

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementFloat(int32_t Index, float F)
{
	static UFunction* uFnSetElementFloat = nullptr;

	if (!uFnSetElementFloat)
	{
		uFnSetElementFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementFloat");
	}

	UGFxObject_execSetElementFloat_Params SetElementFloat_Params;
	memset(&SetElementFloat_Params, 0, sizeof(SetElementFloat_Params));
	if (!uFnSetElementFloat)
	{
		return;
	}

	SetElementFloat_Params.Index = Index;
	SetElementFloat_Params.F = F;

	auto native_SetElementFloat = uFnSetElementFloat->iNative;
	uFnSetElementFloat->iNative = 0;
	this->ProcessEvent(uFnSetElementFloat, &SetElementFloat_Params, nullptr);
	uFnSetElementFloat->iNative = native_SetElementFloat;
}

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// uint32_t                       B                              (CPF_Parm)

void UGFxObject::SetElementBool(int32_t Index, bool B)
{
	static UFunction* uFnSetElementBool = nullptr;

	if (!uFnSetElementBool)
	{
		uFnSetElementBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementBool");
	}

	UGFxObject_execSetElementBool_Params SetElementBool_Params;
	memset(&SetElementBool_Params, 0, sizeof(SetElementBool_Params));
	if (!uFnSetElementBool)
	{
		return;
	}

	SetElementBool_Params.Index = Index;
	SetElementBool_Params.B = B;

	auto native_SetElementBool = uFnSetElementBool->iNative;
	uFnSetElementBool->iNative = 0;
	this->ProcessEvent(uFnSetElementBool, &SetElementBool_Params, nullptr);
	uFnSetElementBool->iNative = native_SetElementBool;
}

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementObject(int32_t Index, class UGFxObject* val)
{
	static UFunction* uFnSetElementObject = nullptr;

	if (!uFnSetElementObject)
	{
		uFnSetElementObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementObject");
	}

	UGFxObject_execSetElementObject_Params SetElementObject_Params;
	memset(&SetElementObject_Params, 0, sizeof(SetElementObject_Params));
	if (!uFnSetElementObject)
	{
		return;
	}

	SetElementObject_Params.Index = Index;
	SetElementObject_Params.val = val;

	auto native_SetElementObject = uFnSetElementObject->iNative;
	uFnSetElementObject->iNative = 0;
	this->ProcessEvent(uFnSetElementObject, &SetElementObject_Params, nullptr);
	uFnSetElementObject->iNative = native_SetElementObject;
}

// Function GFxUI.GFxObject.SetElement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElement(int32_t Index, const struct FASValue& Arg)
{
	static UFunction* uFnSetElement = nullptr;

	if (!uFnSetElement)
	{
		uFnSetElement = UFunction::FindFunction("Function GFxUI.GFxObject.SetElement");
	}

	UGFxObject_execSetElement_Params SetElement_Params;
	memset(&SetElement_Params, 0, sizeof(SetElement_Params));
	if (!uFnSetElement)
	{
		return;
	}

	SetElement_Params.Index = Index;
	memcpy_s(&SetElement_Params.Arg, sizeof(SetElement_Params.Arg), &Arg, sizeof(Arg));

	auto native_SetElement = uFnSetElement->iNative;
	uFnSetElement->iNative = 0;
	this->ProcessEvent(uFnSetElement, &SetElement_Params, nullptr);
	uFnSetElement->iNative = native_SetElement;
}

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)

class FString UGFxObject::GetElementString(int32_t Index)
{
	static UFunction* uFnGetElementString = nullptr;

	if (!uFnGetElementString)
	{
		uFnGetElementString = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementString");
	}

	UGFxObject_execGetElementString_Params GetElementString_Params;
	memset(&GetElementString_Params, 0, sizeof(GetElementString_Params));
	if (!uFnGetElementString)
	{
		return {};
	}

	GetElementString_Params.Index = Index;

	auto native_GetElementString = uFnGetElementString->iNative;
	uFnGetElementString->iNative = 0;
	this->ProcessEvent(uFnGetElementString, &GetElementString_Params, nullptr);
	uFnGetElementString->iNative = native_GetElementString;

	return GetElementString_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

int32_t UGFxObject::GetElementInt(int32_t Index)
{
	static UFunction* uFnGetElementInt = nullptr;

	if (!uFnGetElementInt)
	{
		uFnGetElementInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementInt");
	}

	UGFxObject_execGetElementInt_Params GetElementInt_Params;
	memset(&GetElementInt_Params, 0, sizeof(GetElementInt_Params));
	if (!uFnGetElementInt)
	{
		return {};
	}

	GetElementInt_Params.Index = Index;

	auto native_GetElementInt = uFnGetElementInt->iNative;
	uFnGetElementInt->iNative = 0;
	this->ProcessEvent(uFnGetElementInt, &GetElementInt_Params, nullptr);
	uFnGetElementInt->iNative = native_GetElementInt;

	return GetElementInt_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

float UGFxObject::GetElementFloat(int32_t Index)
{
	static UFunction* uFnGetElementFloat = nullptr;

	if (!uFnGetElementFloat)
	{
		uFnGetElementFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementFloat");
	}

	UGFxObject_execGetElementFloat_Params GetElementFloat_Params;
	memset(&GetElementFloat_Params, 0, sizeof(GetElementFloat_Params));
	if (!uFnGetElementFloat)
	{
		return {};
	}

	GetElementFloat_Params.Index = Index;

	auto native_GetElementFloat = uFnGetElementFloat->iNative;
	uFnGetElementFloat->iNative = 0;
	this->ProcessEvent(uFnGetElementFloat, &GetElementFloat_Params, nullptr);
	uFnGetElementFloat->iNative = native_GetElementFloat;

	return GetElementFloat_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

bool UGFxObject::GetElementBool(int32_t Index)
{
	static UFunction* uFnGetElementBool = nullptr;

	if (!uFnGetElementBool)
	{
		uFnGetElementBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementBool");
	}

	UGFxObject_execGetElementBool_Params GetElementBool_Params;
	memset(&GetElementBool_Params, 0, sizeof(GetElementBool_Params));
	if (!uFnGetElementBool)
	{
		return {};
	}

	GetElementBool_Params.Index = Index;

	auto native_GetElementBool = uFnGetElementBool->iNative;
	uFnGetElementBool->iNative = 0;
	this->ProcessEvent(uFnGetElementBool, &GetElementBool_Params, nullptr);
	uFnGetElementBool->iNative = native_GetElementBool;

	return GetElementBool_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetElementObject(int32_t Index, class UClass* optionalType)
{
	static UFunction* uFnGetElementObject = nullptr;

	if (!uFnGetElementObject)
	{
		uFnGetElementObject = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementObject");
	}

	UGFxObject_execGetElementObject_Params GetElementObject_Params;
	memset(&GetElementObject_Params, 0, sizeof(GetElementObject_Params));
	if (!uFnGetElementObject)
	{
		return {};
	}

	GetElementObject_Params.Index = Index;
	GetElementObject_Params.Type = optionalType;

	auto native_GetElementObject = uFnGetElementObject->iNative;
	uFnGetElementObject->iNative = 0;
	this->ProcessEvent(uFnGetElementObject, &GetElementObject_Params, nullptr);
	uFnGetElementObject->iNative = native_GetElementObject;

	return GetElementObject_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)

struct FASValue UGFxObject::GetElement(int32_t Index)
{
	static UFunction* uFnGetElement = nullptr;

	if (!uFnGetElement)
	{
		uFnGetElement = UFunction::FindFunction("Function GFxUI.GFxObject.GetElement");
	}

	UGFxObject_execGetElement_Params GetElement_Params;
	memset(&GetElement_Params, 0, sizeof(GetElement_Params));
	if (!uFnGetElement)
	{
		return {};
	}

	GetElement_Params.Index = Index;

	auto native_GetElement = uFnGetElement->iNative;
	uFnGetElement->iNative = 0;
	this->ProcessEvent(uFnGetElement, &GetElement_Params, nullptr);
	uFnGetElement->iNative = native_GetElement;

	return GetElement_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetText
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

void UGFxObject::SetText(const class FString& Text, class UTranslationContext* optionalInContext)
{
	static UFunction* uFnSetText = nullptr;

	if (!uFnSetText)
	{
		uFnSetText = UFunction::FindFunction("Function GFxUI.GFxObject.SetText");
	}

	UGFxObject_execSetText_Params SetText_Params;
	memset(&SetText_Params, 0, sizeof(SetText_Params));
	if (!uFnSetText)
	{
		return;
	}

	memcpy_s(&SetText_Params.Text, sizeof(SetText_Params.Text), &Text, sizeof(Text));
	SetText_Params.InContext = optionalInContext;

	auto native_SetText = uFnSetText->iNative;
	uFnSetText->iNative = 0;
	this->ProcessEvent(uFnSetText, &SetText_Params, nullptr);
	uFnSetText->iNative = native_SetText;
}

// Function GFxUI.GFxObject.GetText
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGFxObject::GetText()
{
	static UFunction* uFnGetText = nullptr;

	if (!uFnGetText)
	{
		uFnGetText = UFunction::FindFunction("Function GFxUI.GFxObject.GetText");
	}

	UGFxObject_execGetText_Params GetText_Params;
	memset(&GetText_Params, 0, sizeof(GetText_Params));
	if (!uFnGetText)
	{
		return {};
	}


	auto native_GetText = uFnGetText->iNative;
	uFnGetText->iNative = 0;
	this->ProcessEvent(uFnGetText, &GetText_Params, nullptr);
	uFnGetText->iNative = native_GetText;

	return GetText_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       Visible                        (CPF_Parm)

void UGFxObject::SetVisible(bool Visible)
{
	static UFunction* uFnSetVisible = nullptr;

	if (!uFnSetVisible)
	{
		uFnSetVisible = UFunction::FindFunction("Function GFxUI.GFxObject.SetVisible");
	}

	UGFxObject_execSetVisible_Params SetVisible_Params;
	memset(&SetVisible_Params, 0, sizeof(SetVisible_Params));
	if (!uFnSetVisible)
	{
		return;
	}

	SetVisible_Params.Visible = Visible;

	auto native_SetVisible = uFnSetVisible->iNative;
	uFnSetVisible->iNative = 0;
	this->ProcessEvent(uFnSetVisible, &SetVisible_Params, nullptr);
	uFnSetVisible->iNative = native_SetVisible;
}

// Function GFxUI.GFxObject.WriteToByteArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class TArray<uint8_t>          A                              (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        bytes                          (CPF_Parm)

bool UGFxObject::WriteToByteArray(const class TArray<uint8_t>& A, int32_t bytes)
{
	static UFunction* uFnWriteToByteArray = nullptr;

	if (!uFnWriteToByteArray)
	{
		uFnWriteToByteArray = UFunction::FindFunction("Function GFxUI.GFxObject.WriteToByteArray");
	}

	UGFxObject_execWriteToByteArray_Params WriteToByteArray_Params;
	memset(&WriteToByteArray_Params, 0, sizeof(WriteToByteArray_Params));
	if (!uFnWriteToByteArray)
	{
		return {};
	}

	memcpy_s(&WriteToByteArray_Params.A, sizeof(WriteToByteArray_Params.A), &A, sizeof(A));
	WriteToByteArray_Params.bytes = bytes;

	auto native_WriteToByteArray = uFnWriteToByteArray->iNative;
	uFnWriteToByteArray->iNative = 0;
	this->ProcessEvent(uFnWriteToByteArray, &WriteToByteArray_Params, nullptr);
	uFnWriteToByteArray->iNative = native_WriteToByteArray;

	return WriteToByteArray_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ReadFromByteArray
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        bytes                          (CPF_Parm)
// class TArray<uint8_t>          A                              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxObject::ReadFromByteArray(int32_t bytes, class TArray<uint8_t>& outA)
{
	static UFunction* uFnReadFromByteArray = nullptr;

	if (!uFnReadFromByteArray)
	{
		uFnReadFromByteArray = UFunction::FindFunction("Function GFxUI.GFxObject.ReadFromByteArray");
	}

	UGFxObject_execReadFromByteArray_Params ReadFromByteArray_Params;
	memset(&ReadFromByteArray_Params, 0, sizeof(ReadFromByteArray_Params));
	if (!uFnReadFromByteArray)
	{
		return {};
	}

	ReadFromByteArray_Params.bytes = bytes;
	memcpy_s(&ReadFromByteArray_Params.A, sizeof(ReadFromByteArray_Params.A), &outA, sizeof(outA));

	auto native_ReadFromByteArray = uFnReadFromByteArray->iNative;
	uFnReadFromByteArray->iNative = 0;
	this->ProcessEvent(uFnReadFromByteArray, &ReadFromByteArray_Params, nullptr);
	uFnReadFromByteArray->iNative = native_ReadFromByteArray;

	memcpy_s(&outA, sizeof(outA), &ReadFromByteArray_Params.A, sizeof(ReadFromByteArray_Params.A));

	return ReadFromByteArray_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetByteArraySize
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGFxObject::GetByteArraySize()
{
	static UFunction* uFnGetByteArraySize = nullptr;

	if (!uFnGetByteArraySize)
	{
		uFnGetByteArraySize = UFunction::FindFunction("Function GFxUI.GFxObject.GetByteArraySize");
	}

	UGFxObject_execGetByteArraySize_Params GetByteArraySize_Params;
	memset(&GetByteArraySize_Params, 0, sizeof(GetByteArraySize_Params));
	if (!uFnGetByteArraySize)
	{
		return {};
	}


	auto native_GetByteArraySize = uFnGetByteArraySize->iNative;
	uFnGetByteArraySize->iNative = 0;
	this->ProcessEvent(uFnGetByteArraySize, &GetByteArraySize_Params, nullptr);
	uFnGetByteArraySize->iNative = native_GetByteArraySize;

	return GetByteArraySize_Params.ReturnValue;
}

// Function GFxUI.GFxObject.IsByteArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxObject::IsByteArray()
{
	static UFunction* uFnIsByteArray = nullptr;

	if (!uFnIsByteArray)
	{
		uFnIsByteArray = UFunction::FindFunction("Function GFxUI.GFxObject.IsByteArray");
	}

	UGFxObject_execIsByteArray_Params IsByteArray_Params;
	memset(&IsByteArray_Params, 0, sizeof(IsByteArray_Params));
	if (!uFnIsByteArray)
	{
		return {};
	}


	auto native_IsByteArray = uFnIsByteArray->iNative;
	uFnIsByteArray->iNative = 0;
	this->ProcessEvent(uFnIsByteArray, &IsByteArray_Params, nullptr);
	uFnIsByteArray->iNative = native_IsByteArray;

	return IsByteArray_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix3D(const struct FMatrix& M)
{
	static UFunction* uFnSetDisplayMatrix3D = nullptr;

	if (!uFnSetDisplayMatrix3D)
	{
		uFnSetDisplayMatrix3D = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayMatrix3D");
	}

	UGFxObject_execSetDisplayMatrix3D_Params SetDisplayMatrix3D_Params;
	memset(&SetDisplayMatrix3D_Params, 0, sizeof(SetDisplayMatrix3D_Params));
	if (!uFnSetDisplayMatrix3D)
	{
		return;
	}

	memcpy_s(&SetDisplayMatrix3D_Params.M, sizeof(SetDisplayMatrix3D_Params.M), &M, sizeof(M));

	auto native_SetDisplayMatrix3D = uFnSetDisplayMatrix3D->iNative;
	uFnSetDisplayMatrix3D->iNative = 0;
	this->ProcessEvent(uFnSetDisplayMatrix3D, &SetDisplayMatrix3D_Params, nullptr);
	uFnSetDisplayMatrix3D->iNative = native_SetDisplayMatrix3D;
}

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix(const struct FMatrix& M)
{
	static UFunction* uFnSetDisplayMatrix = nullptr;

	if (!uFnSetDisplayMatrix)
	{
		uFnSetDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayMatrix");
	}

	UGFxObject_execSetDisplayMatrix_Params SetDisplayMatrix_Params;
	memset(&SetDisplayMatrix_Params, 0, sizeof(SetDisplayMatrix_Params));
	if (!uFnSetDisplayMatrix)
	{
		return;
	}

	memcpy_s(&SetDisplayMatrix_Params.M, sizeof(SetDisplayMatrix_Params.M), &M, sizeof(M));

	auto native_SetDisplayMatrix = uFnSetDisplayMatrix->iNative;
	uFnSetDisplayMatrix->iNative = 0;
	this->ProcessEvent(uFnSetDisplayMatrix, &SetDisplayMatrix_Params, nullptr);
	uFnSetDisplayMatrix->iNative = native_SetDisplayMatrix;
}

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASColorTransform       cxform                         (CPF_Parm)

void UGFxObject::SetColorTransform(const struct FASColorTransform& cxform)
{
	static UFunction* uFnSetColorTransform = nullptr;

	if (!uFnSetColorTransform)
	{
		uFnSetColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.SetColorTransform");
	}

	UGFxObject_execSetColorTransform_Params SetColorTransform_Params;
	memset(&SetColorTransform_Params, 0, sizeof(SetColorTransform_Params));
	if (!uFnSetColorTransform)
	{
		return;
	}

	memcpy_s(&SetColorTransform_Params.cxform, sizeof(SetColorTransform_Params.cxform), &cxform, sizeof(cxform));

	auto native_SetColorTransform = uFnSetColorTransform->iNative;
	uFnSetColorTransform->iNative = 0;
	this->ProcessEvent(uFnSetColorTransform, &SetColorTransform_Params, nullptr);
	uFnSetColorTransform->iNative = native_SetColorTransform;
}

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetPosition(float X, float Y)
{
	static UFunction* uFnSetPosition = nullptr;

	if (!uFnSetPosition)
	{
		uFnSetPosition = UFunction::FindFunction("Function GFxUI.GFxObject.SetPosition");
	}

	UGFxObject_execSetPosition_Params SetPosition_Params;
	memset(&SetPosition_Params, 0, sizeof(SetPosition_Params));
	if (!uFnSetPosition)
	{
		return;
	}

	SetPosition_Params.X = X;
	SetPosition_Params.Y = Y;

	auto native_SetPosition = uFnSetPosition->iNative;
	uFnSetPosition->iNative = 0;
	this->ProcessEvent(uFnSetPosition, &SetPosition_Params, nullptr);
	uFnSetPosition->iNative = native_SetPosition;
}

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASDisplayInfo          D                              (CPF_Parm)

void UGFxObject::SetDisplayInfo(const struct FASDisplayInfo& D)
{
	static UFunction* uFnSetDisplayInfo = nullptr;

	if (!uFnSetDisplayInfo)
	{
		uFnSetDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayInfo");
	}

	UGFxObject_execSetDisplayInfo_Params SetDisplayInfo_Params;
	memset(&SetDisplayInfo_Params, 0, sizeof(SetDisplayInfo_Params));
	if (!uFnSetDisplayInfo)
	{
		return;
	}

	memcpy_s(&SetDisplayInfo_Params.D, sizeof(SetDisplayInfo_Params.D), &D, sizeof(D));

	auto native_SetDisplayInfo = uFnSetDisplayInfo->iNative;
	uFnSetDisplayInfo->iNative = 0;
	this->ProcessEvent(uFnSetDisplayInfo, &SetDisplayInfo_Params, nullptr);
	uFnSetDisplayInfo->iNative = native_SetDisplayInfo;
}

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix3D()
{
	static UFunction* uFnGetDisplayMatrix3D = nullptr;

	if (!uFnGetDisplayMatrix3D)
	{
		uFnGetDisplayMatrix3D = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayMatrix3D");
	}

	UGFxObject_execGetDisplayMatrix3D_Params GetDisplayMatrix3D_Params;
	memset(&GetDisplayMatrix3D_Params, 0, sizeof(GetDisplayMatrix3D_Params));
	if (!uFnGetDisplayMatrix3D)
	{
		return {};
	}


	auto native_GetDisplayMatrix3D = uFnGetDisplayMatrix3D->iNative;
	uFnGetDisplayMatrix3D->iNative = 0;
	this->ProcessEvent(uFnGetDisplayMatrix3D, &GetDisplayMatrix3D_Params, nullptr);
	uFnGetDisplayMatrix3D->iNative = native_GetDisplayMatrix3D;

	return GetDisplayMatrix3D_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix()
{
	static UFunction* uFnGetDisplayMatrix = nullptr;

	if (!uFnGetDisplayMatrix)
	{
		uFnGetDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayMatrix");
	}

	UGFxObject_execGetDisplayMatrix_Params GetDisplayMatrix_Params;
	memset(&GetDisplayMatrix_Params, 0, sizeof(GetDisplayMatrix_Params));
	if (!uFnGetDisplayMatrix)
	{
		return {};
	}


	auto native_GetDisplayMatrix = uFnGetDisplayMatrix->iNative;
	uFnGetDisplayMatrix->iNative = 0;
	this->ProcessEvent(uFnGetDisplayMatrix, &GetDisplayMatrix_Params, nullptr);
	uFnGetDisplayMatrix->iNative = native_GetDisplayMatrix;

	return GetDisplayMatrix_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASColorTransform       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FASColorTransform UGFxObject::GetColorTransform()
{
	static UFunction* uFnGetColorTransform = nullptr;

	if (!uFnGetColorTransform)
	{
		uFnGetColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.GetColorTransform");
	}

	UGFxObject_execGetColorTransform_Params GetColorTransform_Params;
	memset(&GetColorTransform_Params, 0, sizeof(GetColorTransform_Params));
	if (!uFnGetColorTransform)
	{
		return {};
	}


	auto native_GetColorTransform = uFnGetColorTransform->iNative;
	uFnGetColorTransform->iNative = 0;
	this->ProcessEvent(uFnGetColorTransform, &GetColorTransform_Params, nullptr);
	uFnGetColorTransform->iNative = native_GetColorTransform;

	return GetColorTransform_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm | CPF_OutParm)
// float                          Y                              (CPF_Parm | CPF_OutParm)

bool UGFxObject::GetPosition(float& outX, float& outY)
{
	static UFunction* uFnGetPosition = nullptr;

	if (!uFnGetPosition)
	{
		uFnGetPosition = UFunction::FindFunction("Function GFxUI.GFxObject.GetPosition");
	}

	UGFxObject_execGetPosition_Params GetPosition_Params;
	memset(&GetPosition_Params, 0, sizeof(GetPosition_Params));
	if (!uFnGetPosition)
	{
		return {};
	}

	GetPosition_Params.X = outX;
	GetPosition_Params.Y = outY;

	auto native_GetPosition = uFnGetPosition->iNative;
	uFnGetPosition->iNative = 0;
	this->ProcessEvent(uFnGetPosition, &GetPosition_Params, nullptr);
	uFnGetPosition->iNative = native_GetPosition;

	outX = GetPosition_Params.X;
	outY = GetPosition_Params.Y;

	return GetPosition_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FASDisplayInfo UGFxObject::GetDisplayInfo()
{
	static UFunction* uFnGetDisplayInfo = nullptr;

	if (!uFnGetDisplayInfo)
	{
		uFnGetDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayInfo");
	}

	UGFxObject_execGetDisplayInfo_Params GetDisplayInfo_Params;
	memset(&GetDisplayInfo_Params, 0, sizeof(GetDisplayInfo_Params));
	if (!uFnGetDisplayInfo)
	{
		return {};
	}


	auto native_GetDisplayInfo = uFnGetDisplayInfo->iNative;
	uFnGetDisplayInfo->iNative = 0;
	this->ProcessEvent(uFnGetDisplayInfo, &GetDisplayInfo_Params, nullptr);
	uFnGetDisplayInfo->iNative = native_GetDisplayInfo;

	return GetDisplayInfo_Params.ReturnValue;
}

// Function GFxUI.GFxObject.TranslateString
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  StringToTranslate              (CPF_Parm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

class FString UGFxObject::TranslateString(const class FString& StringToTranslate, class UTranslationContext* optionalInContext)
{
	static UFunction* uFnTranslateString = nullptr;

	if (!uFnTranslateString)
	{
		uFnTranslateString = UFunction::FindFunction("Function GFxUI.GFxObject.TranslateString");
	}

	UGFxObject_execTranslateString_Params TranslateString_Params;
	memset(&TranslateString_Params, 0, sizeof(TranslateString_Params));
	if (!uFnTranslateString)
	{
		return {};
	}

	memcpy_s(&TranslateString_Params.StringToTranslate, sizeof(TranslateString_Params.StringToTranslate), &StringToTranslate, sizeof(StringToTranslate));
	TranslateString_Params.InContext = optionalInContext;

	auto native_TranslateString = uFnTranslateString->iNative;
	uFnTranslateString->iNative = 0;
	UGFxObject::StaticClass()->ProcessEvent(uFnTranslateString, &TranslateString_Params, nullptr);
	uFnTranslateString->iNative = native_TranslateString;

	return TranslateString_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UObject*                 context                        (CPF_Parm)
// class FName                    fname                          (CPF_Parm)

void UGFxObject::SetFunction(const class FString& Member, class UObject* context, const class FName& fname)
{
	static UFunction* uFnSetFunction = nullptr;

	if (!uFnSetFunction)
	{
		uFnSetFunction = UFunction::FindFunction("Function GFxUI.GFxObject.SetFunction");
	}

	UGFxObject_execSetFunction_Params SetFunction_Params;
	memset(&SetFunction_Params, 0, sizeof(SetFunction_Params));
	if (!uFnSetFunction)
	{
		return;
	}

	memcpy_s(&SetFunction_Params.Member, sizeof(SetFunction_Params.Member), &Member, sizeof(Member));
	SetFunction_Params.context = context;
	memcpy_s(&SetFunction_Params.fname, sizeof(SetFunction_Params.fname), &fname, sizeof(fname));

	auto native_SetFunction = uFnSetFunction->iNative;
	uFnSetFunction->iNative = 0;
	this->ProcessEvent(uFnSetFunction, &SetFunction_Params, nullptr);
	uFnSetFunction->iNative = native_SetFunction;
}

// Function GFxUI.GFxObject.SetObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetObject(const class FString& Member, class UGFxObject* val)
{
	static UFunction* uFnSetObject = nullptr;

	if (!uFnSetObject)
	{
		uFnSetObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetObject");
	}

	UGFxObject_execSetObject_Params SetObject_Params;
	memset(&SetObject_Params, 0, sizeof(SetObject_Params));
	if (!uFnSetObject)
	{
		return;
	}

	memcpy_s(&SetObject_Params.Member, sizeof(SetObject_Params.Member), &Member, sizeof(Member));
	SetObject_Params.val = val;

	auto native_SetObject = uFnSetObject->iNative;
	uFnSetObject->iNative = 0;
	this->ProcessEvent(uFnSetObject, &SetObject_Params, nullptr);
	uFnSetObject->iNative = native_SetObject;
}

// Function GFxUI.GFxObject.SetString
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

void UGFxObject::SetString(const class FString& Member, const class FString& S, class UTranslationContext* optionalInContext)
{
	static UFunction* uFnSetString = nullptr;

	if (!uFnSetString)
	{
		uFnSetString = UFunction::FindFunction("Function GFxUI.GFxObject.SetString");
	}

	UGFxObject_execSetString_Params SetString_Params;
	memset(&SetString_Params, 0, sizeof(SetString_Params));
	if (!uFnSetString)
	{
		return;
	}

	memcpy_s(&SetString_Params.Member, sizeof(SetString_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetString_Params.S, sizeof(SetString_Params.S), &S, sizeof(S));
	SetString_Params.InContext = optionalInContext;

	auto native_SetString = uFnSetString->iNative;
	uFnSetString->iNative = 0;
	this->ProcessEvent(uFnSetString, &SetString_Params, nullptr);
	uFnSetString->iNative = native_SetString;
}

// Function GFxUI.GFxObject.SetInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

void UGFxObject::SetInt(const class FString& Member, int32_t I)
{
	static UFunction* uFnSetInt = nullptr;

	if (!uFnSetInt)
	{
		uFnSetInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetInt");
	}

	UGFxObject_execSetInt_Params SetInt_Params;
	memset(&SetInt_Params, 0, sizeof(SetInt_Params));
	if (!uFnSetInt)
	{
		return;
	}

	memcpy_s(&SetInt_Params.Member, sizeof(SetInt_Params.Member), &Member, sizeof(Member));
	SetInt_Params.I = I;

	auto native_SetInt = uFnSetInt->iNative;
	uFnSetInt->iNative = 0;
	this->ProcessEvent(uFnSetInt, &SetInt_Params, nullptr);
	uFnSetInt->iNative = native_SetInt;
}

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxObject::SetFloat(const class FString& Member, float F)
{
	static UFunction* uFnSetFloat = nullptr;

	if (!uFnSetFloat)
	{
		uFnSetFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetFloat");
	}

	UGFxObject_execSetFloat_Params SetFloat_Params;
	memset(&SetFloat_Params, 0, sizeof(SetFloat_Params));
	if (!uFnSetFloat)
	{
		return;
	}

	memcpy_s(&SetFloat_Params.Member, sizeof(SetFloat_Params.Member), &Member, sizeof(Member));
	SetFloat_Params.F = F;

	auto native_SetFloat = uFnSetFloat->iNative;
	uFnSetFloat->iNative = 0;
	this->ProcessEvent(uFnSetFloat, &SetFloat_Params, nullptr);
	uFnSetFloat->iNative = native_SetFloat;
}

// Function GFxUI.GFxObject.SetBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       B                              (CPF_Parm)

void UGFxObject::SetBool(const class FString& Member, bool B)
{
	static UFunction* uFnSetBool = nullptr;

	if (!uFnSetBool)
	{
		uFnSetBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetBool");
	}

	UGFxObject_execSetBool_Params SetBool_Params;
	memset(&SetBool_Params, 0, sizeof(SetBool_Params));
	if (!uFnSetBool)
	{
		return;
	}

	memcpy_s(&SetBool_Params.Member, sizeof(SetBool_Params.Member), &Member, sizeof(Member));
	SetBool_Params.B = B;

	auto native_SetBool = uFnSetBool->iNative;
	uFnSetBool->iNative = 0;
	this->ProcessEvent(uFnSetBool, &SetBool_Params, nullptr);
	uFnSetBool->iNative = native_SetBool;
}

// Function GFxUI.GFxObject.Set
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::Set(const class FString& Member, const struct FASValue& Arg)
{
	static UFunction* uFnSet = nullptr;

	if (!uFnSet)
	{
		uFnSet = UFunction::FindFunction("Function GFxUI.GFxObject.Set");
	}

	UGFxObject_execSet_Params Set_Params;
	memset(&Set_Params, 0, sizeof(Set_Params));
	if (!uFnSet)
	{
		return;
	}

	memcpy_s(&Set_Params.Member, sizeof(Set_Params.Member), &Member, sizeof(Member));
	memcpy_s(&Set_Params.Arg, sizeof(Set_Params.Arg), &Arg, sizeof(Arg));

	auto native_Set = uFnSet->iNative;
	uFnSet->iNative = 0;
	this->ProcessEvent(uFnSet, &Set_Params, nullptr);
	uFnSet->iNative = native_Set;
}

// Function GFxUI.GFxObject.GetObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetObjectWin(const class FString& Member, class UClass* optionalType)
{
	static UFunction* uFnGetObjectWin = nullptr;

	if (!uFnGetObjectWin)
	{
		uFnGetObjectWin = UFunction::FindFunction("Function GFxUI.GFxObject.GetObject");
	}

	UGFxObject_execGetObjectWin_Params GetObjectWin_Params;
	memset(&GetObjectWin_Params, 0, sizeof(GetObjectWin_Params));
	if (!uFnGetObjectWin)
	{
		return {};
	}

	memcpy_s(&GetObjectWin_Params.Member, sizeof(GetObjectWin_Params.Member), &Member, sizeof(Member));
	GetObjectWin_Params.Type = optionalType;

	auto native_GetObjectWin = uFnGetObjectWin->iNative;
	uFnGetObjectWin->iNative = 0;
	this->ProcessEvent(uFnGetObjectWin, &GetObjectWin_Params, nullptr);
	uFnGetObjectWin->iNative = native_GetObjectWin;

	return GetObjectWin_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxObject::GetString(const class FString& Member)
{
	static UFunction* uFnGetString = nullptr;

	if (!uFnGetString)
	{
		uFnGetString = UFunction::FindFunction("Function GFxUI.GFxObject.GetString");
	}

	UGFxObject_execGetString_Params GetString_Params;
	memset(&GetString_Params, 0, sizeof(GetString_Params));
	if (!uFnGetString)
	{
		return {};
	}

	memcpy_s(&GetString_Params.Member, sizeof(GetString_Params.Member), &Member, sizeof(Member));

	auto native_GetString = uFnGetString->iNative;
	uFnGetString->iNative = 0;
	this->ProcessEvent(uFnGetString, &GetString_Params, nullptr);
	uFnGetString->iNative = native_GetString;

	return GetString_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxObject::GetInt(const class FString& Member)
{
	static UFunction* uFnGetInt = nullptr;

	if (!uFnGetInt)
	{
		uFnGetInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetInt");
	}

	UGFxObject_execGetInt_Params GetInt_Params;
	memset(&GetInt_Params, 0, sizeof(GetInt_Params));
	if (!uFnGetInt)
	{
		return {};
	}

	memcpy_s(&GetInt_Params.Member, sizeof(GetInt_Params.Member), &Member, sizeof(Member));

	auto native_GetInt = uFnGetInt->iNative;
	uFnGetInt->iNative = 0;
	this->ProcessEvent(uFnGetInt, &GetInt_Params, nullptr);
	uFnGetInt->iNative = native_GetInt;

	return GetInt_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::GetFloat(const class FString& Member)
{
	static UFunction* uFnGetFloat = nullptr;

	if (!uFnGetFloat)
	{
		uFnGetFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetFloat");
	}

	UGFxObject_execGetFloat_Params GetFloat_Params;
	memset(&GetFloat_Params, 0, sizeof(GetFloat_Params));
	if (!uFnGetFloat)
	{
		return {};
	}

	memcpy_s(&GetFloat_Params.Member, sizeof(GetFloat_Params.Member), &Member, sizeof(Member));

	auto native_GetFloat = uFnGetFloat->iNative;
	uFnGetFloat->iNative = 0;
	this->ProcessEvent(uFnGetFloat, &GetFloat_Params, nullptr);
	uFnGetFloat->iNative = native_GetFloat;

	return GetFloat_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

bool UGFxObject::GetBool(const class FString& Member)
{
	static UFunction* uFnGetBool = nullptr;

	if (!uFnGetBool)
	{
		uFnGetBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetBool");
	}

	UGFxObject_execGetBool_Params GetBool_Params;
	memset(&GetBool_Params, 0, sizeof(GetBool_Params));
	if (!uFnGetBool)
	{
		return {};
	}

	memcpy_s(&GetBool_Params.Member, sizeof(GetBool_Params.Member), &Member, sizeof(Member));

	auto native_GetBool = uFnGetBool->iNative;
	uFnGetBool->iNative = 0;
	this->ProcessEvent(uFnGetBool, &GetBool_Params, nullptr);
	uFnGetBool->iNative = native_GetBool;

	return GetBool_Params.ReturnValue;
}

// Function GFxUI.GFxObject.Get
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::Get(const class FString& Member)
{
	static UFunction* uFnGet = nullptr;

	if (!uFnGet)
	{
		uFnGet = UFunction::FindFunction("Function GFxUI.GFxObject.Get");
	}

	UGFxObject_execGet_Params Get_Params;
	memset(&Get_Params, 0, sizeof(Get_Params));
	if (!uFnGet)
	{
		return {};
	}

	memcpy_s(&Get_Params.Member, sizeof(Get_Params.Member), &Member, sizeof(Member));

	auto native_Get = uFnGet->iNative;
	uFnGet->iNative = 0;
	this->ProcessEvent(uFnGet, &Get_Params, nullptr);
	uFnGet->iNative = native_Get;

	return Get_Params.ReturnValue;
}

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_CloseMovie::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject");
	}

	UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));
	if (!uFnIsValidLevelSequenceObject)
	{
		return {};
	}


	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_GetVariable::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject");
	}

	UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));
	if (!uFnIsValidLevelSequenceObject)
	{
		return {};
	}


	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_Invoke::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject");
	}

	UGFxAction_Invoke_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));
	if (!uFnIsValidLevelSequenceObject)
	{
		return {};
	}


	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxAction_OpenMovie.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGFxAction_OpenMovie::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GFxUI.GFxAction_OpenMovie.GetObjClassVersion");
	}

	UGFxAction_OpenMovie_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));
	if (!uFnGetObjClassVersion)
	{
		return {};
	}


	UGFxAction_OpenMovie::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
}

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_OpenMovie::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject");
	}

	UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));
	if (!uFnIsValidLevelSequenceObject)
	{
		return {};
	}


	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_SetVariable::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject");
	}

	UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));
	if (!uFnIsValidLevelSequenceObject)
	{
		return {};
	}


	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// class FString                  Cmd                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxFSCmdHandler_Kismet::eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const class FString& Cmd, const class FString& Arg)
{
	static UFunction* uFnFSCommand = nullptr;

	if (!uFnFSCommand)
	{
		uFnFSCommand = UFunction::FindFunction("Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand");
	}

	UGFxFSCmdHandler_Kismet_eventFSCommand_Params FSCommand_Params;
	memset(&FSCommand_Params, 0, sizeof(FSCommand_Params));
	if (!uFnFSCommand)
	{
		return {};
	}

	FSCommand_Params.Movie = Movie;
	FSCommand_Params.Event = Event;
	memcpy_s(&FSCommand_Params.Cmd, sizeof(FSCommand_Params.Cmd), &Cmd, sizeof(Cmd));
	memcpy_s(&FSCommand_Params.Arg, sizeof(FSCommand_Params.Arg), &Arg, sizeof(Arg));

	auto native_FSCommand = uFnFSCommand->iNative;
	uFnFSCommand->iNative = 0;
	this->ProcessEvent(uFnFSCommand, &FSCommand_Params, nullptr);
	uFnFSCommand->iNative = native_FSCommand;

	return FSCommand_Params.ReturnValue;
}

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#pragma pack(pop)
