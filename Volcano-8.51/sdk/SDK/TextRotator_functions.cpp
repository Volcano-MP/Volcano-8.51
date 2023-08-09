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


// Function TextRotator.TextRotator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTextRotator_C::Construct()
{
	static auto Func = Class->GetFunction("TextRotator_C", "Construct");

	Params::UTextRotator_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TextRotator.TextRotator_C.ExecuteUbergraph_TextRotator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextRotator_C::ExecuteUbergraph_TextRotator(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("TextRotator_C", "ExecuteUbergraph_TextRotator");

	Params::UTextRotator_C_ExecuteUbergraph_TextRotator_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
