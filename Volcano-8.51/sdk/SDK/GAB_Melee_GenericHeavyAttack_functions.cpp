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


// Function GAB_Melee_GenericHeavyAttack.GAB_Melee_GenericHeavyAttack_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Melee_GenericHeavyAttack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_Melee_GenericHeavyAttack_C", "K2_OnEndAbility");

	Params::UGAB_Melee_GenericHeavyAttack_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Melee_GenericHeavyAttack.GAB_Melee_GenericHeavyAttack_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_Melee_GenericHeavyAttack_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAB_Melee_GenericHeavyAttack_C", "K2_ActivateAbility");

	Params::UGAB_Melee_GenericHeavyAttack_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Melee_GenericHeavyAttack.GAB_Melee_GenericHeavyAttack_C.ExecuteUbergraph_GAB_Melee_GenericHeavyAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Melee_GenericHeavyAttack_C::ExecuteUbergraph_GAB_Melee_GenericHeavyAttack(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_Melee_GenericHeavyAttack_C", "ExecuteUbergraph_GAB_Melee_GenericHeavyAttack");

	Params::UGAB_Melee_GenericHeavyAttack_C_ExecuteUbergraph_GAB_Melee_GenericHeavyAttack_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
