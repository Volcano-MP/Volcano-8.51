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


// Function TutorialOverlay.TutorialOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTutorialOverlay_C::Construct()
{
	static auto Func = Class->GetFunction("TutorialOverlay_C", "Construct");

	Params::UTutorialOverlay_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialOverlay.TutorialOverlay_C.ExecuteUbergraph_TutorialOverlay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialOverlay_C::ExecuteUbergraph_TutorialOverlay(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("TutorialOverlay_C", "ExecuteUbergraph_TutorialOverlay");

	Params::UTutorialOverlay_C_ExecuteUbergraph_TutorialOverlay_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
