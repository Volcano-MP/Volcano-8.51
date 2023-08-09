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


// Function ChallengeScreen.ChallengeScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("ChallengeScreen_C", "OnActivated");

	Params::UChallengeScreen_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeScreen.ChallengeScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeScreen_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("ChallengeScreen_C", "OnDeactivated");

	Params::UChallengeScreen_C_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeScreen.ChallengeScreen_C.ExecuteUbergraph_ChallengeScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyAssistedChallengeSet_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeScreen_C::ExecuteUbergraph_ChallengeScreen(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsPartyAssistedChallengeSet_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeScreen_C", "ExecuteUbergraph_ChallengeScreen");

	Params::UChallengeScreen_C_ExecuteUbergraph_ChallengeScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsPartyAssistedChallengeSet_ReturnValue = CallFunc_IsPartyAssistedChallengeSet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
