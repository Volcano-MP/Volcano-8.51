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


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.CommitCurrentAnswer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::CommitCurrentAnswer(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "CommitCurrentAnswer");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_CommitCurrentAnswer_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetDefaultFocusedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Result                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ResultValue                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusedWidget_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::GetDefaultFocusedWidget(class UWidget** Result, class UWidget* ResultValue, class UWidget* CallFunc_GetDefaultFocusedWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "GetDefaultFocusedWidget");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_GetDefaultFocusedWidget_Params Parms;

	Parms.ResultValue = ResultValue;
	Parms.CallFunc_GetDefaultFocusedWidget_ReturnValue = CallFunc_GetDefaultFocusedWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.SetCurrentChild
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyAnswerWidgetBase*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::SetCurrentChild(class UFortPlayerSurveyAnswerWidgetBase* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "SetCurrentChild");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_SetCurrentChild_Params Parms;

	Parms.Widget = Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.UpdateCurrentChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyAnswerWidgetBase*NewChildWidget                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestion*   Question                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPlayerSurveyQuestionTypeCallFunc_GetQuestionType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyAnswerWidgetBase*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestion*   CallFunc_GetQuestion_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::UpdateCurrentChild(class UFortPlayerSurveyAnswerWidgetBase* NewChildWidget, class UFortPlayerSurveyQuestion* Question, enum class EFortPlayerSurveyQuestionType CallFunc_GetQuestionType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPlayerSurveyAnswerWidgetBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UFortPlayerSurveyQuestion* CallFunc_GetQuestion_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "UpdateCurrentChild");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_UpdateCurrentChild_Params Parms;

	Parms.NewChildWidget = NewChildWidget;
	Parms.Question = Question;
	Parms.CallFunc_GetQuestionType_ReturnValue = CallFunc_GetQuestionType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetQuestion_ReturnValue = CallFunc_GetQuestion_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.InitSwitcherChildren
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPlayerSurveyQuestionTypeKey                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyAnswerWidgetBase*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortPlayerSurveyQuestionType>CallFunc_Map_Keys_Keys                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPlayerSurveyQuestionTypeCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::InitSwitcherChildren(enum class EFortPlayerSurveyQuestionType Key, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UFortPlayerSurveyAnswerWidgetBase* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<enum class EFortPlayerSurveyQuestionType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class EFortPlayerSurveyQuestionType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "InitSwitcherChildren");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_InitSwitcherChildren_Params Parms;

	Parms.Key = Key;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelAnswerSelectorWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "Construct");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelAnswerSelectorWidget_C::OnInitialized()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "OnInitialized");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.HandleQuestionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelAnswerSelectorWidget_C::HandleQuestionChanged()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "HandleQuestionChanged");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_HandleQuestionChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelAnswerSelectorWidget_C::ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
