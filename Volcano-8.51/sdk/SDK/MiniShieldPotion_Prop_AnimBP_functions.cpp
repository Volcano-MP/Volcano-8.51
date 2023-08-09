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


// Function MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C.ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniShieldPotion_Prop_AnimBP_C::ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MiniShieldPotion_Prop_AnimBP_C", "ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP");

	Params::UMiniShieldPotion_Prop_AnimBP_C_ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
