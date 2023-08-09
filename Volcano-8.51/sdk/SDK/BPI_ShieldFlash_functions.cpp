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


// Function BPI_ShieldFlash.BPI_ShieldFlash_C.FlashShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPI_ShieldFlash_C::FlashShield()
{
	static auto Func = Class->GetFunction("BPI_ShieldFlash_C", "FlashShield");

	Params::UBPI_ShieldFlash_C_FlashShield_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
