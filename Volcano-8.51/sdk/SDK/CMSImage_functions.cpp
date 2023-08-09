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


// Function CMSImage.CMSImage_C.SetMediaURL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MediaUrl                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCMSImage_C::SetMediaURL(const class FString& MediaUrl)
{
	static auto Func = Class->GetFunction("CMSImage_C", "SetMediaURL");

	Params::UCMSImage_C_SetMediaURL_Params Parms;

	Parms.MediaUrl = MediaUrl;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
