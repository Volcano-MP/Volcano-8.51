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


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.HandleTransitionInComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Expedition_C::HandleTransitionInComplete()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "HandleTransitionInComplete");

	Params::UFrontEndRewards_Expedition_C_HandleTransitionInComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueSuccess
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Expedition_C::ContinueSuccess()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "ContinueSuccess");

	Params::UFrontEndRewards_Expedition_C_ContinueSuccess_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueFail
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Expedition_C::ContinueFail(TArray<struct FFortItemInstanceQuantityPair>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "ContinueFail");

	Params::UFrontEndRewards_Expedition_C_ContinueFail_Params Parms;

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Check
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Expedition_C::Check()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "Check");

	Params::UFrontEndRewards_Expedition_C_Check_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetSuccessChanceFromExpedition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetExpeditionSuccessChance_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UFrontEndRewards_Expedition_C::SetSuccessChanceFromExpedition(float CallFunc_GetExpeditionSuccessChance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "SetSuccessChanceFromExpedition");

	Params::UFrontEndRewards_Expedition_C_SetSuccessChanceFromExpedition_Params Parms;

	Parms.CallFunc_GetExpeditionSuccessChance_ReturnValue = CallFunc_GetExpeditionSuccessChance_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetTitleFromExpedition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UFrontEndRewards_Expedition_C::SetTitleFromExpedition(class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "SetTitleFromExpedition");

	Params::UFrontEndRewards_Expedition_C_SetTitleFromExpedition_Params Parms;

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetBrushFromExpedition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue          (NoDestructor, HasGetValueTypeHash)
// struct FFortTagUIData              CallFunc_GetUIDataForTag_OutData                                 ()
// bool                               CallFunc_GetUIDataForTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Expedition_C::SetBrushFromExpedition(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTag& CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "SetBrushFromExpedition");

	Params::UFrontEndRewards_Expedition_C_SetBrushFromExpedition_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue = CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue;
	Parms.CallFunc_GetUIDataForTag_OutData = CallFunc_GetUIDataForTag_OutData;
	Parms.CallFunc_GetUIDataForTag_ReturnValue = CallFunc_GetUIDataForTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.PopulateFromExpedition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Expedition_C::PopulateFromExpedition(class UFortExpeditionItem* Item)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "PopulateFromExpedition");

	Params::UFrontEndRewards_Expedition_C_PopulateFromExpedition_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionInBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Expedition_C::TransitionInBegin()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "TransitionInBegin");

	Params::UFrontEndRewards_Expedition_C_TransitionInBegin_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionOutBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Expedition_C::TransitionOutBegin()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "TransitionOutBegin");

	Params::UFrontEndRewards_Expedition_C_TransitionOutBegin_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnCollectExpeditionCompleted
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSucceeded                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Expedition_C::OnCollectExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "OnCollectExpeditionCompleted");

	Params::UFrontEndRewards_Expedition_C_OnCollectExpeditionCompleted_Params Parms;

	Parms.Expedition = Expedition;
	Parms.bSucceeded = bSucceeded;
	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Expedition_C::OnPrimaryAction()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "OnPrimaryAction");

	Params::UFrontEndRewards_Expedition_C_OnPrimaryAction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Expedition_C::Construct()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "Construct");

	Params::UFrontEndRewards_Expedition_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ExecuteUbergraph_FrontEndRewards_Expedition
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItem*         K2Node_Event_Expedition                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSucceeded                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortItemInstanceQuantityPair>K2Node_Event_Rewards                                             (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UFrontEndRewards_Expedition_C::ExecuteUbergraph_FrontEndRewards_Expedition(int32 EntryPoint, class UFortExpeditionItem* K2Node_Event_Expedition, bool K2Node_Event_bSucceeded, TArray<struct FFortItemInstanceQuantityPair>& K2Node_Event_Rewards, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "ExecuteUbergraph_FrontEndRewards_Expedition");

	Params::UFrontEndRewards_Expedition_C_ExecuteUbergraph_FrontEndRewards_Expedition_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Expedition = K2Node_Event_Expedition;
	Parms.K2Node_Event_bSucceeded = K2Node_Event_bSucceeded;
	Parms.K2Node_Event_Rewards = K2Node_Event_Rewards;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnExpeditionCompleted__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succeeded                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Expedition_C::OnExpeditionCompleted__DelegateSignature(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Expedition_C", "OnExpeditionCompleted__DelegateSignature");

	Params::UFrontEndRewards_Expedition_C_OnExpeditionCompleted__DelegateSignature_Params Parms;

	Parms.Succeeded = Succeeded;
	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
