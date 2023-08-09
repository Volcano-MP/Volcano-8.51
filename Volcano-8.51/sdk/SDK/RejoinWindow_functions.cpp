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


// Function RejoinWindow.RejoinWindow_C.OnButtonClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetInputAction_InputActionRow                           (NoDestructor)
// bool                               CallFunc_GetInputAction_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void URejoinWindow_C::OnButtonClicked(class UCommonButton* Button, const struct FDataTableRowHandle& CallFunc_GetInputAction_InputActionRow, bool CallFunc_GetInputAction_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "OnButtonClicked");

	Params::URejoinWindow_C_OnButtonClicked_Params Parms;

	Parms.Button = Button;
	Parms.CallFunc_GetInputAction_InputActionRow = CallFunc_GetInputAction_InputActionRow;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RejoinWindow.RejoinWindow_C.CenterFirstButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URejoinWindow_C::CenterFirstButton(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue)
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "CenterFirstButton");

	Params::URejoinWindow_C_CenterFirstButton_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RejoinWindow.RejoinWindow_C.InitializeRejoinWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UIconTextButton_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URejoinWindow_C::InitializeRejoinWindow(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText Temp_text_Variable, class UIconTextButton_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "InitializeRejoinWindow");

	Params::URejoinWindow_C_InitializeRejoinWindow_Params Parms;

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RejoinWindow.RejoinWindow_C.ShowInitalScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeoutSeconds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocalTimeoutSeconds                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void URejoinWindow_C::ShowInitalScreen(float TimeoutSeconds, float LocalTimeoutSeconds, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "ShowInitalScreen");

	Params::URejoinWindow_C_ShowInitalScreen_Params Parms;

	Parms.TimeoutSeconds = TimeoutSeconds;
	Parms.LocalTimeoutSeconds = LocalTimeoutSeconds;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RejoinWindow.RejoinWindow_C.ShowRetryScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Failure                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              TimeoutSeconds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowRetry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LocalAllowRetry                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URejoinWindow_C::ShowRetryScreen(class FText Failure, float TimeoutSeconds, bool AllowRetry, bool LocalAllowRetry, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_Array_Add_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "ShowRetryScreen");

	Params::URejoinWindow_C_ShowRetryScreen_Params Parms;

	Parms.Failure = Failure;
	Parms.TimeoutSeconds = TimeoutSeconds;
	Parms.AllowRetry = AllowRetry;
	Parms.LocalAllowRetry = LocalAllowRetry;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RejoinWindow.RejoinWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URejoinWindow_C::Construct()
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "Construct");

	Params::URejoinWindow_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RejoinWindow.RejoinWindow_C.OnTimeoutTimeReached
// (Event, Protected, BlueprintEvent)
// Parameters:

void URejoinWindow_C::OnTimeoutTimeReached()
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "OnTimeoutTimeReached");

	Params::URejoinWindow_C_OnTimeoutTimeReached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RejoinWindow.RejoinWindow_C.ExecuteUbergraph_RejoinWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMcpBanInfo                 CallFunc_GetBanInfo_ReturnValue                                  (ConstParm)
// bool                               CallFunc_IsUserCurrentlyBanned_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void URejoinWindow_C::ExecuteUbergraph_RejoinWindow(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FMcpBanInfo& CallFunc_GetBanInfo_ReturnValue, bool CallFunc_IsUserCurrentlyBanned_ReturnValue)
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "ExecuteUbergraph_RejoinWindow");

	Params::URejoinWindow_C_ExecuteUbergraph_RejoinWindow_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetBanInfo_ReturnValue = CallFunc_GetBanInfo_ReturnValue;
	Parms.CallFunc_IsUserCurrentlyBanned_ReturnValue = CallFunc_IsUserCurrentlyBanned_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void URejoinWindow_C::OnRequestRejoinRetry__DelegateSignature()
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "OnRequestRejoinRetry__DelegateSignature");

	Params::URejoinWindow_C_OnRequestRejoinRetry__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void URejoinWindow_C::OnRequestAbandon__DelegateSignature()
{
	static auto Func = Class->GetFunction("RejoinWindow_C", "OnRequestAbandon__DelegateSignature");

	Params::URejoinWindow_C_OnRequestAbandon__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
