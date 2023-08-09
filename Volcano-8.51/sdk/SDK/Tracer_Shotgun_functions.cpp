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


// Function Tracer_Shotgun.Tracer_Shotgun_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATracer_Shotgun_C::UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("Tracer_Shotgun_C", "UserConstructionScript");

	Params::ATracer_Shotgun_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tracer_Shotgun.Tracer_Shotgun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATracer_Shotgun_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Tracer_Shotgun_C", "ReceiveBeginPlay");

	Params::ATracer_Shotgun_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Tracer_Shotgun.Tracer_Shotgun_C.ExecuteUbergraph_Tracer_Shotgun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATracer_Shotgun_C::ExecuteUbergraph_Tracer_Shotgun(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Tracer_Shotgun_C", "ExecuteUbergraph_Tracer_Shotgun");

	Params::ATracer_Shotgun_C_ExecuteUbergraph_Tracer_Shotgun_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
