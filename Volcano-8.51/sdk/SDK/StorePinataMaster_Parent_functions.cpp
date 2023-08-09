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


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_Parent_C::InitiatePinata()
{
	static auto Func = Class->GetFunction("StorePinataMaster_Parent_C", "InitiatePinata");

	Params::AStorePinataMaster_Parent_C_InitiatePinata_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraResetComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_Parent_C::CameraResetComplete()
{
	static auto Func = Class->GetFunction("StorePinataMaster_Parent_C", "CameraResetComplete");

	Params::AStorePinataMaster_Parent_C_CameraResetComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraTransitionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_Parent_C::CameraTransitionComplete()
{
	static auto Func = Class->GetFunction("StorePinataMaster_Parent_C", "CameraTransitionComplete");

	Params::AStorePinataMaster_Parent_C_CameraTransitionComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.ExecuteUbergraph_StorePinataMaster_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_Parent_C::ExecuteUbergraph_StorePinataMaster_Parent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("StorePinataMaster_Parent_C", "ExecuteUbergraph_StorePinataMaster_Parent");

	Params::AStorePinataMaster_Parent_C_ExecuteUbergraph_StorePinataMaster_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
