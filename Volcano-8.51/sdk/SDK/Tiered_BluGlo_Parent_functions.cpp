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


// Function Tiered_BluGlo_Parent.Tiered_BluGlo_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATiered_BluGlo_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Tiered_BluGlo_Parent_C", "ReceiveBeginPlay");

	Params::ATiered_BluGlo_Parent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Tiered_BluGlo_Parent.Tiered_BluGlo_Parent_C.ExecuteUbergraph_Tiered_BluGlo_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATiered_BluGlo_Parent_C::ExecuteUbergraph_Tiered_BluGlo_Parent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("Tiered_BluGlo_Parent_C", "ExecuteUbergraph_Tiered_BluGlo_Parent");

	Params::ATiered_BluGlo_Parent_C_ExecuteUbergraph_Tiered_BluGlo_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
