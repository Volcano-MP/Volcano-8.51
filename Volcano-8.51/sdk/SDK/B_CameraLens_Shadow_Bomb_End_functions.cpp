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


// Function B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Shadow_Bomb_End_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraLens_Shadow_Bomb_End_C", "ReceiveBeginPlay");

	Params::AB_CameraLens_Shadow_Bomb_End_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Shadow_Bomb_End.B_CameraLens_Shadow_Bomb_End_C.ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Shadow_Bomb_End_C::ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_CameraLens_Shadow_Bomb_End_C", "ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End");

	Params::AB_CameraLens_Shadow_Bomb_End_C_ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
