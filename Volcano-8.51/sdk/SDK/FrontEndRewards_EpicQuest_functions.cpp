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


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.MarkQuestAsSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_EpicQuest_C::MarkQuestAsSeen(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "MarkQuestAsSeen");

	Params::UFrontEndRewards_EpicQuest_C_MarkQuestAsSeen_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.HandleTransitionInComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_EpicQuest_C::HandleTransitionInComplete(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "HandleTransitionInComplete");

	Params::UFrontEndRewards_EpicQuest_C_HandleTransitionInComplete_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.HandleContinueAction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Committed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_EpicQuest_C::HandleContinueAction(bool* Committed)
{
	static auto Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "HandleContinueAction");

	Params::UFrontEndRewards_EpicQuest_C_HandleContinueAction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Committed != nullptr)
		*Committed = Parms.Committed;

}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.PopulateFromQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              InQuest                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_EpicQuest_C::PopulateFromQuest(class UFortQuestItem* InQuest, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "PopulateFromQuest");

	Params::UFrontEndRewards_EpicQuest_C_PopulateFromQuest_Params Parms;

	Parms.InQuest = InQuest;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.TransitionInBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_EpicQuest_C::TransitionInBegin()
{
	static auto Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "TransitionInBegin");

	Params::UFrontEndRewards_EpicQuest_C_TransitionInBegin_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.TransitionOutBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_EpicQuest_C::TransitionOutBegin()
{
	static auto Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "TransitionOutBegin");

	Params::UFrontEndRewards_EpicQuest_C_TransitionOutBegin_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewards_EpicQuest_C::Construct()
{
	static auto Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "Construct");

	Params::UFrontEndRewards_EpicQuest_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_EpicQuest_C::OnPrimaryAction()
{
	static auto Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "OnPrimaryAction");

	Params::UFrontEndRewards_EpicQuest_C_OnPrimaryAction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.ExecuteUbergraph_FrontEndRewards_EpicQuest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleContinueAction_Committed                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UFrontEndRewards_EpicQuest_C::ExecuteUbergraph_FrontEndRewards_EpicQuest(int32 EntryPoint, bool CallFunc_HandleContinueAction_Committed, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "ExecuteUbergraph_FrontEndRewards_EpicQuest");

	Params::UFrontEndRewards_EpicQuest_C_ExecuteUbergraph_FrontEndRewards_EpicQuest_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HandleContinueAction_Committed = CallFunc_HandleContinueAction_Committed;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
