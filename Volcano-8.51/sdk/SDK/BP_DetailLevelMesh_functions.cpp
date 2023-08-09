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


// Function BP_DetailLevelMesh.BP_DetailLevelMesh_C.ExecuteUbergraph_BP_DetailLevelMesh
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DetailLevelMesh_C::ExecuteUbergraph_BP_DetailLevelMesh(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_DetailLevelMesh_C", "ExecuteUbergraph_BP_DetailLevelMesh");

	Params::ABP_DetailLevelMesh_C_ExecuteUbergraph_BP_DetailLevelMesh_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
