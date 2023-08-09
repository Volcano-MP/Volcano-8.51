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


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ShouldShowConfirmCancelDialog
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerSurveyDescriptionCallFunc_GetDescription_ReturnValue                              ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContents_C::ShouldShowConfirmCancelDialog(bool* Result, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FFortPlayerSurveyDescription& CallFunc_GetDescription_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "ShouldShowConfirmCancelDialog");

	Params::UPlayerSurveyPanelContents_C_ShouldShowConfirmCancelDialog_Params Parms;

	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ResetSurvey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UInterfaceProperty_                CallFunc_SetSelectedIndex_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContents_C::ResetSurvey(UInterfaceProperty_ CallFunc_SetSelectedIndex_self_CastInput)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "ResetSurvey");

	Params::UPlayerSurveyPanelContents_C_ResetSurvey_Params Parms;

	Parms.CallFunc_SetSelectedIndex_self_CastInput = CallFunc_SetSelectedIndex_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.GetDefaultFocusedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Result                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusedWidget_Result                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::GetDefaultFocusedWidget(class UWidget** Result, class UWidget* CallFunc_GetDefaultFocusedWidget_Result)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "GetDefaultFocusedWidget");

	Params::UPlayerSurveyPanelContents_C_GetDefaultFocusedWidget_Params Parms;

	Parms.CallFunc_GetDefaultFocusedWidget_Result = CallFunc_GetDefaultFocusedWidget_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleQuestionChanged
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::HandleQuestionChanged(class UObject* Source)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "HandleQuestionChanged");

	Params::UPlayerSurveyPanelContents_C_HandleQuestionChanged_Params Parms;

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateQuestionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        QuestionText                                                     (Edit, BlueprintVisible)
// UInterfaceProperty_                CallFunc_GetQuestion_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyQuestion*   CallFunc_GetQuestion_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestionMultipleChoice*K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContents_C::UpdateQuestionText(class FText QuestionText, UInterfaceProperty_ CallFunc_GetQuestion_self_CastInput, class UFortPlayerSurveyQuestion* CallFunc_GetQuestion_ReturnValue, class UFortPlayerSurveyQuestionMultipleChoice* K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "UpdateQuestionText");

	Params::UPlayerSurveyPanelContents_C_UpdateQuestionText_Params Parms;

	Parms.QuestionText = QuestionText;
	Parms.CallFunc_GetQuestion_self_CastInput = CallFunc_GetQuestion_self_CastInput;
	Parms.CallFunc_GetQuestion_ReturnValue = CallFunc_GetQuestion_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice = K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleAnswerChanged
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::HandleAnswerChanged(class UObject* Source)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "HandleAnswerChanged");

	Params::UPlayerSurveyPanelContents_C_HandleAnswerChanged_Params Parms;

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateNextButtonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               ActiveNextButton                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasMoreQuestions                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasAnsweredCurrentQuestion                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GetAnswer_self_CastInput                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswer     CallFunc_GetAnswer_ReturnValue                                   ()
// enum class EFortPlayerSurveyQuestionTypeCallFunc_GetAnswerType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_CanMoveDelta_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EIndexNavigationResult  CallFunc_CanMoveDelta_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContents_C::UpdateNextButtonState(class UCommonButton* ActiveNextButton, bool HasMoreQuestions, bool HasAnsweredCurrentQuestion, bool Temp_bool_Variable, UInterfaceProperty_ CallFunc_GetAnswer_self_CastInput, const struct FFortPlayerSurveyAnswer& CallFunc_GetAnswer_ReturnValue, enum class EFortPlayerSurveyQuestionType CallFunc_GetAnswerType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UCommonButton* K2Node_Select_Default, UInterfaceProperty_ CallFunc_CanMoveDelta_self_CastInput, enum class EIndexNavigationResult CallFunc_CanMoveDelta_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "UpdateNextButtonState");

	Params::UPlayerSurveyPanelContents_C_UpdateNextButtonState_Params Parms;

	Parms.ActiveNextButton = ActiveNextButton;
	Parms.HasMoreQuestions = HasMoreQuestions;
	Parms.HasAnsweredCurrentQuestion = HasAnsweredCurrentQuestion;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAnswer_self_CastInput = CallFunc_GetAnswer_self_CastInput;
	Parms.CallFunc_GetAnswer_ReturnValue = CallFunc_GetAnswer_ReturnValue;
	Parms.CallFunc_GetAnswerType_ReturnValue = CallFunc_GetAnswerType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CanMoveDelta_self_CastInput = CallFunc_CanMoveDelta_self_CastInput;
	Parms.CallFunc_CanMoveDelta_ReturnValue = CallFunc_CanMoveDelta_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleNumQuestionsChanged
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::HandleNumQuestionsChanged(class UObject* Source)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "HandleNumQuestionsChanged");

	Params::UPlayerSurveyPanelContents_C_HandleNumQuestionsChanged_Params Parms;

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleNavigationStateChanged
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::HandleNavigationStateChanged(class UObject* Source)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "HandleNavigationStateChanged");

	Params::UPlayerSurveyPanelContents_C_HandleNavigationStateChanged_Params Parms;

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleIndexChanged
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::HandleIndexChanged(class UObject* Source)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "HandleIndexChanged");

	Params::UPlayerSurveyPanelContents_C_HandleIndexChanged_Params Parms;

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.FinishSurvey
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPlayerSurveyFinishReasonReason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContents_C::FinishSurvey(enum class EFortPlayerSurveyFinishReason Reason, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "FinishSurvey");

	Params::UPlayerSurveyPanelContents_C_FinishSurvey_Params Parms;

	Parms.Reason = Reason;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateSurveyDescription
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SurveyTitleText                                                  (Edit, BlueprintVisible)
// struct FFortPlayerSurveyDescriptionCallFunc_GetDescription_ReturnValue                              ()
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContents_C::UpdateSurveyDescription(class FText SurveyTitleText, const struct FFortPlayerSurveyDescription& CallFunc_GetDescription_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "UpdateSurveyDescription");

	Params::UPlayerSurveyPanelContents_C_UpdateSurveyDescription_Params Parms;

	Parms.SurveyTitleText = SurveyTitleText;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateQuestionNumberLabel
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FormattedText                                                    (Edit, BlueprintVisible)
// int32                              NumQuestions                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              QuestionIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// UInterfaceProperty_                CallFunc_GetNumItems_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_GetSelectedIndex_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContents_C::UpdateQuestionNumberLabel(class FText FormattedText, int32 NumQuestions, int32 QuestionIndex, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, UInterfaceProperty_ CallFunc_GetNumItems_self_CastInput, int32 CallFunc_GetNumItems_ReturnValue, UInterfaceProperty_ CallFunc_GetSelectedIndex_self_CastInput, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "UpdateQuestionNumberLabel");

	Params::UPlayerSurveyPanelContents_C_UpdateQuestionNumberLabel_Params Parms;

	Parms.FormattedText = FormattedText;
	Parms.NumQuestions = NumQuestions;
	Parms.QuestionIndex = QuestionIndex;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetNumItems_self_CastInput = CallFunc_GetNumItems_self_CastInput;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_GetSelectedIndex_self_CastInput = CallFunc_GetSelectedIndex_self_CastInput;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.DialogResult_1F2955434D7A098B1B9CC2A074F61086
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::DialogResult_1F2955434D7A098B1B9CC2A074F61086(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "DialogResult_1F2955434D7A098B1B9CC2A074F61086");

	Params::UPlayerSurveyPanelContents_C_DialogResult_1F2955434D7A098B1B9CC2A074F61086_Params Parms;

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContents_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "Construct");

	Params::UPlayerSurveyPanelContents_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleSurveyChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContents_C::HandleSurveyChanged()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "HandleSurveyChanged");

	Params::UPlayerSurveyPanelContents_C_HandleSurveyChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleQuestionsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::HandleQuestionsChanged(int32 Index)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "HandleQuestionsChanged");

	Params::UPlayerSurveyPanelContents_C_HandleQuestionsChanged_Params Parms;

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContents_C::OnInitialized()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "OnInitialized");

	Params::UPlayerSurveyPanelContents_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UPlayerSurveyPanelContents_C_BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__FinishButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::BndEvt__FinishButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "BndEvt__FinishButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UPlayerSurveyPanelContents_C_BndEvt__FinishButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContents_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UPlayerSurveyPanelContents_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleDescriptionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContents_C::HandleDescriptionChanged()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "HandleDescriptionChanged");

	Params::UPlayerSurveyPanelContents_C_HandleDescriptionChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ExecuteUbergraph_PlayerSurveyPanelContents
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestionSelector*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_TryMoveDelta_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EIndexNavigationResult  CallFunc_TryMoveDelta_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_AddOnSelectedIndexChangedDelegate_self_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UInterfaceProperty_                CallFunc_AddOnNavigationChangedDelegate_self_CastInput           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_AddOnNumItemsChangedDelegate_self_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_SetQA_Value_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UInterfaceProperty_                CallFunc_AddOnAnswerChangedDelegate_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// UInterfaceProperty_                CallFunc_AddOnQuestionChangedDelegate_self_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusedWidget_Result                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowConfirmCancelDialog_Result                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FFortPlayerSurveyDescriptionCallFunc_GetDescription_ReturnValue                              ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContents_C::ExecuteUbergraph_PlayerSurveyPanelContents(int32 EntryPoint, int32 K2Node_Event_Index, class UFortPlayerSurveyQuestionSelector* CallFunc_SpawnObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UInterfaceProperty_ CallFunc_TryMoveDelta_self_CastInput, enum class EIndexNavigationResult CallFunc_TryMoveDelta_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult Temp_byte_Variable, UInterfaceProperty_ CallFunc_AddOnSelectedIndexChangedDelegate_self_CastInput, bool K2Node_SwitchEnum_CmpSuccess_1, class FName Temp_name_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UInterfaceProperty_ CallFunc_AddOnNavigationChangedDelegate_self_CastInput, UInterfaceProperty_ CallFunc_AddOnNumItemsChangedDelegate_self_CastInput, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, UInterfaceProperty_ CallFunc_SetQA_Value_CastInput, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UInterfaceProperty_ CallFunc_AddOnAnswerChangedDelegate_self_CastInput, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UInterfaceProperty_ CallFunc_AddOnQuestionChangedDelegate_self_CastInput, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UWidget* CallFunc_GetDefaultFocusedWidget_Result, bool CallFunc_ShouldShowConfirmCancelDialog_Result, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FFortPlayerSurveyDescription& CallFunc_GetDescription_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "ExecuteUbergraph_PlayerSurveyPanelContents");

	Params::UPlayerSurveyPanelContents_C_ExecuteUbergraph_PlayerSurveyPanelContents_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TryMoveDelta_self_CastInput = CallFunc_TryMoveDelta_self_CastInput;
	Parms.CallFunc_TryMoveDelta_ReturnValue = CallFunc_TryMoveDelta_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_AddOnSelectedIndexChangedDelegate_self_CastInput = CallFunc_AddOnSelectedIndexChangedDelegate_self_CastInput;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_AddOnNavigationChangedDelegate_self_CastInput = CallFunc_AddOnNavigationChangedDelegate_self_CastInput;
	Parms.CallFunc_AddOnNumItemsChangedDelegate_self_CastInput = CallFunc_AddOnNumItemsChangedDelegate_self_CastInput;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_SetQA_Value_CastInput = CallFunc_SetQA_Value_CastInput;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_AddOnAnswerChangedDelegate_self_CastInput = CallFunc_AddOnAnswerChangedDelegate_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_AddOnQuestionChangedDelegate_self_CastInput = CallFunc_AddOnQuestionChangedDelegate_self_CastInput;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetDefaultFocusedWidget_Result = CallFunc_GetDefaultFocusedWidget_Result;
	Parms.CallFunc_ShouldShowConfirmCancelDialog_Result = CallFunc_ShouldShowConfirmCancelDialog_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.OnSurveyEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContents_C::OnSurveyEnded__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelContents_C", "OnSurveyEnded__DelegateSignature");

	Params::UPlayerSurveyPanelContents_C_OnSurveyEnded__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
