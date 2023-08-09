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


// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientLakeAudioActor_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_AmbientLakeAudioActor_C", "UserConstructionScript");

	Params::ABP_AmbientLakeAudioActor_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
