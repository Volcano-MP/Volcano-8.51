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


// Function Athena_GameState.Athena_GameState_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AAthena_GameState_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "Timeline_0__FinishedFunc");

	Params::AAthena_GameState_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_GameState.Athena_GameState_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AAthena_GameState_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "Timeline_0__UpdateFunc");

	Params::AAthena_GameState_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_GameState.Athena_GameState_C.OnWinnerAnnounced
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_GameState_C::OnWinnerAnnounced()
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "OnWinnerAnnounced");

	Params::AAthena_GameState_C_OnWinnerAnnounced_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_GameState.Athena_GameState_C.ExecuteUbergraph_Athena_GameState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSlowMotionOnVictory_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthena_GameState_C::ExecuteUbergraph_Athena_GameState(int32 EntryPoint, bool CallFunc_CanUseSlowMotionOnVictory_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "ExecuteUbergraph_Athena_GameState");

	Params::AAthena_GameState_C_ExecuteUbergraph_Athena_GameState_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CanUseSlowMotionOnVictory_ReturnValue = CallFunc_CanUseSlowMotionOnVictory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
