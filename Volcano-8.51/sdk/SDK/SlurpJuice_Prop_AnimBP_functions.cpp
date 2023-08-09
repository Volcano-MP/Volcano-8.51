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


// Function SlurpJuice_Prop_AnimBP.SlurpJuice_Prop_AnimBP_C.ExecuteUbergraph_SlurpJuice_Prop_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlurpJuice_Prop_AnimBP_C::ExecuteUbergraph_SlurpJuice_Prop_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SlurpJuice_Prop_AnimBP_C", "ExecuteUbergraph_SlurpJuice_Prop_AnimBP");

	Params::USlurpJuice_Prop_AnimBP_C_ExecuteUbergraph_SlurpJuice_Prop_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
