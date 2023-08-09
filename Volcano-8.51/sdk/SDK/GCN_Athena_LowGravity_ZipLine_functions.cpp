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


// Function GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_LowGravity_ZipLine_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_ZipLine_C", "ReceiveTick");

	Params::AGCN_Athena_LowGravity_ZipLine_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C.ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_LowGravity_ZipLine_C::ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static auto Func = Class->GetFunction("GCN_Athena_LowGravity_ZipLine_C", "ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine");

	Params::AGCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
