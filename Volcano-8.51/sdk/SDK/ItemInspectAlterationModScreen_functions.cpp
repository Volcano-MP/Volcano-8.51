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


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.HasOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidAlterationSlot_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoAlterationOptionsExist_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoAlterationOptionsExist_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UItemInspectAlterationModScreen_C::HasOptions(bool CallFunc_IsValidAlterationSlot_ReturnValue, bool CallFunc_DoAlterationOptionsExist_ReturnValue, bool CallFunc_DoAlterationOptionsExist_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "HasOptions");

	Params::UItemInspectAlterationModScreen_C_HasOptions_Params Parms;

	Parms.CallFunc_IsValidAlterationSlot_ReturnValue = CallFunc_IsValidAlterationSlot_ReturnValue;
	Parms.CallFunc_DoAlterationOptionsExist_ReturnValue = CallFunc_DoAlterationOptionsExist_ReturnValue;
	Parms.CallFunc_DoAlterationOptionsExist_ReturnValue_1 = CallFunc_DoAlterationOptionsExist_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseIngredients
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair>Ingredients                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_AreIngredientRequirementsMent_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectAlterationModScreen_C::UpdatePurchaseIngredients(TArray<struct FFortItemQuantityPair>& Ingredients, bool CallFunc_AreIngredientRequirementsMent_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdatePurchaseIngredients");

	Params::UItemInspectAlterationModScreen_C_UpdatePurchaseIngredients_Params Parms;

	Parms.Ingredients = Ingredients;
	Parms.CallFunc_AreIngredientRequirementsMent_ReturnValue = CallFunc_AreIngredientRequirementsMent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateShowPurchaseOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasOptions_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::UpdateShowPurchaseOptions(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_HasOptions_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdateShowPurchaseOptions");

	Params::UItemInspectAlterationModScreen_C_UpdateShowPurchaseOptions_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasOptions_ReturnValue = CallFunc_HasOptions_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SelectedSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasOptions_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::UpdatePurchaseDetails(bool SelectedSlot, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_HasOptions_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdatePurchaseDetails");

	Params::UItemInspectAlterationModScreen_C_UpdatePurchaseDetails_Params Parms;

	Parms.SelectedSlot = SelectedSlot;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_HasOptions_ReturnValue = CallFunc_HasOptions_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectAlterationModScreen_C::UpdatePurchaseButtons(bool Enabled)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdatePurchaseButtons");

	Params::UItemInspectAlterationModScreen_C_UpdatePurchaseButtons_Params Parms;

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()

void UItemInspectAlterationModScreen_C::UpdateColors(enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdateColors");

	Params::UItemInspectAlterationModScreen_C_UpdateColors_Params Parms;

	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupTriangles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::SetupTriangles(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "SetupTriangles");

	Params::UItemInspectAlterationModScreen_C_SetupTriangles_Params Parms;

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupHeaderColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::SetupHeaderColors(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "SetupHeaderColors");

	Params::UItemInspectAlterationModScreen_C_SetupHeaderColors_Params Parms;

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.DialogResult_AB7FE45A4C61900417D8EAB93574F424
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::DialogResult_AB7FE45A4C61900417D8EAB93574F424(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "DialogResult_AB7FE45A4C61900417D8EAB93574F424");

	Params::UItemInspectAlterationModScreen_C_DialogResult_AB7FE45A4C61900417D8EAB93574F424_Params Parms;

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationModificationCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModScreen_C::OnAlterationModificationCompleted()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "OnAlterationModificationCompleted");

	Params::UItemInspectAlterationModScreen_C_OnAlterationModificationCompleted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.RefreshItemAndAlterationsBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModScreen_C::RefreshItemAndAlterationsBP()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "RefreshItemAndAlterationsBP");

	Params::UItemInspectAlterationModScreen_C_RefreshItemAndAlterationsBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "OnActivated");

	Params::UItemInspectAlterationModScreen_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::BndEvt__DetailsButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "BndEvt__DetailsButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectAlterationModScreen_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "Construct");

	Params::UItemInspectAlterationModScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectAlterationModScreen_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectAlterationModScreen_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnItemSlotChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               SelectedSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectAlterationModScreen_C::OnItemSlotChanged(bool SelectedSlot)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "OnItemSlotChanged");

	Params::UItemInspectAlterationModScreen_C_OnItemSlotChanged_Params Parms;

	Parms.SelectedSlot = SelectedSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationOptionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationOption*       CurrentAlterationOption                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::OnAlterationOptionChanged(class UFortAlterationOption* CurrentAlterationOption)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "OnAlterationOptionChanged");

	Params::UItemInspectAlterationModScreen_C_OnAlterationOptionChanged_Params Parms;

	Parms.CurrentAlterationOption = CurrentAlterationOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.ExecuteUbergraph_ItemInspectAlterationModScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRefundable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectRefundRayImage_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemWindow_C*               CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItemDefinition*> CallFunc_GetItemDefinitions_ReturnValue                          (ZeroConstructor, ReferenceParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_SelectedSlot                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationOption*       K2Node_Event_CurrentAlterationOption                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>CallFunc_GetRequiredIngredients_ReturnValue                      (ZeroConstructor, ReferenceParm)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAlterationOptionsWidget_C*  K2Node_DynamicCast_AsAlteration_Options_Widget                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectAlterationModScreen_C::ExecuteUbergraph_ItemInspectAlterationModScreen(int32 EntryPoint, class FName Temp_name_Variable, bool CallFunc_IsRefundable_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class UItemInspectRefundRayImage_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemWindow_C* CallFunc_Create_ReturnValue_1, TArray<class UFortItemDefinition*>& CallFunc_GetItemDefinitions_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_SelectedSlot, class UFortAlterationOption* K2Node_Event_CurrentAlterationOption, TArray<struct FFortItemQuantityPair>& CallFunc_GetRequiredIngredients_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UAlterationOptionsWidget_C* K2Node_DynamicCast_AsAlteration_Options_Widget, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "ExecuteUbergraph_ItemInspectAlterationModScreen");

	Params::UItemInspectAlterationModScreen_C_ExecuteUbergraph_ItemInspectAlterationModScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_IsRefundable_ReturnValue = CallFunc_IsRefundable_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetItemDefinitions_ReturnValue = CallFunc_GetItemDefinitions_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_SelectedSlot = K2Node_Event_SelectedSlot;
	Parms.K2Node_Event_CurrentAlterationOption = K2Node_Event_CurrentAlterationOption;
	Parms.CallFunc_GetRequiredIngredients_ReturnValue = CallFunc_GetRequiredIngredients_ReturnValue;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_DynamicCast_AsAlteration_Options_Widget = K2Node_DynamicCast_AsAlteration_Options_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
