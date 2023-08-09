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


// Function MultiFactorAuthWidget.MultiFactorAuthWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMultiFactorAuthWidget_C::Construct()
{
	static auto Func = Class->GetFunction("MultiFactorAuthWidget_C", "Construct");

	Params::UMultiFactorAuthWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiFactorAuthWidget.MultiFactorAuthWidget_C.ExecuteUbergraph_MultiFactorAuthWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiFactorAuthWidget_C::ExecuteUbergraph_MultiFactorAuthWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MultiFactorAuthWidget_C", "ExecuteUbergraph_MultiFactorAuthWidget");

	Params::UMultiFactorAuthWidget_C_ExecuteUbergraph_MultiFactorAuthWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
