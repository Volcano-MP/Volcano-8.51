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


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.HideLiveLinkDebugger
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:

void ULiveLinkDebuggerBlueprintLibrary::HideLiveLinkDebugger()
{
	static auto Func = Class->GetFunction("LiveLinkDebuggerBlueprintLibrary", "HideLiveLinkDebugger");

	Params::ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.DisplayLiveLinkDebugger
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class FString                      SubjectName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkDebuggerBlueprintLibrary::DisplayLiveLinkDebugger(const class FString& SubjectName)
{
	static auto Func = Class->GetFunction("LiveLinkDebuggerBlueprintLibrary", "DisplayLiveLinkDebugger");

	Params::ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Params Parms;

	Parms.SubjectName = SubjectName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetDPIScaleBasedOnSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint                   Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULiveLinkDebuggerSettings::GetDPIScaleBasedOnSize(const struct FIntPoint& Size)
{
	static auto Func = Class->GetFunction("LiveLinkDebuggerSettings", "GetDPIScaleBasedOnSize");

	Params::ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Params Parms;

	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetBarColorForCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              CurveValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateColor ULiveLinkDebuggerSettings::GetBarColorForCurveValue(float CurveValue)
{
	static auto Func = Class->GetFunction("LiveLinkDebuggerSettings", "GetBarColorForCurveValue");

	Params::ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Params Parms;

	Parms.CurveValue = CurveValue;

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
