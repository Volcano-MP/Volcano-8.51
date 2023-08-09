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


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.OnRep_AmmoReserves
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_HookPassive_C::OnRep_AmmoReserves()
{
	static auto Func = Class->GetFunction("GA_Athena_HookPassive_C", "OnRep_AmmoReserves");

	Params::UGA_Athena_HookPassive_C_OnRep_AmmoReserves_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_HookPassive_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_HookPassive_C", "K2_ActivateAbility");

	Params::UGA_Athena_HookPassive_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_HookPassive_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Athena_HookPassive_C", "K2_OnEndAbility");

	Params::UGA_Athena_HookPassive_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.ExecuteUbergraph_GA_Athena_HookPassive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookPassive_C::ExecuteUbergraph_GA_Athena_HookPassive(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_HookPassive_C", "ExecuteUbergraph_GA_Athena_HookPassive");

	Params::UGA_Athena_HookPassive_C_ExecuteUbergraph_GA_Athena_HookPassive_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
