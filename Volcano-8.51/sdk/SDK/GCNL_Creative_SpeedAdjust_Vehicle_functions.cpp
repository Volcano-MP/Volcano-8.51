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


// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCNL_Creative_SpeedAdjust_Vehicle_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GCNL_Creative_SpeedAdjust_Vehicle_C", "ReceiveBeginPlay");

	Params::AGCNL_Creative_SpeedAdjust_Vehicle_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Creative_SpeedAdjust_Vehicle_C::ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GCNL_Creative_SpeedAdjust_Vehicle_C", "ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle");

	Params::AGCNL_Creative_SpeedAdjust_Vehicle_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
