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


// Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Pistol_AutoHeavy_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Pistol_AutoHeavy_Athena_C", "ReceiveBeginPlay");

	Params::AB_Pistol_AutoHeavy_Athena_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Pistol_AutoHeavy_Athena_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_Pistol_AutoHeavy_Athena_C", "OnWeaponAttached");

	Params::AB_Pistol_AutoHeavy_Athena_C_OnWeaponAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.ExecuteUbergraph_B_Pistol_AutoHeavy_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pistol_AutoHeavy_Athena_C::ExecuteUbergraph_B_Pistol_AutoHeavy_Athena(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_Pistol_AutoHeavy_Athena_C", "ExecuteUbergraph_B_Pistol_AutoHeavy_Athena");

	Params::AB_Pistol_AutoHeavy_Athena_C_ExecuteUbergraph_B_Pistol_AutoHeavy_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
