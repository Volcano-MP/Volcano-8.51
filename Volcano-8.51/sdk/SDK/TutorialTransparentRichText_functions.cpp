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


// Function TutorialTransparentRichText.TutorialTransparentRichText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTutorialTransparentRichText_C::Construct()
{
	static auto Func = Class->GetFunction("TutorialTransparentRichText_C", "Construct");

	Params::UTutorialTransparentRichText_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialTransparentRichText.TutorialTransparentRichText_C.ExecuteUbergraph_TutorialTransparentRichText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialTransparentRichText_C::ExecuteUbergraph_TutorialTransparentRichText(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("TutorialTransparentRichText_C", "ExecuteUbergraph_TutorialTransparentRichText");

	Params::UTutorialTransparentRichText_C_ExecuteUbergraph_TutorialTransparentRichText_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
