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


// Function WM_Lights.WM_Lights_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWM_Lights_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("WM_Lights_C", "UserConstructionScript");

	Params::AWM_Lights_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Lights.WM_Lights_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWM_Lights_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("WM_Lights_C", "ReceiveBeginPlay");

	Params::AWM_Lights_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Lights.WM_Lights_C.WM-Lightcontrol
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWM_Lights_C::WM_Lightcontrol(bool TurnOn)
{
	static auto Func = Class->GetFunction("WM_Lights_C", "WM-Lightcontrol");

	Params::AWM_Lights_C_WM_Lightcontrol_Params Parms;

	Parms.TurnOn = TurnOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Lights.WM_Lights_C.ExecuteUbergraph_WM_Lights
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TurnOn                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWM_Lights_C::ExecuteUbergraph_WM_Lights(int32 EntryPoint, bool K2Node_CustomEvent_TurnOn)
{
	static auto Func = Class->GetFunction("WM_Lights_C", "ExecuteUbergraph_WM_Lights");

	Params::AWM_Lights_C_ExecuteUbergraph_WM_Lights_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TurnOn = K2Node_CustomEvent_TurnOn;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
