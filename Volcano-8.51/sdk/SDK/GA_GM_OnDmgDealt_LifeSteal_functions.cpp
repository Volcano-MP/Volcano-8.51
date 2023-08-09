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


// Function GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C.DoOnDmgDealtBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GM_OnDmgDealt_LifeSteal_C::DoOnDmgDealtBehavior(const struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_GM_OnDmgDealt_LifeSteal_C", "DoOnDmgDealtBehavior");

	Params::UGA_GM_OnDmgDealt_LifeSteal_C_DoOnDmgDealtBehavior_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C.ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           ()

void UGA_GM_OnDmgDealt_LifeSteal_C::ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static auto Func = Class->GetFunction("GA_GM_OnDmgDealt_LifeSteal_C", "ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal");

	Params::UGA_GM_OnDmgDealt_LifeSteal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
