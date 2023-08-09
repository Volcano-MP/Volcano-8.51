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


// Function B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Persistent_Fire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RocketLauncher_Generic_Athena_C::Muzzle_Flash_FX(bool Persistent_Fire)
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Generic_Athena_C", "Muzzle Flash FX");

	Params::AB_RocketLauncher_Generic_Athena_C_Muzzle_Flash_FX_Params Parms;

	Parms.Persistent_Fire = Persistent_Fire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.ExecuteUbergraph_B_RocketLauncher_Generic_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Persistent_Fire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RocketLauncher_Generic_Athena_C::ExecuteUbergraph_B_RocketLauncher_Generic_Athena(int32 EntryPoint, bool K2Node_Event_Persistent_Fire)
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Generic_Athena_C", "ExecuteUbergraph_B_RocketLauncher_Generic_Athena");

	Params::AB_RocketLauncher_Generic_Athena_C_ExecuteUbergraph_B_RocketLauncher_Generic_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Persistent_Fire = K2Node_Event_Persistent_Fire;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
