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


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePanelInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRewardInfo             CallFunc_GetRewardInfo_BP_ReturnValue                            ()

void UJournalQuestRewardDetails_C::UpdatePanelInfo(class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue)
{
	static auto Func = Class->GetFunction("JournalQuestRewardDetails_C", "UpdatePanelInfo");

	Params::UJournalQuestRewardDetails_C_UpdatePanelInfo_Params Parms;

	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetRewardInfo_BP_ReturnValue = CallFunc_GetRewardInfo_BP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePlayButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanGotoQuest_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanPlayQuest_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestRewardDetails_C::UpdatePlayButtonState(bool CallFunc_CanGotoQuest_ReturnValue, bool CallFunc_CanPlayQuest_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("JournalQuestRewardDetails_C", "UpdatePlayButtonState");

	Params::UJournalQuestRewardDetails_C_UpdatePlayButtonState_Params Parms;

	Parms.CallFunc_CanGotoQuest_ReturnValue = CallFunc_CanGotoQuest_ReturnValue;
	Parms.CallFunc_CanPlayQuest_ReturnValue = CallFunc_CanPlayQuest_ReturnValue;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdateButtonStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalQuestRewardDetails_C::UpdateButtonStates()
{
	static auto Func = Class->GetFunction("JournalQuestRewardDetails_C", "UpdateButtonStates");

	Params::UJournalQuestRewardDetails_C_UpdateButtonStates_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournalQuestRewardDetails_C::Setup()
{
	static auto Func = Class->GetFunction("JournalQuestRewardDetails_C", "Setup");

	Params::UJournalQuestRewardDetails_C_Setup_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJournalQuestRewardDetails_C::Construct()
{
	static auto Func = Class->GetFunction("JournalQuestRewardDetails_C", "Construct");

	Params::UJournalQuestRewardDetails_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleCurrentQuestChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJournalQuestRewardDetails_C::HandleCurrentQuestChangedBP()
{
	static auto Func = Class->GetFunction("JournalQuestRewardDetails_C", "HandleCurrentQuestChangedBP");

	Params::UJournalQuestRewardDetails_C_HandleCurrentQuestChangedBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.ExecuteUbergraph_JournalQuestRewardDetails
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestRewardDetails_C::ExecuteUbergraph_JournalQuestRewardDetails(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("JournalQuestRewardDetails_C", "ExecuteUbergraph_JournalQuestRewardDetails");

	Params::UJournalQuestRewardDetails_C_ExecuteUbergraph_JournalQuestRewardDetails_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
