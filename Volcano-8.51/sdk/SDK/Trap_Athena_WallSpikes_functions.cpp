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


// Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.SetSpikePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewSpikePosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_WallSpikes_C::SetSpikePosition(float NewSpikePosition)
{
	static auto Func = Class->GetFunction("Trap_Athena_WallSpikes_C", "SetSpikePosition");

	Params::ATrap_Athena_WallSpikes_C_SetSpikePosition_Params Parms;

	Parms.NewSpikePosition = NewSpikePosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.ExecuteUbergraph_Trap_Athena_WallSpikes
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewSpikePosition                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_WallSpikes_C::ExecuteUbergraph_Trap_Athena_WallSpikes(int32 EntryPoint, float K2Node_Event_NewSpikePosition, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Athena_WallSpikes_C", "ExecuteUbergraph_Trap_Athena_WallSpikes");

	Params::ATrap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewSpikePosition = K2Node_Event_NewSpikePosition;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
