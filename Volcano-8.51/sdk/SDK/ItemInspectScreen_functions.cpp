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


// Function ItemInspectScreen.ItemInspectScreen_C.HandleVaultItemsViewed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           Items                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UFortFrontEndContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleVaultItemsViewed(TArray<class UFortItem*>& Items, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleVaultItemsViewed");

	Params::UItemInspectScreen_C_HandleVaultItemsViewed_Params Parms;

	Parms.Items = Items;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue = CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface = K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetRefundHelpActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FConfirmationDialogAction>ConfirmActions                                                   (Parm, OutParm, ZeroConstructor)
// class FName                        DeclineAction                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConfirmationDialogAction>ConfirmActionList                                                (Edit, BlueprintVisible, ZeroConstructor)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction                       ()
// bool                               CallFunc_GetHideStwItemRefundHelp_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction_1                     ()
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetRefundHelpActions(TArray<struct FConfirmationDialogAction>* ConfirmActions, class FName* DeclineAction, const TArray<struct FConfirmationDialogAction>& ConfirmActionList, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, bool CallFunc_GetHideStwItemRefundHelp_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction_1, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetRefundHelpActions");

	Params::UItemInspectScreen_C_GetRefundHelpActions_Params Parms;

	Parms.ConfirmActionList = ConfirmActionList;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction = K2Node_MakeStruct_ConfirmationDialogAction;
	Parms.CallFunc_GetHideStwItemRefundHelp_ReturnValue = CallFunc_GetHideStwItemRefundHelp_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction_1 = K2Node_MakeStruct_ConfirmationDialogAction_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ConfirmActions != nullptr)
		*ConfirmActions = Parms.ConfirmActions;

	if (DeclineAction != nullptr)
		*DeclineAction = Parms.DeclineAction;

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShouldShowRefundMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldShowRefundMessage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        RefundDescriptionText                                            (Parm, OutParm)
// class FText                        RefundDescription                                                (Edit, BlueprintVisible)
// class FText                        CallFunc_GetRefundDescriptionText_ReturnValue                    ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRefundable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::ShouldShowRefundMessage(bool* ShouldShowRefundMessage, class FText* RefundDescriptionText, class FText RefundDescription, class FText CallFunc_GetRefundDescriptionText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRefundable_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ShouldShowRefundMessage");

	Params::UItemInspectScreen_C_ShouldShowRefundMessage_Params Parms;

	Parms.RefundDescription = RefundDescription;
	Parms.CallFunc_GetRefundDescriptionText_ReturnValue = CallFunc_GetRefundDescriptionText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsRefundable_ReturnValue = CallFunc_IsRefundable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShowRefundMessage != nullptr)
		*ShouldShowRefundMessage = Parms.ShouldShowRefundMessage;

	if (RefundDescriptionText != nullptr)
		*RefundDescriptionText = Parms.RefundDescriptionText;

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundConfirmationModalWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            CallFunc_GetRefundResultItem_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRefundable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectRefundConfirmationModalWidget_C*K2Node_DynamicCast_AsItem_Inspect_Refund_Confirmation_Modal_Widget(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::ShowRefundConfirmationModalWidget(class UFortAccountItem* CallFunc_GetRefundResultItem_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsRefundable_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UItemInspectRefundConfirmationModalWidget_C* K2Node_DynamicCast_AsItem_Inspect_Refund_Confirmation_Modal_Widget, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ShowRefundConfirmationModalWidget");

	Params::UItemInspectScreen_C_ShowRefundConfirmationModalWidget_Params Parms;

	Parms.CallFunc_GetRefundResultItem_ReturnValue = CallFunc_GetRefundResultItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_IsRefundable_ReturnValue = CallFunc_IsRefundable_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Inspect_Refund_Confirmation_Modal_Widget = K2Node_DynamicCast_AsItem_Inspect_Refund_Confirmation_Modal_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetRefundPopupInputActionState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemSlottedInCollectionBook_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRefundable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetRefundPopupInputActionState(enum class EInputActionState* State, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsItemSlottedInCollectionBook_ReturnValue, bool CallFunc_IsRefundable_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetRefundPopupInputActionState");

	Params::UItemInspectScreen_C_GetRefundPopupInputActionState_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsItemSlottedInCollectionBook_ReturnValue = CallFunc_IsItemSlottedInCollectionBook_ReturnValue;
	Parms.CallFunc_IsRefundable_ReturnValue = CallFunc_IsRefundable_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundHelpIfNecessary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRefundable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHideStwItemRefundHelp_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::ShowRefundHelpIfNecessary(class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsRefundable_ReturnValue, bool CallFunc_GetHideStwItemRefundHelp_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ShowRefundHelpIfNecessary");

	Params::UItemInspectScreen_C_ShowRefundHelpIfNecessary_Params Parms;

	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsRefundable_ReturnValue = CallFunc_IsRefundable_ReturnValue;
	Parms.CallFunc_GetHideStwItemRefundHelp_ReturnValue = CallFunc_GetHideStwItemRefundHelp_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.CreateRefundPopupMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectRefundPopupMenu_C*K2Node_DynamicCast_AsItem_Inspect_Refund_Popup_Menu              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::CreateRefundPopupMenu(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UItemInspectRefundPopupMenu_C* K2Node_DynamicCast_AsItem_Inspect_Refund_Popup_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "CreateRefundPopupMenu");

	Params::UItemInspectScreen_C_CreateRefundPopupMenu_Params Parms;

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Inspect_Refund_Popup_Menu = K2Node_DynamicCast_AsItem_Inspect_Refund_Popup_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleRefundPopup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleRefundPopup(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleRefundPopup");

	Params::UItemInspectScreen_C_HandleRefundPopup_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleShowUpgradeTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// class FText                        Temp_text_Variable_2                                             ()
// class FText                        Temp_text_Variable_3                                             ()
// class FText                        Temp_text_Variable_4                                             ()
// class FText                        Temp_text_Variable_5                                             ()
// class FText                        Temp_text_Variable_6                                             ()
// class FText                        Temp_text_Variable_7                                             ()
// class FText                        Temp_text_Variable_8                                             ()
// class FText                        Temp_text_Variable_9                                             ()
// class FText                        Temp_text_Variable_10                                            ()
// class FText                        Temp_text_Variable_11                                            ()
// class FText                        Temp_text_Variable_12                                            ()
// class FText                        Temp_text_Variable_13                                            ()
// class FText                        Temp_text_Variable_14                                            ()
// class FText                        Temp_text_Variable_15                                            ()
// class FText                        Temp_text_Variable_16                                            ()
// class FText                        Temp_text_Variable_17                                            ()
// class FText                        Temp_text_Variable_18                                            ()
// class FText                        Temp_text_Variable_19                                            ()
// class FText                        Temp_text_Variable_20                                            ()
// class FText                        Temp_text_Variable_21                                            ()
// class FText                        Temp_text_Variable_22                                            ()
// class FText                        Temp_text_Variable_23                                            ()
// class FText                        Temp_text_Variable_24                                            ()
// class FText                        Temp_text_Variable_25                                            ()
// class FText                        Temp_text_Variable_26                                            ()
// class FText                        Temp_text_Variable_27                                            ()
// class FText                        Temp_text_Variable_28                                            ()
// class FText                        Temp_text_Variable_29                                            ()
// class FText                        Temp_text_Variable_30                                            ()
// class FText                        Temp_text_Variable_31                                            ()
// class FText                        Temp_text_Variable_32                                            ()
// class FText                        Temp_text_Variable_33                                            ()
// class FText                        Temp_text_Variable_34                                            ()
// class FText                        Temp_text_Variable_35                                            ()
// class FText                        Temp_text_Variable_36                                            ()
// class FText                        Temp_text_Variable_37                                            ()
// class FText                        Temp_text_Variable_38                                            ()
// class FText                        Temp_text_Variable_39                                            ()
// class FText                        Temp_text_Variable_40                                            ()
// class FText                        Temp_text_Variable_41                                            ()
// class FText                        Temp_text_Variable_42                                            ()
// class FText                        Temp_text_Variable_43                                            ()
// class FText                        Temp_text_Variable_44                                            ()
// class FText                        Temp_text_Variable_45                                            ()
// class FText                        Temp_text_Variable_46                                            ()
// class FText                        Temp_text_Variable_47                                            ()
// class FText                        Temp_text_Variable_48                                            ()
// class FText                        Temp_text_Variable_49                                            ()
// class FText                        Temp_text_Variable_50                                            ()
// class FText                        Temp_text_Variable_51                                            ()
// class FText                        Temp_text_Variable_52                                            ()
// class FText                        Temp_text_Variable_53                                            ()
// class FText                        Temp_text_Variable_54                                            ()
// class FText                        Temp_text_Variable_55                                            ()
// class FText                        Temp_text_Variable_56                                            ()
// class FText                        Temp_text_Variable_57                                            ()
// class FText                        Temp_text_Variable_58                                            ()
// class FText                        Temp_text_Variable_59                                            ()
// class FText                        Temp_text_Variable_60                                            ()
// class FText                        Temp_text_Variable_61                                            ()
// class FText                        Temp_text_Variable_62                                            ()
// class FText                        Temp_text_Variable_63                                            ()
// class FText                        Temp_text_Variable_64                                            ()
// class FText                        Temp_text_Variable_65                                            ()
// class FText                        Temp_text_Variable_66                                            ()
// class FText                        Temp_text_Variable_67                                            ()
// class FText                        Temp_text_Variable_68                                            ()
// class FText                        Temp_text_Variable_69                                            ()
// class FText                        Temp_text_Variable_70                                            ()
// class FText                        Temp_text_Variable_71                                            ()
// class FText                        Temp_text_Variable_72                                            ()
// class FText                        Temp_text_Variable_73                                            ()
// class FText                        Temp_text_Variable_74                                            ()
// class FText                        Temp_text_Variable_75                                            ()
// class FText                        Temp_text_Variable_76                                            ()
// class FText                        Temp_text_Variable_77                                            ()
// class FText                        Temp_text_Variable_78                                            ()
// class FText                        Temp_text_Variable_79                                            ()
// class FText                        Temp_text_Variable_80                                            ()
// class FText                        Temp_text_Variable_81                                            ()
// class FText                        Temp_text_Variable_82                                            ()
// class FText                        Temp_text_Variable_83                                            ()
// class FText                        Temp_text_Variable_84                                            ()
// class FText                        Temp_text_Variable_85                                            ()
// class FText                        Temp_text_Variable_86                                            ()
// class FText                        Temp_text_Variable_87                                            ()
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_88                                            ()
// class FText                        Temp_text_Variable_89                                            ()
// class FText                        Temp_text_Variable_90                                            ()
// class FText                        Temp_text_Variable_91                                            ()
// class FText                        Temp_text_Variable_92                                            ()
// class FText                        Temp_text_Variable_93                                            ()
// class FText                        Temp_text_Variable_94                                            ()
// class FText                        Temp_text_Variable_95                                            ()
// class FText                        Temp_text_Variable_96                                            ()
// class FText                        Temp_text_Variable_97                                            ()
// class FText                        Temp_text_Variable_98                                            ()
// class FText                        Temp_text_Variable_99                                            ()
// class FText                        Temp_text_Variable_100                                           ()
// class FText                        Temp_text_Variable_101                                           ()
// class FText                        Temp_text_Variable_102                                           ()
// class FText                        Temp_text_Variable_103                                           ()
// class FText                        Temp_text_Variable_104                                           ()
// class FText                        Temp_text_Variable_105                                           ()
// class FText                        Temp_text_Variable_106                                           ()
// class FText                        Temp_text_Variable_107                                           ()
// class FText                        Temp_text_Variable_108                                           ()
// class FText                        Temp_text_Variable_109                                           ()
// class FText                        Temp_text_Variable_110                                           ()
// class FText                        Temp_text_Variable_111                                           ()
// class FText                        Temp_text_Variable_112                                           ()
// class FText                        Temp_text_Variable_113                                           ()
// class FText                        Temp_text_Variable_114                                           ()
// class FText                        Temp_text_Variable_115                                           ()
// class FText                        Temp_text_Variable_116                                           ()
// class FText                        Temp_text_Variable_117                                           ()
// class FText                        Temp_text_Variable_118                                           ()
// class FText                        Temp_text_Variable_119                                           ()
// class FText                        Temp_text_Variable_120                                           ()
// class FText                        Temp_text_Variable_121                                           ()
// class FText                        Temp_text_Variable_122                                           ()
// class FText                        Temp_text_Variable_123                                           ()
// class FText                        Temp_text_Variable_124                                           ()
// class FText                        Temp_text_Variable_125                                           ()
// class FText                        Temp_text_Variable_126                                           ()
// class FText                        Temp_text_Variable_127                                           ()
// class FText                        Temp_text_Variable_128                                           ()
// class FText                        Temp_text_Variable_129                                           ()
// class FText                        Temp_text_Variable_130                                           ()
// class FText                        Temp_text_Variable_131                                           ()
// class FText                        Temp_text_Variable_132                                           ()
// class FText                        Temp_text_Variable_133                                           ()
// class FText                        Temp_text_Variable_134                                           ()
// class FText                        Temp_text_Variable_135                                           ()
// class FText                        Temp_text_Variable_136                                           ()
// class FText                        Temp_text_Variable_137                                           ()
// class FText                        Temp_text_Variable_138                                           ()
// class FText                        Temp_text_Variable_139                                           ()
// class FText                        Temp_text_Variable_140                                           ()
// class FText                        Temp_text_Variable_141                                           ()
// class FText                        Temp_text_Variable_142                                           ()
// class FText                        Temp_text_Variable_143                                           ()
// class FText                        Temp_text_Variable_144                                           ()
// class FText                        Temp_text_Variable_145                                           ()
// class FText                        Temp_text_Variable_146                                           ()
// class FText                        Temp_text_Variable_147                                           ()
// class FText                        Temp_text_Variable_148                                           ()
// class FText                        Temp_text_Variable_149                                           ()
// class FText                        Temp_text_Variable_150                                           ()
// class FText                        Temp_text_Variable_151                                           ()
// class FText                        Temp_text_Variable_152                                           ()
// class FText                        Temp_text_Variable_153                                           ()
// class FText                        Temp_text_Variable_154                                           ()
// class FText                        Temp_text_Variable_155                                           ()
// class FText                        Temp_text_Variable_156                                           ()
// class FText                        Temp_text_Variable_157                                           ()
// class FText                        Temp_text_Variable_158                                           ()
// class FText                        Temp_text_Variable_159                                           ()
// class FText                        Temp_text_Variable_160                                           ()
// class FText                        Temp_text_Variable_161                                           ()
// class FText                        Temp_text_Variable_162                                           ()
// class FText                        Temp_text_Variable_163                                           ()
// class FText                        Temp_text_Variable_164                                           ()
// class FText                        Temp_text_Variable_165                                           ()
// class FText                        Temp_text_Variable_166                                           ()
// class FText                        Temp_text_Variable_167                                           ()
// class FText                        Temp_text_Variable_168                                           ()
// class FText                        Temp_text_Variable_169                                           ()
// class FText                        Temp_text_Variable_170                                           ()
// class FText                        Temp_text_Variable_171                                           ()
// class FText                        Temp_text_Variable_172                                           ()
// class FText                        Temp_text_Variable_173                                           ()
// class FText                        Temp_text_Variable_174                                           ()
// class FText                        Temp_text_Variable_175                                           ()
// class FText                        Temp_text_Variable_176                                           ()
// class FText                        Temp_text_Variable_177                                           ()
// class FText                        Temp_text_Variable_178                                           ()
// class FText                        Temp_text_Variable_179                                           ()
// class FText                        Temp_text_Variable_180                                           ()
// enum class EFortItemType           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_181                                           ()
// class FText                        Temp_text_Variable_182                                           ()
// class FText                        Temp_text_Variable_183                                           ()
// class FText                        Temp_text_Variable_184                                           ()
// class FText                        Temp_text_Variable_185                                           ()
// class FText                        Temp_text_Variable_186                                           ()
// class FText                        Temp_text_Variable_187                                           ()
// class FText                        Temp_text_Variable_188                                           ()
// class FText                        Temp_text_Variable_189                                           ()
// class FText                        Temp_text_Variable_190                                           ()
// class FText                        Temp_text_Variable_191                                           ()
// class FText                        Temp_text_Variable_192                                           ()
// class FText                        Temp_text_Variable_193                                           ()
// class FText                        Temp_text_Variable_194                                           ()
// class FText                        Temp_text_Variable_195                                           ()
// class FText                        Temp_text_Variable_196                                           ()
// class FText                        Temp_text_Variable_197                                           ()
// class FText                        Temp_text_Variable_198                                           ()
// class FText                        Temp_text_Variable_199                                           ()
// class FText                        Temp_text_Variable_200                                           ()
// class FText                        Temp_text_Variable_201                                           ()
// class FText                        Temp_text_Variable_202                                           ()
// class FText                        Temp_text_Variable_203                                           ()
// class FText                        Temp_text_Variable_204                                           ()
// class FText                        Temp_text_Variable_205                                           ()
// class FText                        Temp_text_Variable_206                                           ()
// class FText                        Temp_text_Variable_207                                           ()
// class FText                        Temp_text_Variable_208                                           ()
// class FText                        Temp_text_Variable_209                                           ()
// class FText                        Temp_text_Variable_210                                           ()
// class FText                        Temp_text_Variable_211                                           ()
// class FText                        Temp_text_Variable_212                                           ()
// class FText                        Temp_text_Variable_213                                           ()
// class FText                        Temp_text_Variable_214                                           ()
// class FText                        Temp_text_Variable_215                                           ()
// class FText                        Temp_text_Variable_216                                           ()
// class FText                        Temp_text_Variable_217                                           ()
// class FText                        Temp_text_Variable_218                                           ()
// class FText                        Temp_text_Variable_219                                           ()
// class FText                        Temp_text_Variable_220                                           ()
// class FText                        Temp_text_Variable_221                                           ()
// class FText                        Temp_text_Variable_222                                           ()
// class FText                        Temp_text_Variable_223                                           ()
// class FText                        Temp_text_Variable_224                                           ()
// class FText                        Temp_text_Variable_225                                           ()
// class FText                        Temp_text_Variable_226                                           ()
// class FText                        Temp_text_Variable_227                                           ()
// class FText                        Temp_text_Variable_228                                           ()
// class FText                        Temp_text_Variable_229                                           ()
// class FText                        Temp_text_Variable_230                                           ()
// class FText                        Temp_text_Variable_231                                           ()
// class FText                        Temp_text_Variable_232                                           ()
// class FText                        Temp_text_Variable_233                                           ()
// class FText                        Temp_text_Variable_234                                           ()
// class FText                        Temp_text_Variable_235                                           ()
// class FText                        Temp_text_Variable_236                                           ()
// class FText                        Temp_text_Variable_237                                           ()
// class FText                        Temp_text_Variable_238                                           ()
// class FText                        Temp_text_Variable_239                                           ()
// class FText                        Temp_text_Variable_240                                           ()
// class FText                        Temp_text_Variable_241                                           ()
// class FText                        Temp_text_Variable_242                                           ()
// class FText                        Temp_text_Variable_243                                           ()
// class FText                        Temp_text_Variable_244                                           ()
// class FText                        Temp_text_Variable_245                                           ()
// class FText                        Temp_text_Variable_246                                           ()
// class FText                        Temp_text_Variable_247                                           ()
// class FText                        Temp_text_Variable_248                                           ()
// class FText                        Temp_text_Variable_249                                           ()
// class FText                        Temp_text_Variable_250                                           ()
// class FText                        Temp_text_Variable_251                                           ()
// class FText                        Temp_text_Variable_252                                           ()
// class FText                        Temp_text_Variable_253                                           ()
// class FText                        Temp_text_Variable_254                                           ()
// class FText                        Temp_text_Variable_255                                           ()
// class FText                        Temp_text_Variable_256                                           ()
// class FText                        Temp_text_Variable_257                                           ()
// class FText                        Temp_text_Variable_258                                           ()
// class FText                        Temp_text_Variable_259                                           ()
// class FText                        Temp_text_Variable_260                                           ()
// class FText                        Temp_text_Variable_261                                           ()
// class FText                        Temp_text_Variable_262                                           ()
// class FText                        Temp_text_Variable_263                                           ()
// class FText                        Temp_text_Variable_264                                           ()
// class FText                        Temp_text_Variable_265                                           ()
// class FText                        Temp_text_Variable_266                                           ()
// class FText                        Temp_text_Variable_267                                           ()
// class FText                        Temp_text_Variable_268                                           ()
// class FText                        Temp_text_Variable_269                                           ()
// class FText                        Temp_text_Variable_270                                           ()
// class FText                        Temp_text_Variable_271                                           ()
// class FText                        Temp_text_Variable_272                                           ()
// class FText                        Temp_text_Variable_273                                           ()
// class FText                        Temp_text_Variable_274                                           ()
// class FText                        Temp_text_Variable_275                                           ()
// enum class EFortItemType           Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_276                                           ()
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        K2Node_Select_Default_1                                          ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTexture2D>>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable_277                                           ()
// class FText                        Temp_text_Variable_278                                           ()
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          ()
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class UModalTutorialOverlay_C*     K2Node_DynamicCast_AsModal_Tutorial_Overlay                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// TArray<class FText>                K2Node_MakeArray_Array_3                                         (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CheckForSideTutorialQuests_RelevantSideQuestFound       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleShowUpgradeTutorial(class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, class FText Temp_text_Variable_30, class FText Temp_text_Variable_31, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, class FText Temp_text_Variable_34, class FText Temp_text_Variable_35, class FText Temp_text_Variable_36, class FText Temp_text_Variable_37, class FText Temp_text_Variable_38, class FText Temp_text_Variable_39, class FText Temp_text_Variable_40, class FText Temp_text_Variable_41, class FText Temp_text_Variable_42, class FText Temp_text_Variable_43, class FText Temp_text_Variable_44, class FText Temp_text_Variable_45, class FText Temp_text_Variable_46, class FText Temp_text_Variable_47, class FText Temp_text_Variable_48, class FText Temp_text_Variable_49, class FText Temp_text_Variable_50, class FText Temp_text_Variable_51, class FText Temp_text_Variable_52, class FText Temp_text_Variable_53, class FText Temp_text_Variable_54, class FText Temp_text_Variable_55, class FText Temp_text_Variable_56, class FText Temp_text_Variable_57, class FText Temp_text_Variable_58, class FText Temp_text_Variable_59, class FText Temp_text_Variable_60, class FText Temp_text_Variable_61, class FText Temp_text_Variable_62, class FText Temp_text_Variable_63, class FText Temp_text_Variable_64, class FText Temp_text_Variable_65, class FText Temp_text_Variable_66, class FText Temp_text_Variable_67, class FText Temp_text_Variable_68, class FText Temp_text_Variable_69, class FText Temp_text_Variable_70, class FText Temp_text_Variable_71, class FText Temp_text_Variable_72, class FText Temp_text_Variable_73, class FText Temp_text_Variable_74, class FText Temp_text_Variable_75, class FText Temp_text_Variable_76, class FText Temp_text_Variable_77, class FText Temp_text_Variable_78, class FText Temp_text_Variable_79, class FText Temp_text_Variable_80, class FText Temp_text_Variable_81, class FText Temp_text_Variable_82, class FText Temp_text_Variable_83, class FText Temp_text_Variable_84, class FText Temp_text_Variable_85, class FText Temp_text_Variable_86, class FText Temp_text_Variable_87, enum class EFortItemType Temp_byte_Variable, class FText Temp_text_Variable_88, class FText Temp_text_Variable_89, class FText Temp_text_Variable_90, class FText Temp_text_Variable_91, class FText Temp_text_Variable_92, class FText Temp_text_Variable_93, class FText Temp_text_Variable_94, class FText Temp_text_Variable_95, class FText Temp_text_Variable_96, class FText Temp_text_Variable_97, class FText Temp_text_Variable_98, class FText Temp_text_Variable_99, class FText Temp_text_Variable_100, class FText Temp_text_Variable_101, class FText Temp_text_Variable_102, class FText Temp_text_Variable_103, class FText Temp_text_Variable_104, class FText Temp_text_Variable_105, class FText Temp_text_Variable_106, class FText Temp_text_Variable_107, class FText Temp_text_Variable_108, class FText Temp_text_Variable_109, class FText Temp_text_Variable_110, class FText Temp_text_Variable_111, class FText Temp_text_Variable_112, class FText Temp_text_Variable_113, class FText Temp_text_Variable_114, class FText Temp_text_Variable_115, class FText Temp_text_Variable_116, class FText Temp_text_Variable_117, class FText Temp_text_Variable_118, class FText Temp_text_Variable_119, class FText Temp_text_Variable_120, class FText Temp_text_Variable_121, class FText Temp_text_Variable_122, class FText Temp_text_Variable_123, class FText Temp_text_Variable_124, class FText Temp_text_Variable_125, class FText Temp_text_Variable_126, class FText Temp_text_Variable_127, class FText Temp_text_Variable_128, class FText Temp_text_Variable_129, class FText Temp_text_Variable_130, class FText Temp_text_Variable_131, class FText Temp_text_Variable_132, class FText Temp_text_Variable_133, class FText Temp_text_Variable_134, class FText Temp_text_Variable_135, class FText Temp_text_Variable_136, class FText Temp_text_Variable_137, class FText Temp_text_Variable_138, class FText Temp_text_Variable_139, class FText Temp_text_Variable_140, class FText Temp_text_Variable_141, class FText Temp_text_Variable_142, class FText Temp_text_Variable_143, class FText Temp_text_Variable_144, class FText Temp_text_Variable_145, class FText Temp_text_Variable_146, class FText Temp_text_Variable_147, class FText Temp_text_Variable_148, class FText Temp_text_Variable_149, class FText Temp_text_Variable_150, class FText Temp_text_Variable_151, class FText Temp_text_Variable_152, class FText Temp_text_Variable_153, class FText Temp_text_Variable_154, class FText Temp_text_Variable_155, class FText Temp_text_Variable_156, class FText Temp_text_Variable_157, class FText Temp_text_Variable_158, class FText Temp_text_Variable_159, class FText Temp_text_Variable_160, class FText Temp_text_Variable_161, class FText Temp_text_Variable_162, class FText Temp_text_Variable_163, class FText Temp_text_Variable_164, class FText Temp_text_Variable_165, class FText Temp_text_Variable_166, class FText Temp_text_Variable_167, class FText Temp_text_Variable_168, class FText Temp_text_Variable_169, class FText Temp_text_Variable_170, class FText Temp_text_Variable_171, class FText Temp_text_Variable_172, class FText Temp_text_Variable_173, class FText Temp_text_Variable_174, class FText Temp_text_Variable_175, class FText Temp_text_Variable_176, class FText Temp_text_Variable_177, class FText Temp_text_Variable_178, class FText Temp_text_Variable_179, class FText Temp_text_Variable_180, enum class EFortItemType Temp_byte_Variable_1, class FText Temp_text_Variable_181, class FText Temp_text_Variable_182, class FText Temp_text_Variable_183, class FText Temp_text_Variable_184, class FText Temp_text_Variable_185, class FText Temp_text_Variable_186, class FText Temp_text_Variable_187, class FText Temp_text_Variable_188, class FText Temp_text_Variable_189, class FText Temp_text_Variable_190, class FText Temp_text_Variable_191, class FText Temp_text_Variable_192, class FText Temp_text_Variable_193, class FText Temp_text_Variable_194, class FText Temp_text_Variable_195, class FText Temp_text_Variable_196, class FText Temp_text_Variable_197, class FText Temp_text_Variable_198, class FText Temp_text_Variable_199, class FText Temp_text_Variable_200, class FText Temp_text_Variable_201, class FText Temp_text_Variable_202, class FText Temp_text_Variable_203, class FText Temp_text_Variable_204, class FText Temp_text_Variable_205, class FText Temp_text_Variable_206, class FText Temp_text_Variable_207, class FText Temp_text_Variable_208, class FText Temp_text_Variable_209, class FText Temp_text_Variable_210, class FText Temp_text_Variable_211, class FText Temp_text_Variable_212, class FText Temp_text_Variable_213, class FText Temp_text_Variable_214, class FText Temp_text_Variable_215, class FText Temp_text_Variable_216, class FText Temp_text_Variable_217, class FText Temp_text_Variable_218, class FText Temp_text_Variable_219, class FText Temp_text_Variable_220, class FText Temp_text_Variable_221, class FText Temp_text_Variable_222, class FText Temp_text_Variable_223, class FText Temp_text_Variable_224, class FText Temp_text_Variable_225, class FText Temp_text_Variable_226, class FText Temp_text_Variable_227, class FText Temp_text_Variable_228, class FText Temp_text_Variable_229, class FText Temp_text_Variable_230, class FText Temp_text_Variable_231, class FText Temp_text_Variable_232, class FText Temp_text_Variable_233, class FText Temp_text_Variable_234, class FText Temp_text_Variable_235, class FText Temp_text_Variable_236, class FText Temp_text_Variable_237, class FText Temp_text_Variable_238, class FText Temp_text_Variable_239, class FText Temp_text_Variable_240, class FText Temp_text_Variable_241, class FText Temp_text_Variable_242, class FText Temp_text_Variable_243, class FText Temp_text_Variable_244, class FText Temp_text_Variable_245, class FText Temp_text_Variable_246, class FText Temp_text_Variable_247, class FText Temp_text_Variable_248, class FText Temp_text_Variable_249, class FText Temp_text_Variable_250, class FText Temp_text_Variable_251, class FText Temp_text_Variable_252, class FText Temp_text_Variable_253, class FText Temp_text_Variable_254, class FText Temp_text_Variable_255, class FText Temp_text_Variable_256, class FText Temp_text_Variable_257, class FText Temp_text_Variable_258, class FText Temp_text_Variable_259, class FText Temp_text_Variable_260, class FText Temp_text_Variable_261, class FText Temp_text_Variable_262, class FText Temp_text_Variable_263, class FText Temp_text_Variable_264, class FText Temp_text_Variable_265, class FText Temp_text_Variable_266, class FText Temp_text_Variable_267, class FText Temp_text_Variable_268, class FText Temp_text_Variable_269, class FText Temp_text_Variable_270, class FText Temp_text_Variable_271, class FText Temp_text_Variable_272, class FText Temp_text_Variable_273, class FText Temp_text_Variable_274, class FText Temp_text_Variable_275, enum class EFortItemType Temp_byte_Variable_2, class FText Temp_text_Variable_276, enum class EFortItemType CallFunc_GetType_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<TSoftObjectPtr<class UTexture2D>>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array_1, class FText Temp_text_Variable_277, class FText Temp_text_Variable_278, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class FText K2Node_Select_Default_2, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class UModalTutorialOverlay_C* K2Node_DynamicCast_AsModal_Tutorial_Overlay, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array_3, bool CallFunc_CheckForSideTutorialQuests_RelevantSideQuestFound, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleShowUpgradeTutorial");

	Params::UItemInspectScreen_C_HandleShowUpgradeTutorial_Params Parms;

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.Temp_text_Variable_23 = Temp_text_Variable_23;
	Parms.Temp_text_Variable_24 = Temp_text_Variable_24;
	Parms.Temp_text_Variable_25 = Temp_text_Variable_25;
	Parms.Temp_text_Variable_26 = Temp_text_Variable_26;
	Parms.Temp_text_Variable_27 = Temp_text_Variable_27;
	Parms.Temp_text_Variable_28 = Temp_text_Variable_28;
	Parms.Temp_text_Variable_29 = Temp_text_Variable_29;
	Parms.Temp_text_Variable_30 = Temp_text_Variable_30;
	Parms.Temp_text_Variable_31 = Temp_text_Variable_31;
	Parms.Temp_text_Variable_32 = Temp_text_Variable_32;
	Parms.Temp_text_Variable_33 = Temp_text_Variable_33;
	Parms.Temp_text_Variable_34 = Temp_text_Variable_34;
	Parms.Temp_text_Variable_35 = Temp_text_Variable_35;
	Parms.Temp_text_Variable_36 = Temp_text_Variable_36;
	Parms.Temp_text_Variable_37 = Temp_text_Variable_37;
	Parms.Temp_text_Variable_38 = Temp_text_Variable_38;
	Parms.Temp_text_Variable_39 = Temp_text_Variable_39;
	Parms.Temp_text_Variable_40 = Temp_text_Variable_40;
	Parms.Temp_text_Variable_41 = Temp_text_Variable_41;
	Parms.Temp_text_Variable_42 = Temp_text_Variable_42;
	Parms.Temp_text_Variable_43 = Temp_text_Variable_43;
	Parms.Temp_text_Variable_44 = Temp_text_Variable_44;
	Parms.Temp_text_Variable_45 = Temp_text_Variable_45;
	Parms.Temp_text_Variable_46 = Temp_text_Variable_46;
	Parms.Temp_text_Variable_47 = Temp_text_Variable_47;
	Parms.Temp_text_Variable_48 = Temp_text_Variable_48;
	Parms.Temp_text_Variable_49 = Temp_text_Variable_49;
	Parms.Temp_text_Variable_50 = Temp_text_Variable_50;
	Parms.Temp_text_Variable_51 = Temp_text_Variable_51;
	Parms.Temp_text_Variable_52 = Temp_text_Variable_52;
	Parms.Temp_text_Variable_53 = Temp_text_Variable_53;
	Parms.Temp_text_Variable_54 = Temp_text_Variable_54;
	Parms.Temp_text_Variable_55 = Temp_text_Variable_55;
	Parms.Temp_text_Variable_56 = Temp_text_Variable_56;
	Parms.Temp_text_Variable_57 = Temp_text_Variable_57;
	Parms.Temp_text_Variable_58 = Temp_text_Variable_58;
	Parms.Temp_text_Variable_59 = Temp_text_Variable_59;
	Parms.Temp_text_Variable_60 = Temp_text_Variable_60;
	Parms.Temp_text_Variable_61 = Temp_text_Variable_61;
	Parms.Temp_text_Variable_62 = Temp_text_Variable_62;
	Parms.Temp_text_Variable_63 = Temp_text_Variable_63;
	Parms.Temp_text_Variable_64 = Temp_text_Variable_64;
	Parms.Temp_text_Variable_65 = Temp_text_Variable_65;
	Parms.Temp_text_Variable_66 = Temp_text_Variable_66;
	Parms.Temp_text_Variable_67 = Temp_text_Variable_67;
	Parms.Temp_text_Variable_68 = Temp_text_Variable_68;
	Parms.Temp_text_Variable_69 = Temp_text_Variable_69;
	Parms.Temp_text_Variable_70 = Temp_text_Variable_70;
	Parms.Temp_text_Variable_71 = Temp_text_Variable_71;
	Parms.Temp_text_Variable_72 = Temp_text_Variable_72;
	Parms.Temp_text_Variable_73 = Temp_text_Variable_73;
	Parms.Temp_text_Variable_74 = Temp_text_Variable_74;
	Parms.Temp_text_Variable_75 = Temp_text_Variable_75;
	Parms.Temp_text_Variable_76 = Temp_text_Variable_76;
	Parms.Temp_text_Variable_77 = Temp_text_Variable_77;
	Parms.Temp_text_Variable_78 = Temp_text_Variable_78;
	Parms.Temp_text_Variable_79 = Temp_text_Variable_79;
	Parms.Temp_text_Variable_80 = Temp_text_Variable_80;
	Parms.Temp_text_Variable_81 = Temp_text_Variable_81;
	Parms.Temp_text_Variable_82 = Temp_text_Variable_82;
	Parms.Temp_text_Variable_83 = Temp_text_Variable_83;
	Parms.Temp_text_Variable_84 = Temp_text_Variable_84;
	Parms.Temp_text_Variable_85 = Temp_text_Variable_85;
	Parms.Temp_text_Variable_86 = Temp_text_Variable_86;
	Parms.Temp_text_Variable_87 = Temp_text_Variable_87;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable_88 = Temp_text_Variable_88;
	Parms.Temp_text_Variable_89 = Temp_text_Variable_89;
	Parms.Temp_text_Variable_90 = Temp_text_Variable_90;
	Parms.Temp_text_Variable_91 = Temp_text_Variable_91;
	Parms.Temp_text_Variable_92 = Temp_text_Variable_92;
	Parms.Temp_text_Variable_93 = Temp_text_Variable_93;
	Parms.Temp_text_Variable_94 = Temp_text_Variable_94;
	Parms.Temp_text_Variable_95 = Temp_text_Variable_95;
	Parms.Temp_text_Variable_96 = Temp_text_Variable_96;
	Parms.Temp_text_Variable_97 = Temp_text_Variable_97;
	Parms.Temp_text_Variable_98 = Temp_text_Variable_98;
	Parms.Temp_text_Variable_99 = Temp_text_Variable_99;
	Parms.Temp_text_Variable_100 = Temp_text_Variable_100;
	Parms.Temp_text_Variable_101 = Temp_text_Variable_101;
	Parms.Temp_text_Variable_102 = Temp_text_Variable_102;
	Parms.Temp_text_Variable_103 = Temp_text_Variable_103;
	Parms.Temp_text_Variable_104 = Temp_text_Variable_104;
	Parms.Temp_text_Variable_105 = Temp_text_Variable_105;
	Parms.Temp_text_Variable_106 = Temp_text_Variable_106;
	Parms.Temp_text_Variable_107 = Temp_text_Variable_107;
	Parms.Temp_text_Variable_108 = Temp_text_Variable_108;
	Parms.Temp_text_Variable_109 = Temp_text_Variable_109;
	Parms.Temp_text_Variable_110 = Temp_text_Variable_110;
	Parms.Temp_text_Variable_111 = Temp_text_Variable_111;
	Parms.Temp_text_Variable_112 = Temp_text_Variable_112;
	Parms.Temp_text_Variable_113 = Temp_text_Variable_113;
	Parms.Temp_text_Variable_114 = Temp_text_Variable_114;
	Parms.Temp_text_Variable_115 = Temp_text_Variable_115;
	Parms.Temp_text_Variable_116 = Temp_text_Variable_116;
	Parms.Temp_text_Variable_117 = Temp_text_Variable_117;
	Parms.Temp_text_Variable_118 = Temp_text_Variable_118;
	Parms.Temp_text_Variable_119 = Temp_text_Variable_119;
	Parms.Temp_text_Variable_120 = Temp_text_Variable_120;
	Parms.Temp_text_Variable_121 = Temp_text_Variable_121;
	Parms.Temp_text_Variable_122 = Temp_text_Variable_122;
	Parms.Temp_text_Variable_123 = Temp_text_Variable_123;
	Parms.Temp_text_Variable_124 = Temp_text_Variable_124;
	Parms.Temp_text_Variable_125 = Temp_text_Variable_125;
	Parms.Temp_text_Variable_126 = Temp_text_Variable_126;
	Parms.Temp_text_Variable_127 = Temp_text_Variable_127;
	Parms.Temp_text_Variable_128 = Temp_text_Variable_128;
	Parms.Temp_text_Variable_129 = Temp_text_Variable_129;
	Parms.Temp_text_Variable_130 = Temp_text_Variable_130;
	Parms.Temp_text_Variable_131 = Temp_text_Variable_131;
	Parms.Temp_text_Variable_132 = Temp_text_Variable_132;
	Parms.Temp_text_Variable_133 = Temp_text_Variable_133;
	Parms.Temp_text_Variable_134 = Temp_text_Variable_134;
	Parms.Temp_text_Variable_135 = Temp_text_Variable_135;
	Parms.Temp_text_Variable_136 = Temp_text_Variable_136;
	Parms.Temp_text_Variable_137 = Temp_text_Variable_137;
	Parms.Temp_text_Variable_138 = Temp_text_Variable_138;
	Parms.Temp_text_Variable_139 = Temp_text_Variable_139;
	Parms.Temp_text_Variable_140 = Temp_text_Variable_140;
	Parms.Temp_text_Variable_141 = Temp_text_Variable_141;
	Parms.Temp_text_Variable_142 = Temp_text_Variable_142;
	Parms.Temp_text_Variable_143 = Temp_text_Variable_143;
	Parms.Temp_text_Variable_144 = Temp_text_Variable_144;
	Parms.Temp_text_Variable_145 = Temp_text_Variable_145;
	Parms.Temp_text_Variable_146 = Temp_text_Variable_146;
	Parms.Temp_text_Variable_147 = Temp_text_Variable_147;
	Parms.Temp_text_Variable_148 = Temp_text_Variable_148;
	Parms.Temp_text_Variable_149 = Temp_text_Variable_149;
	Parms.Temp_text_Variable_150 = Temp_text_Variable_150;
	Parms.Temp_text_Variable_151 = Temp_text_Variable_151;
	Parms.Temp_text_Variable_152 = Temp_text_Variable_152;
	Parms.Temp_text_Variable_153 = Temp_text_Variable_153;
	Parms.Temp_text_Variable_154 = Temp_text_Variable_154;
	Parms.Temp_text_Variable_155 = Temp_text_Variable_155;
	Parms.Temp_text_Variable_156 = Temp_text_Variable_156;
	Parms.Temp_text_Variable_157 = Temp_text_Variable_157;
	Parms.Temp_text_Variable_158 = Temp_text_Variable_158;
	Parms.Temp_text_Variable_159 = Temp_text_Variable_159;
	Parms.Temp_text_Variable_160 = Temp_text_Variable_160;
	Parms.Temp_text_Variable_161 = Temp_text_Variable_161;
	Parms.Temp_text_Variable_162 = Temp_text_Variable_162;
	Parms.Temp_text_Variable_163 = Temp_text_Variable_163;
	Parms.Temp_text_Variable_164 = Temp_text_Variable_164;
	Parms.Temp_text_Variable_165 = Temp_text_Variable_165;
	Parms.Temp_text_Variable_166 = Temp_text_Variable_166;
	Parms.Temp_text_Variable_167 = Temp_text_Variable_167;
	Parms.Temp_text_Variable_168 = Temp_text_Variable_168;
	Parms.Temp_text_Variable_169 = Temp_text_Variable_169;
	Parms.Temp_text_Variable_170 = Temp_text_Variable_170;
	Parms.Temp_text_Variable_171 = Temp_text_Variable_171;
	Parms.Temp_text_Variable_172 = Temp_text_Variable_172;
	Parms.Temp_text_Variable_173 = Temp_text_Variable_173;
	Parms.Temp_text_Variable_174 = Temp_text_Variable_174;
	Parms.Temp_text_Variable_175 = Temp_text_Variable_175;
	Parms.Temp_text_Variable_176 = Temp_text_Variable_176;
	Parms.Temp_text_Variable_177 = Temp_text_Variable_177;
	Parms.Temp_text_Variable_178 = Temp_text_Variable_178;
	Parms.Temp_text_Variable_179 = Temp_text_Variable_179;
	Parms.Temp_text_Variable_180 = Temp_text_Variable_180;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_text_Variable_181 = Temp_text_Variable_181;
	Parms.Temp_text_Variable_182 = Temp_text_Variable_182;
	Parms.Temp_text_Variable_183 = Temp_text_Variable_183;
	Parms.Temp_text_Variable_184 = Temp_text_Variable_184;
	Parms.Temp_text_Variable_185 = Temp_text_Variable_185;
	Parms.Temp_text_Variable_186 = Temp_text_Variable_186;
	Parms.Temp_text_Variable_187 = Temp_text_Variable_187;
	Parms.Temp_text_Variable_188 = Temp_text_Variable_188;
	Parms.Temp_text_Variable_189 = Temp_text_Variable_189;
	Parms.Temp_text_Variable_190 = Temp_text_Variable_190;
	Parms.Temp_text_Variable_191 = Temp_text_Variable_191;
	Parms.Temp_text_Variable_192 = Temp_text_Variable_192;
	Parms.Temp_text_Variable_193 = Temp_text_Variable_193;
	Parms.Temp_text_Variable_194 = Temp_text_Variable_194;
	Parms.Temp_text_Variable_195 = Temp_text_Variable_195;
	Parms.Temp_text_Variable_196 = Temp_text_Variable_196;
	Parms.Temp_text_Variable_197 = Temp_text_Variable_197;
	Parms.Temp_text_Variable_198 = Temp_text_Variable_198;
	Parms.Temp_text_Variable_199 = Temp_text_Variable_199;
	Parms.Temp_text_Variable_200 = Temp_text_Variable_200;
	Parms.Temp_text_Variable_201 = Temp_text_Variable_201;
	Parms.Temp_text_Variable_202 = Temp_text_Variable_202;
	Parms.Temp_text_Variable_203 = Temp_text_Variable_203;
	Parms.Temp_text_Variable_204 = Temp_text_Variable_204;
	Parms.Temp_text_Variable_205 = Temp_text_Variable_205;
	Parms.Temp_text_Variable_206 = Temp_text_Variable_206;
	Parms.Temp_text_Variable_207 = Temp_text_Variable_207;
	Parms.Temp_text_Variable_208 = Temp_text_Variable_208;
	Parms.Temp_text_Variable_209 = Temp_text_Variable_209;
	Parms.Temp_text_Variable_210 = Temp_text_Variable_210;
	Parms.Temp_text_Variable_211 = Temp_text_Variable_211;
	Parms.Temp_text_Variable_212 = Temp_text_Variable_212;
	Parms.Temp_text_Variable_213 = Temp_text_Variable_213;
	Parms.Temp_text_Variable_214 = Temp_text_Variable_214;
	Parms.Temp_text_Variable_215 = Temp_text_Variable_215;
	Parms.Temp_text_Variable_216 = Temp_text_Variable_216;
	Parms.Temp_text_Variable_217 = Temp_text_Variable_217;
	Parms.Temp_text_Variable_218 = Temp_text_Variable_218;
	Parms.Temp_text_Variable_219 = Temp_text_Variable_219;
	Parms.Temp_text_Variable_220 = Temp_text_Variable_220;
	Parms.Temp_text_Variable_221 = Temp_text_Variable_221;
	Parms.Temp_text_Variable_222 = Temp_text_Variable_222;
	Parms.Temp_text_Variable_223 = Temp_text_Variable_223;
	Parms.Temp_text_Variable_224 = Temp_text_Variable_224;
	Parms.Temp_text_Variable_225 = Temp_text_Variable_225;
	Parms.Temp_text_Variable_226 = Temp_text_Variable_226;
	Parms.Temp_text_Variable_227 = Temp_text_Variable_227;
	Parms.Temp_text_Variable_228 = Temp_text_Variable_228;
	Parms.Temp_text_Variable_229 = Temp_text_Variable_229;
	Parms.Temp_text_Variable_230 = Temp_text_Variable_230;
	Parms.Temp_text_Variable_231 = Temp_text_Variable_231;
	Parms.Temp_text_Variable_232 = Temp_text_Variable_232;
	Parms.Temp_text_Variable_233 = Temp_text_Variable_233;
	Parms.Temp_text_Variable_234 = Temp_text_Variable_234;
	Parms.Temp_text_Variable_235 = Temp_text_Variable_235;
	Parms.Temp_text_Variable_236 = Temp_text_Variable_236;
	Parms.Temp_text_Variable_237 = Temp_text_Variable_237;
	Parms.Temp_text_Variable_238 = Temp_text_Variable_238;
	Parms.Temp_text_Variable_239 = Temp_text_Variable_239;
	Parms.Temp_text_Variable_240 = Temp_text_Variable_240;
	Parms.Temp_text_Variable_241 = Temp_text_Variable_241;
	Parms.Temp_text_Variable_242 = Temp_text_Variable_242;
	Parms.Temp_text_Variable_243 = Temp_text_Variable_243;
	Parms.Temp_text_Variable_244 = Temp_text_Variable_244;
	Parms.Temp_text_Variable_245 = Temp_text_Variable_245;
	Parms.Temp_text_Variable_246 = Temp_text_Variable_246;
	Parms.Temp_text_Variable_247 = Temp_text_Variable_247;
	Parms.Temp_text_Variable_248 = Temp_text_Variable_248;
	Parms.Temp_text_Variable_249 = Temp_text_Variable_249;
	Parms.Temp_text_Variable_250 = Temp_text_Variable_250;
	Parms.Temp_text_Variable_251 = Temp_text_Variable_251;
	Parms.Temp_text_Variable_252 = Temp_text_Variable_252;
	Parms.Temp_text_Variable_253 = Temp_text_Variable_253;
	Parms.Temp_text_Variable_254 = Temp_text_Variable_254;
	Parms.Temp_text_Variable_255 = Temp_text_Variable_255;
	Parms.Temp_text_Variable_256 = Temp_text_Variable_256;
	Parms.Temp_text_Variable_257 = Temp_text_Variable_257;
	Parms.Temp_text_Variable_258 = Temp_text_Variable_258;
	Parms.Temp_text_Variable_259 = Temp_text_Variable_259;
	Parms.Temp_text_Variable_260 = Temp_text_Variable_260;
	Parms.Temp_text_Variable_261 = Temp_text_Variable_261;
	Parms.Temp_text_Variable_262 = Temp_text_Variable_262;
	Parms.Temp_text_Variable_263 = Temp_text_Variable_263;
	Parms.Temp_text_Variable_264 = Temp_text_Variable_264;
	Parms.Temp_text_Variable_265 = Temp_text_Variable_265;
	Parms.Temp_text_Variable_266 = Temp_text_Variable_266;
	Parms.Temp_text_Variable_267 = Temp_text_Variable_267;
	Parms.Temp_text_Variable_268 = Temp_text_Variable_268;
	Parms.Temp_text_Variable_269 = Temp_text_Variable_269;
	Parms.Temp_text_Variable_270 = Temp_text_Variable_270;
	Parms.Temp_text_Variable_271 = Temp_text_Variable_271;
	Parms.Temp_text_Variable_272 = Temp_text_Variable_272;
	Parms.Temp_text_Variable_273 = Temp_text_Variable_273;
	Parms.Temp_text_Variable_274 = Temp_text_Variable_274;
	Parms.Temp_text_Variable_275 = Temp_text_Variable_275;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_text_Variable_276 = Temp_text_Variable_276;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_text_Variable_277 = Temp_text_Variable_277;
	Parms.Temp_text_Variable_278 = Temp_text_Variable_278;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_DynamicCast_AsModal_Tutorial_Overlay = K2Node_DynamicCast_AsModal_Tutorial_Overlay;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_CheckForSideTutorialQuests_RelevantSideQuestFound = CallFunc_CheckForSideTutorialQuests_RelevantSideQuestFound;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.CheckForSideTutorialQuests
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RelevantSideQuestFound                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::CheckForSideTutorialQuests(bool* RelevantSideQuestFound, bool CallFunc_Not_PreBool_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasCompletedQuest_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HasCompletedQuest_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "CheckForSideTutorialQuests");

	Params::UItemInspectScreen_C_CheckForSideTutorialQuests_Params Parms;

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue_1 = CallFunc_GetQuestWithDefinition_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_HasCompletedQuest_ReturnValue_1 = CallFunc_HasCompletedQuest_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue_2 = CallFunc_GetQuestWithDefinition_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_HasCompletedQuest_ReturnValue_2 = CallFunc_HasCompletedQuest_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantSideQuestFound != nullptr)
		*RelevantSideQuestFound = Parms.RelevantSideQuestFound;

}


// Function ItemInspectScreen.ItemInspectScreen_C.AlterationQuestComplete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               QuestComplete                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalItemQuantityByDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::AlterationQuestComplete(bool* QuestComplete, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalItemQuantityByDefinition_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "AlterationQuestComplete");

	Params::UItemInspectScreen_C_AlterationQuestComplete_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTotalItemQuantityByDefinition_ReturnValue = CallFunc_GetTotalItemQuantityByDefinition_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestComplete != nullptr)
		*QuestComplete = Parms.QuestComplete;

}


// Function ItemInspectScreen.ItemInspectScreen_C.UpgradeQuestComplete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               QuestIsComplete                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::UpgradeQuestComplete(bool* QuestIsComplete, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "UpgradeQuestComplete");

	Params::UItemInspectScreen_C_UpgradeQuestComplete_Params Parms;

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue_1 = CallFunc_GetQuestWithDefinition_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue_2 = CallFunc_GetQuestWithDefinition_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue_3 = CallFunc_GetQuestWithDefinition_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestIsComplete != nullptr)
		*QuestIsComplete = Parms.QuestIsComplete;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupUpgrades
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_UpgradeQuestComplete_QuestIsComplete                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::SetupUpgrades(bool CallFunc_UpgradeQuestComplete_QuestIsComplete)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetupUpgrades");

	Params::UItemInspectScreen_C_SetupUpgrades_Params Parms;

	Parms.CallFunc_UpgradeQuestComplete_QuestIsComplete = CallFunc_UpgradeQuestComplete_QuestIsComplete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::SetupScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetupScrollWidget");

	Params::UItemInspectScreen_C_SetupScrollWidget_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetRequiredTagContainer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*         ItemDef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasRequiredTag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       RequiredTagContainer                                             (Parm, OutParm)
// struct FGameplayTagContainer       TC_Return                                                        (Edit, BlueprintVisible)
// bool                               b_Return                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_Map_Values_Values                                       (ZeroConstructor, ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             ()
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ZeroConstructor, ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::GetRequiredTagContainer(class UFortItemDefinition* ItemDef, bool* HasRequiredTag, struct FGameplayTagContainer* RequiredTagContainer, const struct FGameplayTagContainer& TC_Return, bool b_Return, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Values_Values, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, const struct FGameplayTag& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, UInterfaceProperty_ CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetRequiredTagContainer");

	Params::UItemInspectScreen_C_GetRequiredTagContainer_Params Parms;

	Parms.ItemDef = ItemDef;
	Parms.TC_Return = TC_Return;
	Parms.b_Return = b_Return;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput = CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue = CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasRequiredTag != nullptr)
		*HasRequiredTag = Parms.HasRequiredTag;

	if (RequiredTagContainer != nullptr)
		*RequiredTagContainer = Parms.RequiredTagContainer;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SchematicRequirementsMet
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRequiredTagContainer_HasRequiredTag                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetRequiredTagContainer_RequiredTagContainer            ()
// bool                               CallFunc_DoesItemHaveLegacyAlterations_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UItemInspectScreen_C::SchematicRequirementsMet(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetRequiredTagContainer_HasRequiredTag, const struct FGameplayTagContainer& CallFunc_GetRequiredTagContainer_RequiredTagContainer, bool CallFunc_DoesItemHaveLegacyAlterations_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_HasGameplayTagContainer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SchematicRequirementsMet");

	Params::UItemInspectScreen_C_SchematicRequirementsMet_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRequiredTagContainer_HasRequiredTag = CallFunc_GetRequiredTagContainer_HasRequiredTag;
	Parms.CallFunc_GetRequiredTagContainer_RequiredTagContainer = CallFunc_GetRequiredTagContainer_RequiredTagContainer;
	Parms.CallFunc_DoesItemHaveLegacyAlterations_ReturnValue = CallFunc_DoesItemHaveLegacyAlterations_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_HasGameplayTagContainer_ReturnValue = CallFunc_HasGameplayTagContainer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.MeetsQuestRequirements
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              QuestItem                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UItemInspectScreen_C::MeetsQuestRequirements(class UFortQuestItem* QuestItem, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "MeetsQuestRequirements");

	Params::UItemInspectScreen_C_MeetsQuestRequirements_Params Parms;

	Parms.QuestItem = QuestItem;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.IsAlterableItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortAlterableItem*          K2Node_DynamicCast_AsFort_Alterable_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortAlterationSlotStatus>CallFunc_GetAlterationSlots_ReturnValue                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UItemInspectScreen_C::IsAlterableItem(class UFortAlterableItem* K2Node_DynamicCast_AsFort_Alterable_Item, bool K2Node_DynamicCast_bSuccess, TArray<struct FFortAlterationSlotStatus>& CallFunc_GetAlterationSlots_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "IsAlterableItem");

	Params::UItemInspectScreen_C_IsAlterableItem_Params Parms;

	Parms.K2Node_DynamicCast_AsFort_Alterable_Item = K2Node_DynamicCast_AsFort_Alterable_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAlterationSlots_ReturnValue = CallFunc_GetAlterationSlots_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.CreateUpgradePopupMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectUpgradePopupMenu_C*K2Node_DynamicCast_AsItem_Inspect_Upgrade_Popup_Menu             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::CreateUpgradePopupMenu(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UItemInspectUpgradePopupMenu_C* K2Node_DynamicCast_AsItem_Inspect_Upgrade_Popup_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "CreateUpgradePopupMenu");

	Params::UItemInspectScreen_C_CreateUpgradePopupMenu_Params Parms;

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Inspect_Upgrade_Popup_Menu = K2Node_DynamicCast_AsItem_Inspect_Upgrade_Popup_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleAlterationModify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterableItem*          AlterableItem                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleAlterationModify(class UFortAlterableItem* AlterableItem)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleAlterationModify");

	Params::UItemInspectScreen_C_HandleAlterationModify_Params Parms;

	Parms.AlterableItem = AlterableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetItemActionSwitcherVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetItemActionSwitcherVisibility(enum class ESlateVisibility* Return_Value, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetItemActionSwitcherVisibility");

	Params::UItemInspectScreen_C_GetItemActionSwitcherVisibility_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeItemInputActionState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpgradeQuestComplete_QuestIsComplete                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetAlterationModifyVisibility_Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetUpgradeRarityVisibility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetEvolutionVisibility_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetLevelUpVisibility_Return_Value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetUpgradeItemInputActionState(enum class EInputActionState* Return_Value, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsInZone_ReturnValue, enum class EInputActionState Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class EInputActionState Temp_byte_Variable_1, bool CallFunc_UpgradeQuestComplete_QuestIsComplete, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility CallFunc_GetAlterationModifyVisibility_Return_Value, enum class ESlateVisibility CallFunc_GetUpgradeRarityVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility CallFunc_GetEvolutionVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetLevelUpVisibility_Return_Value, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetUpgradeItemInputActionState");

	Params::UItemInspectScreen_C_GetUpgradeItemInputActionState_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_UpgradeQuestComplete_QuestIsComplete = CallFunc_UpgradeQuestComplete_QuestIsComplete;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAlterationModifyVisibility_Return_Value = CallFunc_GetAlterationModifyVisibility_Return_Value;
	Parms.CallFunc_GetUpgradeRarityVisibility_ReturnValue = CallFunc_GetUpgradeRarityVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetEvolutionVisibility_ReturnValue = CallFunc_GetEvolutionVisibility_ReturnValue;
	Parms.CallFunc_GetLevelUpVisibility_Return_Value = CallFunc_GetLevelUpVisibility_Return_Value;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetAlterationModifyVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AlterationQuestComplete_QuestComplete                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MeetsQuestRequirements_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemSlottedInCollectionBook_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInventoryOverflowItem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlterableItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetAlterationModifyVisibility(enum class ESlateVisibility* Return_Value, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_AlterationQuestComplete_QuestComplete, bool CallFunc_MeetsQuestRequirements_ReturnValue, bool CallFunc_IsItemSlottedInCollectionBook_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInventoryOverflowItem_ReturnValue, bool CallFunc_IsAlterableItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetAlterationModifyVisibility");

	Params::UItemInspectScreen_C_GetAlterationModifyVisibility_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_AlterationQuestComplete_QuestComplete = CallFunc_AlterationQuestComplete_QuestComplete;
	Parms.CallFunc_MeetsQuestRequirements_ReturnValue = CallFunc_MeetsQuestRequirements_ReturnValue;
	Parms.CallFunc_IsItemSlottedInCollectionBook_ReturnValue = CallFunc_IsItemSlottedInCollectionBook_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsInventoryOverflowItem_ReturnValue = CallFunc_IsInventoryOverflowItem_ReturnValue;
	Parms.CallFunc_IsAlterableItem_ReturnValue = CallFunc_IsAlterableItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetOverviewActionsInputState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       CallFunc_GetFavoriteInputState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetViewInputState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::SetOverviewActionsInputState(enum class EInputActionState State, enum class EInputActionState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, enum class EInputActionState Temp_byte_Variable_1, enum class EInputActionState Temp_byte_Variable_2, enum class EInputActionState Temp_byte_Variable_3, enum class EInputActionState Temp_byte_Variable_4, bool K2Node_Select_Default, enum class EInputActionState CallFunc_GetFavoriteInputState_ReturnValue, enum class EInputActionState CallFunc_GetViewInputState_ReturnValue, enum class EInputActionState K2Node_Select_Default_1, enum class EInputActionState K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetOverviewActionsInputState");

	Params::UItemInspectScreen_C_SetOverviewActionsInputState_Params Parms;

	Parms.State = State;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetFavoriteInputState_ReturnValue = CallFunc_GetFavoriteInputState_ReturnValue;
	Parms.CallFunc_GetViewInputState_ReturnValue = CallFunc_GetViewInputState_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetLevelUpVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetLevelUpVisibility(enum class ESlateVisibility* Return_Value, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetLevelUpVisibility");

	Params::UItemInspectScreen_C_GetLevelUpVisibility_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleSchematicUpgradeOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleSchematicUpgradeOptions(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleSchematicUpgradeOptions");

	Params::UItemInspectScreen_C_HandleSchematicUpgradeOptions_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.UpdateInspectionMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetItemActionSwitcherVisibility_Return_Value            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::UpdateInspectionMode(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility CallFunc_GetItemActionSwitcherVisibility_Return_Value, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "UpdateInspectionMode");

	Params::UItemInspectScreen_C_UpdateInspectionMode_Params Parms;

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemActionSwitcherVisibility_Return_Value = CallFunc_GetItemActionSwitcherVisibility_Return_Value;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetWindowTitleBarVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UItemInspectScreen_C::GetWindowTitleBarVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetWindowTitleBarVisibility");

	Params::UItemInspectScreen_C_GetWindowTitleBarVisibility_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UItemInspectScreen_C::UnbindDelegates(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "UnbindDelegates");

	Params::UItemInspectScreen_C_UnbindDelegates_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BindDelegates");

	Params::UItemInspectScreen_C_BindDelegates_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UItemInspectScreen_C::GetWidgetForFramingViewedItem(bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetWidgetForFramingViewedItem");

	Params::UItemInspectScreen_C_GetWidgetForFramingViewedItem_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshItemViewHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::RefreshItemViewHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EInputActionState Temp_byte_Variable_2, enum class EInputActionState Temp_byte_Variable_3, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue_1, enum class EInputActionState K2Node_Select_Default, enum class EInputActionState K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshItemViewHandlerStates");

	Params::UItemInspectScreen_C_RefreshItemViewHandlerStates_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_1 = CallFunc_MakeLiteralBool_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Setup Evolution Selection for Comparisons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::Setup_Evolution_Selection_for_Comparisons(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "Setup Evolution Selection for Comparisons");

	Params::UItemInspectScreen_C_Setup_Evolution_Selection_for_Comparisons_Params Parms;

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeRarityVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterableItem*          AlterableItem                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SchematicRequirementsMet_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInventoryOverflowItem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRarityUpgrade_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UItemInspectScreen_C::GetUpgradeRarityVisibility(class UFortAlterableItem* AlterableItem, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_SchematicRequirementsMet_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInventoryOverflowItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasRarityUpgrade_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetUpgradeRarityVisibility");

	Params::UItemInspectScreen_C_GetUpgradeRarityVisibility_Params Parms;

	Parms.AlterableItem = AlterableItem;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_SchematicRequirementsMet_ReturnValue = CallFunc_SchematicRequirementsMet_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsInventoryOverflowItem_ReturnValue = CallFunc_IsInventoryOverflowItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasRarityUpgrade_ReturnValue = CallFunc_HasRarityUpgrade_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetFavoriteInputState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInputActionState UItemInspectScreen_C::GetFavoriteInputState(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetFavoriteInputState");

	Params::UItemInspectScreen_C_GetFavoriteInputState_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetEvolutionVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEvolutions_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UItemInspectScreen_C::GetEvolutionVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_HasEvolutions_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetEvolutionVisibility");

	Params::UItemInspectScreen_C_GetEvolutionVisibility_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasEvolutions_ReturnValue = CallFunc_HasEvolutions_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetViewInputState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSchematicOrCraftedWeapon_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInputActionState UItemInspectScreen_C::GetViewInputState(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSchematicOrCraftedWeapon_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetViewInputState");

	Params::UItemInspectScreen_C_GetViewInputState_Params Parms;

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsSchematicOrCraftedWeapon_ReturnValue = CallFunc_IsSchematicOrCraftedWeapon_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetAllInputActionStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       InputActionState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::SetAllInputActionStates(enum class EInputActionState InputActionState)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetAllInputActionStates");

	Params::UItemInspectScreen_C_SetAllInputActionStates_Params Parms;

	Parms.InputActionState = InputActionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgradeItemRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleUpgradeItemRarity()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleUpgradeItemRarity");

	Params::UItemInspectScreen_C_HandleUpgradeItemRarity_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshExtraDetailsTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SelectedTabID                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTabCount_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTabCount_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetSelectedTabId_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortAlterationSlotStatus>CallFunc_GetAlterationSlots_ReturnValue                          (ZeroConstructor, ReferenceParm)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo                         ()
// bool                               CallFunc_RegisterFortTab_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorker*                 K2Node_DynamicCast_AsFort_Worker                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo_1                       ()
// bool                               CallFunc_RegisterFortTab_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSchematic_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo_2                       ()
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo_3                       ()
// bool                               CallFunc_RegisterFortTab_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo_4                       ()
// bool                               CallFunc_RegisterFortTab_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RegisterFortTab_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshExtraDetailsTabs(class FName SelectedTabID, int32 CallFunc_GetTabCount_ReturnValue, class FName CallFunc_GetTabIdAtIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetTabCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_SelectTabByID_ReturnValue, class FName CallFunc_GetSelectedTabId_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue_1, TArray<struct FFortAlterationSlotStatus>& CallFunc_GetAlterationSlots_ReturnValue, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, bool CallFunc_RegisterFortTab_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess_1, class UFortHero* K2Node_DynamicCast_AsFort_Hero_1, bool K2Node_DynamicCast_bSuccess_2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo_1, bool CallFunc_RegisterFortTab_ReturnValue_1, bool CallFunc_IsSchematic_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo_2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo_3, bool CallFunc_RegisterFortTab_ReturnValue_2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo_4, bool CallFunc_RegisterFortTab_ReturnValue_3, bool CallFunc_RegisterFortTab_ReturnValue_4)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshExtraDetailsTabs");

	Params::UItemInspectScreen_C_RefreshExtraDetailsTabs_Params Parms;

	Parms.SelectedTabID = SelectedTabID;
	Parms.CallFunc_GetTabCount_ReturnValue = CallFunc_GetTabCount_ReturnValue;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue = CallFunc_GetTabIdAtIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetTabCount_ReturnValue_1 = CallFunc_GetTabCount_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.CallFunc_GetSelectedTabId_ReturnValue = CallFunc_GetSelectedTabId_ReturnValue;
	Parms.CallFunc_SelectTabByID_ReturnValue_1 = CallFunc_SelectTabByID_ReturnValue_1;
	Parms.CallFunc_GetAlterationSlots_ReturnValue = CallFunc_GetAlterationSlots_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo = K2Node_MakeStruct_FortTabButtonLabelInfo;
	Parms.CallFunc_RegisterFortTab_ReturnValue = CallFunc_RegisterFortTab_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Worker = K2Node_DynamicCast_AsFort_Worker;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsFort_Hero_1 = K2Node_DynamicCast_AsFort_Hero_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo_1 = K2Node_MakeStruct_FortTabButtonLabelInfo_1;
	Parms.CallFunc_RegisterFortTab_ReturnValue_1 = CallFunc_RegisterFortTab_ReturnValue_1;
	Parms.CallFunc_IsSchematic_ReturnValue = CallFunc_IsSchematic_ReturnValue;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo_2 = K2Node_MakeStruct_FortTabButtonLabelInfo_2;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo_3 = K2Node_MakeStruct_FortTabButtonLabelInfo_3;
	Parms.CallFunc_RegisterFortTab_ReturnValue_2 = CallFunc_RegisterFortTab_ReturnValue_2;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo_4 = K2Node_MakeStruct_FortTabButtonLabelInfo_4;
	Parms.CallFunc_RegisterFortTab_ReturnValue_3 = CallFunc_RegisterFortTab_ReturnValue_3;
	Parms.CallFunc_RegisterFortTab_ReturnValue_4 = CallFunc_RegisterFortTab_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnItemCycleChangedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   NewItemToRepresent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::OnItemCycleChangedItem(class UFortItem* NewItemToRepresent)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnItemCycleChangedItem");

	Params::UItemInspectScreen_C_OnItemCycleChangedItem_Params Parms;

	Parms.NewItemToRepresent = NewItemToRepresent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemInspectionMode NewInspectMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::SetInspectModeForChildPanels(enum class EFortItemInspectionMode NewInspectMode)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetInspectModeForChildPanels");

	Params::UItemInspectScreen_C_SetInspectModeForChildPanels_Params Parms;

	Parms.NewInspectMode = NewInspectMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::SetTabButtonStyle(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetTabButtonStyle");

	Params::UItemInspectScreen_C_SetTabButtonStyle_Params Parms;

	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowPreviewLabel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::ShowPreviewHeader(bool ShowPreviewLabel, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ShowPreviewHeader");

	Params::UItemInspectScreen_C_ShowPreviewHeader_Params Parms;

	Parms.ShowPreviewLabel = ShowPreviewLabel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshCallout(bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshCallout");

	Params::UItemInspectScreen_C_RefreshCallout_Params Parms;

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       CallFunc_GetRefundPopupInputActionState_State                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetLevelUpVisibility_Return_Value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetUpgradeItemInputActionState_Return_Value             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetAlterationModifyVisibility_Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetUpgradeRarityVisibility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetFavoriteInputState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetEvolutionVisibility_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetViewInputState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshActionHandlers(enum class EInputActionState CallFunc_GetRefundPopupInputActionState_State, enum class ESlateVisibility CallFunc_GetLevelUpVisibility_Return_Value, enum class EInputActionState CallFunc_GetUpgradeItemInputActionState_Return_Value, enum class ESlateVisibility CallFunc_GetAlterationModifyVisibility_Return_Value, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue, enum class ESlateVisibility CallFunc_GetUpgradeRarityVisibility_ReturnValue, enum class EInputActionState CallFunc_GetFavoriteInputState_ReturnValue, enum class ESlateVisibility CallFunc_GetEvolutionVisibility_ReturnValue, enum class EInputActionState CallFunc_GetViewInputState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshActionHandlers");

	Params::UItemInspectScreen_C_RefreshActionHandlers_Params Parms;

	Parms.CallFunc_GetRefundPopupInputActionState_State = CallFunc_GetRefundPopupInputActionState_State;
	Parms.CallFunc_GetLevelUpVisibility_Return_Value = CallFunc_GetLevelUpVisibility_Return_Value;
	Parms.CallFunc_GetUpgradeItemInputActionState_Return_Value = CallFunc_GetUpgradeItemInputActionState_Return_Value;
	Parms.CallFunc_GetAlterationModifyVisibility_Return_Value = CallFunc_GetAlterationModifyVisibility_Return_Value;
	Parms.CallFunc_GetCycleWidget_ReturnValue = CallFunc_GetCycleWidget_ReturnValue;
	Parms.CallFunc_GetUpgradeRarityVisibility_ReturnValue = CallFunc_GetUpgradeRarityVisibility_ReturnValue;
	Parms.CallFunc_GetFavoriteInputState_ReturnValue = CallFunc_GetFavoriteInputState_ReturnValue;
	Parms.CallFunc_GetEvolutionVisibility_ReturnValue = CallFunc_GetEvolutionVisibility_ReturnValue;
	Parms.CallFunc_GetViewInputState_ReturnValue = CallFunc_GetViewInputState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      OriginalItemInstanceId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>ResultingItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FFortItemInstanceQuantityPairCallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleEvolutionComplete(bool bWasSuccessful, const class FString& OriginalItemInstanceId, TArray<struct FFortItemInstanceQuantityPair>& ResultingItems, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionComplete");

	Params::UItemInspectScreen_C_HandleEvolutionComplete_Params Parms;

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.OriginalItemInstanceId = OriginalItemInstanceId;
	Parms.ResultingItems = ResultingItems;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::RefreshOnUpgrade()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshOnUpgrade");

	Params::UItemInspectScreen_C_RefreshOnUpgrade_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_Passthrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleCursorModeChanging(bool IsEnabled, bool CallFunc_HandleBack_Passthrough, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleCursorModeChanging");

	Params::UItemInspectScreen_C_HandleCursorModeChanging_Params Parms;

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_HandleBack_Passthrough = CallFunc_HandleBack_Passthrough;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::ResetDetailsPanel()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ResetDetailsPanel");

	Params::UItemInspectScreen_C_ResetDetailsPanel_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_2                           (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_3                           (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_4                           (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_5                           (NoDestructor)

void UItemInspectScreen_C::SetupActionHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_5)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetupActionHandlers");

	Params::UItemInspectScreen_C_SetupActionHandlers_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_2 = K2Node_MakeStruct_DataTableRowHandle_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_MakeStruct_DataTableRowHandle_3 = K2Node_MakeStruct_DataTableRowHandle_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_MakeStruct_DataTableRowHandle_4 = K2Node_MakeStruct_DataTableRowHandle_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_MakeStruct_DataTableRowHandle_5 = K2Node_MakeStruct_DataTableRowHandle_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   EvolutionItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>Results                                                          (Edit, BlueprintVisible, ZeroConstructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          ()
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRecipe>             CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue       (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipe                     CallFunc_Array_Get_Item_1                                        ()
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetFirstEvolutionOption(class UFortItem** EvolutionItem, const TArray<struct FFortItemQuantityPair>& Results, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetFirstEvolutionOption");

	Params::UItemInspectScreen_C_GetFirstEvolutionOption_Params Parms;

	Parms.Results = Results;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;
	Parms.CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue = CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EvolutionItem != nullptr)
		*EvolutionItem = Parms.EvolutionItem;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceSelected(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceSelected");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceSelected_Params Parms;

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceUnhovered(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceUnhovered");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceUnhovered_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceHovered(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceHovered");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceHovered_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleUpgrade()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleUpgrade");

	Params::UItemInspectScreen_C_HandleUpgrade_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleEvolution()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolution");

	Params::UItemInspectScreen_C_HandleEvolution_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleView
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleView(bool* PassThrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleView");

	Params::UItemInspectScreen_C_HandleView_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleFavorite(bool* PassThrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleFavorite");

	Params::UItemInspectScreen_C_HandleFavorite_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleBack(bool* PassThrough, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleBack");

	Params::UItemInspectScreen_C_HandleBack_Params Parms;

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203");

	Params::UItemInspectScreen_C_OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.DialogResult_7EB32ED049ED082854D5738A81CFCAA2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::DialogResult_7EB32ED049ED082854D5738A81CFCAA2(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "DialogResult_7EB32ED049ED082854D5738A81CFCAA2");

	Params::UItemInspectScreen_C_DialogResult_7EB32ED049ED082854D5738A81CFCAA2_Params Parms;

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.DialogResult_3D444D7245BFED3F760CE49A5698A308
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::DialogResult_3D444D7245BFED3F760CE49A5698A308(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "DialogResult_3D444D7245BFED3F760CE49A5698A308");

	Params::UItemInspectScreen_C_DialogResult_3D444D7245BFED3F760CE49A5698A308_Params Parms;

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params Parms;

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnActivated");

	Params::UItemInspectScreen_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "Destruct");

	Params::UItemInspectScreen_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnDeactivated");

	Params::UItemInspectScreen_C_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature_Params Parms;

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnInputModeChanged");

	Params::UItemInspectScreen_C_OnInputModeChanged_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params Parms;

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToEvolve                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EvolutionIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature(class UFortItem* ItemToEvolve, int32 EvolutionIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature_Params Parms;

	Parms.ItemToEvolve = ItemToEvolve;
	Parms.EvolutionIndex = EvolutionIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleIsPreviewingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleIsPreviewingChanged()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleIsPreviewingChanged");

	Params::UItemInspectScreen_C_HandleIsPreviewingChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleDifferentItemToInspectSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleDifferentItemToInspectSetBP()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleDifferentItemToInspectSetBP");

	Params::UItemInspectScreen_C_HandleDifferentItemToInspectSetBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleDifferentInspectionModeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleDifferentInspectionModeSetBP()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleDifferentInspectionModeSetBP");

	Params::UItemInspectScreen_C_HandleDifferentInspectionModeSetBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleItemToInspectChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleItemToInspectChangedBP()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleItemToInspectChangedBP");

	Params::UItemInspectScreen_C_HandleItemToInspectChangedBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleItemToInspectDestroyedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleItemToInspectDestroyedBP()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleItemToInspectDestroyedBP");

	Params::UItemInspectScreen_C_HandleItemToInspectDestroyedBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "Construct");

	Params::UItemInspectScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnRemovedFromActivationStack()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnRemovedFromActivationStack");

	Params::UItemInspectScreen_C_OnRemovedFromActivationStack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundHelp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::ShowRefundHelp()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ShowRefundHelp");

	Params::UItemInspectScreen_C_ShowRefundHelp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleRefundItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleRefundItem()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleRefundItem");

	Params::UItemInspectScreen_C_HandleRefundItem_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnRefundItemConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            ItemToRefund                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::OnRefundItemConfirmed(class UFortAccountItem* ItemToRefund)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnRefundItemConfirmed");

	Params::UItemInspectScreen_C_OnRefundItemConfirmed_Params Parms;

	Parms.ItemToRefund = ItemToRefund;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.CheckIfCelebrateFXIsComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::CheckIfCelebrateFXIsComplete()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "CheckIfCelebrateFXIsComplete");

	Params::UItemInspectScreen_C_CheckIfCelebrateFXIsComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectRefundRayImage_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectRefundRayImage_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsCelebrateEffectPlaying_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_Passthrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_RecipeIndex_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_RecipeIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_ItemToEvolve                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_EvolutionIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetWindowTitleBarVisibility_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_Passthrough_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_MCPContextUpgradeItem*CallFunc_UpgradeItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_CustomEvent_ItemToRefund                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowRefundMessage_ShouldShowRefundMessage         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ShouldShowRefundMessage_RefundDescriptionText           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConfirmationDialogAction>CallFunc_GetRefundHelpActions_ConfirmActions                     (ZeroConstructor, ReferenceParm)
// class FName                        CallFunc_GetRefundHelpActions_DeclineAction                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowConfirmationDialog_NUI_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)

void UItemInspectScreen_C::ExecuteUbergraph_ItemInspectScreen(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UItemInspectRefundRayImage_C* CallFunc_Create_ReturnValue, class UItemInspectRefundRayImage_C* CallFunc_Create_ReturnValue_1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsCelebrateEffectPlaying_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool CallFunc_HandleBack_Passthrough, enum class EFortDialogResult Temp_byte_Variable_1, class UFortItem* K2Node_ComponentBoundEvent_Item_1, int32 K2Node_ComponentBoundEvent_RecipeIndex_1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName Temp_name_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool K2Node_Event_bUsingGamepad, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EFortDialogResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ResultName_1, class UFortItem* K2Node_ComponentBoundEvent_Item, int32 K2Node_ComponentBoundEvent_RecipeIndex, class UFortItem* K2Node_ComponentBoundEvent_ItemToEvolve, int32 K2Node_ComponentBoundEvent_EvolutionIndex, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility CallFunc_GetWindowTitleBarVisibility_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_HandleBack_Passthrough_1, class UFortAsyncAction_MCPContextUpgradeItem* CallFunc_UpgradeItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UFortMcpContext* CallFunc_GetContext_ReturnValue_3, class UFortAccountItem* K2Node_CustomEvent_ItemToRefund, bool CallFunc_ShouldShowRefundMessage_ShouldShowRefundMessage, class FText CallFunc_ShouldShowRefundMessage_RefundDescriptionText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UFortMcpContext* CallFunc_GetContext_ReturnValue_4, TArray<struct FConfirmationDialogAction>& CallFunc_GetRefundHelpActions_ConfirmActions, class FName CallFunc_GetRefundHelpActions_DeclineAction, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowConfirmationDialog_NUI_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_5, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_6, class UFortMcpContext* CallFunc_GetContext_ReturnValue_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ExecuteUbergraph_ItemInspectScreen");

	Params::UItemInspectScreen_C_ExecuteUbergraph_ItemInspectScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsCelebrateEffectPlaying_ReturnValue = CallFunc_IsCelebrateEffectPlaying_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_HandleBack_Passthrough = CallFunc_HandleBack_Passthrough;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_RecipeIndex_1 = K2Node_ComponentBoundEvent_RecipeIndex_1;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_GetCycleWidget_ReturnValue = CallFunc_GetCycleWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetCycleWidget_ReturnValue_1 = CallFunc_GetCycleWidget_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ResultName_1 = K2Node_CustomEvent_ResultName_1;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_RecipeIndex = K2Node_ComponentBoundEvent_RecipeIndex;
	Parms.K2Node_ComponentBoundEvent_ItemToEvolve = K2Node_ComponentBoundEvent_ItemToEvolve;
	Parms.K2Node_ComponentBoundEvent_EvolutionIndex = K2Node_ComponentBoundEvent_EvolutionIndex;
	Parms.CallFunc_GetCycleWidget_ReturnValue_2 = CallFunc_GetCycleWidget_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWindowTitleBarVisibility_ReturnValue = CallFunc_GetWindowTitleBarVisibility_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_HandleBack_Passthrough_1 = CallFunc_HandleBack_Passthrough_1;
	Parms.CallFunc_UpgradeItem_ReturnValue = CallFunc_UpgradeItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.K2Node_CustomEvent_ItemToRefund = K2Node_CustomEvent_ItemToRefund;
	Parms.CallFunc_ShouldShowRefundMessage_ShouldShowRefundMessage = CallFunc_ShouldShowRefundMessage_ShouldShowRefundMessage;
	Parms.CallFunc_ShouldShowRefundMessage_RefundDescriptionText = CallFunc_ShouldShowRefundMessage_RefundDescriptionText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetContext_ReturnValue_4 = CallFunc_GetContext_ReturnValue_4;
	Parms.CallFunc_GetRefundHelpActions_ConfirmActions = CallFunc_GetRefundHelpActions_ConfirmActions;
	Parms.CallFunc_GetRefundHelpActions_DeclineAction = CallFunc_GetRefundHelpActions_DeclineAction;
	Parms.CallFunc_ShowConfirmationDialog_NUI_ReturnValue = CallFunc_ShowConfirmationDialog_NUI_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetContext_ReturnValue_5 = CallFunc_GetContext_ReturnValue_5;
	Parms.CallFunc_GetContext_ReturnValue_6 = CallFunc_GetContext_ReturnValue_6;
	Parms.CallFunc_GetContext_ReturnValue_7 = CallFunc_GetContext_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
