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


// Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Teleport_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraLens_Teleport_C", "ReceiveBeginPlay");

	Params::AB_CameraLens_Teleport_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.ExecuteUbergraph_B_CameraLens_Teleport
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Teleport_C::ExecuteUbergraph_B_CameraLens_Teleport(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_CameraLens_Teleport_C", "ExecuteUbergraph_B_CameraLens_Teleport");

	Params::AB_CameraLens_Teleport_C_ExecuteUbergraph_B_CameraLens_Teleport_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
