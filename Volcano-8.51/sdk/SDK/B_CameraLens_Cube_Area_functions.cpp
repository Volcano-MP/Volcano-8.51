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


// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Cube_Area_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraLens_Cube_Area_C", "ReceiveBeginPlay");

	Params::AB_CameraLens_Cube_Area_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.ExecuteUbergraph_B_CameraLens_Cube_Area
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Cube_Area_C::ExecuteUbergraph_B_CameraLens_Cube_Area(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_CameraLens_Cube_Area_C", "ExecuteUbergraph_B_CameraLens_Cube_Area");

	Params::AB_CameraLens_Cube_Area_C_ExecuteUbergraph_B_CameraLens_Cube_Area_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
