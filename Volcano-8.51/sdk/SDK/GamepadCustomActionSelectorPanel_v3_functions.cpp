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


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleClear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadCustomActionSelectorPanel_v3_C::HandleClear(bool* PassThrough)
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "HandleClear");

	Params::UGamepadCustomActionSelectorPanel_v3_C_HandleClear_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CreateCustomListItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortInputActionGroup   InputActionGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGamepadKeyTextButton_C*     ReturnItem                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionName_Local                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortInputActionGroup   InputActionGroup_Local                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CustomPresetName_Local                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGamepadKeyTextButton_C*     ReturnItem_Local                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        CallFunc_GetScreenLabel_ReturnValue                              ()
// struct FKey                        CallFunc_GetKeyForAction_ReturnValue                             (HasGetValueTypeHash)
// class UGamepadKeyTextButton_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCustomGamepadInputPresetName_ReturnValue             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadCustomActionSelectorPanel_v3_C::CreateCustomListItem(class FName ActionName, enum class EFortInputActionGroup InputActionGroup, class UGamepadKeyTextButton_C** ReturnItem, class FName ActionName_Local, enum class EFortInputActionGroup InputActionGroup_Local, class FName CustomPresetName_Local, class UGamepadKeyTextButton_C* ReturnItem_Local, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_GetScreenLabel_ReturnValue, const struct FKey& CallFunc_GetKeyForAction_ReturnValue, class UGamepadKeyTextButton_C* CallFunc_Create_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, const class FString& CallFunc_GetCustomGamepadInputPresetName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "CreateCustomListItem");

	Params::UGamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem_Params Parms;

	Parms.ActionName = ActionName;
	Parms.InputActionGroup = InputActionGroup;
	Parms.ActionName_Local = ActionName_Local;
	Parms.InputActionGroup_Local = InputActionGroup_Local;
	Parms.CustomPresetName_Local = CustomPresetName_Local;
	Parms.ReturnItem_Local = ReturnItem_Local;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetScreenLabel_ReturnValue = CallFunc_GetScreenLabel_ReturnValue;
	Parms.CallFunc_GetKeyForAction_ReturnValue = CallFunc_GetKeyForAction_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_GetCustomGamepadInputPresetName_ReturnValue = CallFunc_GetCustomGamepadInputPresetName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnItem != nullptr)
		*ReturnItem = Parms.ReturnItem;

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadCustomActionSelectorPanel_v3_C::HandleBack(bool* PassThrough)
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "HandleBack");

	Params::UGamepadCustomActionSelectorPanel_v3_C_HandleBack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGamepadCustomActionSelectorPanel_v3_C::Construct()
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "Construct");

	Params::UGamepadCustomActionSelectorPanel_v3_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.UpdatePanel
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortOptionsMenuInputData*>InputData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamepadCustomActionSelectorPanel_v3_C::UpdatePanel(TArray<class UFortOptionsMenuInputData*>& InputData)
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "UpdatePanel");

	Params::UGamepadCustomActionSelectorPanel_v3_C_UpdatePanel_Params Parms;

	Parms.InputData = InputData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnItemClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadCustomActionSelectorPanel_v3_C::BP_OnItemClicked_Bind(class UObject* Item)
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "BP_OnItemClicked_Bind");

	Params::UGamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGamepadCustomActionSelectorPanel_v3_C::OnActivated()
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "OnActivated");

	Params::UGamepadCustomActionSelectorPanel_v3_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGamepadCustomActionSelectorPanel_v3_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "OnDeactivated");

	Params::UGamepadCustomActionSelectorPanel_v3_C_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGamepadCustomActionSelectorPanel_v3_C::BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UGamepadCustomActionSelectorPanel_v3_C_BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortOptionsMenuInputData*>K2Node_CustomEvent_InputData                                     (ConstParm, ZeroConstructor, ReferenceParm)
// class UObject*                     K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGamepadKeyTextButton_C*     K2Node_DynamicCast_AsGamepad_Key_Text_Button                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsMenuInputData*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndexForItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortInputActionGroup   CallFunc_GetInputActionGroup_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGamepadKeyTextButton_C*     CallFunc_CreateCustomListItem_ReturnItem                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UGamepadCustomActionSelectorPanel_v3_C::ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, TArray<class UFortOptionsMenuInputData*>& K2Node_CustomEvent_InputData, class UObject* K2Node_CustomEvent_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGamepadKeyTextButton_C* K2Node_DynamicCast_AsGamepad_Key_Text_Button, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortOptionsMenuInputData* CallFunc_Array_Get_Item, int32 CallFunc_GetIndexForItem_ReturnValue, enum class EFortInputActionGroup CallFunc_GetInputActionGroup_ReturnValue, class UGamepadKeyTextButton_C* CallFunc_CreateCustomListItem_ReturnItem, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3");

	Params::UGamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_InputData = K2Node_CustomEvent_InputData;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsGamepad_Key_Text_Button = K2Node_DynamicCast_AsGamepad_Key_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIndexForItem_ReturnValue = CallFunc_GetIndexForItem_ReturnValue;
	Parms.CallFunc_GetInputActionGroup_ReturnValue = CallFunc_GetInputActionGroup_ReturnValue;
	Parms.CallFunc_CreateCustomListItem_ReturnItem = CallFunc_CreateCustomListItem_ReturnItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClearButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadCustomActionSelectorPanel_v3_C::CustomClearButton__DelegateSignature()
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "CustomClearButton__DelegateSignature");

	Params::UGamepadCustomActionSelectorPanel_v3_C_CustomClearButton__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClosedUsingBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadCustomActionSelectorPanel_v3_C::CustomClosedUsingBack__DelegateSignature()
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "CustomClosedUsingBack__DelegateSignature");

	Params::UGamepadCustomActionSelectorPanel_v3_C_CustomClosedUsingBack__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomActionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadCustomActionSelectorPanel_v3_C::CustomActionSelected__DelegateSignature(int32 SelectedIndex, class FName ActionName)
{
	static auto Func = Class->GetFunction("GamepadCustomActionSelectorPanel_v3_C", "CustomActionSelected__DelegateSignature");

	Params::UGamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature_Params Parms;

	Parms.SelectedIndex = SelectedIndex;
	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
