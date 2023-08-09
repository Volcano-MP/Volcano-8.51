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


// Function DriftKairosJSBridge.DanceChallengesJSBridge.GetDanceChallenges
// (Final, Native, Public)
// Parameters:
// struct FWebJSResponse              Response                                                         (Parm, NativeAccessSpecifierPublic)

void UDanceChallengesJSBridge::GetDanceChallenges(const struct FWebJSResponse& Response)
{
	static auto Func = Class->GetFunction("DanceChallengesJSBridge", "GetDanceChallenges");

	Params::UDanceChallengesJSBridge_GetDanceChallenges_Params Parms;

	Parms.Response = Response;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
