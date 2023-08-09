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


// Function BP_SolarisPrototype.BP_SolarisPrototype_C.CheckEndConditions
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSolarisResponse            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// struct FSolarisResponse            K2Node_MakeStruct_SolarisResponse                                (NoDestructor)

struct FSolarisResponse UBP_SolarisPrototype_C::CheckEndConditions(const struct FSolarisResponse& K2Node_MakeStruct_SolarisResponse)
{
	static auto Func = Class->GetFunction("BP_SolarisPrototype_C", "CheckEndConditions");

	Params::UBP_SolarisPrototype_C_CheckEndConditions_Params Parms;

	Parms.K2Node_MakeStruct_SolarisResponse = K2Node_MakeStruct_SolarisResponse;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
