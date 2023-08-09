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


// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.SetDisplayTextFields
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerReportingStep    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               ()
// class FText                        K2Node_Select_Default                                            ()

void UCurrentReportStackingEntry_C::SetDisplayTextFields(enum class EPlayerReportingStep Temp_byte_Variable, class FText Temp_text_Variable, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("CurrentReportStackingEntry_C", "SetDisplayTextFields");

	Params::UCurrentReportStackingEntry_C_SetDisplayTextFields_Params Parms;

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCurrentReportStackingEntry_C::Construct()
{
	static auto Func = Class->GetFunction("CurrentReportStackingEntry_C", "Construct");

	Params::UCurrentReportStackingEntry_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.InitStackingEntryFields
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerReportingStep    DisplayedReportingStep                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCurrentReportStackingEntry_C::InitStackingEntryFields(enum class EPlayerReportingStep DisplayedReportingStep, class FText DisplayText)
{
	static auto Func = Class->GetFunction("CurrentReportStackingEntry_C", "InitStackingEntryFields");

	Params::UCurrentReportStackingEntry_C_InitStackingEntryFields_Params Parms;

	Parms.DisplayedReportingStep = DisplayedReportingStep;
	Parms.DisplayText = DisplayText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrentReportStackingEntry.CurrentReportStackingEntry_C.ExecuteUbergraph_CurrentReportStackingEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerReportingStep    K2Node_CustomEvent_DisplayedReportingStep                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_DisplayText                                   ()
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCurrentReportStackingEntry_C::ExecuteUbergraph_CurrentReportStackingEntry(int32 EntryPoint, enum class EPlayerReportingStep K2Node_CustomEvent_DisplayedReportingStep, class FText K2Node_CustomEvent_DisplayText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("CurrentReportStackingEntry_C", "ExecuteUbergraph_CurrentReportStackingEntry");

	Params::UCurrentReportStackingEntry_C_ExecuteUbergraph_CurrentReportStackingEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_DisplayedReportingStep = K2Node_CustomEvent_DisplayedReportingStep;
	Parms.K2Node_CustomEvent_DisplayText = K2Node_CustomEvent_DisplayText;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
