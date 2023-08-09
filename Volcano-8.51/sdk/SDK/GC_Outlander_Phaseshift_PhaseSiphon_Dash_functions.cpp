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


// Function GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GC_Outlander_Phaseshift_PhaseSiphon_Dash_C", "ReceiveBeginPlay");

	Params::AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C.ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GC_Outlander_Phaseshift_PhaseSiphon_Dash_C", "ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash");

	Params::AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C_ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
