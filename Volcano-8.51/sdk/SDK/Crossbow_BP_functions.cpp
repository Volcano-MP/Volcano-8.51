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


// Function Crossbow_BP.Crossbow_BP_C.ExecuteUbergraph_Crossbow_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrossbow_BP_C::ExecuteUbergraph_Crossbow_BP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Crossbow_BP_C", "ExecuteUbergraph_Crossbow_BP");

	Params::UCrossbow_BP_C_ExecuteUbergraph_Crossbow_BP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
