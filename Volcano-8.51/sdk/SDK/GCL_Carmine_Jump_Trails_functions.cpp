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


// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCL_Carmine_Jump_Trails_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Trails_C", "ReceiveBeginPlay");

	Params::AGCL_Carmine_Jump_Trails_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_Carmine_Jump_Trails_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Trails_C", "ReceiveEndPlay");

	Params::AGCL_Carmine_Jump_Trails_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ExecuteUbergraph_GCL_Carmine_Jump_Trails
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_Carmine_Jump_Trails_C::ExecuteUbergraph_GCL_Carmine_Jump_Trails(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Trails_C", "ExecuteUbergraph_GCL_Carmine_Jump_Trails");

	Params::AGCL_Carmine_Jump_Trails_C_ExecuteUbergraph_GCL_Carmine_Jump_Trails_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
