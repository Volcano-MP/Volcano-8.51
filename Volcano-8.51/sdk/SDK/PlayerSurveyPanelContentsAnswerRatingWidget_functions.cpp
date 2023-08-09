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


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandlePlayerRequestAnswer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AnswerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetStopwatchTime_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerSurveyAnswerMultipleChoiceK2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice           (NoDestructor)
// struct FFortPlayerSurveyAnswer     CallFunc_MakeMultipleChoiceAnswer_ReturnValue                    ()

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandlePlayerRequestAnswer(int32 AnswerIndex, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerMultipleChoice& K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice, const struct FFortPlayerSurveyAnswer& CallFunc_MakeMultipleChoiceAnswer_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandlePlayerRequestAnswer");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandlePlayerRequestAnswer_Params Parms;

	Parms.AnswerIndex = AnswerIndex;
	Parms.CallFunc_GetStopwatchTime_ReturnValue = CallFunc_GetStopwatchTime_ReturnValue;
	Parms.K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice = K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice;
	Parms.CallFunc_MakeMultipleChoiceAnswer_ReturnValue = CallFunc_MakeMultipleChoiceAnswer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidgetPostDummy
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "GetDefaultFocusedWidgetPostDummy");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidgetPostDummy_Params Parms;

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DefaultIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     TargetWidget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentAnswer_IsSet                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleChoiceCallFunc_GetCurrentAnswer_Result                                 (NoDestructor)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetDefaultFocusedWidget(int32 DefaultIndex, class UWidget* TargetWidget, int32 SelectedIndex, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentAnswer_IsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_Result, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "GetDefaultFocusedWidget");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidget_Params Parms;

	Parms.DefaultIndex = DefaultIndex;
	Parms.TargetWidget = TargetWidget;
	Parms.SelectedIndex = SelectedIndex;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentAnswer_IsSet = CallFunc_GetCurrentAnswer_IsSet;
	Parms.CallFunc_GetCurrentAnswer_Result = CallFunc_GetCurrentAnswer_Result;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetCurrentAnswer
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsSet                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleChoiceResult                                                           (Parm, OutParm, NoDestructor)
// bool                               IsSetValue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleChoiceResultValue                                                      (Edit, BlueprintVisible, NoDestructor)
// struct FFortPlayerSurveyAnswer     CallFunc_GetAnswer_ReturnValue                                   ()
// bool                               CallFunc_GetMultipleChoiceAnswer_bIsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleChoiceCallFunc_GetMultipleChoiceAnswer_ReturnValue                     (ConstParm, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetCurrentAnswer(bool* IsSet, struct FFortPlayerSurveyAnswerMultipleChoice* Result, bool IsSetValue, const struct FFortPlayerSurveyAnswerMultipleChoice& ResultValue, const struct FFortPlayerSurveyAnswer& CallFunc_GetAnswer_ReturnValue, bool CallFunc_GetMultipleChoiceAnswer_bIsValid, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetMultipleChoiceAnswer_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "GetCurrentAnswer");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetCurrentAnswer_Params Parms;

	Parms.IsSetValue = IsSetValue;
	Parms.ResultValue = ResultValue;
	Parms.CallFunc_GetAnswer_ReturnValue = CallFunc_GetAnswer_ReturnValue;
	Parms.CallFunc_GetMultipleChoiceAnswer_bIsValid = CallFunc_GetMultipleChoiceAnswer_bIsValid;
	Parms.CallFunc_GetMultipleChoiceAnswer_ReturnValue = CallFunc_GetMultipleChoiceAnswer_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSet != nullptr)
		*IsSet = Parms.IsSet;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateAnswerDisplay
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetCurrentAnswer_IsSet                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleChoiceCallFunc_GetCurrentAnswer_Result                                 (NoDestructor)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::UpdateAnswerDisplay(bool CallFunc_GetCurrentAnswer_IsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_Result)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "UpdateAnswerDisplay");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateAnswerDisplay_Params Parms;

	Parms.CallFunc_GetCurrentAnswer_IsSet = CallFunc_GetCurrentAnswer_IsSet;
	Parms.CallFunc_GetCurrentAnswer_Result = CallFunc_GetCurrentAnswer_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetCurrentQuestion
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPlayerSurveyQuestionMultipleChoice*Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestionMultipleChoice*ResultValue                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestion*   CallFunc_GetQuestion_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyQuestionMultipleChoice*K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetCurrentQuestion(class UFortPlayerSurveyQuestionMultipleChoice** Result, class UFortPlayerSurveyQuestionMultipleChoice* ResultValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UFortPlayerSurveyQuestion* CallFunc_GetQuestion_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPlayerSurveyQuestionMultipleChoice* K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "GetCurrentQuestion");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetCurrentQuestion_Params Parms;

	Parms.ResultValue = ResultValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetQuestion_ReturnValue = CallFunc_GetQuestion_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice = K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateRatingButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyQuestionMultipleChoice*CurrentQuestion                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumRatingButtons                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestionMultipleChoice*CallFunc_GetCurrentQuestion_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::UpdateRatingButtons(class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion, int32 NumRatingButtons, class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_Result, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "UpdateRatingButtons");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateRatingButtons_Params Parms;

	Parms.CurrentQuestion = CurrentQuestion;
	Parms.NumRatingButtons = NumRatingButtons;
	Parms.CallFunc_GetCurrentQuestion_Result = CallFunc_GetCurrentQuestion_Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyQuestionMultipleChoice*CurrentQuestion                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        MaxRatingText                                                    (Edit, BlueprintVisible)
// class FText                        MinRatingText                                                    (Edit, BlueprintVisible)
// class UFortPlayerSurveyQuestionMultipleChoice*CallFunc_GetCurrentQuestion_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::UpdateText(class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion, class FText MaxRatingText, class FText MinRatingText, class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_Result, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "UpdateText");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateText_Params Parms;

	Parms.CurrentQuestion = CurrentQuestion;
	Parms.MaxRatingText = MaxRatingText;
	Parms.MinRatingText = MinRatingText;
	Parms.CallFunc_GetCurrentQuestion_Result = CallFunc_GetCurrentQuestion_Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::OnInitialized()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "OnInitialized");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleButtonClicked(int32 ButtonIndex)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandleButtonClicked");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonClicked_Params Parms;

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleQAChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleQAChanged()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandleQAChanged");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleQAChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "Construct");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonFocused
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleButtonFocused(int32 ButtonIndex)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandleButtonFocused");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonFocused_Params Parms;

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleAnswerChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleAnswerChanged()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandleAnswerChanged");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleAnswerChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleCommitCurrentAnswer
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleCommitCurrentAnswer()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandleCommitCurrentAnswer");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleCommitCurrentAnswer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAnswer_IsSet                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleChoiceCallFunc_GetCurrentAnswer_Result                                 (NoDestructor)
// int32                              K2Node_Event_ButtonIndex_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonButton*>       K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              K2Node_Event_ButtonIndex                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget(int32 EntryPoint, bool CallFunc_GetCurrentAnswer_IsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_Result, int32 K2Node_Event_ButtonIndex_1, TArray<class UCommonButton*>& K2Node_MakeArray_Array, int32 K2Node_Event_ButtonIndex)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentAnswer_IsSet = CallFunc_GetCurrentAnswer_IsSet;
	Parms.CallFunc_GetCurrentAnswer_Result = CallFunc_GetCurrentAnswer_Result;
	Parms.K2Node_Event_ButtonIndex_1 = K2Node_Event_ButtonIndex_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_ButtonIndex = K2Node_Event_ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
