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


// Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsTalking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMicIndicator_C::OnPlayerTalkingChanged(bool bIsTalking)
{
	static auto Func = Class->GetFunction("MicIndicator_C", "OnPlayerTalkingChanged");

	Params::UMicIndicator_C_OnPlayerTalkingChanged_Params Parms;

	Parms.bIsTalking = bIsTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MicIndicator.MicIndicator_C.OnPlayerMuted
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsMuted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMicIndicator_C::OnPlayerMuted(bool bIsMuted)
{
	static auto Func = Class->GetFunction("MicIndicator_C", "OnPlayerMuted");

	Params::UMicIndicator_C_OnPlayerMuted_Params Parms;

	Parms.bIsMuted = bIsMuted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsTalking                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsMuted                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMicIndicator_C::ExecuteUbergraph_MicIndicator(int32 EntryPoint, int32 CallFunc_SelectInt_ReturnValue, bool K2Node_Event_bIsTalking, bool K2Node_Event_bIsMuted)
{
	static auto Func = Class->GetFunction("MicIndicator_C", "ExecuteUbergraph_MicIndicator");

	Params::UMicIndicator_C_ExecuteUbergraph_MicIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_Event_bIsTalking = K2Node_Event_bIsTalking;
	Parms.K2Node_Event_bIsMuted = K2Node_Event_bIsMuted;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
