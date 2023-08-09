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


// Function KairosSceneCapture.KairosCaptureStatics.ToggleAutoRotate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIsAutoRotateAllowed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKairosCaptureStatics::ToggleAutoRotate(bool bIsAutoRotateAllowed)
{
	static auto Func = Class->GetFunction("KairosCaptureStatics", "ToggleAutoRotate");

	Params::UKairosCaptureStatics_ToggleAutoRotate_Params Parms;

	Parms.bIsAutoRotateAllowed = bIsAutoRotateAllowed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KairosSceneCapture.KairosCaptureStatics.PauseOrResumeSnippet
// (Net, NetReliable, Native, Event, NetResponse, Public)
// Parameters:
// struct FKairosSnippetParams        Params                                                           (Parm, NativeAccessSpecifierPublic)
// struct FWebJSResponse              Response                                                         (Parm, NativeAccessSpecifierPublic)

void UKairosCaptureStatics::PauseOrResumeSnippet(const struct FKairosSnippetParams& Params, const struct FWebJSResponse& Response)
{
	static auto Func = Class->GetFunction("KairosCaptureStatics", "PauseOrResumeSnippet");

	Params::UKairosCaptureStatics_PauseOrResumeSnippet_Params Parms;

	Parms.Params = Params;
	Parms.Response = Response;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KairosSceneCapture.KairosCaptureStatics.GetSceneManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AKairosSceneManagerActor*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AKairosSceneManagerActor* UKairosCaptureStatics::GetSceneManager(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("KairosCaptureStatics", "GetSceneManager");

	Params::UKairosCaptureStatics_GetSceneManager_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KairosSceneCapture.KairosGameModeBase.GetDefaultConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UKairosConfig*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UKairosConfig* AKairosGameModeBase::GetDefaultConfig()
{
	static auto Func = Class->GetFunction("KairosGameModeBase", "GetDefaultConfig");

	Params::AKairosGameModeBase_GetDefaultConfig_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KairosSceneCapture.KairosHeroBase.EndCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AKairosHeroBase::EndCapture()
{
	static auto Func = Class->GetFunction("KairosHeroBase", "EndCapture");

	Params::AKairosHeroBase_EndCapture_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KairosSceneCapture.KairosHeroBase.BeginCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKairosAnimationFramingInfo FramingInfo                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FKairosCaptureParams        CaptureParams                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AKairosHeroBase::BeginCapture(const struct FKairosAnimationFramingInfo& FramingInfo, const struct FKairosCaptureParams& CaptureParams)
{
	static auto Func = Class->GetFunction("KairosHeroBase", "BeginCapture");

	Params::AKairosHeroBase_BeginCapture_Params Parms;

	Parms.FramingInfo = FramingInfo;
	Parms.CaptureParams = CaptureParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KairosSceneCapture.KairosSceneManagerActor.StopAR
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AKairosSceneManagerActor::StopAR()
{
	static auto Func = Class->GetFunction("KairosSceneManagerActor", "StopAR");

	Params::AKairosSceneManagerActor_StopAR_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KairosSceneCapture.KairosSceneManagerActor.PauseOrResumeSnippet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldPase                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AKairosSceneManagerActor::PauseOrResumeSnippet(const class FString& PlayerID, bool bShouldPase)
{
	static auto Func = Class->GetFunction("KairosSceneManagerActor", "PauseOrResumeSnippet");

	Params::AKairosSceneManagerActor_PauseOrResumeSnippet_Params Parms;

	Parms.PlayerID = PlayerID;
	Parms.bShouldPase = bShouldPase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KairosSceneCapture.KairosSceneManagerActor.OLD_OnSceneSetupComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKairosSceneInfo            CompleteSceneInfoCopy                                            (Parm, NativeAccessSpecifierPublic)

void AKairosSceneManagerActor::OLD_OnSceneSetupComplete(const struct FKairosSceneInfo& CompleteSceneInfoCopy)
{
	static auto Func = Class->GetFunction("KairosSceneManagerActor", "OLD_OnSceneSetupComplete");

	Params::AKairosSceneManagerActor_OLD_OnSceneSetupComplete_Params Parms;

	Parms.CompleteSceneInfoCopy = CompleteSceneInfoCopy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KairosSceneCapture.KairosSceneManagerActor.LoadWorldARMode
// (Event, Public, BlueprintEvent)
// Parameters:

void AKairosSceneManagerActor::LoadWorldARMode()
{
	static auto Func = Class->GetFunction("KairosSceneManagerActor", "LoadWorldARMode");

	Params::AKairosSceneManagerActor_LoadWorldARMode_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function KairosSceneCapture.KairosSceneManagerActor.GetSceneInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKairosSceneInfo            ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FKairosSceneInfo AKairosSceneManagerActor::GetSceneInfo()
{
	static auto Func = Class->GetFunction("KairosSceneManagerActor", "GetSceneInfo");

	Params::AKairosSceneManagerActor_GetSceneInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KairosSceneCapture.KairosSceneManagerActor.BeginEmotePlaybackForPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EmoteID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AKairosSceneManagerActor::BeginEmotePlaybackForPlayer(const class FString& PlayerID, const class FString& EmoteID)
{
	static auto Func = Class->GetFunction("KairosSceneManagerActor", "BeginEmotePlaybackForPlayer");

	Params::AKairosSceneManagerActor_BeginEmotePlaybackForPlayer_Params Parms;

	Parms.PlayerID = PlayerID;
	Parms.EmoteID = EmoteID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
