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


// Function ChatMessageEntry.ChatMessageEntry_C.HandleSelectionStatusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatMessageEntry_C::HandleSelectionStatusChanged(bool bIsSelected, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("ChatMessageEntry_C", "HandleSelectionStatusChanged");

	Params::UChatMessageEntry_C_HandleSelectionStatusChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatMessageEntry.ChatMessageEntry_C.OnEntryUpdated_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UChatMessageEntry_C::OnEntryUpdated_1()
{
	static auto Func = Class->GetFunction("ChatMessageEntry_C", "OnEntryUpdated_1");

	Params::UChatMessageEntry_C_OnEntryUpdated_1_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatMessageEntry.ChatMessageEntry_C.BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UChatMessageEntry_C::BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("ChatMessageEntry_C", "BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	Params::UChatMessageEntry_C_BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatMessageEntry.ChatMessageEntry_C.OnFocusedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsFocused                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatMessageEntry_C::OnFocusedChanged(bool bIsFocused)
{
	static auto Func = Class->GetFunction("ChatMessageEntry_C", "OnFocusedChanged");

	Params::UChatMessageEntry_C_OnFocusedChanged_Params Parms;

	Parms.bIsFocused = bIsFocused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChatMessageEntry.ChatMessageEntry_C.ExecuteUbergraph_ChatMessageEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsFocused                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatMessageEntry_C::ExecuteUbergraph_ChatMessageEntry(int32 EntryPoint, bool K2Node_Event_bIsFocused)
{
	static auto Func = Class->GetFunction("ChatMessageEntry_C", "ExecuteUbergraph_ChatMessageEntry");

	Params::UChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsFocused = K2Node_Event_bIsFocused;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
