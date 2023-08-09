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


// Function SK_Pickaxe_Lion_AnimBP.SK_Pickaxe_Lion_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_Lion_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Pickaxe_Lion_AnimBP_C::ExecuteUbergraph_SK_Pickaxe_Lion_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SK_Pickaxe_Lion_AnimBP_C", "ExecuteUbergraph_SK_Pickaxe_Lion_AnimBP");

	Params::USK_Pickaxe_Lion_AnimBP_C_ExecuteUbergraph_SK_Pickaxe_Lion_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
