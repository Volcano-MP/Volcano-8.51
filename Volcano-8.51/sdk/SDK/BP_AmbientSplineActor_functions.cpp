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


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AmbientSplineActor_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_AmbientSplineActor_C", "ReceiveBeginPlay");

	Params::ABP_AmbientSplineActor_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.Check Closest Point
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientSplineActor_C::Check_Closest_Point()
{
	static auto Func = Class->GetFunction("BP_AmbientSplineActor_C", "Check Closest Point");

	Params::ABP_AmbientSplineActor_C_Check_Closest_Point_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AmbientSplineActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BP_AmbientSplineActor_C", "ReceiveTick");

	Params::ABP_AmbientSplineActor_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ExecuteUbergraph_BP_AmbientSplineActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AmbientSplineActor_C::ExecuteUbergraph_BP_AmbientSplineActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static auto Func = Class->GetFunction("BP_AmbientSplineActor_C", "ExecuteUbergraph_BP_AmbientSplineActor");

	Params::ABP_AmbientSplineActor_C_ExecuteUbergraph_BP_AmbientSplineActor_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
