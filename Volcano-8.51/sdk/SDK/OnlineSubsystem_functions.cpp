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


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Match                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDidBecomeActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTurnBasedMatchInterface::OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive)
{
	static auto Func = Class->GetFunction("TurnBasedMatchInterface", "OnMatchReceivedTurn");

	Params::UTurnBasedMatchInterface_OnMatchReceivedTurn_Params Parms;

	Parms.Match = Match;
	Parms.bDidBecomeActive = bDidBecomeActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Match                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTurnBasedMatchInterface::OnMatchEnded(const class FString& Match)
{
	static auto Func = Class->GetFunction("TurnBasedMatchInterface", "OnMatchEnded");

	Params::UTurnBasedMatchInterface_OnMatchEnded_Params Parms;

	Parms.Match = Match;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
