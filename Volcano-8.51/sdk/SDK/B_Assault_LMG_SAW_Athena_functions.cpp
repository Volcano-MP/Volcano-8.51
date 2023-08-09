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


// Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Assault_LMG_SAW_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Assault_LMG_SAW_Athena_C", "ReceiveBeginPlay");

	Params::AB_Assault_LMG_SAW_Athena_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_LMG_SAW_Athena_C::OnSetTargeting(bool bNewIsTargeting)
{
	static auto Func = Class->GetFunction("B_Assault_LMG_SAW_Athena_C", "OnSetTargeting");

	Params::AB_Assault_LMG_SAW_Athena_C_OnSetTargeting_Params Parms;

	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.ExecuteUbergraph_B_Assault_LMG_SAW_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_LMG_SAW_Athena_C::ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int32 EntryPoint, bool K2Node_Event_bNewIsTargeting)
{
	static auto Func = Class->GetFunction("B_Assault_LMG_SAW_Athena_C", "ExecuteUbergraph_B_Assault_LMG_SAW_Athena");

	Params::AB_Assault_LMG_SAW_Athena_C_ExecuteUbergraph_B_Assault_LMG_SAW_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
