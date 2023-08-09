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


// Function TutorialRichText.TutorialRichText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTutorialRichText_C::Construct()
{
	static auto Func = Class->GetFunction("TutorialRichText_C", "Construct");

	Params::UTutorialRichText_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialRichText.TutorialRichText_C.ExecuteUbergraph_TutorialRichText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialRichText_C::ExecuteUbergraph_TutorialRichText(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("TutorialRichText_C", "ExecuteUbergraph_TutorialRichText");

	Params::UTutorialRichText_C_ExecuteUbergraph_TutorialRichText_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
