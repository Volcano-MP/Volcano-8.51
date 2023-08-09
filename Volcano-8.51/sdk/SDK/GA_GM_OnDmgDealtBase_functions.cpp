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


// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.DoOnDmgDealtBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GM_OnDmgDealtBase_C::DoOnDmgDealtBehavior(const struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_GM_OnDmgDealtBase_C", "DoOnDmgDealtBehavior");

	Params::UGA_GM_OnDmgDealtBase_C_DoOnDmgDealtBehavior_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_GM_OnDmgDealtBase_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_GM_OnDmgDealtBase_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_GM_OnDmgDealtBase_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.ExecuteUbergraph_GA_GM_OnDmgDealtBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_GM_OnDmgDealtBase_C::ExecuteUbergraph_GA_GM_OnDmgDealtBase(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_GM_OnDmgDealtBase_C", "ExecuteUbergraph_GA_GM_OnDmgDealtBase");

	Params::UGA_GM_OnDmgDealtBase_C_ExecuteUbergraph_GA_GM_OnDmgDealtBase_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
