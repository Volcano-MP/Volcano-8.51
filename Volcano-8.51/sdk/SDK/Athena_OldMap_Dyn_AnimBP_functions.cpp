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


// Function Athena_OldMap_Dyn_AnimBP.Athena_OldMap_Dyn_AnimBP_C.ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_OldMap_Dyn_AnimBP_C::ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Athena_OldMap_Dyn_AnimBP_C", "ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP");

	Params::UAthena_OldMap_Dyn_AnimBP_C_ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
