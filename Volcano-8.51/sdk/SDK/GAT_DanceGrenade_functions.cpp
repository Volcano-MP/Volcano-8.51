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


// Function GAT_DanceGrenade.GAT_DanceGrenade_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_DanceGrenade_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAT_DanceGrenade_C", "K2_ActivateAbility");

	Params::UGAT_DanceGrenade_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_DanceGrenade.GAT_DanceGrenade_C.ExecuteUbergraph_GAT_DanceGrenade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_DanceGrenade_C::ExecuteUbergraph_GAT_DanceGrenade(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GAT_DanceGrenade_C", "ExecuteUbergraph_GAT_DanceGrenade");

	Params::UGAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
