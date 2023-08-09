#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortMediaSubtitlesPlayer::Stop()
{
	static auto Func = Class->GetFunction("FortMediaSubtitlesPlayer", "Stop");

	Params::UFortMediaSubtitlesPlayer_Stop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOverlays*                   Subtitles                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMediaSubtitlesPlayer::SetSubtitles(class UOverlays* Subtitles)
{
	static auto Func = Class->GetFunction("FortMediaSubtitlesPlayer", "SetSubtitles");

	Params::UFortMediaSubtitlesPlayer_SetSubtitles_Params Parms;

	Parms.Subtitles = Subtitles;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortMediaSubtitlesPlayer::Play()
{
	static auto Func = Class->GetFunction("FortMediaSubtitlesPlayer", "Play");

	Params::UFortMediaSubtitlesPlayer_Play_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMediaSubtitlesPlayer::BindToMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto Func = Class->GetFunction("FortMediaSubtitlesPlayer", "BindToMediaPlayer");

	Params::UFortMediaSubtitlesPlayer_BindToMediaPlayer_Params Parms;

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USubtitleDisplay::HasSubtitles()
{
	static auto Func = Class->GetFunction("SubtitleDisplay", "HasSubtitles");

	Params::USubtitleDisplay_HasSubtitles_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
