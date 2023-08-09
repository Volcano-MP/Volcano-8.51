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


// Function BPI_Building_Actor_Destroyed.BPI_Building_Actor_Destroyed_C.Event_Building_Actor_Destroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPI_Building_Actor_Destroyed_C::Event_Building_Actor_Destroyed()
{
	static auto Func = Class->GetFunction("BPI_Building_Actor_Destroyed_C", "Event_Building_Actor_Destroyed");

	Params::UBPI_Building_Actor_Destroyed_C_Event_Building_Actor_Destroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
