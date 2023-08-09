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


// Function B_CameraLens_Blinkstrike.B_CameraLens_Blinkstrike_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Blinkstrike_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraLens_Blinkstrike_C", "ReceiveBeginPlay");

	Params::AB_CameraLens_Blinkstrike_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Blinkstrike.B_CameraLens_Blinkstrike_C.ExecuteUbergraph_B_CameraLens_Blinkstrike
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Blinkstrike_C::ExecuteUbergraph_B_CameraLens_Blinkstrike(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_CameraLens_Blinkstrike_C", "ExecuteUbergraph_B_CameraLens_Blinkstrike");

	Params::AB_CameraLens_Blinkstrike_C_ExecuteUbergraph_B_CameraLens_Blinkstrike_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
