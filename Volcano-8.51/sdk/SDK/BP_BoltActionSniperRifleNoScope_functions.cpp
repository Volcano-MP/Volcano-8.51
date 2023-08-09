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


// Function BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C.ExecuteUbergraph_BP_BoltActionSniperRifleNoScope
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BoltActionSniperRifleNoScope_C::ExecuteUbergraph_BP_BoltActionSniperRifleNoScope(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_BoltActionSniperRifleNoScope_C", "ExecuteUbergraph_BP_BoltActionSniperRifleNoScope");

	Params::UBP_BoltActionSniperRifleNoScope_C_ExecuteUbergraph_BP_BoltActionSniperRifleNoScope_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
