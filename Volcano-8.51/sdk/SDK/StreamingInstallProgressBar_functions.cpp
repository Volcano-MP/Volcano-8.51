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


// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.RefreshTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ContentInstallationProgress_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStreamingInstallProgressBar_C::RefreshTick(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, float CallFunc_ContentInstallationProgress_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("StreamingInstallProgressBar_C", "RefreshTick");

	Params::UStreamingInstallProgressBar_C_RefreshTick_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_ContentInstallationProgress_ReturnValue = CallFunc_ContentInstallationProgress_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UStreamingInstallProgressBar_C::ToggleTimer(bool Enable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("StreamingInstallProgressBar_C", "ToggleTimer");

	Params::UStreamingInstallProgressBar_C_ToggleTimer_Params Parms;

	Parms.Enable = Enable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStreamingInstallProgressBar_C::Construct()
{
	static auto Func = Class->GetFunction("StreamingInstallProgressBar_C", "Construct");

	Params::UStreamingInstallProgressBar_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStreamingInstallProgressBar_C::Destruct()
{
	static auto Func = Class->GetFunction("StreamingInstallProgressBar_C", "Destruct");

	Params::UStreamingInstallProgressBar_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ExecuteUbergraph_StreamingInstallProgressBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStreamingInstallProgressBar_C::ExecuteUbergraph_StreamingInstallProgressBar(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("StreamingInstallProgressBar_C", "ExecuteUbergraph_StreamingInstallProgressBar");

	Params::UStreamingInstallProgressBar_C_ExecuteUbergraph_StreamingInstallProgressBar_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
