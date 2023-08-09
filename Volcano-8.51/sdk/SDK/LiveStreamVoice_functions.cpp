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


// Function LiveStreamVoice.LiveStreamVoiceSubsystem.SetVoiceSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVoiceSettings              InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ULiveStreamVoiceSubsystem::SetVoiceSettings(struct FVoiceSettings& InSettings)
{
	static auto Func = Class->GetFunction("LiveStreamVoiceSubsystem", "SetVoiceSettings");

	Params::ULiveStreamVoiceSubsystem_SetVoiceSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveStreamVoice.LiveStreamVoiceSubsystem.EnableLocalVoiceProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveStreamVoiceSubsystem::EnableLocalVoiceProcessing(uint8 LocalUserNum, bool bEnable)
{
	static auto Func = Class->GetFunction("LiveStreamVoiceSubsystem", "EnableLocalVoiceProcessing");

	Params::ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Params Parms;

	Parms.LocalUserNum = LocalUserNum;
	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveStreamVoice.LiveStreamVoiceSubsystem.ClearVoiceSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULiveStreamVoiceSubsystem::ClearVoiceSettings()
{
	static auto Func = Class->GetFunction("LiveStreamVoiceSubsystem", "ClearVoiceSettings");

	Params::ULiveStreamVoiceSubsystem_ClearVoiceSettings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
