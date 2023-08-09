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


// Function BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C.ExecuteUbergraph_BP_Shotgun_SG_BFPA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Shotgun_SG_BFPA_C::ExecuteUbergraph_BP_Shotgun_SG_BFPA(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_Shotgun_SG_BFPA_C", "ExecuteUbergraph_BP_Shotgun_SG_BFPA");

	Params::UBP_Shotgun_SG_BFPA_C_ExecuteUbergraph_BP_Shotgun_SG_BFPA_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
