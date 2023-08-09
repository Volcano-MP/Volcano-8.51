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


// Function Pickaxe_Rhino_AnimBlueprint.Pickaxe_Rhino_AnimBlueprint_C.ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickaxe_Rhino_AnimBlueprint_C::ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Pickaxe_Rhino_AnimBlueprint_C", "ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint");

	Params::UPickaxe_Rhino_AnimBlueprint_C_ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
