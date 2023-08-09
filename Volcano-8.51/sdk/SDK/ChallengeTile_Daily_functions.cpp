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


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.SetDynamicColors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      WeeklyDynamicMaterialTarget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortChallengeSetStyle      FortChallengeSetStyle                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeTile_Daily_C::SetDynamicColors(class UImage* WeeklyDynamicMaterialTarget, struct FFortChallengeSetStyle& FortChallengeSetStyle, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeTile_Daily_C", "SetDynamicColors");

	Params::UChallengeTile_Daily_C_SetDynamicColors_Params Parms;

	Parms.WeeklyDynamicMaterialTarget = WeeklyDynamicMaterialTarget;
	Parms.FortChallengeSetStyle = FortChallengeSetStyle;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.OnChallengeSetEstablished
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle      DisplayStyle                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsComplete                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsLocked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeTile_Daily_C::OnChallengeSetEstablished(struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete, bool bIsLocked)
{
	static auto Func = Class->GetFunction("ChallengeTile_Daily_C", "OnChallengeSetEstablished");

	Params::UChallengeTile_Daily_C_OnChallengeSetEstablished_Params Parms;

	Parms.DisplayStyle = DisplayStyle;
	Parms.bIsComplete = bIsComplete;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeTile_Daily_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("ChallengeTile_Daily_C", "BP_OnHovered");

	Params::UChallengeTile_Daily_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeTile_Daily_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("ChallengeTile_Daily_C", "BP_OnUnhovered");

	Params::UChallengeTile_Daily_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.OnContainsPartyAssistedChallengeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasPartyAssistedChallenge                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeTile_Daily_C::OnContainsPartyAssistedChallengeChanged(bool bHasPartyAssistedChallenge)
{
	static auto Func = Class->GetFunction("ChallengeTile_Daily_C", "OnContainsPartyAssistedChallengeChanged");

	Params::UChallengeTile_Daily_C_OnContainsPartyAssistedChallengeChanged_Params Parms;

	Parms.bHasPartyAssistedChallenge = bHasPartyAssistedChallenge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.ExecuteUbergraph_ChallengeTile_Daily
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortChallengeSetStyle      K2Node_Event_DisplayStyle                                        (ConstParm)
// bool                               K2Node_Event_bIsComplete                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsLocked                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHasPartyAssistedChallenge                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeTile_Daily_C::ExecuteUbergraph_ChallengeTile_Daily(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFortChallengeSetStyle& K2Node_Event_DisplayStyle, bool K2Node_Event_bIsComplete, bool K2Node_Event_bIsLocked, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_bHasPartyAssistedChallenge)
{
	static auto Func = Class->GetFunction("ChallengeTile_Daily_C", "ExecuteUbergraph_ChallengeTile_Daily");

	Params::UChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_DisplayStyle = K2Node_Event_DisplayStyle;
	Parms.K2Node_Event_bIsComplete = K2Node_Event_bIsComplete;
	Parms.K2Node_Event_bIsLocked = K2Node_Event_bIsLocked;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_bHasPartyAssistedChallenge = K2Node_Event_bHasPartyAssistedChallenge;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
