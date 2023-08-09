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


// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeInfoPanelEntry_C::OnChallengeInfoSet()
{
	static auto Func = Class->GetFunction("ChallengeInfoPanelEntry_C", "OnChallengeInfoSet");

	Params::UChallengeInfoPanelEntry_C_OnChallengeInfoSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.OnLocalPlayerMissingAssistedChallenge
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeInfoPanelEntry_C::OnLocalPlayerMissingAssistedChallenge()
{
	static auto Func = Class->GetFunction("ChallengeInfoPanelEntry_C", "OnLocalPlayerMissingAssistedChallenge");

	Params::UChallengeInfoPanelEntry_C_OnLocalPlayerMissingAssistedChallenge_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.ExecuteUbergraph_ChallengeInfoPanelEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeInfoPanelEntry_C::ExecuteUbergraph_ChallengeInfoPanelEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeInfoPanelEntry_C", "ExecuteUbergraph_ChallengeInfoPanelEntry");

	Params::UChallengeInfoPanelEntry_C_ExecuteUbergraph_ChallengeInfoPanelEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
